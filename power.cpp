 #include<iostream>
 using namespace std;
 int main(){
    int n,x;
    cout<<"enter the number";
    cin>>n;
    cout<<"enter the power";
    cin>>x;
    int result = 1;
for(int i=0;i<x;i++){
    result *=n;
 }
 cout<<result<<endl;
 return 0;
}