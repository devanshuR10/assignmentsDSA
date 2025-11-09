
void findingcenterANDendANDsplittng(NODE* head){
  NODE* slow =head;
  NODE* fast =head;
  
  while(fast->next!=NULL && fast->next->next!=NULL){
      fast=fast->next->next;
      slow=slow->next;
      
  
  }
  if(fast->next->next==NULL){
  fast=fast->next;
  slow=slow->next;
  }
	NODE* secondhead=slow->next;
	slow->next=head;
	
	fast->next=secondhead;

}
