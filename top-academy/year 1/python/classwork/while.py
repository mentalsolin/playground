bomb = -999999999
a = int(input("Введите число что-бы останосить программу: "))
while a != 62:
    if a > bomb:
        bomb = a
    a = int(input("Введите число -1, что-бы остановить программу: "))
print("Наибольшее число: ", bomb)

counter = 100 #counter  - это название переменной
while counter != 5:
    print("Внутри цикла ", counter)
    counter -= 5
print("Вне цикла ", counter)

#i = 50
for i in range (2, 8, 3): #for int( i = 50; i++)
    print("Внутри цикла: ", i)


Pow = 1
for exp in range(64):
    print("2 в ", exp, "степени равно ", Pow)
    Pow *=2

#break
for i in range(1, 820):
    if(i == 460):
        continue
    print("Внутри цикла", i)
print("Внутри цикла", i)

large_number = -999999999
counter = 0
while True:
    number = int(input("Введите число -1 что-бы остановить программу: "))
    if number == -1:
        break
    counter += 1
    if number > large_number:
        large_number = number
if counter != 0:
    print(counter, "Наибольшее число: ", large_number)
else:
    print("Наибольшее число: ")

