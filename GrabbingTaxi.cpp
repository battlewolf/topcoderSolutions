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
#include <cctype>
#include <cstring>

/*Templates*/
#define INF 1<<32
#define PI 3.141592653589793
#define AND &&
#define OR || 
#define NOT !
#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end())
#define present(c,data) 
#define ins insert
#define sz size
#define pb push_back
#define pp pop
#define v(data) vector<data>
#define vi vector<int>
#define vvi vector<vector<int> >
#define vs vector<string>
#define mp make_pair()
#define pi pair<int, int>
#define vpi v(pi)
#define matrix(data) vector<vector<data> > 
#define FOR(i,end,begin) for(int i=begin; i <= end; i++)
#define TR(c) for(typeof(c.begin()) it = c.begin(); it != c.end(); it++)

using namespace std;

class GrabbingTaxi {
public:
	int minTime(vector <int>, vector <int>, int, int, int, int);
};

int GrabbingTaxi::minTime(vector <int> tXs, vector <int> tYs, int gX, int gY, int walkTime, int taxiTime) {
	int m = abs(gX*walkTime) + abs(gY*walkTime);
	FOR(i,tXs.size()-1,0)
	{
		int val = abs(tXs[i]*walkTime) + abs(tYs[i]*walkTime);
		val = val + abs((gX-tXs[i]) * taxiTime) + abs((gY-tYs[i]) * taxiTime);
		m = min(val, m);
	}
	return m;
}


//Powered by [KawigiEdit] 2.0!
