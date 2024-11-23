#include<bits/stdc++.h>

using namespace std;

//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
// i=4, d=7-4=3
int main(){
    int n;
    cout<<"number of terms: ";
    cin>> n;
    int a = 4;
    int d= 3;
    for (int i = 0; i <n; i++)
    {
        cout<<a + i*d<<endl;
    }
    
    return 0;
}