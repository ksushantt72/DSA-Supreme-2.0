#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    char ch[100]="Statement";
    char *cptr=ch;

    cout << "ch : "<< ch << endl;
    cout << "&ch : "<< &ch << endl;
    cout << "*(ch+3) : "<< *(ch+3) << endl;
    cout << "cptr : "<< cptr << endl;
    cout << "&cptr : "<< &cptr << endl;
    cout << "*(cptr+3) : "<< *(cptr+3) << endl;
    cout << "cptr+2 : "<< cptr+2 << endl;
    cout << "*cptr : "<< *cptr << endl;
    cout << "cptr+8 : "<< cptr+8 << endl;

}