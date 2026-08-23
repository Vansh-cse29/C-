#include <iostream>
using namespace std;

void myswap(int a,int b){
    int c;
    c=a;
    a=b; 
    b=c;
}


int main(){
    int a, b;
cin>>a>>b;
myswap(a,b);
cout<<a<<b<<endl;
return 0;    
}
