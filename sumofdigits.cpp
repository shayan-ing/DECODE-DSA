#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"ENter a Number: ";
    cin>>n;
    int lastDigit=0;
    int sum=0;
    while (n>0)
    {
        lastDigit=n%10;
        sum+= lastDigit;
        n/=10;
    }
    cout<<sum;
    
    return 0;
}