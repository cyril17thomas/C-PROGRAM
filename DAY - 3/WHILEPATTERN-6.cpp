#include<iostream>
using namespace std;
int main(){

    //      1    
    //    1 2 1 
    //  1 2 3 2 1
    //1 2 3 4 3 2 1
    // this is the pattern

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){  //this take the row from i to n
        // print space
        int space=n-i;
        while(space){
            cout<<"  ";
            space = space - 1;
        }

        // print 1st triangle
        int j =1;
        while(j<=i){
            cout<<j<<" ";
            j=j+1;
        }

        //print 2nd triangle
        int start = i-1;
        while(start){
            cout<<start<<" ";
            start = start - 1;
        }
        cout<<endl;
        i=i+1;
    }
}