counter = 0
count = 0
math = 0
num = int(input("Введите число до 4-ех цифр: "))
          
num1 = num//1000%10
num2 = num//100%10
num3 = num//10%10
num4 = num%10

if num1 == 0:
    counter += 1
if num2 == 0:
    counter += 1
if num3 == 0:
    counter += 1
if num4 == 0:
    counter += 1
math = num1+num2+num3+num4
count = 4 - counter

print("1 - Сумма чисел\n2 - Количество нулей нулей\n3 - Среднее арифметическое")
menu = int(input("Введите действие: "))

if menu == 1:
    print(math)
if menu == 2:
    print("Нулей:", counter)
if menu == 3:
    print("Среднее арифметическое: ", math / count)
 

count = int(input("Введите размер клетки: "))
symbol = input("Введите символ: ")

for i in range(1):
    print(str(count*symbol)+str(count*"-")+str(count*symbol)+str(count*"-")+str(count*symbol)+str(count*"-"))
for i in range(1):
    print(str(count*"-")+str(count*symbol)+str(count*"-")+str(count*symbol)+str(count*"-")+str(count*symbol))
for i in range(1):
    print(str(count*symbol)+str(count*"-")+str(count*symbol)+str(count*"-")+str(count*symbol)+str(count*"-"))
for i in range(1):
    print(str(count*"-")+str(count*symbol)+str(count*"-")+str(count*symbol)+str(count*"-")+str(count*symbol))
for i in range(1):
    print(str(count*symbol)+str(count*"-")+str(count*symbol)+str(count*"-")+str(count*symbol)+str(count*"-"))
for i in range(1):
    print(str(count*"-")+str(count*symbol)+str(count*"-")+str(count*symbol)+str(count*"-")+str(count*symbol))


#Задание 3
stop = 0
while stop != "stop":
    
    dif = input('Для выхода из игры введите "stop"\nПосмотреть счет "enter"\nВыберите уровень сложности (всего 3 сложности): ')
    score = 0

    if dif == '1':
        aa = int(input("Сколько будет 2*3? "))
        if aa == 6:
            score += 1
        ab = int(input("Сколько будет 2*1? "))
        if ab == 2:
            score += 1
        ac = int(input("Сколько будет 3*3? "))
        if ac == 9:
            score += 1

    if dif == '2':
        ba = int(input("Сколько будет 5*3? "))
        if ba == 15:
            score += 1
        bb = int(input("Сколько будет 3*8? "))
        if bb == 24:
            score += 1 
        bc = int(input("Сколько будет 6*7? "))
        if bc == 42:
            score += 1
        bd = int(input("Сколько будет 3*7? "))
        if bd == 21:
            score += 1
        

    if dif == '3':
        сa = int(input("Сколько будет 8*4? "))
        if сa == 32:
            score += 1
        сb = int(input("Сколько будет 9*7? "))
        if сb == 63:
            score += 1
        сc = int(input("Сколько будет 6*8? "))
        if сc == 48:
            score += 1
        сd = int(input("Сколько будет 8*9? "))
        if сd == 72:
            score += 1
        сe = int(input("Сколько будет 6*10? "))
        if сe == 60:
            score += 1
            
    if dif == "stop":
        stop = "stop"
        
    if dif == "":
        print("\nВаш счет: ",score,"\n")
        
print("Ваш счет: ", score)

# задание 4
b = 4
print(str(" ")*4+str("*")+str(" ")*4)
print(str(" ")*3+str("*")*3+str(" ")*3)
print(str(" ")*2+str("*")*5+str(" ")*2)
print(str(" ")*1+str("*")*7+str(" ")*1)
print(str(" ")*2+str("*")*5+str(" ")*2)
print(str(" ")*3+str("*")*3+str(" ")*3)
print(str(" ")*4+str("*")+str(" ")*4)


n = 3


m = n-1
for i in range(-m,m+1):
    for k in range(-m, m+1):
        if abs(i)+abs(k) == m:
            c="▓▓▓"
        else:
            c="▒▒▒"
        print(c,end="")
    print()

