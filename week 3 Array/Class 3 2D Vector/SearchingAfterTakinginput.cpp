#include<iostream>
using namespace std;

void PrintArray(int arr[3][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

bool SearchArray(int arr[3][3],int row,int col){
    int target;
    cout << "Enter your Target Input For Searching ";
    cin >> target;
    cout << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][3];
    int row=3;
    int col=3;

    //Taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << "Enter the input for Row Index "<< i << "and column Index " << j << " --> ";
            cin >> arr[i][j];
        }
        cout << endl;
        
    }

    PrintArray(arr,row,col);

    int ans=SearchArray(arr,row,col);
    if(ans==1){
        cout << "Target input Found";
    }
    else{
        cout << "Target Input was not Found in this Array";
    }
}