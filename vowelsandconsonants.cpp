#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter a character:";
    cin>>c;

    if(c=='a'||c== 'e'||c=='i'||c=='o'||c=='u'){
        cout<<"vowels"<<endl;
    }
    else{
        cout<<"consonats"<<endl;
    }

    return 0;
}