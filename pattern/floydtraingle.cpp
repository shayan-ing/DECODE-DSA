#include<iostream>

using namespace std;

int main(){
    int n;

    cout<<"enter no of rows: ";
    cin>>n;
    int k;
    k=1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    
    
    return 0;

}