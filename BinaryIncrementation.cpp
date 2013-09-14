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

using namespace std;

class BinaryIncrementation {
public:
	string plusOne(string);
};

string BinaryIncrementation::plusOne(string x) {
	string ans;
	int i;
	for(i = x.size()-1 ; i >= 0 ; i--)
	{
		if(x[i]=='0')
		{
			x[i] = '1';
			return x;
		}
		else
			x[i]='0';
	}
	x = '1' + x;
	return x;
}


//Powered by [KawigiEdit] 2.0!
