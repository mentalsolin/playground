counterNum = 0

# Задание 1
inputNumStart = int(input("Задание 1\nВведите начало диапозона: "))
inputNumEnd = int(input("Введите Конец диапозона: "))
for rangeNum in range(inputNumStart, inputNumEnd+1):

    num1 = rangeNum // 100
    num2 = rangeNum // 10 % 10
    num3 = rangeNum % 10

    if num1 == num2 or num1 == num3 or num2 == num3:
        counterNum += 1
    
print(inputNumEnd - inputNumStart)
print(counterNum)

# Задание 2
counterNum = 0
inputNumStart = int(input("Задание 2\nВведите начало диапозона: "))
inputNumEnd = int(input("Введите начало диапозона: "))

for rangeNum in range(inputNumStart, inputNumEnd+1):

    num1 = rangeNum %10
    num2 = rangeNum % 100 // 10
    num3 = rangeNum  % 100 // 100
    num4 = rangeNum // 1000

    if(num1!=num2 and num1!=num3 and num1!=num4 and num2!=num3 and num2!=num4 and num3!=num4):
        if(num1!=num2 and num1!=num2 and num2!= num3):
            counterNum+=1      
print(counterNum)

# Задание 4
inputNumOne = int(input("Задание 4\nВведите первое число: "))
inputNumTwo = int(input("Введите Второе число: "))

for rangeNum in range(inputNumOne, inputNumTwo + 1):

    num1 = rangeNum // 10 % 10
    num2 = rangeNum % 10

    if num1 != 3 and num2 != 3:
        print(rangeNum)

# Задание 5
inputNum = int(input("Задание 5\nВведите число: "))

num1 = inputNum // 100
num2 = inputNum // 10 % 10
num3 = inputNum % 10

if num1!=3 and num1!=6 and num2!=3 and num2!=6 and num3!=3 and num3!=6:
    print(inputNum)
    
# Задание 6  
inputNumEnd = int(input("Задание 6\nВведите конец диапозона: "))
for rangeNum in range(100, inputNumEnd + 1):
    num1 = rangeNum // 100
    num2 = rangeNum // 10 % 10
    num3 = rangeNum % 10
    if num1!=3 and num1!=6 and num2!=3 and num2!=6 and num3!=3 and num3!=6:
        print(rangeNum)



