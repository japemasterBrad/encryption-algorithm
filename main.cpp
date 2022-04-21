#include <iostream> //prints to the console
#include <vector> // basically arrays

using namespace std;

int main() {
    string sentence;
    string encrypted_pass;
    vector <char> password_by_char;
    
    cout << "Enter a word (no spaces): ";
    cin >> sentence;
    
    for(int i = 0; i < sentence.length(); i++){
        cout << "the ASCII code for " << sentence[i] << " is " << int(sentence[i]) << endl;
    }

    cout << "-----------------------------------------" << endl;

    for(int i = 0; i < sentence.length(); i++) {
        if (i % 2 != 0) {
            cout << "Even: " << sentence[i] << endl;
        } else {
            cout << "Odd: " << sentence[i] << endl;
        }
        
        
        char encrypted_pass_characters = (static_cast<char>(int(sentence[i]) + 5));
        encrypted_pass += encrypted_pass_characters;
    }
    
    cout << "-----------------------------------------" << endl;

    cout << "Your encrypted password is " <<  encrypted_pass << endl;

    return 0;
}

