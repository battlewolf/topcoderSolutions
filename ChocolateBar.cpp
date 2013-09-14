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

class ChocolateBar {
public:
	int Lent(string s)
	{
		set<char> S;
		for(int i = 0; i < s.size(); i++)
		{
			if(S.find(s[i]) != S.end())
				return S.size();
			else
				S.insert(s[i]);
		}
		return S.size();
	}
	int maxLength(string);
};

int ChocolateBar::maxLength(string letters) {
	int m = -999;
	string s;
	for(int i = 0; i < letters.size(); i++)
	{
		for(int j = letters.size()-1; j >= 0; j--)
			m = max(m, Lent(letters.substr(i,j+1)));

	}
	return m;
}


//Powered by [KawigiEdit] 2.0!
