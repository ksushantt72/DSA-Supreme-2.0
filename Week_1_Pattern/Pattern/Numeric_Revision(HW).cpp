#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "1" << endl;
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n + row; col = col + 1)
        {
            if (col == n + row - 1)
            {
                cout << col;
            }
            else{
                if(col==0){
                    cout << "1"; 
                }
                else{
                    cout << "_";
                }
            }
        }
        cout << endl;
        
    }
    cout << "12345";
}