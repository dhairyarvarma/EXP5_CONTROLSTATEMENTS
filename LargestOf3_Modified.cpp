#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int largest = a;

    if(b > largest)
        largest = b;
    if(c > largest)
        largest = c;

    if(a == b && b == c)
        cout << "All numbers are equal." << endl;
    else
        cout << largest << " is the largest." << endl;

    return 0;
}
