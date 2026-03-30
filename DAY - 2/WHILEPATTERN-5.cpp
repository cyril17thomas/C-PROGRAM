#include<iostream>
using namespace std;
int main(){
    //1 2 3
    //4 5 6
    //7 8 9
    // this is the pattern
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int count = 1;
    int i=1;
    while(i<=n){ //this take the row from i to n
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count =count +1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}