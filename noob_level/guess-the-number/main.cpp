#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(){
    srand(time(0));
    int n;
    int user_input;
    cout << "Welcome to the number guessing game! Press Enter to start. " << endl;
    while (true){
        cout << "Choose an 'n' (upper limit for this Number Guessing Game)" << endl;
        cin >> n;
        if (cin.fail()){
            cout << "Please enter an integer for n. " << endl;
            cin.clear();
            cin.ignore(1000, '\n'); 
            continue;
        }
        cout << "Here it goes! Thinking of a number between 1 and " << n << "..." << endl;

        int number_to_guess = rand() % n + 1;
        Sleep(1000);
        cout << "3..." << endl;
        Sleep(1000);
        cout << "2..." << endl;
        Sleep(1000);
        cout << "1!" << endl;
        cout << "Guess my number! (From 1 to " << n << ")" << endl;
        while (true){
            cin >> user_input;
            if (cin.fail()){
                cout << "Hey! It is a NUMBER guessing game! Try again." << endl;
                cin.clear();
                cin.ignore(1000, '\n'); 
                continue;
        }
            if (user_input > n){
                cout << "That's out of range. :/\nGive a better guess." << endl;
            }
            else if (user_input > number_to_guess){
                cout << "Lower..." << endl;
            }
            else if (user_input < number_to_guess)
            {
                cout << "Higher!" << endl;
            }
            else if (user_input == number_to_guess){
                cout << "Correct guess! The number was " << number_to_guess << "!" <<endl;
                break;
            }
            else {
                cout << "Unexpected error. Finishing the game...";
                break;
            }
        }
        string one_more;
        if (user_input == number_to_guess){
            cout << "One more? (y/n)" << endl;
            cin >> one_more;
        if (one_more == "n" || one_more == "N" || one_more == "no" || one_more == "No" || one_more == "NO") {
            cout << "Thanks for playing!" << endl;
            break;
        } else if (one_more == "y" || one_more == "Y" || one_more == "yes" || one_more == "Yes" || one_more == "YES") {
            continue;
        } else {
            cout << "Invalid input. Assuming you want to play again.\n";
            continue;
        }
        }
    }
    return 0;
}