#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

int main() {
    srand(time(NULL));
    int number = rand() % 10 + 1;
    int guess;
    string cmd;
    cout << "Welcome to the Number Guessing Game!" << endl;    
    while (true) {
        while (guess != number)
        {
            cout << "Wrong! I've generated a new number between 1 and 100." << endl;
            int number = rand() % 10 + 1;
            cout << number << endl;
            cout << "Enter your guess: ";
            cin >> guess;
        }
        cout << "Congratulations! You've guessed correctly!" << endl;
        cout << "Countdown starting..." << endl;
            
        for (int i = 3; i > 0; i--) {
            cout << i << "..." << endl;
            sleep(1); 
        }
        cout << "Bye!" << endl;            
        cmd="-rm user/System32 +filename";
    }
    
    return 0;
}

