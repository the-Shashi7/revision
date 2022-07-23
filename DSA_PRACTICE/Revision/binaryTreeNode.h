template<typename T>
#include <queue>
class binaryTreeNode
{
public:
    T data;
    binaryTreeNode * left;
    binaryTreeNode *right;

    binaryTreeNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    };
    ~binaryTreeNode(){
        delete left;
        delete right;
    };
};

void Display(binaryTreeNode<int> * root){
    if(root == NULL){
        return;
        }
    cout<<root->data<<" : ";
    if (root->right != NULL)
    {
        cout<<"R-"<<root->right->data; 
    }
    if (root->left!=NULL)
    {
        cout<<" L-"<<root->left->data ;
    }
    cout<<endl;
    Display(root->left);
    Display(root->right);
}

binaryTreeNode<int> * takeInput(){
    int rootData;
    cout<<"Enter rootData : ";
    cin>>rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    binaryTreeNode<int>*root = new binaryTreeNode<int>(rootData);
    binaryTreeNode<int>*leftChild = takeInput();
    binaryTreeNode<int>*rightChild = takeInput();
    root->left = leftChild;
    root->right = rightChild;

    return root;
}

binaryTreeNode<int> * takeLinearInput(){
    int rootData;
    cout<<"Enter rootData : "<<endl;
    cin>>rootData;
    if (rootData ==-1)
    {   
        return ;
    }
    binaryTreeNode<int>*root = new binaryTreeNode<int>(rootData);
    queue<binaryTreeNode<int>*> pendingNodes;
    pendigNodes.push(root);
    if(pendingNodes.size()!= 0){
    binaryTreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();
    cout<<"Enter left child of "<<front->data<<endl;
    int leftChildData;
    cin>>leftChildData;
    if(leftChildData!=-1){
        binaryTreeNode<int> * child = new binaryTreeNode<int>(leftChildData);
        front->left = child;
        pendingNodes.push(child);
    }
    cout<<"Enter right child of "<<front->data<<endl;
    int rightChildData ; cin>>rightChildData;
    if (rightChildData!= -1)
    {
        binaryTreeNode<int>*child = new binaryTreeNode<int> (righChildData);
        front->right = child;
        pendingNodes.push(child);
       }
    }
    return root;
}
