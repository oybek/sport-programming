
#include <set>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <cmath>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstring>
#include <climits>
#include <iomanip>
#include <iostream>
#include <algorithm>

#define INF 1000000001
#define SQR(x) ((x)*(x))

typedef unsigned long long uint64;
typedef long long int64;

using namespace std;

#define k_MAX 101
int k, n;
long double C[k_MAX];

long double fact(long double n) {
	return (n == 0 ? 1 : fact(n-1)*n);
}

/*
ooo#
oo#o
o#oo
#ooo
 */

int main() {
	cout << fixed << setprecision(0);
	while (cin >> n >> k) {
		long double n_fact = fact(n);
		for (int i = 1; i <= n; ++i) {
			C[i] = n_fact / fact(n-i) / fact(i);
		}
		long double count = 0;
		for (; k <= n; ++k) {
			count += C[k];
		}
		cout << count << endl;
	}

	return 0;
}

