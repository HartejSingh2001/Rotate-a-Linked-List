class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL||head->next == NULL||k == 0) return head;
        int size=0,num;
        ListNode *temp=head,*temp2,*temp3;
        while(temp!=NULL)// find size of LL
        {
            size++;
            temp=temp->next;
        }
        while(k>size)// Reduce k to less than size
        {
            k=k-size;
        }
        num=size-k;// find the diff
        if(num==0) return head;
        temp=head;
        while(num>1)
        {
            temp=temp->next;
            num--;
        }
        temp2=temp;
        temp3=temp2->next;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        temp2->next=NULL;
        head=temp3;
        return head;
          
    }
};
