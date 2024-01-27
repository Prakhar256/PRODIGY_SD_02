#include<bits/stdc++.h>
using namespace std;
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}
int main() {
    srand(static_cast<unsigned int>(time(0)));
    const int minNumber = 1;
    const int maxNumber = 10;
    int targetNumber = generateRandomNumber(minNumber, maxNumber);
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Guessing Game!" <<endl;
    cout << "Guess the number between " << minNumber << " and " << maxNumber << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a number." << endl;
        }
        else{
            if (userGuess == targetNumber) {
                cout << "Congratulations! You guessed the correct number " << targetNumber << " in "<< attempts << " attempts." << endl;
            }
            else if (userGuess < targetNumber) {
                cout << "Number Guessed is too low! Try again." << endl;
            }
            else {
                cout << "Number Guessed is too high! Try again." << endl;
            }
        }
    }
    while (userGuess != targetNumber);
    return 0;
}
