z1_range_1 = int(input("Задание 1\nВведите диапозон 1: "))
z1_range_2 = int(input("Введите диапозон 2: "))
for z1_range_output in range(z1_range_1, z1_range_2):
    print(z1_range_output)

z2_range_1 = int(input("Задание 2\nВведите диапозон 1: "))
z2_range_2 = int(input("Введите диапозон 2: "))
for z2_range_output in range(z2_range_1, z2_range_2):
    if z2_range_output % 2 == 0:
        a = 0
    else:
        print(z2_range_output)

z3_range_1 = int(input("Задание 3\nВведите диапозон 1: "))
z3_range_2 = int(input("Введите диапозон 2: "))
for z3_range_output in range(z3_range_1, z3_range_2):
    if z3_range_output % 2 == 0:
        print(z3_range_output)

z4_range_1 = int(input("Задание 4\nВведите диапозон 1: "))
z4_range_2 = int(input("Введите диапозон 2: "))
for z4_range_output in reversed(range(z4_range_1, z4_range_2)): #reversed отражает чифры в обратном порядке
    print(z4_range_output)


z5_range_1 = int(input("Задание 5\nВведите диапозон 1: "))
z5_range_2 = int(input("Введите диапозон 2: "))
if z5_range_1 < z5_range_2:
    for z5_range_output in range(z5_range_1, z5_range_2):
        if z5_range_output % 2 == 0:
            a = 0
        else:
            print(z5_range_output)
else:
    for z5_range_output in range(z5_range_2, z5_range_1):
        if z5_range_output % 2 == 0:
            a = 0
        else:
            print(z5_range_output)
