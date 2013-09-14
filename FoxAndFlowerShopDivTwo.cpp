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
#define FOR(i,start,end) for(int i = start; i <= end; i++)
using namespace std;

class FoxAndFlowerShopDivTwo {
public:
	int theMaxFlowers(vector <string>, int, int);
};

int FoxAndFlowerShopDivTwo::theMaxFlowers(vector <string> flowers, int r, int c) {
	int l = 0, m = -9999;
	int R = flowers.size(), C = flowers[0].size();
	FOR(i,0,R-1)
	{
		FOR(j,0,c-1)
			l = l + (flowers[i][j]=='F');
	}
	m = max(m, l);
	l = 0;
	FOR(i,0,r-1)
	{
		FOR(j,0,C-1)
			l = l + (flowers[i][j]=='F');
	}
	m = max(m, l);
	l = 0;
	FOR(i,0,R-1)
	{
		FOR(j,c+1,C-1)
			l = l + (flowers[i][j]=='F');
	}
	m = max(m, l);
	l = 0;
	FOR(i,r+1,R-1)
	{
		FOR(j,0,C-1)
			l = l + (flowers[i][j]=='F');
	}
	m = max(m, l);
	return m;
	
}


double test0() {
	string t0[] = {"F.F",
 ".F.",
 ".F."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1;
	int p2 = 1;
	FoxAndFlowerShopDivTwo * obj = new FoxAndFlowerShopDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMaxFlowers(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 2;
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
	string t0[] = {"F..",
 "...",
 "..."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 0;
	FoxAndFlowerShopDivTwo * obj = new FoxAndFlowerShopDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMaxFlowers(p0, p1, p2);
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
	string t0[] = {".FF.F.F",
 "FF...F.",
 "..FF.FF"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 1;
	int p2 = 2;
	FoxAndFlowerShopDivTwo * obj = new FoxAndFlowerShopDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMaxFlowers(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 6;
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
	string t0[] = {"F",
 ".",
 "F",
 "F",
 "F",
 ".",
 "F",
 "F"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 4;
	int p2 = 0;
	FoxAndFlowerShopDivTwo * obj = new FoxAndFlowerShopDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMaxFlowers(p0, p1, p2);
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
	string t0[] = {".FFF..F...",
 "FFF...FF.F",
 "..F.F.F.FF",
 "FF..F.FFF.",
 "..FFFFF...",
 "F....FF...",
 ".FF.FF..FF",
 "..F.F.FFF.",
 ".FF..F.F.F",
 "F.FFF.FF.F"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 4;
	int p2 = 3;
	FoxAndFlowerShopDivTwo * obj = new FoxAndFlowerShopDivTwo();
	clock_t start = clock();
	int my_answer = obj->theMaxFlowers(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 32;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
