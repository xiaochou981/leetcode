/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int temp = 0;
    struct ListNode* l1_node = l1;
    struct ListNode* l2_node = l2;
    struct ListNode* head = NULL;
    struct ListNode* node = head;
    if(l1 == NULL && l2 == NULL) return head;
    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    node = head;
    
    while(node)
    {
        memset(node, 0, sizeof(struct ListNode));
        node->val = temp;
        if(l1_node)
        {
            node->val+=l1_node->val ;
        }
        if(l2_node)
        {
            node->val+=l2_node->val ;
        }
        
        if(node->val >= 10)
        {
            node->val -= 10;
            temp = 1;
        }
        else
        {
            temp = 0;
        }
        
        if(l1_node)
        l1_node = l1_node->next;
        if(l2_node)
        l2_node = l2_node->next;
        if(l1_node || l2_node || temp)
        {
            node->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        }
        node = node->next;
    }

    return head;
   
}