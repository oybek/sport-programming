
/* Use <F5> to compile & run program
 * file.in will be redirected to stdin
 * in file.out you'll get program stdout
 */

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

typedef unsigned long long u64;
typedef long long i64;

using namespace std;

int main()
{
	//
	int n;
	vector< string > s;

	//
	cin >> n;
	s.resize( n );
	for( int i = 0; i < n; ++i )
	{
		cin >> s[ i ];
	}

	//
	for( int i = 0; i < n; ++i )
	{
		string best = s[ 0 ];
	}

	return 0;
}

