class Node{
    public:
        int data;
        Node * next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
void Display(Node *head){
        while (head!=NULL)
        {   
            cout<<head->data<<" ";
            head=head->next;
        }
        
}

Node *takeInput(){
    int data;
    cin>>data;
    Node*head = NULL;
    Node*tail = NULL;
    while (data!=-1){
        Node *newNode = new Node(data);
        if (head==NULL){
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = tail->next; // tail = newNode    
        }
        cin>>data;
    }
    return head;
}

Node* Insert(Node*head,int position,int data){
    Node*newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    while (temp!=NULL&& count < position-1) 
    {
        temp = temp->next;
        count++;
    }
    if (temp!=NULL)
    {
        Node*a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    } 
    return head;
}

Node* Delete(Node*head,int position){
    Node*temp = head;
    int count = 0;
    if (position==0)
    {   temp = temp->next;
        return temp;
    }
    while (count < position-1)
    {
        temp= temp->next;
        count++;
    }
    Node*a = temp->next;
    Node*b = a->next;
    temp->next = b;
    delete a;
    return head;
}

void FindNode(Node*head,int data){
    Node*temp = head;
    int count =0;
    while (temp!=NULL){
        if (data == temp->data)
        {
           cout<<count<<endl;
        }
        temp = temp->next;
        count++;
    }
}