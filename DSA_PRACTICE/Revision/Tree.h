#include<vector>
template<typename T>

class TreeNode {
    public: 
        int data;
        vector<TreeNode<T>*> children;
};