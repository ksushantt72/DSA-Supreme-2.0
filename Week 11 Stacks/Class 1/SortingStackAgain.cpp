#include<iostream>
#include<stack>
using namespace std;

    
void PrintStack(stack<int>&st){
    //Jab tk stack empty na ho jaye
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
} 

//We will Create A function which will insert in a sorted way for every elements 
void InsertInSortedStack(stack<int>&st,int element){
    //Insertion ke liye pehle dekhnge ki kahin elements bara to nhi hai top elements se
    //since top element ko access kr rhe hain , so we should be sure first that the stack is not empty
    if(st.empty() || element > st.top()){
        //then in that case we will push our element
        //and this will be our base and fundamental case for the recursive call 
        st.push(element);
        return;
    } 

    //1 case khud solve krna hai 
    int temp=st.top();
    //store krne ke baad delete kr denge
    st.pop();

    //recursive call
    InsertInSortedStack(st,element);

    //Backtracking steps
    //jo element ko pop krwaye the usko wapis push kr denge
    st.push(temp);
}

//Now our main function for sorting a stack

void SortStack(stack<int>&st){
    if(st.empty()){
        return;
    }

    //1 case khud solve krna hai 
    int temp=st.top();
    st.pop();


    //Recursive call
    SortStack(st);

    //Now jab return aane lagenge to jo temp element hai usko sorted way me push krenge
    //isiliye main insert in sorted stack name ka function banaya hai
    // aur jo yahan ka temp element hai wo insert in sorted stack me element ke tarah jayega

    InsertInSortedStack(st,temp);
}



int main(){
    //Stack Creation
    stack<int>st;

    //Inserting Elements to the stack
    st.push(10);
    st.push(7);
    st.push(60);
    st.push(43);
    st.push(55);
    st.push(44);
    st.push(9);
    st.push(21);

    cout << "Before Sorting , Stack : " << "21 9 44 55 43 60 7 10"<< endl;
    //Print stack
    // PrintStack(st);


    //Function call for Sorting a stack
    SortStack(st);
    cout << "After Sorting, Stack : ";
    PrintStack(st);


}