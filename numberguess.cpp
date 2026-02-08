#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 10 + 1;

    cout << "Guess a number between 1 to 10" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "Correct! You guessed the right number" << endl;
            break;
        }
        else if (guess > number) {
            cout << "Too High! Try again" << endl;
        }
        else {
            cout << "Too Low! Try again" << endl;
        }
    }

    return 0;
}
