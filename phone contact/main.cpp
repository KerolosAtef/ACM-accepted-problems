#include <iostream>

using namespace std;
struct contact_node
{
    string name,phone;
    contact_node *next;
};
void add (contact_node* head,string n,string p)
{
    contact_node *curr=head;
    contact_node*new_node =new contact_node;
    new_node->name=n;
    new_node->phone=p;
    new_node->next=NULL;
    while (curr->next !=NULL)
    {
        curr=curr->next ;
    }
    curr->next=new_node;
}
void display (contact_node * head)
{
    contact_node *curr =head;
    while (curr)
    {
        cout<<curr->name<<" "<<curr->phone<<endl;
        curr=curr->next ;
    }
}
int main()
{
    contact_node *head =new contact_node ;
    head->name ="kero";
    head->phone ="01280636202";
    head->next =NULL;
    add(head,"2osa","01283524513");
    display(head);
    return 0;
}
