const lowerCase = "rzlcgbyahvjoxpumtnkfqeidsw";
const upperCase = "DJKUGTZBIONYQCALESRMWFXPVH";
const numbers = "0123456789";
const special = "?`$=&()#@>~.}/{<;*\"_[]:^\\,+|-!'%";
const ascii = "ÉÅÑõ¥üð¯¿íú²ÐÊÄ¨¬×°ÖÀÒûÕ¡µÞ´èÁ®ý·Ýîôâåã÷»ÜßóáÍ§þïøàØÂ¤ñëÛÚ½ä¸Ã±ùÆ¹ËÈÌ£ÎÔ¼æªºÓ©ò«¦ç³ÇÏé¢¾öìÙÿ¶ê";

let len = document.getElementById('length');
let lenBox = document.getElementById('lengthBox');
const buttonRecreate = document.getElementById('recreate')

lenBox.value = 20;

let passLen = 20;

len.addEventListener('input', function(event) {
    lenBox.value = len.value;
    passLen = len.value;
    createPassword();
});

lenBox.addEventListener('input', function(event) {
    len.value = lenBox.value;
    passLen = lenBox.value;
    createPassword();
});

let passwordField = document.getElementById('passwordField');

const checkboxes = document.querySelectorAll('.characters__item--check');

let chars = [];

const buttonToggleIcon = document.getElementById('toggleIcon')

function toggle() {
    if (passwordField.getAttribute("type") !== "password") {
        passwordField.setAttribute("type", "password");
        buttonToggleIcon.src = './assets/show.svg';
        
    } else {
        buttonToggleIcon.src = './assets/hide.svg';
        passwordField.setAttribute("type", "text");
    }
}

const buttonClipboardIcon = document.getElementById('clipboardIcon')

let timer;

function addToClipboard() {
    let clip = passwordField

    clip.select();
    clip.setSelectionRange(0, 99999);
  
    navigator.clipboard.writeText(clip.value);

    clearTimeout(timer);
    
    buttonClipboardIcon.src = './assets/clipboard-done.svg'
    
    timer = setTimeout(function() {
        buttonClipboardIcon.src = './assets/clipboard.svg'
    }, 5000);
}

entropyScoreBox = document.getElementById('entropyScore')
entropyBar = document.getElementById('entropyBar')

function calculateEntropy(str) {
    const charCount = {};
    const strLength = str.length;

    // Подсчет количества каждого символа в строке
    for (let i = 0; i < strLength; i++) {
        const char = str[i];
        charCount[char] = (charCount[char] || 0) + 1;
    }

    // Рассчет энтропии по формуле Шеннона
    let entropy = 0;
    for (const char in charCount) {
        const probability = charCount[char] / strLength;
        entropy -= probability * (Math.log2(probability) || 0);
    }



    entropyScoreBox.innerText = `Entropy: ${entropy.toFixed(2)} bit`

    const scaledValue = (entropy - 0) / (6 - 0) * (100 - 0) + 0;
    entropyBar.style.width = `${scaledValue}%`;

    if (entropy < 2.7) {
        entropyQuality.innerText = `Password Quility: Poor`
        entropyBar.style.backgroundColor = `var(--quality-poor)`;
    }
    if (entropy >= 2.7) {
        entropyQuality.innerText = `Password Quility: Weak`
        entropyBar.style.backgroundColor = `var(--quality-weak)`;
    }
    if (entropy >= 3.5) {
        entropyQuality.innerText = `Password Quility: Good`
        entropyBar.style.backgroundColor = `var(--quality-good)`;
    }
    if (entropy >= 3.7) {
        entropyQuality.innerText = `Password Quility: Excellent`
        entropyBar.style.backgroundColor = `var(--quality-excellent)`;
    }








}

passwordField.addEventListener('input', function(event) {
    calculateEntropy(passwordField.value)
});



document.addEventListener('DOMContentLoaded', function() {
    let len = document.getElementById('length');
    let lenBox = document.getElementById('lengthBox');

    lenBox.value = 20;

    let passLen = 20;

    len.addEventListener('input', function(event) {
        lenBox.value = len.value;
        passLen = len.value;
        createPassword();
    });

    lenBox.addEventListener('input', function(event) {
        len.value = lenBox.value;
        passLen = lenBox.value;
        createPassword();
    });

    let passwordField = document.getElementById('passwordField');

    const checkboxes = document.querySelectorAll('.characters__item--check');

    let chars = [];

    checkboxes.forEach(checkbox => {
        checkbox.addEventListener('change', function() {
            if (this.checked) {
                chars.push(this.id);
            } else {
                chars = chars.filter(id => id !== this.id);
            }
            createPassword();
        });

        if (checkbox.checked) {
            chars.push(checkbox.id);
        }
    });

    window.createPassword = function() {
        let allChars = [];

        if (chars.includes('upperCaseCheck')) {
            allChars.push(upperCase);
        }
        if (chars.includes('lowerCaseCheck')) {
            allChars.push(lowerCase);
        }
        if (chars.includes('numbersCheck')) {
            allChars.push(numbers);
        }
        if (chars.includes('specialCheck')) {
            allChars.push(special);
        }
        if (chars.includes('asciiCheck')) {
            allChars.push(ascii);
        }

        if (allChars.length !== 0) {
            let password = '';

            allChars = allChars.join('');
    
            while (passLen > password.length) {
                password += allChars[Math.floor(Math.random() * allChars.length)];
            }
            
            passwordField.value = password;
            buttonRecreate.classList.remove('disabled')
            buttonRecreate.disabled = false;
        }
        else {
            buttonRecreate.disabled = true;
            buttonRecreate.classList.add('disabled')
        }
        calculateEntropy(passwordField.value)
    };
    createPassword();
});