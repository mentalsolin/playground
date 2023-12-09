# Задание 1
Ex1_range_start = int(input("Задание 1\nВведите первое число диапазона --> "))
Ex1_range_stop = int(input("Введите второе число диапазона --> "))
if Ex1_range_start < Ex1_range_stop:
    for Ex1_range_output in range(Ex1_range_start, Ex1_range_stop):
        if Ex1_range_output % 7:
            Ex1 = 0
        else:
            print(Ex1_range_output)
else:
    for Ex1_range_output in range(Ex1_range_start, Ex1_range_stop):
        if Ex1_range_output % 7:
            Ex1 = 0
        else:
            print(Ex1_range_output)

# Задание 2
Ex2_range_start = int(input("Введите первое число диапазона --> "))
Ex2_range_stop = int(input("Введите второе число диапазона --> "))

# Задание 2.1
print("Задание 2\n---- 1 ---- Все числа диапазона")
for Ex2_range_output_1 in range(Ex2_range_start, Ex2_range_stop):
    print(Ex2_range_output_1)
if Ex2_range_start < 999 ** 999:
    print("---- 2 ---- Все числа диапазона в убывающем порядке")

# Задание 2.2
for Ex2_range_output_2 in reversed(range(Ex2_range_start, Ex2_range_stop)):
    print(Ex2_range_output_2)
if Ex2_range_start < 999 ** 999:
    print("---- 3 ---- Все числа, кратные 7")

# Задание 2.3
for Ex2_range_output_3 in range(Ex2_range_start, Ex2_range_stop):
    if Ex2_range_output_3 % 7:
        Ex2_plug = 0
    else:
        print(Ex2_range_output_3)

print("---- 4 ---- Количество чисел, кратных 5")

# Задание 2.4
for Ex2_range_output_4 in range(Ex2_range_start, Ex2_range_stop):
    if Ex2_range_output_4 % 5:
        Ex2_plug = 0
    else:
        print(Ex2_range_output_4)

# Задание 3
Ex3_range_start = int(input("Введите первое значение: "))
Ex3_range_stop = int(input("Введите второе значение: "))

for Ex3_range_output in range(Ex3_range_start, Ex3_range_stop):
    if Ex3_range_output % 3 == 0 and Ex3_range_output % 5 == 0:
        print("Fizz Buzz")

    if not Ex3_range_output % 3 == 0 and not Ex3_range_output % 5 == 0:
        print(Ex3_range_output)

    elif Ex3_range_output % 3 == 0:
        print("Fizz")

    elif Ex3_range_output % 5 == 0:
        print("Buzz")
input("Нажмите enter что-бы выйти")
