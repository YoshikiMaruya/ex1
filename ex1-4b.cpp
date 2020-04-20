#include<iostream>
using namespace std;

double rfib(double n){
    if(n<0){
        return -1;
    }
    else if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return rfib(n-2)+rfib(n-1);
    }
}

int main(){
    double n=50;
    cout<<rfib(n)<<endl;
    return 0;
}