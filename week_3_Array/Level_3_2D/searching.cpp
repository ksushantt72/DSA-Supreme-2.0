#include<iostream>
#include<vector>
using namespace std;

void PrintArray(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool Searching(int arr[3][3],int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    //iss line par tabhi aa sakte hain
    //jab saare elements check ho chuke honge
    //agar target mila hota to iss line pr aa nhi paate
    //kyuki true return ho chuka hota
    //since not returned so false statement here
    return false;
}

int main(){
    int arr[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };

    PrintArray(arr);
    int target;
    cin >> target;

    int finalans=Searching(arr,target);
    if(finalans==1){
        cout <<"Target Found"<< endl;
    }
    else{
        cout << "Target was not found";
    }
}