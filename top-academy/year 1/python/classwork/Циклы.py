"""
inputNumOne = int(input("Введите первое число: "))
inputNumTwo = int(input("Введите второе число: "))

countNotch = 0
countch = 0

numSumch = 0
numSumNotch = 0

sum9 = 0
count9 = 0

for i in range(inputNumOne, inputNumTwo):
    if (i % 2 != 0):
        numSumNotch += i
        countNotch += 1

    elif (i % 2 == 0):
        numSumch += i
        countch += 1

    if(i % 9 == 0):
        sum9 += i
        count9 += 1

if (countNotch == 0):
    print("Нет четных чисел")
else:
    print("Сумма четных чисел", numSumch)
    print("Ср. Арифметическое четных чисел", numSumch/countNotch)

if (countch == 0):
    print("Нет четных чисел")
else:
    print("Сумма нечетных чисел", numSumNotch)
    print("Ср. Арифметическое нечетных чисел", numSumNotch/countNotch)

if (count9 == 0):
    print("Нет кратные девяти")
else:
    print("Сумма четных чисел 9", sum9)
    print("Ср. Арифметическое четных чисел 9", sum9/count9)

summa = 0
num3 = 0
numMax = 0
numMin = -1

while (num3 != 7):


    num3 = int(input("Введите число: "))
    summa = summa + num3
    if(num3==7):
        break
    if(num3 > numMin):
        numMin = num3
    if(num3 < numMax):
        numMax = num3

print("Сумма:", summa)
print("Max:", numMax)
print("Min:", numMin)
print("Good Bye!")

numumn = int(input("Введите на что умножать: "))
counter = 0
rangeumn = int(input("Range: "))

for i in range(1, rangeumn + 1):
    counter += 1
    print(numumn, "*", counter, "=", numumn * counter)




while True:
    valut = int(input("Вверите рубли: "))
    summa = int(input("1 - RUB - PLN\n2 - RUB - USD\n3 - RUB - EUR\nВведите в какую валюту конвертировать: "))

    if summa == 1:
        print(valut, "Рублей это", round(valut / 18.22, 2), "Польских злотых")
    if summa == 2:
        print(valut, "Рублей это", round(valut / 73.75, 2), "Долларов")
    if summa == 3:
        print(valut, "Рублей это", round(valut / 83.4, 2), "Евро")
"""

a = 0
whileExit = 0

while whileExit != 1:
    if a == 1:
        border1 = int(input("\nВведите первую границу диапозона: "))
    else:
        border1 = int(input("Введите первую границу диапозона: "))
    border2 = int(input("Введите вторую границу диапозона: "))
    number = int(input("Введите число: "))

    if border1 - 1 < number < border2 + 1:

        for i in range(border1, border2 + 1):

            if i != number:
                print(str(i), end=" ")

            if i == number:
                print(str("!") + str(i) + (str("!")), end=" ")
                a = 1
    else:
        print("Неверное значение")
        a = 0
