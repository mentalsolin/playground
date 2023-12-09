#Задание 1

e1_num1 = int(input("Введите число от 1 до 100: "))

if 0<e1_num1<101:
    if e1_num1 % 3 == 0:
        if e1_num1 % 5 == 0:
            print("Fizz Buzz")
        else: print("Fizz")
    elif e1_num1 % 5 == 0:
        if e1_num1 % 3 == 0:
            print("Fizz Buzz")
        else: print("Buzz")
    else: print("Fizz Buzz")
else: print("Не верное число")
    
#Задание 2

e2_num1 = int(input("Задание 2\nВведите число: "))

e2_stepen = int(input("Введите степень от 0 до 7: "))

if e2_stepen > 7 or e2_stepen < 0:
    print("Не верное число")

else:
    print(e2_num1 ** e2_stepen)

#Задание 3

e3_time = int(input("Введите время разговора: "))

mts = e3_time * 0
tele2 = e3_time * 1.6
beeline = e3_time * 2

e3_na_kakoy = str(input("mts\ntele2\nbeeline\nВведите на какой оператор позвонить: "))

if e3_na_kakoy == "mts":
    print("Стоимость звонка на мтс бессплатно", mts)

elif e3_na_kakoy == "tele2":
    print("Стоимость звонка на tele2 1.6 руб", tele2)
elif e3_na_kakoy == "beeline":
    print("Стоимость звонка на beeline 2 руб", beeline)

dz_1_meneger = int(input("Сумма продаж первого менеджера: "))



if dz_1_meneger < 500:
    print("a")
    
if 501 > dz_1_meneger < 1000:
    print("b")
    
if dz_1_meneger > 1001:
    print("c")
