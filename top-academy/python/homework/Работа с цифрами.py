enter = ("Нажмте enter что-бы продолжить")

#Задание 1

print("Зданаие 1\nСформирование чисел\nВведите первое число")
z1_num1 = input()

print("Введите второе число")
z1_num2 = input()

print("Введите третье число")
z1_num3 = input()

print(z1_num1 + z1_num2 + z1_num3)

input(enter)

#Задание 2

print("Зданаие 2\nПроизведение чисел\nВведите число состоящие из четерех цифр")
z2_large_num = int(input())
z2_num_1 = z2_large_num // 1000
z2_num_2 = z2_large_num // 100 % 10
z2_num_3 = z2_large_num % 100 // 10
z2_num_4 = z2_large_num % 10

print(z2_num_1 * z2_num_2 * z2_num_3 * z2_num_4)

input(enter)

#Задание 3

print("Зданаие 3\nВведите колличество метров")
z3_meters = int(input())

print("До какого знака показать мили?")
z3_rund_miles = int(input())

print("метрa(ов) в", z3_meters * 100, "Сантиметра(ов)")
print("метрa(ов) в", z3_meters * 10, "Децеметра(ов)")
print("метрa(ов) в", z3_meters * 1000, "Миллиметра(ов)")
print("метрa(ов) в", round(z3_meters / 1609, z3_rund_miles), "Мили(лей)")

input(enter)

#Задание 4

print("Зданаие 4\nВычисление площади треугольника\nВведите размер основания треугольника")
z4_osnova = int(input())

print("Введите высоту треугольника")
z4_razmer = int(input())

print(z4_osnova / 2 * z4_razmer)

input(enter)

#Задание 5

print("Зданаие 5\nОтразить число\nВведите число состоящие из четырех цифр")
z5_large_num = int(input())
z5_num_1 = z5_large_num // 1000
z5_num_2 = z5_large_num // 100 % 10
z5_num_3 = z5_large_num % 100 // 10
z5_num_4 = z5_large_num % 10

print(z5_num_4, z5_num_3, z5_num_2, z5_num_1)

input("Нажмте enter что-бы выйти")
