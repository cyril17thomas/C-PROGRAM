#include<iostream>
using namespace std;
int main(){
    //*
    //* * 
    //* * * 
    // this is the pattern
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){ //this take the row from i to n
        int j=1;
        while(j<=i){
            cout<<" * ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}