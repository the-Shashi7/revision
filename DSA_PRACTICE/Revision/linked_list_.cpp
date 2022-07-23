#include<iostream>
#define ll long long
using namespace std;

class linked_list{
    public:
        ll data;
        linked_list * next;

    linked_list(ll data){
        this->data = data;
        this->next = NULL;
    }

    linked_list *add(ll data, linked_list *head){
        if(head == NULL){
        linked_list *temp = new linked_list(data);
        head = temp;
    }
    else{
        linked_list *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            temp->next = new linked_list(data);
        }
        
    }
    return head;
    }

}


int main(){
    take_input;
    fast;
    linked_list *head = NULL;
    return 0;
}