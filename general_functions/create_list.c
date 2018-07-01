struct ListNode * createlist(int *nums, int count)
{
    struct ListNode * head;
    struct ListNode * node;
    if((count == 0) || (nums == NULL)) return NULL;
    int index = 0;

    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->val = nums[index++];
    node = head;
    while(index < count)
    {
        node->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        node = node->next;
        node->val = nums[index];
        node->next = NULL;
        index++;
    }
    return head;
}
