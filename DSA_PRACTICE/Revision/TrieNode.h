class TriNode{
    public:
    char data;
    TriNode ** children;
    bool isTerminal;

    TriNode(char data){
        this->data = data;
        children = new TriNode*[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};