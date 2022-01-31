/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct ListNode
{
    int data;
    ListNode *next;
};
ListNode *head=NULL,*tail=NULL;
class rot
{
    public:
    void create(int num)
    {
        ListNode *newnode=new ListNode;
        newnode->data=num;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    void rotate(int k)
    {
        if(head == NULL||head->next == NULL||k == 0) return head;
        int diff=0,len=1,count=1;
        ListNode *temp=head,*curr=NULL,*temp2=NULL;
        while(temp->next!=NULL)
        {
            len++;
            temp=temp->next;
        } 
        if(k>len){k=k-len;}   
        
        temp=head;
        diff=len-k;
        if(diff<0)
        {
            diff=diff*(-1);
        }
        if(diff==0)
        {
            printf("No change");
        }
        printf("While count <diff :: \n");
        while(count<diff)
        {
            printf("%d",temp->data);
            temp=temp->next;
            count++;
        }
        curr=temp->next;
        printf("curr is %d \n",curr->data);
        temp2=curr;
        temp->next=NULL;
        printf("Trying to reach at the last node::\n");
        while(temp2->next!=NULL)
        {
            printf("%d",temp2->data);
            temp2=temp2->next;
        }
        
        temp2->next=head;
        
        printf(" curr is %d \n",curr->data);
        while(curr!=NULL)
        {
            printf("%d",curr->data);
            curr=curr->next;
        }
    }
    
};
int main()
{
    rot ob;
    while(1)
    {
        int ch;
        printf("Enter choice:: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            int data;
            printf("Enter data ::");
            scanf("%d",&data);
            ob.create(data);
            break;
            
            case 2:
            int k;
            printf("Enter k ");
            scanf("%d",&k);
            ob.rotate(k);
            break;
            
            
        }
    }

    return 0;
}
