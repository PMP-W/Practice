#define _CRT_SECURE_NO_WARNINGS 1
#include<vector>
#include<iostream>
#include<unordered_map>
#include<algorithm>

//leetcode
//移除栅栏得到的正方形田地的最大面积
// 学会转换思路
// 求交集中最大的数
//class Solution {
//public:
//    const int mod = 1e9 + 7;
//    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
//        unordered_map<int, int>map;
//        hFences.push_back(1);
//        hFences.push_back(m);
//        vFences.push_back(1);
//        vFences.push_back(n);
//        sort(hFences.begin(), hFences.end());
//        sort(vFences.begin(), vFences.end());
//        for (int i = 0; i < hFences.size(); i++)
//        {
//            for (int j = i + 1; j < hFences.size(); j++)
//            {
//                map[hFences[j] - hFences[i]]++;
//            }
//        }
//        long long l = 0;
//        for (int i = 0; i < vFences.size(); i++)
//        {
//            for (int j = i + 1; j < vFences.size(); j++)
//            {
//                long long len = vFences[j] - vFences[i];
//                if (map[len])
//                    l = max(l, len);
//            }
//        }
//
//        if (l != 0)
//            return l * l % mod;
//        return -1;
//    }
//};


//leetcode
// 删除链表重复元素
//#include<cstdlib>
// struct ListNode {
//    int val;
//    struct ListNode *next;
// };
// 
// typedef struct ListNode ListNode;
// //struct ListNode* deleteDuplicates(struct ListNode* head) {
// //    if (!head)
// //        return head;
// //    ListNode* phead = (ListNode*)malloc(sizeof(ListNode));
// //    ListNode* p1 = head;
// //    ListNode* p2 = head;
// //    phead->next = p2;
// //    while (p1 != NULL)
// //    {
// //        if (p1 != NULL && p1->val != p2->val)
// //        {
// //            p2->next = p1;
// //            p2 = p2->next;
// //        }
// //        p1 = p1->next;
// //    }
// //    p2->next = NULL;
// //    return phead->next;
// //}
// // 
// //传递一级指针是因为改变的是next的值
// //没有修改指针的指向
// struct ListNode* deleteDuplicates(struct ListNode* head) {
//     if (!head)
//         return head;
//     struct ListNode* cur = head;//这里是因为在函数内部可以直接修改cur的指向，传递到函数的参数要修改指针指向就需要传二级指针
//     while (cur->next != NULL)
//     {
//         if (cur->val == cur->next->val)
//         {
//             cur->next = cur->next->next;
//         }
//         else
//         {
//             cur = cur->next;
//         }
//     }
//     return head;
// }
//
//int main()
//{
//    ListNode* node1 = (ListNode*)malloc(sizeof(ListNode));
//    node1->val = 1;
//    ListNode* node2 = (ListNode*)malloc(sizeof(ListNode));
//    node2->val = 1;
//    ListNode* node3 = (ListNode*)malloc(sizeof(ListNode));
//    node3->val = 1;
//    ListNode* node4 = (ListNode*)malloc(sizeof(ListNode));
//    node4->val = 2;
//
//    ListNode* node5 = (ListNode*)malloc(sizeof(ListNode));
//    node5->val = 2;
//    node1->next = node2;
//    node2->next = node3;
//    node3->next = node4;
//    node4->next = NULL;
//   // node5->next = NULL;
//    ListNode*node= deleteDuplicates(node1);
//    return 0;
//}

//leetcode
//反转链表||
//typedef struct ListNode ListNode;
//struct ListNode* reverseList(struct ListNode* head, struct ListNode* tail)
//{
//    ListNode* phead = NULL;//新的头
//    ListNode* cur = head;
//    while (cur != tail)//遍历原链表
//    {
//        ListNode* next = cur->next;//保存下一个节点的地址，避免丢失
//        cur->next = phead;
//        phead = cur;//更新头节点
//        cur = next;//继续遍历
//    }
//    return phead;
//}
//struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
//    ListNode* cur1 = head;
//    ListNode* cur2 = head;
//    int cnt = 1;
//    while (cnt < left - 1)
//    {
//        cur1 = cur1->next;
//        cur2 = cur2->next;
//        cnt++;
//    }
//    while (cnt <= right)
//    {
//        cur2 = cur2->next;
//        cnt++;
//    }
//    ListNode* tail = NULL;
//    if (cur2 != NULL)
//        tail = cur2;
//    if (left == 1)
//        head = reverseList(cur1, cur2);
//    else
//        cur1->next = reverseList(cur1->next, cur2);
//    while (cur1->next)
//    {
//        cur1 = cur1->next;
//    }
//    cur1->next = tail;
//
//    return head;
//}

