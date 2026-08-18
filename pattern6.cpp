// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//              cout<<"*"<<" ";
//         }
//        cout<<endl; 
//     }
//     return 0;
// }

// # for other statement of same type
// #include<iostream>
// using namespace std;
// int main( ){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
//     return 0; 
// }

// with another pattern
#include<iostream>
using namespace std;
int main( ){
    char row,col;
    for(row='a';row<='e';row++){
        for(col='a';col<=row;col++){
            cout<<row  <<" ";
        }
        cout<<endl;
    }
    return 0; 
}