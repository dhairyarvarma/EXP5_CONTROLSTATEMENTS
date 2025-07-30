#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Input an alphabet: ";
    cin >> ch;

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "That's a vowel." << endl;
            break;
        default:
            cout << "That's a consonant." << endl;
    }

    return 0;
}
