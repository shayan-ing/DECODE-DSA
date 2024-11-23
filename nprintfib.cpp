#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }

    int a = 0, b = 1; // First two Fibonacci numbers

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int next = a + b; // Calculate the next Fibonacci number
        a = b; // Update a to the next term
        b = next; // Update b to the next term
    }

    return 0;
}
