var lowerCase = "rzlcgbyahvjoxpumtnkfqeidsw";
var upperCase = "DJKUGTZBIONYQCALESRMWFXPVH";
var numbers = "0123456789";
var special = "?`$=&()#@>~.}/{<;*\"_[]:^\\,+|-!'%";
var ascii = "ÉÅÑõ¥üð¯¿íú²ÐÊÄ¨¬×°ÖÀÒûÕ¡µÞ´èÁ®ý·Ýîôâåã÷»ÜßóáÍ§þïøàØÂ¤ñëÛÚ½ä¸Ã±ùÆ¹ËÈÌ£ÎÔ¼æªºÓ©ò«¦ç³ÇÏé¢¾öìÙÿ¶ê";

var len = document.getElementById('length');
var lenBox = document.getElementById('lengthBox');
var buttonRecreate = document.getElementById('recreate')
var passwordField = document.getElementById('passwordField'); // Дефайнит инпут с паролем
var buttonToggleIcon = document.getElementById('toggleIcon'); // Дефайнит кнопку показать/скрыть пароль

function toggle() { // Функция показать/скрыть пароль. Вызывается через onclick() в DOM-дереве
    if (passwordField.getAttribute("type") !== "password") {
        passwordField.setAttribute("type", "password"); // Прячет пароль
        buttonToggleIcon.src = './assets/hide.svg';
    } else {
        passwordField.setAttribute("type", "text"); // Показывает пароль
        buttonToggleIcon.src = './assets/show.svg';
    }
}

var timer; // Переменная для таймера

var buttonClipboardIcon = document.getElementById('clipboardIcon') // Дефайнит кнопку скопировать пароль

function addToClipboard() { // Функция скорипровать пароль. Вызывается через onclick() в DOM-дереве
    var clip = passwordField

    clip.select(); // Выделяет текст в инпуте
    clip.setSelectionRange(0, 99999); // Фикс для мобилок
  
    navigator.clipboard.writeText(clip.value); // Копирует в буфер обмена текущий пароль в инпуте

    clearTimeout(timer); // Очистка таймера
    
    buttonClipboardIcon.src = './assets/clipboard-done.svg'
    
    timer = setTimeout(function() { // Функция таймера на 5 секунд
        buttonClipboardIcon.src = './assets/clipboard.svg'
    }, 5000);
}

entropyScoreBox = document.getElementById('entropyScore') // Дефайнит див с энтропией
entropyBar = document.getElementById('entropyBar') // Дефайнит див с полоской энтропии

function calculateEntropy(str) { // Функция подсчета энтропии пароля по формуле Шеннона
    var charCount = {};
    var strLength = str.length;

    for (var i = 0; i < strLength; i++) { // Подсчет количества каждого символа в строке
        var char = str[i];
        charCount[char] = (charCount[char] || 0) + 1;
    }

    var entropy = 0;
    for (var char in charCount) { // Рассчет энтропии по формуле Шеннона
        var probability = charCount[char] / strLength;
        entropy -= probability * (Math.log2(probability) || 0);
    }

    entropyScoreBox.innerText = `Энтропия: ${entropy.toFixed(2)} bit` // Выводит текущее значение энтропии в DOM-дереве

    var scaledValue = (entropy - 0) / (6 - 0) * (100 - 0) + 0; // Минимум 0, максимум 6 (0% - 100%)
    entropyBar.style.width = `${scaledValue}%`; // Меняет стиль ширины шкалы энтропии

    if (entropy < 1) {
        entropyQuality.innerText = `Надежность пароля: плохой`
    } if (entropy >= 1) {
        entropyQuality.innerText = `Надежность пароля: неплохой`
        entropyBar.style.backgroundColor = `var(--quality-poor)`;
    } if (entropy >= 2.7) {
        entropyQuality.innerText = `Надежность пароля: слабый`
        entropyBar.style.backgroundColor = `var(--quality-weak)`;
    } if (entropy >= 3.5) {
        entropyQuality.innerText = `Надежность пароля: хороший`
        entropyBar.style.backgroundColor = `var(--quality-good)`;
    } if (entropy >= 3.7) {
        entropyQuality.innerText = `Надежность пароля: отличный`
        entropyBar.style.backgroundColor = `var(--quality-excellent)`;
    }
}

passwordField.addEventListener('input', function(event) { // Расчитывает энтропию если пользователь вводит что то в инпут
    calculateEntropy(passwordField.value);
});

var len = document.getElementById('length'); // Дефайнит ползунок
var lenBox = document.getElementById('lengthBox'); // Дефайнит бокс с заданной пользователем длиной пароля

lenBox.value = 20; // Дефолтное значение в боксе с длиной пароля
var passLen = 20; // Дефолтная длина пароля

len.addEventListener('input', function(event) { // Проверка ввел ли что то пользователь в инпут с паролем
    lenBox.value = len.value;
    passLen = len.value;
    createPassword();
});

lenBox.addEventListener('input', function(event) { // Проверка ввел ли что то пользователь в бокс с длиной пароля
    len.value = lenBox.value;
    passLen = lenBox.value;
    createPassword();
});

var checkboxes = document.querySelectorAll('.characters__item--check'); // Дефайнит чекбоксы
var chars = []; // Создает переменную для символов в пароле

checkboxes.forEach(checkbox => { // Ищет какие символы выбрал пользователь
    checkbox.addEventListener('change', function() { // Если пользователь нажал на какой-то чекбокс
        if (this.checked) {
            chars.push(this.id); // Пушит в массив с символами если нашел
        } else {
            chars = chars.filter(id => id !== this.id); // Удаляет из массива если не зачекан
        }
        createPassword();
    });

    if (checkbox.checked) { // Проверка начального состояния чекбокса
        chars.push(checkbox.id);
    }
});

function createPassword() { // Функция создания пароля
    var allChars = [];

    if (chars.includes('upperCaseCheck')) {
        allChars.push(upperCase);
    } if (chars.includes('lowerCaseCheck')) {
        allChars.push(lowerCase);
    } if (chars.includes('numbersCheck')) {
        allChars.push(numbers);
    } if (chars.includes('specialCheck')) {
        allChars.push(special);
    } if (chars.includes('asciiCheck')) {
        allChars.push(ascii);
    } if (allChars.length !== 0) {
        var password = ''; // Переменная для пароля

        allChars = allChars.join(''); // Все символы в пароле

        while (passLen > password.length) { // Добавляет по чару в переменную с паролем пока он не будет нужно длины
            password += allChars[Math.floor(Math.random() * allChars.length)];
        }
        
        passwordField.value = password;
        buttonRecreate.classList.remove('disabled') // Разблокирует
        buttonRecreate.disabled = false; // Разблокирует
    } else {
        buttonRecreate.disabled = true; // Блочит кнопку пересоздать пароль
        buttonRecreate.classList.add('disabled') // Блочит кнопку с пересозданием пароля, если не зачекан ни один чекбокс
    }
    calculateEntropy(passwordField.value) // Считает энтропию
};
createPassword();