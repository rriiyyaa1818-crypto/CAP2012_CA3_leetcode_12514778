class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || head->next == NULL)
            return head;

        int n = 1;
        ListNode* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
            n++;
        }

        k = k % n;

        for (int i = 0; i < n - k; i++) {
            temp->next = head;
            temp = temp->next;
            head = head->next;
        }

        temp->next = NULL;

        return head;
    }
};
