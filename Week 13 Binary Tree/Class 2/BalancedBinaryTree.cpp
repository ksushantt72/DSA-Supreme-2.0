//ek tree ke kisi bhi node pe jaake agar  main ye keh skta hoon ki 
// uss node ke left subtree aur right subtree ke height ki absolute difference agar less
//than equal to 1 hai to wo balanced subtree kehlayegi


#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the Value of x:";
    int x;
    cin >> x;
    bool finalans=(x<=3);
    if(finalans){
        cout << "Range" << endl;
    }
    else{
        cout << "Out of Range"<< endl;
    }
    return 0;
}   