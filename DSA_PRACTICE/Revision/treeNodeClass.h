#include <vector>
using namespace std;
template <typename T>

class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

void Display(TreeNode<int> *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        Display(root->children[i]);
    }
}


TreeNode<int> *takeInput()
{
    int rootData,child;
    cout<<"Enter Data : ";
    cin>>rootData;
    TreeNode<int>*root =new TreeNode<int>(rootData);
    cout<<"Enter number of children "<<rootData<<" : ";
    cin>>child;
    for (int i = 0; i < child; i++)
    {
        TreeNode<int>*child = takeInput();
        root->children.push_back(child);
    }
    return root;
}
