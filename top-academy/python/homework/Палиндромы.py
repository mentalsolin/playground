palindrome = 0
exit_while = 0

while True:
    palindrome = 0
    number = int(input("Введите число: "))
    if number == "exit":
        break

    num = number

    while num != 0:
        num2 = num % 10
        palindrome = palindrome * 10 + num2
        num = int(num / 10)

    if number == palindrome:
        print("Число является палиндромом")
    else:
        print("Число не является палиндромом")


