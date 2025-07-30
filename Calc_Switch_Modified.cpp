#include<iostream>
using namespace std;

int main() {
    float a, b;
    int op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cin >> op;

    switch(op) {
        case 1:
            cout << "Result: " << (a + b) << endl;
            break;
        case 2:
            cout << "Result: " << (a - b) << endl;
            break;
        case 3:
            cout << "Result: " << (a * b) << endl;
            break;
        case 4:
            if(b != 0)
                cout << "Result: " << (a / b) << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid option selected." << endl;
    }

    return 0;
}
