int getNthFromLast(Node *head, int n)
{
       int dist = 1;
       Node* h1= head;
       Node* h2 = head;
       while (dist < n && h2){
           h2 = h2->next;
           dist +=1;
       }
       if(!h2){
           return -1;
       }
       while(h2){
           h2 = h2->next;
           if(h2){
             h1 = h1->next;  
           }
           
       }
       
       return h1->data;
}