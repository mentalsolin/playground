function t1() {
    let a = prompt("Task 1.")

    console.log(Math.floor(a % 100 / 10))
}

function t2() {
    let b = prompt("Task 2.")

    arr = b.split('')
    first = arr.at(0)
    last = arr.at(-1)

    console.log(first +  + last)
}