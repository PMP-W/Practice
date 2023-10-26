//
//方法一
//在原来list1的基础上插入
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode LN;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(!list1)
    {
        return list2;
    }
    if(!list2)
    {
        return list1;
    }
    LN* cur1=list1;//指向list1的指针当前所在的位置
    LN* cur2=list2;//指向list2的指针当前所在的位置
    LN* newhead=list1;//在原来list1的基础上插入
    LN* prev=list1;//指定位置的前一个节点
    while(cur1&&cur2)
    {
        if(cur1->val>=cur2->val)//插入在指定位置之前，升序
        {
            if(cur1==newhead)//如果为头节点，则头插
            {
                LN*tmp=cur2->next;
                cur2->next=newhead;
                newhead=cur2;
                cur2=tmp;
                prev=newhead;
            }
            else//不是头节点,在指定位置之前插入
            {
                LN*tmp=cur2->next;
                cur2->next=cur1;
                prev->next=cur2;
                prev=prev->next;//起初没写这条语句，导致前面插入的被覆盖，很长一段时间没有发现，最后通过调试得以加上，所以要细心
                cur2=tmp;
            }
        }
        else
        {
            if(cur1==newhead)
            {
                cur1=cur1->next;
            }
            else
            {
            cur1=cur1->next;
            prev=prev->next;
            }

        }
    }
    if(cur2)
    {
        prev->next=cur2;
    }
    return newhead;
}


//方法二
//新建一个带头单向不循环链表，然后比较两个链表节点的大小再插入新链表
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode LN;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1==NULL) {
        return list2;
    } 
    if(list2==NULL) 
    {
        return list1;
    }
    LN* p1=list1;
    LN* p2=list2;
    LN* phead=(LN*)malloc(sizeof(LN));
    LN* pcur=phead;
    while(p1&&p2)
    {
        if(p1->val>p2->val)
        {
            pcur->next=p2;
            p2=p2->next;
        }
        else
        {
            pcur->next=p1;
            p1=p1->next;
        }
        pcur=pcur->next;
    }
    if(p1)
    {
        pcur->next=p1;
    }
    if(p2)
    {
        pcur->next=p2;
    }

    return phead->next;

}