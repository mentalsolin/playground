print("My", "name", "is", "Monty", "Python", sep="-")
print("My", "name", "is", "Monty", "Python", end="*")
print("My", "name", "is", "Monty", "Python", sep="*",end="\n")
print("My", "name", "is", "Monty", "Python", end="*\n")

print(2+2) #выводим сумму чисел
print() #выводим пустую строку
print("2+2") #выводим стоку символов
#  \n - переход на новую строку \newline 
print("Я помню чудное мгновение\nпередо мной явилась ты")
print("\\") #выводим символ \
print("\"") #выводим символ "
print(" \' ") #выводим символ '

print(True>False)
print(True<False)

print(5/2) #оператор обычного деления 5/2=2.5
print(5//2)#оператор целочисленного деления 5//2=2
print(5%2) #оператор получения остатка
print(2**10)

print(2 * 3)
print(2 * 3.)
print(2. * 3)
print(2. * 3.)

print(6 / 3)
print(6 / 3.)
print(6. / 3)
print(6. / 3.)

print(6 // 4)
print(6. // 4)

print(-6 // 4)# -1.5 округлится до -2
print(6. // -4)

print(14%4)

print(-4 + 4)
print(-4. + 8)

print(-4 - 4)
print(4. - 8)
print(-1.1)

print(+2)

print(9 % 6 % 2)

print(2**2**3)

value = 20

var=10
bank_account = 10002
name = "Nikita"
print(var, bank_account, name)
print("name_bank_account: " + name)
print("name_bank_account: ",name)

var=20
var= 20+100
print(var)

num1 = 3.0
num2 = 4.0
c = (num1 ** 2 + num2 ** 2 ** 0.5)
print("value c= ", c)

sheep = 1
sheep = sheep +1 #sheep = 1+1
sheep += 1 #аналог строки sheep = 1+1
print(sheep) #sheep = 3

sheep *=2
print(sheep) #sheep = 6

sheep-=2
print(sheep)#sheep = 4


print("Enter some text: ")
some_text = input()
print(some_text)

some_text=some_text
print(some_text)

print("Enter some text:")
print("My text :")

#Задание 1

print("\t\t\tNothing")
print("\t\t\twill work")
print("\t\t\tunless you do")

#Задание 2

print("\t\"Anyone who")
print("\t  stops")
print("\t    learning is old,")
print("\t        whether at twenty or eighty")
print("\t\t\t\t\tHenry Ford\"")

#Задание 3

print("Сумма чисел\nВведите первое число")
aa = int(input())

print("Введите первое число")
ab = int(input())

ac = (aa + ab)
print (ac)

print("Разница чисел\nВведите первое число")
ab = int(input())

print("Введите первое число")
bb = int(input())

cb = ab - bb
print (cb)
print("Произведение чисел\nВведите первое число")
ac = int(input())

print("Введите первое число")
bc = int(input())

cc = ac * bc
print (cc)

#Задание 4

print("Задание 4\nВведите первое число")
aaa = int(input())

print("Введите второе число")
aab = int(input())

aac = aaa / 100 * aab

print(aac)
