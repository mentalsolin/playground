// Задание 1.
let name = prompt("please enter you're name here")
alert("oh, hi " + name + "!")

// Задание 2.
let date = new Date()
let year = prompt("can you write the year you were born")

if (year >= 1850) {
    alert("you are... " + (date.getFullYear() - year))
} else {
    alert("WHY YOU ARE STILL AVILE?!")
}

// Задание 3.
let lenght = prompt("enter lenght side of a rectangle")
alert('S = ' + length * lenght)

// Задание 4.
let r = prompt('enter the radius of the circle')
alert('S = ' + r * r * Math.PI)

// Задание 5.
let dist = prompt("Enter distance between two cities in km")
let time = prompt("How long do you want to get there? (hours like: 4.5 = 4:30)")

alert(dist/time + " km/h")
