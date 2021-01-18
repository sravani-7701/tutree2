/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int spaces=(2*n)+3;
    int s1=1;
    int s2=1;
    for(int j=0;j<2*n;j++){
    for(int i=0;i<s1;i++){
        cout<<"* ";
    }
    for(int i=0;i<spaces;i++){
        cout<<" ";
    }
    for(int i=0;i<s2;i++){
        cout<<"* ";
    }
    if(j<n-1){
        s1++;
        s2++;
        spaces=spaces-3;
    }
    else if(j>=n){
        s1--;
        s2--;
        spaces=spaces+3;
    }
    cout<<endl;
    }
    return 0;
}
