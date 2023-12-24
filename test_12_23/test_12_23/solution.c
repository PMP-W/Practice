#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//leetcode
// 8. 字符串转换整数 (atoi)
//控制好上下限
//前面有空格就跳过，后面有非数字字符就终止
//‘-’后面是非数字字符则为0
//int myAtoi(const char* str)//0-9的ASCII码值是48-57
//{
//    int flag = 1;
//    const char* temp = str;
//    assert(str);
//    while (*temp == ' ')//跳过前面的空格字符
//    {
//        temp++;
//    }
//    long long num = 0;//将字符转化为整型保存在num中
//    if (*temp == '-' || *temp == '+')
//    {
//        if (*temp == '-')
//        {
//            flag = -1;
//
//        }
//        temp++;
//    }
//
//    while (*temp >= 48 && *temp <= 57)
//    {
//
//        num += (*temp - '0');
//        if (num * flag >= INT_MAX) return INT_MAX;
//        if (num * flag <= INT_MIN) return INT_MIN;
//        if (*(temp + 1) < 48 || *(temp + 1) > 57)//判断后面的字符是否是数字字符
//        {
//            return num * flag;
//        }
//        if (*(temp + 1) >= 48 && *(temp + 1) <= 57)
//        {
//            num *= 10;
//        }
//
//        temp++;
//    }
//    return 0;
//}


//leetcode 76. 最小覆盖子串
int hash[300];
char* minWindow(char* s, char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    if (len_s < len_t)
        return "";
    memset(hash, 0, sizeof(int) * 300);
    int l = 0;
    int r = 0;
    int start = 0;
    //统计t中各字符个数
    for (int i = 0; i < len_t; i++)
    {
        hash[t[i]]++;
    }
    int len = 0;
    int result = len_s + 1;
    for (; r < len_s; r++)
    {
        if (hash[s[r]]-- > 0)
        {
            len_t--;
        }
        while (len_t == 0)//匹配成功
        {
            len = r - l + 1;
            if (len < result)
            {
                start = l;
                result = len;
            }
            if (++hash[s[l]] > 0)
            {
                len_t++;//
            }
            l++;
        }
    }
    if (result != len_s + 1)
    {
        char* ret = (char*)malloc(sizeof(char) * (result + 1));
        *ret = '\0';
        strncat(ret, s + start, result);
        return ret;
    }
    return "";
}
int main()
{
	char s[] = "a";
	char t[] = "a";
    printf("%s", minWindow(s, t));
}