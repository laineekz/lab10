#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n; cin >> n;
	int cnt = (n % 5 == 0) ? (n / 5) : 0;
	cout << cnt;
}