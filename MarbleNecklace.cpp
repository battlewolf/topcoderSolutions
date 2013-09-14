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
#define ALL(c) c.begin(),c.end()
using namespace std;

class MarbleNecklace {
public:
	string normalize(string);
};

string MarbleNecklace::normalize(string necklace) {
	string var1,var2;
	int p1,p2,n = necklace.size();
	vector<int> V;
	vector<string> Vs;
	for(char c='A'; c<='Z';c++)
	{
		p = necklace.find(c);
		if(p != -1)
		{
			V.push_back(p);
			while(true)
			{
				p = find(c,p+1);
				if(p==-1)break;
				else V.push_back(p);
			}
			for(int i = 0 ; i < V.size();i++)
			{
				p = V[i];
				var1 = "";
				var2 = "";
				for(int j = 0 ; j < necklace.size();j++)
					var1 = var1 + necklace[(j+p)%n)];
				Vs.push_back(var1);
				for(int j = 0 ; j < n; j++)
				{
					var2 = var2 + necklace[(abs(p-j))%n];
				}
				Vs.push_back(var2);
			}
			for(int j = 0 ; j < n;j++)
			{
				for(int i = 0 ; i < Vs.size()-1;i++)
				{
					if(Vs[i][j] != Vs[i+1][j])
						return Vs[i];
				}
			}
			
		}	
	}	
}


//Powered by [KawigiEdit] 2.0!
