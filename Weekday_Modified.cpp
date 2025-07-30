#include<iostream>
using namespace std;

int main(){
    int day;

    cout << "Enter a number (1-7) for weekday: ";
    cin >> day;

    string days[] = {
        "Invalid", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };

    if(day >= 1 && day <= 7)
        cout << "Today is " << days[day] << "!" << endl;
    else
        cout << "Invalid day number." << endl;

    return 0;
}
