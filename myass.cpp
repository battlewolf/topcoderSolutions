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

class EsperantoNumbers {
public:
	string nameThisNumber(int);
};

string EsperantoNumbers::nameThisNumber(int x) {
	map<int,string>;
	M[1] = "unu";
	M[2] = "du";
	M[3] = "tri";
	M[4] = "kvar";
	M[5] = "kvin";
	M[6] = "ses";
	M[7] = "sep";
	M[8] = "ok";
	M[9] = "nau";
	M[10] = "dek";
	string ans = "";
	if(x <= 10) return(M[x]);
	int var1 = x / 10;
	ans = ans + M[var1] + "dek";
	ans = ans + ' ';
	var1 = x % 10;
	ans = ans + M[var1];
	return ans;
	
}

<%:testing-code%>
//Powered by [KawigiEdit] 2.0!
