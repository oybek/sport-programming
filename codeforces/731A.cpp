
#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

#define inf 1000000001
#define sqr(x) ((x)*(x))
#define all(x) x.begin(), x.end()

typedef unsigned long long u64;
typedef long long i64;

using namespace std;

int main()
{
	string s;
	cin >> s;
	char cur = 'a';

	int ans = 0;
	for( char c : s )
	{
		ans += min(abs(cur-c), 26-abs(cur-c));
		cur = c;
	}
	cout << ans << endl;

	return 0;
}

