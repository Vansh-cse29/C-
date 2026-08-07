#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number";
    cin>>a;
    if(a>0){
        cout<<"positive number"<<endl;
    }
    else if(a==0){
        cout<<"zero"<<endl;
    }
    else{
        cout<<"number is negative"<<endl;
    }
    return 0;
}