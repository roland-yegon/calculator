/* ========Imports======= */
// Import Input Field
const input = document.getElementById('display');

// Import on-page buttons
const buttons = document.querySelectorAll('button');

// Current Input state
let currentInput = "";


/* ======FUNCTIONS======== */
// Updating Input Field
function updateInput() {
    input.value = currentInput;
}

// Clearing Input Field
function clearInput() {
    currentInput = "";
}

// Adding values to input field
function addInput(value) {
    currentInput += value;
    updateInput();
}

// Removing values from input field
function removeInput(value) {
    currentInput += value;
    updateInput();
}

// Calculating
function calculate() {
    try {
        currentInput = eval(currentInput).toString();
        updateInput();
    } catch (error) {
        input.value = "Error";
        currentInput = "";
    }
}

/* ======Event Listener====== */
buttons.forEach((button) => {
    button.addEventListener("click", () => {
        const value = button.textContent;

        // Clear button
        if (value === "AC") {
            clearInput();
        }

        // Delete button
        else if (value === "DEL") {
            removeInput();
        }

        // Equals button
        else if (value === "=") {
            calculate();
        }

        // Adding values
        else {
            addInput(value);
        }
    });
})
