class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TriNode('\0');
    };
};

void insertWord(string word)
{
    // base case
    if (word.size() == 0)
    {
        root->isTermainal = true;
        return;
    }
    // small calculation
    int index = word[0] - 'a';
    TriNode *child;
    if (root->children[index] != NULL)
    {
        child = root->children[index];
    }
    else
    {
        child = new TrieNode(word[0]);
        root->chiddren[index] = child;
    }

    insertWord(child, word.substr(1));


}
void insertWord(string word){
        insertWord(root, word);
    }

void removeWord(TrieNode*root, string word){
    if(word.size() == 0){
        root->isTerminal = false;
        return;
    }
    TrieNode* child;
    int index = word[0]-'a';
    if(root->children[index] != NULL){
        child= root->children[index];
    }else{
        cout<<"Word does not found"<<endl;
    }
    removeWord(child,word.substr(1));
}