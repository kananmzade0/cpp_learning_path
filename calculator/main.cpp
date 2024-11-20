#include <iostream>
// #include <limits>

using namespace std;

int main(){
    double user_input_number_first, user_input_number_second;
    string user_input_action, use_again;
    cout << "Welcome to the Calculator Program of mine!\n" << endl;
    while (true){
        cout << "Enter a number: " << endl;
        cin >> user_input_number_first;
        if (cin.fail()){
            cout << "ERROR: The input is not a number. " << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        cout << "Now select one of the basic operations: +, -, * or /" << endl;
        cin >> user_input_action;
        if ((user_input_action != "+") and (user_input_action != "-") and (user_input_action != "*") and (user_input_action != "/")){
            cout << "ERROR: Unsupported operation. " << endl;
            continue;
        }
        cout << "Lastly, please enter your second number: " << endl;
        cin >> user_input_number_second;
        if (cin.fail()){
            cout << "ERROR: The input is not a number. ";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        if (user_input_action == "+"){
            cout << "\n==============================" << endl;
            cout << "Result: " << user_input_number_first+user_input_number_second << endl;
            cout << "==============================" << endl << endl;
        }
        else if (user_input_action == "-")
        {
            cout << "\n==============================" << endl;
            cout << "Result: " << user_input_number_first-user_input_number_second << endl;
            cout << "==============================" << endl << endl;        }
        else if (user_input_action == "*")
        {
            cout << "\n==============================" << endl;
            cout << "Result: " << user_input_number_first*user_input_number_second << endl;
            cout << "==============================" << endl << endl;        }
        else if (user_input_action == "/")
        {
            if (user_input_number_second == 0){
                cout << "ERROR: Division by zero. Try again.\n";
                continue;
            } else {
            cout << "\n==============================" << endl;
            cout << "Result: " << user_input_number_first/user_input_number_second << endl << endl;
            cout << "==============================" << endl << endl;
            }
        }
        cout << "Would you like to perform another calculation? (y/n): " << endl;
        cin >> use_again;
        
        if (use_again == "n" || use_again == "N" || use_again == "No" || use_again == "NO") {
            break;
        }
    }
    cout << "\nThanks for using the Calculator!" << endl;
    return 0;
}