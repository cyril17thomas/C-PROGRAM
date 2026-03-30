#include<iostream>
using namespace std;
int main(){
    //prime or not prime
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=2;
    // 1 2 3 4 5 6
    //i should start from 2 because every number is  divisible by 1
    //i should be less than n that means i shpuld stop at 5 because a number is divisible by itself
    while(i<n){
        // if it is equal to zero it is not prime
        if(n%i==0){
            cout<<" not a prime "<<i<<endl;
        // this is for prime number which is not equal to zero    
        }else{
            cout<<"prime for"<<i<<endl;
        }
        i=i+1;
    }
}