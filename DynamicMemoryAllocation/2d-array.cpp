#include <iostream>
using namespace std;

int main()
{
    int row = 3;
    int col = 3;
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }


    // Assigning the Values to the arr[i][j]
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j]=0;
        }
    }

    
    // Printing the values which is ENtered by us from upper code
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    //Deallocating
    for(int i=0;i<row;i++){
        delete[]arr[i];
    }
    delete []arr;
}