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

class GreatFairyWar {
public:
	int minHP(vector <int>, vector <int>);
};

int GreatFairyWar::minHP(vector <int> dps, vector <int> hp) {
	int n = dps.size(), m = 0, t;
	for(int i = 0; i < n; i++)
	{
		t = 0;
		for(int j = i; j < n; j++)
			t = t + dps[j];
		m = m + hp[i] * t;
	}
	return m;	
}


double test0() {
	int t0[] = {1,2};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {3,4};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GreatFairyWar * obj = new GreatFairyWar();
	clock_t start = clock();
	int my_answer = obj->minHP(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 17;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {1,1,1,1,1,1,1,1,1,1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1,1,1,1,1,1,1,1,1,1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GreatFairyWar * obj = new GreatFairyWar();
	clock_t start = clock();
	int my_answer = obj->minHP(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 55;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {20,12,10,10,23,10};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {5,7,7,5,7,7};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GreatFairyWar * obj = new GreatFairyWar();
	clock_t start = clock();
	int my_answer = obj->minHP(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1767;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
	int t0[] = {5,7,7,5,7,7};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {20,12,10,10,23,10};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GreatFairyWar * obj = new GreatFairyWar();
	clock_t start = clock();
	int my_answer = obj->minHP(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1998;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	int t0[] = {30,2,7,4,7,8,21,14,19,12};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {2,27,18,19,14,8,25,13,21,30};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GreatFairyWar * obj = new GreatFairyWar();
	clock_t start = clock();
	int my_answer = obj->minHP(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 11029;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p2 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	int t0[] = {1};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	int t1[] = {1};
	vector <int> p1(t1, t1+sizeof(t1)/sizeof(int));
	GreatFairyWar * obj = new GreatFairyWar();
	clock_t start = clock();
	int my_answer = obj->minHP(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p2 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
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
