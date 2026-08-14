// #include<iostream>
// using namespace std;
// int main( ){
//     int row,column;
//     for(row=1;row<=5;row++){
//         for(column=1;column<=5;column++){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main( ){
    int row,column;
    for(row=5;row>=1 ;row--){
        for(column=5;column>=1;column--){
            cout<<column<<" ";
        }
        cout<<endl;
    }
    return 0;
}