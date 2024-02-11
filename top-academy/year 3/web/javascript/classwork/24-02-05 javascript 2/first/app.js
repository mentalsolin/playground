let userLogin = "solin"
let userPassword = "0000"

let login = document.getElementById('login')
let password = document.getElementById('password')

form.addEventListener("submit", (event) => {
    console.log(password.value)
    console.log(login.value)
    if (userLogin === login.value && userPassword === password.value) {
        console.log('login')
        app.innerHTML = `        <h1>Dashboard</h1>
        <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Nisi ullam rerum voluptatibus provident, consectetur beatae aut quam! Sunt minima nostrum blanditiis, dicta sint laborum eaque, impedit atque, aperiam iste nesciunt architecto earum harum sit vitae tempora. Cum assumenda iste quaerat.</p>`
    } else {
        console.log('deny')
    }
})


