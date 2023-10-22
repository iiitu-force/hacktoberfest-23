const btn = document.querySelector(".btn button");
const jokeBody = document.querySelector(".joke");

btn.addEventListener('click', getJoke);

async function getJoke() {
    const jokeFetch = await fetch("https://icanhazdadjoke.com/", {
        headers: {
            "Accept": "application/json"
        }
    });

    const jokeObj = await jokeFetch.json();
    jokeBody.innerHTML = jokeObj.joke;
}