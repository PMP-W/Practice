#define _CRT_SECURE_NO_WARNINGS 1

//ACWing ��135��
//A
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, x;
//	cin >> n >> x;
//	cout << n / x;
//
//
//	return 0;
//}

//B ţȺ
//#include<iostream>
//#include<string>
//using namespace std;
//int map[300] = { 0 };
//int main()
//{
//	string s;
//	cin >> s;
//	int n = s.size();
//	int cnt = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (map[s[i]] == 0)
//			cnt++;
//		map[s[i]]++;
//	}
//	if (cnt >= 5 || cnt <= 1)
//		cout << "No";
//	else//2 3 4
//	{
//		if (cnt == 4)
//			cout << "Yes";
//		if (cnt == 3 && n == 3)
//			cout << "No";
//		if (cnt == 3 && n > 3)
//			cout << "Yes";
//		if (cnt == 2 && n <= 3)
//			cout << "No";
//		if (cnt == 2 && n > 3)
//		{
//			int n1 = 0;
//			for (int i = 0; i <300;i++)
//			{
//				if (map[i] >= 2)
//				{
//					n1++;
//				}
//				if (n1 == 2)
//				{
//					cout << "Yes";
//					break;
//				}
//			}
//			if (n1 <= 1)
//				cout << "No";
//		}
//	}
//	return 0;
//}


//C ���˹�˾   ��αȽϽṹ���С
//#include<iostream>
//#include<cstdbool>
//#include<algorithm>
//using namespace std;
//struct Good
//{
//	int x;//�ڼ���
//	int c;//����
//	int p;//����
//};
//struct Good nums[1005];
//struct car
//{
//	int x;//�ڼ���
//	int y;//����
//}numsc[1005];
//struct result
//{
//	int x;//�ڼ���
//	int y;//�ڼ���
//}res[1005];
//bool cmp(const Good& a, const Good& b)
//{
//	if (a.p != b.p)//����ֲܷ���ͬ���ͷ����ָܷߵ���һ��
//		return a.p > b.p;
//	else if (a.p == b.p && a.c != b.c)//����ܷ���ͬ���ͷ����ܷ����ĸߵ���һ��
//		return a.c < b.c;
//	else
//		return a.p < b.p;
//}
//bool _cmp(const car& a, const car& b)
//{
//		return a.y > b.y;
//
//}
//int map[1005];
//int main()
//{
//	int n,k;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		nums[i].x = i+1;
//			cin >> nums[i].c >> nums[i].p;//c�֣�pԪ
//	}
//	sort(nums, nums + n, cmp);
//	cin >> k;
//	for (int i = 0; i < k; i++)
//	{
//		numsc[i].x = i+1;
//		cin >> numsc[i].y;
//		map[i]++;
//	}
//	sort(numsc, numsc + k,_cmp);
//	int sum = 0;
//	int cnt = 0;
//	int m = 0;
//	for (int i = 0; i <n ; i++)
//	{
//		for(int j=k-1;j>=0;j--)
//		{
//			if (nums[i].c <= numsc[j].y&&map[j]>0)
//			{
//				cnt++;
//				sum += nums[i].p;
//				res[m].x = nums[i].x;
//				res[m].y = numsc[j].x;
//				map[j]--;
//				m++;
//				break;
//			}
//		}
//	}
//	cout << cnt << " " << sum<<"\n";
//	for (int i = 0; i <cnt; i++)
//	{
//		cout << res[i].x << " " << res[i].y<<"\n";
//	}
//
//
//	return 0;
//}
//
