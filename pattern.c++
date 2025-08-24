// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    


    int i,j,k;

    for(i=0;i<10;i++)
    {
        for(k=0;k<9-i;k++)
        {
            cout<<" ";
        }
        for(j=0;j<=i;j++)
        {
            cout<<"*";
    
        }

        cout<<"\n";
    }

 
    return 0;
}