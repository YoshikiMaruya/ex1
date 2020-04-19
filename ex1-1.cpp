#include<iostream>
using namespace std;

int fact(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}

int rfact(int n){
    if(n>0){
        return n*rfact(n-1);
    }
    else return 1;
}

int main(){
    int n;
    cout<<"Input n: ";
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<rfact(n)<<endl;
    return 0;
}