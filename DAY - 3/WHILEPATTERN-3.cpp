#include<iostream>
using namespace std;
int main(){
    //A 
    //B C 
    //D E F
    // this is the pattern
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    char value='A';
    while(i<=n){ //this take the row from i to n
        int j=1;
        while(j<=i){
            cout<<value<<" ";
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}