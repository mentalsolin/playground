// Задание
// Вам необходимо самостоятельно решить, для какого задания
// какой цикл лучше использовать: WHILE, DO WHILE или FOR.
// 

// 
// 

function t1() {
    alert('1. Подсчитать сумму всех чисел в заданном пользователем диапазоне.')

    let start = prompt("Start");
    let end = prompt("End");
    let summma = 0;
    for(let i = Number(start); i < Number(end); i++) {
        summma += i;
    }
    alert(summma)
}

function t2() {
    alert('2. Запросить 2 числа и найти только наибольший общий делитель.')

    let a = prompt("First");
    let b = prompt("Second");

    let gcd;
    while (a!=b) {
      if (a>b) {
        a = a -b;
      }
      else {
        b = b - a;
      }
    }
    gcd = a;
    alert("Output: "+gcd)
}

function t3() {
    alert('3. Запросить у пользователя число и вывести все делители этого числа.')

    let num = prompt("Enter number");
    let isDivided = [];

    for (let i = 0; i<=num; i++) {
        if (num % i === 0) {
            isDivided.push(i)
        }
    }
    alert(isDivided.toString())
}

function t4() {
    alert('4. Определить количество цифр в введенном числе.')

    let num = prompt("Enter string like (MKEW324#$#3434defrsf5,lEAW4)")
    let mas = []
    mas = num.split('')
    let masLen = []
    for (let i = 0; i < mas.length; i++) {
        if (!isNaN(mas[i] - parseFloat(mas[i]))) {
            masLen.push(mas[i])
        }
    }
    alert(masLen.length)
}

function t5() {
alert('5. Запросить у пользователя 10 чисел и подсчитать, сколько он ввел положительных, отрицательных и нулей. При этом также посчитать, сколько четных и нечетных. Вывести статистику на экран. Учтите, что достаточно одной переменной (не 10) для ввода чисел пользователем.')

    let str = prompt("Enter 10 number, separate by space (Example: 1 -505 2 0 3 -45 444")
    let arr = str.split(' ')

    let positive = [];
    let zero = [];
    let negative = [];

    let even = [];
    let odd = [];

    for (let i = 0; i < arr.length; i++) {
        if (!isNaN(arr[i] - parseFloat(arr[i]))) {
            if (arr[i] > 0) {
                positive.push(arr[i]) 
            } if (arr[i] == 0) {
                zero.push(arr[i]) 
            } if (arr[i] < 0) {
                negative.push(arr[i]) 
            }
        }
    }

    for (let i = 0; i < arr.length; i++) {
        if (!isNaN(arr[i] - parseFloat(arr[i]))) {
            if (arr[i] % 2 === 0) {
                odd.push(arr[i])
            } else {
                even.push(arr[i])
            }
        }
    }
    alert('positive: ' + positive.length + '; zero: ' + zero.length + '; negative: ' + negative.length + '; even: ' + even.length + '; odd: ' + odd.length)
}