


#include <iostream>
using namespace std;

int main() {
    char char1, char2;
    int difference;

    // Taking two characters as input
    cout << "Enter the first character: ";
    cin >> char1;
    cout << "Enter the second character: ";
    cin >> char2;

    // Calculating the ASCII difference
    difference = abs(char1 - char2);

    // Displaying the result
    cout << "The difference between ASCII values is: " << difference << endl;

    return 0;
}

