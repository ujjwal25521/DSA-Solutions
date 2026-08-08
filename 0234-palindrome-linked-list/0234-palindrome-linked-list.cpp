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
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode*mid=slow;

        if(fast!=NULL){
            ListNode *curr=mid->next;
            ListNode*temp;
            ListNode*prev=NULL;

            while(curr!=NULL){
                temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;

            }

            ListNode*temp2=head;
            while(temp2!=mid){
                if(prev->val==temp2->val){
                    prev=prev->next;
                    temp2=temp2->next;
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        else{
            ListNode *curr=mid;
            ListNode*temp;
            ListNode*prev=NULL;

            while(curr!=NULL){
                temp=curr->next;
                curr->next=prev;
                prev=curr;
                curr=temp;

            }
            ListNode *temp2=head;
            while(prev!=NULL){
                if(prev->val==temp2->val){
                    prev=prev->next;
                    temp2=temp2->next;
                    continue;
                }
                else{
                    return false;
                }
            }

        }
        return true;
        
    }
};