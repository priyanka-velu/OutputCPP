#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName, streetAddress, city, zipCode;

    cout << "Enter first name: ";
    getline(cin, firstName);

    cout << "Enter last name: ";
    getline(cin, lastName);

    cout << "Enter street address: ";
    getline(cin, streetAddress);

    cout << "Enter city: ";
    getline(cin, city);

    cout << "Enter zip code: ";
    getline(cin, zipCode);

    cout << "\nInformation for the fictional person:\n";
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}
