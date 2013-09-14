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

class InsertZ {
public:
	string canTransform(string, string);
};

string InsertZ::canTransform(string init, string goal) {
	string ans = "";
	for(int i = 0 ; i < goal.size(); i++)
		if(goal[i] != 'z') ans = ans + goal[i];
	if(ans == init) return "Yes";
	return "No";	
	
}


//Powered by [KawigiEdit] 2.0!
