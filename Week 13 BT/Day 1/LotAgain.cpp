#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    //constructor
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};


Node*CreateTree(){
    int data;
    cout << "Enter Node data:";
    cin >> data;

    if(data==-1){
        return nullptr;
    }

    //if the data is not -1;
    Node*root=new Node(data);
    //Now we will recursively create Tree
    cout << "For left of Node " << root->data << " ,"; 
    root->left=CreateTree();
    cout << "For right of Node " << root->data << " ,"; 
    root->right=CreateTree();

    return root;
}
void levelOrderTraversal(Node*&root){
    if(root==nullptr){
        return;
    }
    //agar aisa nahi hai to hm ek queue create krenge Node* datatype rakhne wlaa
    queue<Node*>q;
    //fir root node aur null pointer ko push kr denge by default
    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        Node*frontElement=q.front();
        q.pop();//pop the element we stored as the front element
        //jab tk queue empty nahi hoga tbtk ye code chalega
        if(frontElement==nullptr){
            //in this case we need to print endline and again push nullptr at the end of the queue
            cout << endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            
            //this is the case when the front element is non null
            //in this case we will store the first element
            cout << frontElement->data << "->";
            //uske baad hmlog iss fornt element ke corresponding left aur right ko push kr denge
            if(frontElement->left!=nullptr){
                q.push(frontElement->left);
            }
            if(frontElement->right!=nullptr){
                q.push(frontElement->right);
            }
        }
    }
}

int main()
{
    Node*head = CreateTree();
    if(head==nullptr){
        //we will print no nodes to take action
        cout << "No nodes to take action";
    }
    levelOrderTraversal(head);
}