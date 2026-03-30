#include<iostream>
using namespace std;
int main(){
    //A B C
    //D E F
    //G H I
    // this is the pattern
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    char ch='A';
    int i=1;
    while(i<=n){ //this take the row from i to n
        int j=1;
        while(j<=n){
            cout<<ch<<" ";
            ch = ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}