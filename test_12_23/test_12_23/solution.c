#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//leetcode
// 8. �ַ���ת������ (atoi)
//���ƺ�������
//ǰ���пո�������������з������ַ�����ֹ
//��-�������Ƿ������ַ���Ϊ0
//int myAtoi(const char* str)//0-9��ASCII��ֵ��48-57
//{
//    int flag = 1;
//    const char* temp = str;
//    assert(str);
//    while (*temp == ' ')//����ǰ��Ŀո��ַ�
//    {
//        temp++;
//    }
//    long long num = 0;//���ַ�ת��Ϊ���ͱ�����num��
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
//        if (*(temp + 1) < 48 || *(temp + 1) > 57)//�жϺ�����ַ��Ƿ��������ַ�
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


//leetcode 76. ��С�����Ӵ�
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
    //ͳ��t�и��ַ�����
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
        while (len_t == 0)//ƥ��ɹ�
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