#include<iostream>
using namespace std;

void binary(int n){
    if(n/2==0){
        cout<<n%2;
        return;
    }
    else{
        binary(n/2);
        cout<<n%2;
    }
}

int main(){
    int n;
    cout<<"Input n: ";
    cin>>n;
    binary(n);
    cout<<endl;
    return 0;
}
