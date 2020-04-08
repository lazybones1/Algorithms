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
    ListNode* middleNode(ListNode* head) {
        ListNode* ans;
        ListNode* p = head;
        int middle = 0;

        while (p != NULL){
            middle ++;
            p = p -> next;
        }
        middle = middle/2;
        while (head != NULL){
            if(middle == 0){
                ans = head;
                break;
            }
            else{
                middle--;
                head = head -> next;
            }
        }
        return ans;
    }
};
