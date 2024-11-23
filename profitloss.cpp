#include<bits/stdc++.h>

using namespace std;

int main(){

    float cp, sp;
    cout<<"Enter Cost Price: ";
    cin>>cp;
    cout<<"Enter Selling Price: ";
    cin>>sp;

    if(cp>sp){
        cout<<"Loss = "<< cp-sp; 
    }
    if(sp>cp){
        cout<<"Profit = "<< sp-cp;
    }
    if(sp==cp){
        cout<<"No profit, No Loss!";
    }


    return 0;

}