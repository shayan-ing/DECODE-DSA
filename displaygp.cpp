#include<bits/stdc++.h>

using namespace std;
// Display this GP - 3,12,48,.. upto ‘n’ terms
// a= 3, r= 12/3=4
int main(){
    int n;
    cout<<"Enter A Number: ";
    cin>>n;
        int a = 3;
        int r=4;
        int term=a;

        for (int i = 0; i < n; i++)
        {
            cout<<term<<endl;
            term*=r;
        }
        
    return 0;
}