#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"ENter a Number: ";
    cin>>n;
    int lastDigit=0;
    int reverse=0;
    while (n>0)
    {reverse*=10;
        lastDigit=n%10;
        reverse+= lastDigit;
        n/=10;
    }
    cout<<reverse;
    
    return 0;
}