/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    struct ListNode *pEven, *pNext, *pCur;
    
    if ((head == NULL)||(head->next==NULL)){
        return head;
    }
    
    pEven= head->next;
    
    pCur=head;
    pNext= pEven;
    
    int OddTail=1;
    
    while (pNext->next !=NULL) {
            pCur->next= pNext->next;
            pCur=pNext;
            pNext=pNext->next;
            OddTail++;
    }
    
    if (OddTail%2==1){
        pCur->next=pEven;
        pNext->next=NULL;
    }
    else{
        pNext->next=pEven;
        pCur->next=NULL;
    }
    
    return head;
}
