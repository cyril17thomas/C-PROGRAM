#include<iostream>
using namespace std;
int main(){
    //print number 1 to N
    //using while loop
    //syntax - while(condition){
    //until the condition is true the statement in curly bracket is done
    // }
    int n;
    cout<<" enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }
}