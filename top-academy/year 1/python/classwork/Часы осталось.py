num1 = int(input("Сколько секунд прошло с начала дня: "))

time = 86400 - num1
hour = time // 60 // 60
last_sec1 = time - (hour * 3600)
minute = last_sec1 // 60
seconds = last_sec1 - (minute * 60)

print("Часы",hour,"Минуты",minute,"Секунды",seconds)
