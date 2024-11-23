//WAP to print the sum of a given number and its reverse

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"ENter a Number: ";
    cin>>n;
    int og=n;
    int lastDigit=0;
    int reverse=0;
    while (n>0)
    {
        lastDigit=n%10;
        reverse=reverse*10+lastDigit;
        n/=10;
    
    
    }
    cout<<reverse<<endl;
    int sum = reverse + og;
    cout<< sum;
    return 0;
}