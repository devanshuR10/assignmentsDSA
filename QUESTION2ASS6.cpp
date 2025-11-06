void printCL(NODE* head){
    NODE *temp= head;
    while(temp->next!=head){
        cout<<"data "<<temp->data;
        temp=temp->next;    
    
    }
    cout<<"data "<<temp->data;
    temp=temp->next;
    cout<<"data "<<temp->data;
    
}
