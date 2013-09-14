#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define INF 1<<20
using namespace std;

class DivisorInc {
public:
	int countOperations(int, int);
};

int DivisorInc::countOperations(int N, int M) {
	int best[ M + 1 ];
	
	best[N] = 0;
	for(int i = N + 1; i <= M; i++) best[i] = INF;
	
	for(int i = N; i < M; ++i)
	{
		for(int j = 2; j * j <= i; j++)
		{
			if(i % j == 0)
			{
				int k = i + j;
				if(k <= M)
					best[k] = min( best[k], best[i] + 1 );
				k = i + (i / j);
				if(k <= M)
					best[k] = min( best[k], best[i] + 1 );				
			}
		}	
	}
	
	if(best[M] >= INF) return -1;
	else return best[M];
	
}
