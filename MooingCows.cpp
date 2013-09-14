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
typedef vector<int> vi;

class MooingCows {
public:
	int dissatisfaction(vector <string>);
};

int MooingCows::dissatisfaction(vector <string> farmland) {
	vector<pair<int,int> > vp;
	for(int i = 0 ; i < farmland.size();i++)
	{
		for(int j = 0 ; j < farmland[i].size();j++)
		{
			if(farmland[i][j] == 'C')
				vp.push_back(make_pair(i,j));	
		}
	}
	int du,m=(1<<25);
	for(int i = 0 ; i < vp.size() ; i++)
	{
		int x = vp[i].first, y = vp[i].second;
		du = 0;
		for(int j = 0 ; j < vp.size(); j++)
		{
			if(i==j) continue;
			du = du +((x-vp[j].first) * (x-vp[j].first))+ ((y-vp[j].second)*(y-vp[j].second));
		}
		m=min(m,du);
	}
	return m;	
}


//Powered by [KawigiEdit] 2.0!
