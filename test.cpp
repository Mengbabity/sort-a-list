/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* header=new ListNode(0);
        header->next=head;
        ListNode* pre=header;
        
        ListNode* cur=head;
        
        while(cur)
        {
            if(cur->next!=NULL && cur->val>cur->next->val)
            {
                while(pre->next!=NULL && pre->next->val<cur->next->val)
                {
                    pre=pre->next;
                }
                
                ListNode* tmp=pre->next;
                pre->next=cur->next;
                cur->next=cur->next->next;//顺序不能错，不然歧义
                pre->next->next=tmp;
                pre=header;
            }
            else
                cur=cur->next;
        }
        
        return header->next;

    }
};
