#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    char ch[100]="Sushant";
    cout << ch << endl;

    char(*cptr)[100]=&ch;
    cout << cptr << endl;
    cout << *cptr << endl;
    cout << (*cptr)[0] << endl;
    cout << (*cptr)[1] << endl;
    cout << (*cptr)[2] << endl;
    cout << (*cptr)[3] << endl;
    cout << (*cptr)[4] << endl;
    cout << (*cptr)[5] << endl;
    cout << (*cptr)[6] << endl;








    cout << "ch : "<< ch << endl;
    cout << "&ch : "<< &ch << endl;
    cout << "ch[0] : "<< ch[0] << endl;
    cout << "&cptr : "<< &cptr << endl;
    cout << "*cptr : "<< *cptr << endl;
    cout << "cptr : "<< cptr << endl;
    

}
