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

vector<int> preorder_iter(TREENODE* root){
    vector<int> preorder;
    if(root == NULL) return preorder;
    stack<TREENODE* > st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        preorder.push_back(root->val);
        st.pop();
        if(root->right != NULL) st.push(root->right);
        if(root->left != NULL) st.push(root->left);    
    }
    for(auto &p:preorder){
        cout<<p<<"  ";
    }
    return preorder;
}

int main(){
    TREENODE* n1 = new TREENODE(1);
    TREENODE* n2 = new TREENODE(2);
    TREENODE* n3 = new TREENODE(3);
    TREENODE* n4 = new TREENODE(4);
    TREENODE* n5 = new TREENODE(5);
    TREENODE* n6 = new TREENODE(6);
    TREENODE* n7 = new TREENODE(7);
    n1->right = n7;
    n1->left = n2;
    n2->right = n4;
    n2->left = n3;
    n4->left = n5;
    n4->right = n6;
    preorder_iter(n1);

}