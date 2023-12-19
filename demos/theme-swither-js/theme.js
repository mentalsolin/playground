const page = document.getElementById('page');
const darkThemeMq = window.matchMedia('(prefers-color-scheme: dark)');

const mqCallBack = (mq) => {
    if (mq.matches) {
        body.classList.add('dark')
        body.classList.remove('light')
        console.log('dark');
    } else {
        body.classList.add('light')
        body.classList.remove('dark')
        console.log('light');
    }
}

darkThemeMq.addListener(mqCallBack);
mqCallBack(darkThemeMq);