'''mas=[]
a = input("Введите искомый символ: ")
for i in range (1, 6):
    b=input("Введите символ: ")
    mas.append(b)
print(mas.count(a))
print(mas)


a = 0
mas=[]
for i in range (1, 4):
    b=input("Число: ")
    mas.append(b)
a = int(mas[0])+int(mas[1])+int(mas[2])

print("Сумма: ", a)
print("Среднее арифметическое: ", round(a / 3))
'''

'''import random

numMax = 0
numMin = 999**999
a = []
b = 0

for i in range(4):
    b = round(random.uniform(0, 9))
    a.append(b)

print(a)


while True:

    if(a[0] > numMax):
        numMin = a[0]
    if(a[0] < numMin):
        numMax = a[10]

    if(a[1] > numMax):
        numMin = a[1]
    if(a[1] < numMin):
        numMax = a[1]

    if(a[2] > numMax):
        numMin = a[2]
    if(a[2] < numMin):
        numMax = a[2]

    if(a[3] > numMax):
        numMin = a[3]
    if(a[3] < numMin):
        numMax = a[3]
        
    break
print("Max:", numMax)
print("Min:", numMin)

'''

text = ['1', '8', '-3', '3', '3', '-2', '0', '6', '7', '-4', '9', '9', '9', '0']
symbolZero = '0'
symbolComma = '1', '2', '3', '4', '5', '6', '7', '8', '9'
symbol = '-1' or '-2' or '-3' '-4', '-5', '-6', '-7', '-8', '-9'
counter = 0

nummax = min(text) #min находит минимальное число
nummin = max(text) #min находит максимальное число

print('Цифр:', text.count(symbolComma) + text.count(symbol))
print('Нулей:', text.count(symbolZero))
print('Отрицательных чисел:', text.count(symbol), '| Положительных чисел чисел:', text.count(symbolComma))
print('Максимлаьное число: ', nummax, '| Минимальное число: ', nummin)


