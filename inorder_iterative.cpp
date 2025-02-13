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

vector<int> inorder_iter(TREENODE* root){
    vector<int> inorder;
    if(root == NULL) return inorder;
    stack<TREENODE* > st;
    while(true){
        //here we must get out leftmost node for each subtree
        //to get to our left most node
        if(root != NULL){
            st.push(root);
            root = root->left;
        }
        //st.top() will be the leftmost node
        else{
            if(st.empty()) break; //empty would mean that we have completed our task
            root = st.top();
            inorder.push_back(root->val);
            st.pop();
            root = root->right;
        }
    }
    for(auto &n:inorder){
        cout<<n<<" ";
    }
    return inorder;
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
    inorder_iter(n1);

}