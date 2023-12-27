#define _CRT_SECURE_NO_WARNINGS 1


//重排链表
//方法一
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//
//typedef struct ListNode ListNode;
//ListNode* MiddleNode(ListNode* head)
//{
//    ListNode* fast = head;
//    ListNode* slow = head;
//    while (fast != NULL && fast->next != NULL)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}
//ListNode* ReverseList(ListNode* head)
//{
//    ListNode* phead = NULL;
//    ListNode* cur = head;
//    while (cur)
//    {
//        ListNode* tmp = cur->next;//注意先后顺序
//        cur->next = phead;
//        phead = cur;
//        cur = tmp;
//    }
//    return phead;
//}
//void reorderList(struct ListNode* head) {
//    ListNode* mid = MiddleNode(head);
//    ListNode* phead = ReverseList(mid->next);
//    mid->next = NULL;
//    ListNode* cur = head;
//    while (phead)
//    {
//        ListNode* next = cur->next;
//        cur->next = phead;
//        ListNode* tmp = phead->next;
//        phead->next = next;
//        phead = tmp;
//        cur = cur->next->next;
//    }
//
//}

//方法二
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//typedef struct ListNode ListNode;
//void reorderList(struct ListNode* head) {
//    if (head->next == NULL || head->next->next == NULL)
//        return;
//    ListNode* arr[50001];
//    ListNode* cur = head;
//    int n = 0;
//    while (cur)
//    {
//        arr[n] = cur;
//        cur = cur->next;
//        n++;
//    }
//    int i = 0;
//    int j = n - 1;
//    while (i < j)
//    {
//        arr[i]->next = arr[j];
//        i++;
//
//        arr[j]->next = arr[i];
//        j--;
//    }
//    arr[i]->next = NULL;
//
//}