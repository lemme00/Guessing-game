#include <iostream>
#include <vector>

int main() {
    // 1. One variable to store the chosen number
    int chosenNumber = 7;
    
    // 2. Another variable to store the user's input
    int userGuess = 0;
    
    // 3. An empty list to keep all the numbers entered by the user
    std::vector<int> guessHistory;

    std::cout << "--- Guess the Secret Number ---" << std::endl;

    // Use a while loop that continues as long as the guess is not equal
    while (userGuess != chosenNumber) {
        
        // Ask the user to enter a number
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        // Store and save the value into the list so every attempt is recorded
        guessHistory.push_back(userGuess);

        // Use if / else statements to compare the guess
        if (userGuess > chosenNumber) {
            std::cout << "Too high" << std::endl;
        } 
        else if (userGuess < chosenNumber) {
            std::cout << "Too low" << std::endl;
        } 
        else {
            std::cout << "Correct!" << std::endl;
        }
    }

    // Optional: Display history of attempts
    std::cout << "\nGame Over! Your guess history: ";
    for (int guess : guessHistory) {
        std::cout << guess << " ";
    }
    std::cout << std::endl;

    return 0;
}
