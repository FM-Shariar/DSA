#include <iostream>
#include <queue>
#include <stack>

using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
        Node(){
            val =-1;
            left =NULL;
            right =NULL;
        }
};
class CBTree{
    public:
        Node* root;
        queue<Node* > q;
        CBTree(){
            root =NULL;
        }
        void insert(int x){
            Node* nn = new Node();
            nn->val = x;

            if (root == NULL){
                root = nn;
                q.push(nn);
            }
            else{
                Node*  curr = q.front();
                if(curr->left == NULL){
                    curr->left =nn;
                    q.push(nn);
                }
                else{
                    curr->right = nn;
                    q.push(nn);
                    q.pop();
                }

            }
        }
    void Inorder(){
        stack<Node*>s;
        Node* curr = root;
        while(curr != NULL || !s.empty()){
            while(curr != NULL){
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            cout<< curr->val << " ";
            curr = curr->right;
        }
    }
     void Preorder(){
        stack<Node*>s;
        Node* curr = root;
        while(curr != NULL || !s.empty()){
            while(curr != NULL){
                cout<< curr->val << " ";
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();

            curr = curr->right;
        }
    }
    void Postorder(){
        stack<Node*>s1,s2;
        Node* curr = root;
        s1.push(root);
        while(!s1.empty()){
            curr = s1.top();
            s1.pop();
            s2.push(curr);
            if(curr->left)
            {
                s1.push(curr->left);
            }
            if(curr->right)
            {
                s1.push(curr->right);
            }
        }
        while(!s2.empty()){
            curr = s2.top();
            cout<<curr->val<<" ";
            s2.pop();
        }
    }

};




int main()
{
    CBTree tree;
    tree.insert(10);
    tree.insert(12);
    tree.insert(13);
    tree.insert(1);
    tree.insert(5);
    tree.insert(6);
    tree.insert(3);
    tree.insert(65);
    //cout<<tree.root->left->left->left->val;
    tree.Inorder();
    cout <<endl;
    tree.Preorder();
    cout <<endl;
    tree.Postorder();
    //tree.Preorder(tree.root);
    return 0;
}


