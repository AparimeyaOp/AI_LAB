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
    stack<TREENODE* > st1;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        postorder.push_back(root->val);
        if(root->left != NULL) st1.push(root->left);
        if(root->right != NULL) st1.push(root->right);
    }
    sort(postorder.end()-1,postorder.begin());
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