#include<iostream>

using namespace std;

int main(){
    int n;

    cout<<"enter no of rows: ";
    cin>>n;
 // no of stars = n+1-i(no of rows)
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n+1-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;

}