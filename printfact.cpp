#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        long long factorial = 1; // Use long long to handle large values
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        cout << "Factorial of " << i << " is " << factorial << endl;
    }

    return 0;
}
      