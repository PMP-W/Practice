#define _CRT_SECURE_NO_WARNINGS 1

//ACWing 第135周
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

//B 牛群
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


//C 货运公司   如何比较结构体大小
//#include<iostream>
//#include<cstdbool>
//#include<algorithm>
//using namespace std;
//struct Good
//{
//	int x;//第几件
//	int c;//重量
//	int p;//利润
//};
//struct Good nums[1005];
//struct car
//{
//	int x;//第几辆
//	int y;//载重
//}numsc[1005];
//struct result
//{
//	int x;//第几单
//	int y;//第几辆
//}res[1005];
//bool cmp(const Good& a, const Good& b)
//{
//	if (a.p != b.p)//如果总分不相同，就返回总分高的那一个
//		return a.p > b.p;
//	else if (a.p == b.p && a.c != b.c)//如果总分相同，就返回总分语文高的那一个
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
//			cin >> nums[i].c >> nums[i].p;//c吨，p元
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
