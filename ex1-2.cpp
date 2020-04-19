#include<iostream>
using namespace std;

int fib(int n){
    if(n<0){
        return -1;
    }
    int current=0;
    int next=1;
    for(int i=0;i<n;i++){
        int tmp=current;
        current=next;
        next+=tmp;
    }
    return current;
}

int rfib(int n){
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
    int n;
    cout<<"Input n: ";
    cin>>n;
    cout<<fib(n)<<endl;
    cout<<rfib(n)<<endl;
    return 0;
}