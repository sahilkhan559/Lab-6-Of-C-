#include <iostream>
#include <string>
using namespace std;

int main() {

    string firstName, lastName, fullName;

    cout << "Enter First Name: ";
    cin >> firstName;

    cout << "Enter Last Name: ";
    cin >> lastName;

    fullName = firstName + " " + lastName;

    cout << "Full Name: " << fullName;

    return 0;
}

