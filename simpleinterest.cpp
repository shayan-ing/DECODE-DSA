#include<iostream>
using namespace std;

int main(){
    float p,r,t,si;
    cout<<"Enter Principal: ";
    cin>>p;
    cout<<"Enter rate in %: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;

    si=(p*r*t)/100;
    cout<<"The Simple Interest is: "<< si<<  endl;

    return 0;
}