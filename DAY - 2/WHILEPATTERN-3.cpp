#include<iostream>
using namespace std;
int main(){
    //1 2 3 4
    //1 2 3 4
    //1 2 3 4
    //1 2 3 4
    // this is the pattern
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){ //this take the row from i to n
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}