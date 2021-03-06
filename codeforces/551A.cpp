
#include <algorithm>
#include <bitset>
#include <functional>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
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

template <class iteratorT>
void show(string s, iteratorT a, iteratorT b) {
	cout << s << ':';
	for (; a != b; ++a)
		cout << ' ' << *a;
	cout << endl;
}

const int n_max = 2001;
int a[n_max], as[n_max], n;

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		as[i] = a[i];
	}
	sort(as, as+n, greater<int>());
	for (int i = 0; i < n; ++i)
		cout << lower_bound(as, as+n, a[i], greater<int>())-as+1 << ' ';

	return 0;
}

