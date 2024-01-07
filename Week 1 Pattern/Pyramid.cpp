#include<iostream>
using namespace std;

// int main(){
//         //Erect Full Pyramid
//     int n;
//     cin >> n;

//     for (int row=0; row<n; row=row+1){
//         for(int col=0; col<n-row-1;col=col+1){
//             cout << " ";
//         }
//         //for Stars
//         for (int col=0;col<row+1;col=col+1){
//             cout << "* ";
//         }
//         cout  << endl;
//     }
// }

//Inverted Full Pyramid
    // int n;
    // cin >> n;

    // for(int row=0;row<n;row=row+1){
    //     //for Spaces
    //     for(int col=0;col<row;col=col+1){
    //         cout << " ";
    //     }
    //     //for Stars
    //     for (int col=0;col<n-row;col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    //Combination of these two will give diamond
    int main (){
        int num;
        cin >>num;
        int n=num/2;
        for(int row=0;row<n; row=row+1){
            //Printing Spaces First
            for(int col=0;col<n-row-1;col=col+1){
                cout << " ";
            }
            //Printing Stars
            for (int col=0;col<row+1;col=col+1){
                cout << "* ";
            }
            cout << endl;
        }
        for(int row=0;row<n;row=row+1){
            //Printing Spaces
            for(int col=0;col<row;col=col+1){
                cout << " ";
            }
            //Printing Stars
            for (int col=0;col<n-row;col=col+1){
                cout << "* ";
            }
            cout << endl;
        }
    }