import turtle  # Библиотека для графики
import random  # Бибилиотека для рандомизации

t = turtle.Pen()  # Дать черепахе ручку
turtle.bgcolor('white')
t.speed(100)
colors = ['red', 'orange', 'yellow', 'green', 'blue', 'purple']  # Список цветов
sides = int(turtle.numinput('Кол-во сторон', 'Сколько сторон вы хотите (от 1 до 8)?'))

# Рисование спирали
for x in range(360):
    t.shape("arrow")
    t.pencolor(colors[x % sides])
    t.forward(+ x / sides + x)
    t.left(210 / sides + 1)
    t.width(sides + 70)  # Ширина линии
    randomcolor = random.choice(colors)

