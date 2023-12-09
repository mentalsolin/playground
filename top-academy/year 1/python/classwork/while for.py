Ex1_num1 = int(input("Введите первое число: "))
Ex1_num2 = int(input("Введите второе число: "))

if Ex1_num1>Ex1_num2:
    Ex1_temp = Ex1_num1
    Ex1_num1 = Ex1_num2
    Ex1_num2 = Ex1_temp

for Ex1_num1 in range(Ex1_num2, Ex1_num1 - 1, - 1):
    print(Ex1_num1)

Ex5_num1 = int(input("Введите первое число: "))
Ex5_num2 = int(input("Введите второе число: "))

if Ex5_num1>Ex5_num2:
    Ex5_temp = Ex5_num1
    Ex5_num1 = Ex5_num2
    Ex5_num2 = Ex5_temp
for Ex5_num1 in range(Ex5_num1, Ex5_num2):
    if (Ex5_num1 % 2 != 0):
        print(Ex5_num1)


Ex6_var = 1
print(Ex6_var != 1 and Ex6_var > 0)
print(Ex6_var == 1 and Ex6_var < 0)
print(Ex6_var < 2 or Ex6_var > -2)
print(Ex6_var > 1 or Ex6_var >= 3)

Ex1_num1 = int(input("Введите первое число: "))
Ex1_num2 = int(input("Введите второе число: "))
Ex1_sum = 0
Ex1_counter = 0

for Ex1_range in range(Ex1_num1, Ex1_num2+1):
    Ex1_counter = Ex1_counter + 1
    Ex1_sum = Ex1_sum + 1
print("Сумма =", Ex1_sum)
print("Среднее арифметическое =", Ex1_sum / Ex1_counter)

Ex2_n = int(input("Введите число: "))
Ex2_factoral = 1
for Ex2_i in range(1, Ex2_n + 1):
    Ex2_factoral = Ex2_factoral * Ex2_i
print(Ex2_factoral)

Ex3_num1 = int(input("Введите длину линии: "))
Ex3_simbol = str(input("Введите любой символ : "))
print(Ex3_simbol * Ex3_num1)

Ex3_num1 = int(input("Введите длину линии: "))
Ex3_simbol = str(input("Введите любой символ: "))
for Ex3_num1 in range(Ex3_num1):
    print(Ex3_simbol)


































