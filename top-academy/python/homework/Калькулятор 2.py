'''number = input('Введите число: ')

if '+' in number:
    a, b = number.split('+')  # split разделяет s на a и b если между ними есть знак +
    print(int(a) + int(b))

if '-' in number:
    a, b = number.split('-')  # split разделяет s на a и b если между ними есть знак +
    print(int(a) - int(b))

if '*' in number:
    a, b = number.split('*')  # split разделяет s на a и b если между ними есть знак +
    print(int(a) * int(b))

if '/' in number:
    a, b = number.split('/')  # split разделяет s на a и b если между ними есть знак +
    print(int(a) / int(b))
'''
# Задание 2

import random

num = []
numMax = 0
numMin = 0
numZero = 0
symbolZero = '0'

for i in range(5):
    num.append(random.randint(-10, 10))

for i in range(0, 5):
    if num[i] > 0:
        numMax += 1
    if num[i] < 0:
        numMax += 1
    if num[i] == 0:
        numMax += 1

print('Число больше 0:', numMax)
print('Число меньше 0:', numMin)
print('Число равно 0:', numZero)
