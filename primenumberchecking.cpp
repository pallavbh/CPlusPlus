#include<iostream>
using namespace std;

int prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int x=17, y=20;

    if(prime(x)){
        cout<<x<<" is a prime number."<<endl;
    }
    else{
        cout<<x<<" is not a prime number."<<endl;
    }

    if(prime(y)){
        cout<<y<<" is a prime number."<<endl;
    }
    else{
        cout<<y<<" is not a prime number."<<endl;
    }
    return 0;
}