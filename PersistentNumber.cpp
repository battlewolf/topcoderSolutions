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
#define COND(x) x>=0&&x<=9
using namespace std;

class PersistentNumber {
public:
	int getPersistence(int);
};

int PersistentNumber::getPersistence(int n) {
	int var1, var3, per = 0;
	var1 = n;
	while(var1>9)
	{
		var3 = 1;
		while(var1)
		{
			var3 = var3 * (var1%10);
			var1 = var1 / 10;
		}
		per++;
		var1 = var3;
	}
	return per;
}


//Powered by [KawigiEdit] 2.0!
