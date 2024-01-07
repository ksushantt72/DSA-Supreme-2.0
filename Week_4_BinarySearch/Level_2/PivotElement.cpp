//Rotated and sorted array ka maxm ya minm number pivot hoga
#include<iostream>
#include<vector>
using namespace std;


vector<int> RotateArray(vector<int>arr,int k){
    int n=arr.size();
    vector<int>brr(n);
    
    for(int index=0;index<n;index++){
        int newIndex= (index+k)%n;
        brr[newIndex]=arr[index];
    }
    return brr;
}

int PrintArray(vector<int>&finalans){
    for(int i=0;i<finalans.size();i++){
        cout << finalans[i] << " ";
    }
    cout << endl;
}


//Funtion Declaration for PivotElement Which is maximum
int PivotELement(vector<int>&brr){
    int n=brr.size();
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(brr[mid-1]>=0 && brr[mid]<brr[mid-1]){
            ans=mid-1;
        }
        else if(brr[mid+1]<n && brr[mid]>brr[mid+1]){
            ans=mid;
        }
        else if(brr[mid]<brr[start]){//---->> This means we are on line B
            // Agar line B pe hain to peeche jaana prega
            end=mid-1;
        }
        else if(brr[mid]>brr[start]){//This code tells that we are on Line A
            //If we are on Line A we need to move forward
            start=mid+1;

        }
        else if(start==end){
            return start;
        }
        return ans;
    }
}

int BinarySearch(vector<int>&brr,int start,int end,int target){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(brr[mid]==target){
            return mid;
        }
        else if(target>brr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr{2,4,6,8,10,12,14,16};
    int target=16;
    cout << "Printing array  in Initial Condition "<< endl;
    PrintArray(arr);
    
    int k=3;
    vector<int>brr = RotateArray(arr,k);

    cout << "Printing array  in Final Condition "<< endl;
    PrintArray(brr);


    int PivotIndex=PivotELement(brr);
    cout << "Pivot index is " << PivotIndex << endl;
    int n=brr.size();
    int ans=-1;

    //Searching in A
    if(target>=brr[0] && target<=brr[PivotIndex]){
        ans=BinarySearch(brr,0,PivotIndex,target);

    } 
    else{
        ans=BinarySearch(brr,PivotIndex+1,n-1,target);

    }
    return ans;
    int final=ans;
    cout << final << endl;

}