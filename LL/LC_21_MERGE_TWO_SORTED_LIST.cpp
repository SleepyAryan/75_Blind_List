class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* dummy = new ListNode(-101);
        ListNode* head=dummy;
        ListNode* current1=list1;
        ListNode* current2=list2;
        while(current1!=NULL && current2!=NULL){
            if(current1->val < current2->val){
                ListNode* temp = new ListNode(current1->val);
                dummy->next=temp;
                current1=current1->next;
            }
            else{
                ListNode* temp =new ListNode(current2->val);
                dummy->next=temp;
                current2=current2->next;
            }
            dummy=dummy->next;
        }
        if(current1!=NULL){
            dummy->next=current1;
        }
        if(current2!=NULL){
            dummy->next=current2;
        }
        return head->next;
    }
};

TC: O(N)
SC: O(N)