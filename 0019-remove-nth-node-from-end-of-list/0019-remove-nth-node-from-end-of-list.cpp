/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode*start=head;
        int count=0;
        while(start!=NULL){
            count++;
            start=start->next;
        }
        if(count==1){
            return NULL;
        }
        ListNode*temp=head;
        ListNode*prev=NULL;
     
        if(n==count){
            ListNode* temp = head->next;
            delete(head);
            return temp;
            
        }
        int t=count-n;
        while(t--){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete(temp);
        return head;
        
    }
};