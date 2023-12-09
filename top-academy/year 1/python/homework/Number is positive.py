#Задание 1

z1_num = int(input('Введите число: '))

if z1_num > 0:
    print("Number is positive")

if z1_num < 0:
    print("Number is negative")

if z1_num == 0:
    print("Number is equal to zero")

#Задание 2

z2_num1 = int(input('Введите первое число: '))
z2_num2 = int(input('Введите второе число: '))

if z2_num1 == z2_num2:
    print("Эти числа равны")

else:
    if z2_num1 > z2_num2:
        print(z2_num1, z2_num2)

    if z2_num1 < z2_num2:
        print(z2_num2, z2_num1)
    
input("Нажмите enter что-бы выйти")
