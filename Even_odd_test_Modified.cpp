#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any integer: ";
    cin >> num;

    if(num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;

    return 0;
}
