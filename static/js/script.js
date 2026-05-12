// Import Input field and buttons from HTML
const input = document.getElementById('input');
const buttons = document.querySelectorAll('button');
let currentInput = "";

// Updating Input field
function updateInput() {
    input.value = currentInput;
}

// Clearing values from the Input field by pressing 'C' on calculator
function clearInput() {
    currentInput = "";
    updateInput();
}

// Adding values to the input field by pressing the numbers and operators
function addInput(value) {
    currentInput += value;
    updateInput();
}

// Deleting values from the input field by pressing 'DEL' on calculator
function removeInput() {
    currentInput = currentInput.slice(0, -1);
    updateInput();
}

// Function that performs arithmetic operation when '=' is pressed
function calculate() {
    try {
        currentInput = eval(currentInput).toString();
        updateInput();
    } catch (error) {
        input.value = "Error";
        currentInput = "";
    }
}

// Even Listener to enable App to detect buttons clicking and typing
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