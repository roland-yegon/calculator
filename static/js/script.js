const input = document.getElementById('input');

const buttons = document.querySelectorAll('button');

let currentInput = "";

function updateInput() {
    input.value = currentInput;
}

function clearInput() {
    currentInput = "";
    updateInput();
}

function addInput(value) {
    currentInput += value;
    updateInput();
}

function removeInput() {
    currentInput = currentInput.slice(0, -1);
    updateInput();
}

function calculate() {
    try {
        currentInput = eval(currentInput).toString();
        updateInput();
    } catch (error) {
        input.value = "Error";
        currentInput = "";
    }
}

buttons.forEach((button) => {
    button.addEventListener("click", () => {
        const value = button.textContent;

        if (value === "C") {
            clearInput();
        } else if (value === "DEL") {
            removeInput();
        } else if (value === "=") {
            calculate();
        } else {
            addInput(value);
        }
    });
});