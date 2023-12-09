# Задание 1
inputUserFirst = int(input("Задание 1\nВведите первое число: "))
inputUserSecond = int(input("Введите второе число: "))

numberEven = 0
numberUneven = 0
numberEvenNine = 0
counterEven = 0
counterUneven = 0
counterEvenNine = 0

for forRange in range(inputUserFirst, inputUserSecond + 1):
    if forRange % 2 == 0:
        numberEven += forRange
        counterEven += 1
    if forRange % 2 != 0:
        numberUneven += forRange
        counterUneven += 1
    if forRange % 9 == 0:
        numberEvenNine += forRange
        counterEvenNine += 1

print("Сумма четных чисел:", numberEven, "Среднее арифметическое", numberEven / counterEven)
print("Сумма четных чисел:", numberUneven, "Среднее арифметическое", numberUneven / counterUneven)
print("Сумма четных чисел:", numberEvenNine, "Среднее арифметическое", numberEvenNine / counterEvenNine)

# Задание 2
inputUserLengthLine = int(input("\nЗадание 2\nВведите длинну линии: "))
inputUserSymbolLine = str(input("Задайте символ для линии: "))

for inputUserVerticalLine in range(inputUserLengthLine):
    print(inputUserSymbolLine)

# Задание 3
print("\nЗадание 3")

whileExit = 0

while whileExit != 7:
    inputUserNumbers = int(input("Вводите числа: "))
    if inputUserNumbers == 7:
        print("Good bye!")
        whileExit = 7
        break
    if inputUserNumbers > 0:
        print("Number is positive")
    if inputUserNumbers < 0:
        print("Number is negative")
    if inputUserNumbers == 0:
        print("Number is equal to zero")

# Задание 4
print("\nЗадание 4")

whileExit = 0
numbersSum = 0
numbersMax = 0
numbersMin = 999 ** 999

while whileExit != 7:
    inputUserNumbers = int(input("Введите числа: "))
    if inputUserNumbers == 7:
        print("Good bye!")
        whileExit = 7
        break
    if inputUserNumbers > numbersMax:
        numbersMax = inputUserNumbers
    if inputUserNumbers < numbersMin:
        numbersMin = inputUserNumbers
    numbersSum += inputUserNumbers

print("Минимальное введенное число:", numbersMin)
print("Максимальное введенное число:", numbersMax)
print("Сумма всех введенных чисел", numbersSum)

input()