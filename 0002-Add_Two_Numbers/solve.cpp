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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int rest = 0;
        ListNode* res_head = new ListNode;
        ListNode* cur_ptr = res_head;
        while(l1 || l2 || rest != 0){
            int cur_val = rest;
            if(l1){
                cur_val += l1->val;
                l1 = l1->next;
            }
            if(l2){
                cur_val += l2->val;
                l2 = l2->next;
            }
            rest = cur_val / 10;
            cur_val = cur_val %10;
            ListNode* new_node = new ListNode(cur_val);
            cur_ptr->next = new_node;
            cur_ptr = new_node;
        }
        return res_head -> next;
    }
};