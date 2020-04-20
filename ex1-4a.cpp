#include<iostream>
using namespace std;

double fib(double n){
    if(n<0){
        return -1;
    }
    double current=0;
    double next=1;
    for(int i=0;i<n;i++){
        double tmp=current;
        current=next;
        next+=tmp;
    }
    return current;
}


int main(){
    double n=50;
    cout<<fib(n)<<endl;
    return 0;
}