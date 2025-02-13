#include <iostream>
#include <stack>
#include <vector>

/*
TC: O(N)
SC; O(HEIGHT OF TREE
)*/
using namespace std;

struct TREENODE{
    int val;
    TREENODE* left;
    TREENODE* right;
    
    TREENODE(){
        val = 0;
        left = right = NULL;
    }
    TREENODE(int v){
        val = v;
        left = NULL;
        right = NULL;
    }
    TREENODE(int v,TREENODE* l,TREENODE* r){
        val = v;
        left = l;
        right = r;
    }
};

vector<int> postorder_iter(TREENODE* root){
    vector<int> postorder;
    if(root==NULL) return postorder;
    stack<TREENODE* > st1,st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left != NULL) st1.push(root->left);
        if(root->right != NULL) st1.push(root->right);
    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->val);
        st2.pop();
        
    }
    for(auto &n:postorder){
        cout<<n<<endl;
    }
    return postorder;
}

int main(){
    TREENODE* n1 = new TREENODE(1);
    TREENODE* n2 = new TREENODE(2);
    TREENODE* n3 = new TREENODE(3);
    TREENODE* n4 = new TREENODE(4);
    TREENODE* n5 = new TREENODE(5);
    TREENODE* n6 = new TREENODE(6);
    TREENODE* n7 = new TREENODE(7);
    TREENODE* n8 = new TREENODE(8);
    n1->right = n3;
    n1->left = n2;
    n2->right = n5;
    n2->left = n4;
    n3->left = n6;
    n6->right = n7;
    n7->right = n8;
    postorder_iter(n1);

}

//preorder//
/*
LOGIC:
1)CREATE A STACK AND VECTOR
2)IN PREORDER TRAVERSAL->We always have root first
                       ->Followed by the left
                       ->Followed by right
3)Hence add root to the stack, store it in some variable, add to our op vec and finally remove it
4)Now what we must do is we must add the right of the root,since it will come later hence lower in the stack
5)Add the left now
6)Repeat the above process 
vector<int> vec;
if(root == NULL) return vec;
stack<TREENODE* > st;
st.push(root);
while(!st.empty()){
    root = st.top();
    vec.push_back(root->val);
    st.pop();
    if(root->right != NULL) st.push_back(root->right);
    if(root->left != NULL) st.push_back(root->left);
}
*/