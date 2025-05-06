#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int bin(vector<int>& ar, int x)
{
	int l = 0, r = ar.size() - 1, mid;
	int ans = 0;
	while (l <= r)
	{
		ans++;

		mid = (l + r) / 2;
		cout << ans << ' ' << ar[mid] << endl;
		if (ar[mid] < x)
			l = mid + 1;
		else if (ar[mid] > x)
			r = mid - 1;
		else
			return mid;

	}
	return l;
}
int main()
{
	int n; cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	sort(ar.begin(), ar.end());
	int t = 3;
	while (t--)
	{
		int x; cin >> x;
		cout << bin(ar, x);
	}

}