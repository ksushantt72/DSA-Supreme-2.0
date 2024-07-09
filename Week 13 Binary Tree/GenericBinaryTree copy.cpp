#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    for(int i=0;i<3;i++){
        cin >> arr[i];
    }
    for(int i=0;i<3;i++){
        Node*arr[i];
    }
    //Constructor
    Node(int data){
        this->data=data;
        for(int i=0;i<3;i++){
            this->arr[i]=nullptr;
        }
    }
};

Node*createTree(){
    cout << "Enter SubNode ";
    int data;
    cin >> data;

    if(data==-1){
        return nullptr;
    }

    Node*root=new Node(data);

    cout << "For Node: "<< root->data << ", ";
    for(int i=0;i<3;i++){
        root->arr[i]=createTree();
    }

    return root;
}


int main()
{
    Node*rootNode=createTree();
    cout << rootNode->data << endl;
    return 0;
}