#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int m = 5;
    vector<vector<int>> arr(n, vector<int>(m, 6));

    // Printing the Values By for LOOP
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}