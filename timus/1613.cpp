
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

#define INF INT_MAX-1
#define SQR(x) ((x)*(x))

typedef unsigned long long uint64;
typedef long long int64;

using namespace std;

#define n_MAX 70001

int n;
int64 a[n_MAX], s[n_MAX];
map<int, vector<int> > inds;

int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		inds[a[i]].push_back(i);
	}

	int q;
	cin >> q;
	while (q--) {
		int l, r, x;
		cin >> l >> r >> x;

		if (inds.find(x) != inds.end()
			&& lower_bound(inds[x].begin(), inds[x].end(), l) != inds[x].end()
			&& *lower_bound(inds[x].begin(), inds[x].end(), l) <= r) {
			cout << 1;
		} else {
			cout << 0;
		}
	}

	return 0;
}

