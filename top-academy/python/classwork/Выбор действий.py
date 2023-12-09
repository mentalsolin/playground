#Задание 1

print("Введите число")
a = int(input())

if a % 2 == 0:
    print(a,"Even")
else:
    print(a,"Odd number")

#Задание 2

print("Введите число")

b = int(input())

if b % 7 == 0:
    print("Number is")
else:
    print("Number is not multiple 7")

#Задание 3

print("Введите певрое число")
num1 = int(input())

print("Введите второе число")
num2 = int(input())

if num1 > num2:
    print(num1)
else:
    print(num2)

#Задание 4

print("Введите певрое число")
num1 = int(input())

print("Введите второе число")
num2 = int(input())

if num1 < num2:
    print(num1)
else:
    print(num2)

#Задание 5

print("Введите певрое число")
a_1 = int(input())

print("Введите второе число")
a_2 = int(input())

print("Выберете что сделать +, -, Среднее арифметическое")
what = input()

if what == "+":
    c_2 = a_1 + a_2
    print("Результат:",c_2)
elif what == "-":
    c_2 = a_1 - a_2
    print("Результат:",c_2)

elif what == "Среднее арифметическое":
    x = a_1 + a_2
    print("Среднее арифметическое:",x / 2)

#Задание 6

print("Введите певрое число")
z6_num1 = int(input())

print("Введите второе число")
z6_num2 = int(input())

print("Введите третье число")
z6_num3 = int(input())

print("Выберете что сделать + или *")
z6_what = input()

if z6_what == "+":
    z6_sum = z6_num1 + z6_num1 + z6_num1
    print("Результат:",z6_sum)
elif z6_what == "*":
    z6_sum = z6_num1 * z6_num1 * z6_num1
    print("Результат:",z6_sum)

#Задание 7

print("Введите певрое число")
z7_num1 = int(input())

print("Введите второе число")
z7_num2 = int(input())

print("Введите третье число")
z7_num3 = int(input())

print("1 - Среднее арифметическое \nВыберете что сделать >, <, 1")
z7_what = input()

if z7_what == ">":
    if z7_num1<z7_num2<z7_num3:
        print("Большее из чисел:", z7_num3)

    elif z7_num1<z7_num2>z7_num3:
        print("Большее из чисел:", z7_num2)

    elif z7_num1>z7_num2>z7_num3:
        print("Большее из чисел:", z7_num1)

if z7_what == "<":
    if z7_num1<z7_num2<z7_num3:
        print("Большее из чисел:", z7_num1)

    elif z7_num2<z7_num1<z7_num3:
        print("Большее из чисел:", z7_num2)

    elif z7_num1<z7_num2<z7_num3:
        print("Большее из чисел:", z7_num3)

if z7_what == "1":
    z7_a = (z7_num1 + z7_num2 + z7_num3)
    print("Среднее арифметическое:",z7_a / 3)
#Задание 8

print("Введите колличество метров")
z8_meters = int(input())

z8_miles = z8_meters / 1609

z8_inch = z8_meters * 39.37

z8_yard = z8_meters * 1.094

print(z8_meters, "Метров", "это:", round(z8_miles,5), "Миль |", round(z8_inch,5), "Дюймов |", round(z8_yard,5), "Ярдов")