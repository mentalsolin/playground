# import turtle
# import random
# t = turtle.Pen()
# turtle.speed(0)

# turtle.exitonclick() #eeeeee #eee #123123 # 123

# colors = ["green", "red", "green", "#eee", "black", "black", "yellow"]

# def spiral(x,y):
#     t.pencolor(random.choice(colors))
    
#     size = random.randint(20,80)
#     t.penup()
#     t.setpos(x,y)
    
#     t.pendown()
#     for i in range(size):
#         t.forward(i*2)
#         t.right(30)
        

# spiral(20,60)
# turtle.mainloop()


import turtle
import random
obj = turtle.Pen()

screen = turtle.Screen()

  #set size:

screen.setup(width = 1.0, height = 1.0)

  #remove close,minimaze,maximaze buttons:
canvas = screen.getcanvas()
root = canvas.winfo_toplevel()
root.overrideredirect(1)

colors = ["red","green","beige","gray"]

name = turtle.textinput("Name", "Enter: ")
for x in range(1000):
    obj.pencolor = colors[x%4]
    obj.penup()
    obj.forward
    obj.pendown()
    obj.write(name,font=("Comic Sans",int((x+10)/4),"bold"))
    obj.left(x+30)
    obj.forward(80)


name = input("What is your name")
for i in range(50):
    print(name)

screen = turtle.Screen()

  #set size:

screen.setup(width = 1.0, height = 1.0)

  #remove close,minimaze,maximaze buttons:
canvas = screen.getcanvas()
root = canvas.winfo_toplevel()
root.overrideredirect(1)

turtle.bgcolor("#eee") #цвет фона
colors = ["#bc4de1","red","green","beige",
         "gray","black","yellow"]

num = int(turtle.numinput("Размер спирали", 20))

def spiral(x,y): #функция для рисования спирали
  t = turtle.Pen() #создали объект черепахи 
  t.speed(0) #скорость черепахи
  t.pencolor(random.choice(colors)) #выбираем случайный                                       цвет
  size = random.randint(15,num) #случайный размер
  t.penup() #подняли перo
  t.setpos(x,y) #переходим по новой позици
  t.pendown() #опускаем перо
  for i in range(size): #цикл для рисования спирали
    t.forward(i*2)
    t.right(91)
turtle.onscreenclick(spiral)
turtle.mainloop()