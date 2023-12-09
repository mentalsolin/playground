sales_man_one = int(input("Продажи первого менеджера: "))
sales_man_two = int(input("Продажи второго менеджера: "))
sales_man_three = int(input("Продажи третьего менеджера: "))

prem_one = 0
prem_two = 0
prem_three = 0

print("--------------------------------------")

if sales_man_one > sales_man_two:
    if sales_man_one > sales_man_three:
        prem_one = 200
        print("Премию получает первый менеджер!")
if sales_man_two > sales_man_one:
    if sales_man_two > sales_man_three:
        prem_two = 200
        print("Премию получает второй менеджер!")
if sales_man_three > sales_man_two:
    if sales_man_three > sales_man_one:
        prem_three = 200
        print("Премию получает третий менеджер!")

if sales_man_one < 501:
    print("Первый менеджер заработал:", round(sales_man_one + (sales_man_one / 100 * 3) + 200 + prem_one), "Руб.")
elif 500 < sales_man_one < 1001:
    print("Первый менеджер заработал:", round(sales_man_one + (sales_man_one / 100 * 5) + 200 + prem_one), "Руб.")
else:
    print("Первый менеджер заработал:", round(sales_man_one + (sales_man_one / 100 * 8) + 200 + prem_one), "Руб.")

if sales_man_two < 501:
    print("Второй менеджер заработал:", round(sales_man_two + (sales_man_two / 100 * 3) + 200 + prem_two), "Руб.")
elif 500 < sales_man_two < 1001:
    print("Второй менеджер заработал:", round(sales_man_two + (sales_man_two / 100 * 5) + 200 + prem_two), "Руб.")
else:
    print("Второй менеджер заработал:", round(sales_man_two + (sales_man_two / 100 * 8) + 200 + prem_two), "Руб.")

if sales_man_three < 501:
    print("Третий менеджер заработал:", round(sales_man_three + (sales_man_three / 100 * 3) + 200 + prem_three), "Руб.")
elif 500 < sales_man_three < 1001:
    print("Третий менеджер заработал:", round(sales_man_three + (sales_man_three / 100 * 5) + 200 + prem_three), "Руб.")
else:
    print("Третий менеджер заработал:", round(sales_man_three + (sales_man_three / 100 * 8) + 200 + prem_three), "Руб.")

input("Нажмите Enter что-бы выйти.")