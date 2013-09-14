#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <cstring>
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
#define INF 2048

using namespace std;

class GUMIAndSongsDiv2 {
public:
	vector<int> V1, V2;
	int limit;
	int dp[INF][INF];
	bool arr[INF];
	bool checkarr()
	{
	
		for(int i = 0; i < V1.size(); i++)
		{
			if(!arr[i]) return true;		
		}
		return false;
	}
	int solve(int time_taken, int pos)
	{
		if(checkarr())
			return -99999;
		if(time_taken > limit)
			return -99999;
		if(time_taken == limit)
			return 0;
		else if(dp[time_taken][pos] != -1) return dp[time_taken][pos];
		else
		{
			int sum = 0;
			arr[pos] = 1;
			for(int i = 0; i < V1.size(); i++)
			{
				if(i != pos)
				{
					arr[i] = 1;
					sum = 1 + solve(time_taken+V1[pos]+abs(V2[i]-V2[pos]),i);
				}
			}
			return (dp[time_taken][pos] = sum);
		}	
	}
	int maxSongs(vector <int>, vector <int>, int);
};

int GUMIAndSongsDiv2::maxSongs(vector <int> duration, vector <int> tone, int T) {
	memset(dp, -1, sizeof(dp));
	for(int i = 0; i < duration.size(); i++)
	{
		V1.push_back(duration[i]);
		V2.push_back(tone[i]);
	}
	limit = T;
	set<int> S;
	for(int i = 0; i < duration.size(); i++)
	{
		memset(arr, 0, sizeof(arr));
		int n = solve(i, 0);
		cout << n;
		if(n > -1)
			S.insert(n);
	}
	if(S.size() == 0) return 0;
	else
	{
		set<int>::iterator it = S.begin();
		for(; it != S.end(); it++)
			cout << *it;
	}
	
}	

double test0() {
	int t0[] = {3, 5, 4, 11};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2, 1, 3, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 17;
	GUMIAndSongsDiv2 * obj = new GUMIAndSongsDiv2();
	clock_t start = clock();
	int my_answer = obj->maxSongs(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {100, 200, 300};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 2, 3};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 10;
	GUMIAndSongsDiv2 * obj = new GUMIAndSongsDiv2();
	clock_t start = clock();
	int my_answer = obj->maxSongs(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 0;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {1, 2, 3, 4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1, 1, 1, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 100;
	GUMIAndSongsDiv2 * obj = new GUMIAndSongsDiv2();
	clock_t start = clock();
	int my_answer = obj->maxSongs(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 4;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {10, 10, 10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {58, 58, 58};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 30;
	GUMIAndSongsDiv2 * obj = new GUMIAndSongsDiv2();
	clock_t start = clock();
	int my_answer = obj->maxSongs(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {8, 11, 7, 15, 9, 16, 7, 9};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3, 8, 5, 4, 2, 7, 4, 1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 14;
	GUMIAndSongsDiv2 * obj = new GUMIAndSongsDiv2();
	clock_t start = clock();
	int my_answer = obj->maxSongs(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int t0[] = {5611,39996,20200,56574,81643,90131,33486,99568,48112,97168,5600,49145,73590,3979,94614};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2916,53353,64924,86481,44803,61254,99393,5993,40781,2174,67458,74263,69710,40044,80853};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	int p2 = 302606;
	GUMIAndSongsDiv2 * obj = new GUMIAndSongsDiv2();
	clock_t start = clock();
	int my_answer = obj->maxSongs(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 8;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p3 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p3 != my_answer) {
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
	
	time = test4();
	if (time < 0)
		errors = true;
	
	time = test5();
	if (time < 0)
		errors = true;
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
