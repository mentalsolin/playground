''' Проверка является ли число счастливым
    123321 - число счастливое
    123456 -  число несчастливое '''
num = int(input("Введите число шестизначное: "))# 911452
if num<100000:  # 99 999 
    print("Вы ввели не шестнизначное число!")
else:
    num1 = num//100000 # 9
    num2 = num//10000%10 # 1
    num3 = num//1000%10 #1
    num4 = num//100%10 #4
    num5 =num//10%10 #5
    num6 = num%10 #2
    x = num1+num2+num3
    y = num4+num5+num6
    if(x==y):
        print("Число счастливое!")
    else:
        print("Число несчастливое!")
