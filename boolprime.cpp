#include<iostream>
using namespace std;

    bool prime(int n){
if (n<2)
return false;
for (int i=2;i*i<=n;i++){
    if(n%i==0)
    return false;
}
return true;
    }
    int fact(int n){
        int ans = 1;
        for (int i=1;i<=n;i++){
            ans=ans*i;
        }
        return ans;
    }
    int main( ){
        int a,b;
        cin>>a>>b;
      cout<<prime(a)<<endl;
      cout<<fact(a)<<endl;
      cout<<prime(b)<<endl;
      cout<<fact(b)<<endl;
      cout<<prime(b-a)<<endl;
      cout<<fact(b-a)<<endl;
    }
