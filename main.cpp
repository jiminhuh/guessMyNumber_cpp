#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int guess, counter, answer;
    bool correct = false;

    // Random Number Generator

    //Seed the Random Number Generator
    srand(static_cast<unsigned int>(time(0)));

    // Initialize the generator
    int randomNumber = rand();

    // Set answer to random number
    answer = (randomNumber % 100) + 1;

    //Start the game and ask for first number
    cout << "        Welcome to Guess My Number" << endl;


    // Add the user input into guess variable
    do {
        cout << "Enter a guess: ";
        cin >> guess;
        counter++;

        if (guess > 100) {
            cout << "Please Enter a Number smaller than 100." << endl;
        } else if (guess == answer) {
            cout << "Wow you got it right!" << endl;
            cout << "It took you " << counter << " tries." << endl;
            correct = true;
        } else if (guess > answer) {
            cout << "Thats too high, please try again." << endl;
            correct = false;
        } else if (guess < answer) {
            cout << "Thats too low, please try again." << endl;
        }
    } while (correct == false) ;

    return 0;
}
