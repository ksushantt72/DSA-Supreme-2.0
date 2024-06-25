#include <iostream>
#include<queue>
using namespace std;

string findNonRepChar(string&str){
    queue<char>q;
    string ans;
    int freq[26]={0};

    for(int i=0;i<str.length();i++){
        char ch=str[i];
        freq[ch-'a']++;
        q.push(ch);


        //Now checking for answer
        while(!q.empty()){
            char frontChar=q.front();
            //we will check if the character is > 1 in freq or not
            if(freq[frontChar-'a']>1){
                //in this case we will pop it out of the q
                q.pop();
            }
            else{
                //this is the case where freq of frontChar will be == 1 for sure
                ans.push_back(frontChar);
                //answer mill gya to break krdo
                break;
            }
        }
        //agar else exexute hi na ho or if ke wajah se hm while loop se baahar
        //aa jaayein aur q empty ho jaaye 
        if(q.empty()){
            ans.push_back('#');
        }
    }
    //yahan pe hamara answer array taiayr ho chuka hoga
    return ans;
} 


int main()
{   
    string str="facfdcad";
    string finalans=findNonRepChar(str);

    cout << finalans;

    return 0;
}