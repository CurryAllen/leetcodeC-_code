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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
          ListNode *fast= head;//快指针
          ListNode *slow=head;//慢指针

        for(int i=0;i<n;i++)
        {
            fast=fast->next;
        }
        if(!fast)
            return head->next;

        //同时移动快慢指针，知道快指针移动到末尾
        //代表慢指针移动到了要删除的前一个节点上

        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow= slow->next;

        }

        slow->next=slow->next->next;
        return head;
    }
};
