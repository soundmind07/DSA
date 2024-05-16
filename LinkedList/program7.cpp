problem link:-
https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=given-a-linked-list-of-0s-1s-and-2s-sort-it

code:-
// Add code here  
        int c1=0,c2=0,c3=0;
       Node*temp=head;
       while(temp!=NULL)
       {
           if(temp->data==0)
           c1++;
           else if(temp->data==1)c2++;
           else if(temp->data==2)c3++;
           temp=temp->next;
           
       }
       Node*cur=head;
       while(c1--)
       {
           cur->data=0;
           cur=cur->next;
       }
        while(c2--)
       {
           cur->data=1;
           cur=cur->next;
       }
        while(c3--)
       {
           cur->data=2;
           cur=cur->next;
       }
       return head;
