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

class TeamsSelection {
public:
	string simulate(vector <int>, vector <int>);
};

string TeamsSelection::simulate(vector <int> preference1, vector <int> preference2) {
		string ans;
		int n = preference1.size();
		ans.resize(preference1.size());
		map<int,bool> M;
		for(int i = 1; i <= n; i++)
			M[i] = 0;
		for(int c = 0; c < n; c++)
		{
			for(int i = 0; i < preference1.size(); i++)
			{
				if(M[preference1[i]] == 0)
				{
					M[preference1[i]] = 1;
					ans[preference1[i] - 1] = '1';
					break;
				}	
			}
			for(int i = 0; i < preference2.size(); i++)
			{
				if(M[preference2[i]] == 0)
				{
					M[preference2[i]] = 1;
					ans[preference2[i] - 1] = '2';
					break;
				}	
			}
		}
		return ans;
}


double test0() {
	int t0[] = {1, 2, 3, 4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 2, 3, 4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TeamsSelection * obj = new TeamsSelection();
	clock_t start = clock();
	string my_answer = obj->simulate(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "1212";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {3, 2, 1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 3, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TeamsSelection * obj = new TeamsSelection();
	clock_t start = clock();
	string my_answer = obj->simulate(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "211";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {6, 1, 5, 2, 3, 4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 6, 3, 4, 5, 2};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TeamsSelection * obj = new TeamsSelection();
	clock_t start = clock();
	string my_answer = obj->simulate(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "212211";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {8, 7, 1, 2, 4, 5, 6, 3, 9};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {7, 2, 4, 8, 1, 5, 9, 6, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	TeamsSelection * obj = new TeamsSelection();
	clock_t start = clock();
	string my_answer = obj->simulate(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string p2 = "121121212";
	cout <<"Desired answer: " <<endl;
	cout <<"\t\"" << p2 <<"\"" <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t\"" << my_answer<<"\"" <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}

int main() {
	int time;
	bool errors = false;
	
	time = test0();
	if (time < 0)
		errors = true;
	
	time = test1();
	if (time < 0)
		errors = true;
	
	time = test2();
	if (time < 0)
		errors = true;
	
	time = test3();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
