#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct TREENODE{
    int val;
    TREENODE* right;
    TREENODE* left;
    TREENODE(){
        val = 0;
        right = left = NULL;
    }
    TREENODE(int data){
        val = data;
        right = left = NULL;
    }
    TREENODE(int data,TREENODE* l, TREENODE* r){
        val = data;
        left = l;
        right = r;
    }
};

vector<vector<int> > levelorder(TREENODE* root){
    vector<vector<int> > lo; //used to store our final result, where we have node sorted in a level wise order
    if(root == NULL) return lo;
    queue<TREENODE* > qu;
    qu.push(root);
    while(!qu.empty()){
        vector<int> level;
        int s = qu.size();//tells us number of elements to expect;
        for(int i = 0;i<s;i++){
            TREENODE* root = qu.front();
            qu.pop();
            if(root->left!=NULL) qu.push(root->left); //pushing the values in the next level
            if(root->right!=NULL) qu.push(root->right); //pushing the values in the next level
            level.push_back(root->val); //addign queues front->curr level elements
        }
        lo.push_back(level); //finally pushing each level in
    }

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
    levelorder(n1);

}
