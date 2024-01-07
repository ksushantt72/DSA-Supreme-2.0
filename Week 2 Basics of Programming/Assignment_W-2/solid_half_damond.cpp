//My Method

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     //Printing Upper Part Of the Diamond
//     for(int row=0;row<n;row++){
//         for (int col=0;col<row+1;col++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     //Inserting the Middle Part Here

//     for(int row=0;row<1;row++){
//         for(intcol=0;col<n+1;col++){
//             cout << "*";
//         }
//         cout << endl;
//     }





//     //Printing The Lower Part

//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout << "*";
//         }
//         cout << endl;
//     }

// }


//Lakshay Bhaiya Method

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>  n;

    for(int row=0;row<2*n-1;row++){
        int cond=0;
        if (row<n){//Growing Phase of Diamond
            cond=row+1;
        }
        else{//Shrinking Phase of Diamond
            cond=n-(row%n)-1;
        }
        
        for (int col=0;col<cond;col++){
            cout << "*";
        }
        cout << endl;
    }
}