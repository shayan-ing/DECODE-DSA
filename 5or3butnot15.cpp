#include<bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cout<<"Enter Number: ";
    cin>> num;
// logical AND is more Prior than Logical OR thats why bracket
    if((num%5==0 || num%3==0) && num%15!=0){
        cout<<"Number is Divisible by 5 Or 3 but not 15";
    }
    else{
        cout<<"Condition Not Satisfied!";
    }
    return 0;
}