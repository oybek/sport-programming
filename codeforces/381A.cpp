
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

#define INF 1000000001
#define SQR(x) ((x)*(x))
#define ALL(a) a.begin(), a.end()
#define DIVC(a, b) (a/b+(a%b?1:0))

typedef unsigned long long uint64;
typedef long long int64;

using namespace std;

int n, a[1001], s[2];

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int i = 0, j = n-1, ind = 0;
	while (i <= j) {
		if (a[i] < a[j]) {
			s[ind] += a[j];
			--j;
		} else {
			s[ind] += a[i];
			++i;
		}
		ind = !ind;
	}
	cout << s[0] << ' ' << s[1];

	return 0;
}

