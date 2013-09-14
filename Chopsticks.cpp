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

class Chopsticks {
public:
	int getmax(vector <int>);
};

int Chopsticks::getmax(vector <int> length) {
	sort(length.begin(),length.end());
	int user = 0;
	for(int i = 0 ; i < length.size() -1; )
	{
		if(length[i]==length[i+1]){
			user++;
			i+=2;
		}
		else i++;
	}
	return user;
}


//Powered by [KawigiEdit] 2.0!
