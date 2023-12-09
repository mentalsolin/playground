variables = [1,"two","three",4,5,'six']

print(variables[3])

variables [2] = 9854789278942323

print(variables)
print(len(variables)) #кол-во значенийзкштое
del(variables[2])
print(variables)
print(variables[-1]) #с конца -1
variables.append("конец") # обовляет значение в конец списка
print(variables)
variables.insert(0,'начало')
print('-----------------')
print(variables)

mylist = []

for i in range (15):
    mylist.insert(i, i+1)
print(mylist)

summa = 0
listone = [5,4,3,2,1]

for i in range (len(listone)):
    summa+=listone[i]
print("-----------------\n"
      "Сумма списка: ", summa)

#список в списке

listTwo = [10,20,30]
listThree = ['!', '&', '$']
listTwo.append(listThree)
print(listTwo)


num = input("Введите 5 знаков: ")

num1 = num//10000%10
num2 = num//1000%10
num3 = num//100%10
num4 = num//10%10
num5 = num%10

print(num5)

if num1 == 0:
    num1 = str('')
if num2 == 0:
    num2 = str('')
if num3 == 0:
    num3 = str('')
if num4 == 0:
    num4 = str('')
if num5 == 0:
    num5 = str('')
    
hello = [str(num1),str(num2),str(num3),str(num4),str(num5)]

hello[0],hello[1],hello[2],hello[3],hello[4] = hello[4],hello[3],hello[2],hello[1],hello[0]

print(hello)

a = str(input())
text = a[::-1]
print(text)



word = input('введите строку: ')

len(word)

s = [ord(c) for c in word]

print(s)

counter = 0
counter2 = 0
counter3 = 0

print(len(word))

while counter3 != len(word):
    
    if s == [65]or[66]or[67]or[68]or[69]or[70]or[71]or[72]or[73]or[74]or[75]or[76]or[77]or[78]or[79]or[80]or[81]or[82]or[83]or[84]or[85]or[86]or[87]or[88]or[89]or[90]:
        counter += 1

    if s == s:
        counter3 += 1
    
    else:
        counter2 += 1
     

print('Букв:',counter,'Цифр:',counter2)


text = input("слово ")
symbol = input("символ ")
print(text.count(symbol))
