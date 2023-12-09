#Задание 1

print("Введите 5 цифр")
numbers = int(input())

num_1 = numbers // 10000
num_2 = numbers // 1000 % 10
num_3 = numbers % 1000 // 100
num_4 = numbers % 100 // 10
num_5 = numbers % 10

a1 = num_1 * num_1
a2 = num_2 * num_2
a3 = num_3 * num_3
a4 = num_4 * num_4
a5 = num_5 * num_5

print(a1 + a2 + a3 + a4 + a5)