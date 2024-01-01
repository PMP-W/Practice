#define _CRT_SECURE_NO_WARNINGS 1

//Leetcode  1422. 分割字符串的最大得分
//两个字符串都必须至少有一个字符
//int maxScore(char* s) {
//    int n = strlen(s);
//    int sco = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (s[i] == '1')
//            sco++;
//    }
//    int ans = 0;
//    for (int i = 0; i < n - 1; i++)
//    {
//        if (s[i] == '0')
//            sco++;
//        else
//            sco--;
//        ans = fmax(ans, sco);
//    }
//    return ans;
//}


//AcWing 3956. 截断数组
//#include<iostream>
//using namespace std;
//int nums[100005];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> nums[i];
//		nums[i] += nums[i - 1];
//	}
//	int sum = nums[n];
//	if (n < 3 || sum% 3 != 0)
//	{
//		cout << 0;
//		return 0;
//
//	}
//	int ans = 0;
//	int cnt = 0;
//	for (int i = 3; i <= n; i++)
//	{
//		if (nums[i-2] == sum / 3)//前面的两个部分分别至少有一个元素
//			cnt++;
//		if (sum / 3 == nums[n] - nums[i-1])//后面成立的每一个位置所对应的方法数都需要加上前面的方法数
//			ans += cnt;
//	}
//	cout << ans;
//
//
//
//	return 0;
//}


//AcWing 3729. 改变数组元素
// 
// 方法一：差分
//每次数组要清零
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int nums[200005] = {0};
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//
//		int n = 0;
//		cin >> n;
//		vector<int>arr(n + 2);
//		arr.assign(n + 2, 0);
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> nums[i];
//			int mini = min(i, nums[i]);
//			arr[i-mini + 1]+=1;
//			arr[i + 1]-=1;
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			arr[i] += arr[i - 1];
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			if (arr[i] > 1)
//				arr[i] = 1;
//			cout << arr[i]<<" ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

////方法二：区间维护
//#include<iostream>
//using namespace std;
//int nums[200005];
//int main()
//{
//	int t = 0;
//	cin >> t;
//	while (t--)
//	{
//		int n = 0;
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> nums[i];
//		}
//		int l = n+1;
//		for (int i = n; i >=1 ; i--)
//		{
//			l = min(l, i - nums[i] + 1);
//			if (l <= i)
//				nums[i] = 1;
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			cout << nums[i] << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}//


