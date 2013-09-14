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

class CyclesInPermutations {
public:
	int maxCycle(vector <int>);
};

int CyclesInPermutations::maxCycle(vector <int> board) {
	int m = 0, var1 = 0;
	vector<int> V(board.size()+1);
	for(int i = 0 ; i < board.size();i++)
		V[i+1] = board[i];
	for(int i = 1; i <= board.size();i++)
	{
		var1 = 0;
		for(int j = i ; ;)
		{
			j = V[j];
			var1++;
			if(j == i) break;
		} //cout << endl << var1;
		m  = max(var1,m);
	}
	return m;
}


double test0() {
	int t0[] = {3,2,4,1,6,5};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	CyclesInPermutations * obj = new CyclesInPermutations();
	clock_t start = clock();
	int my_answer = obj->maxCycle(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	int t0[] = {1,2,3,4,5,6};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	CyclesInPermutations * obj = new CyclesInPermutations();
	clock_t start = clock();
	int my_answer = obj->maxCycle(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	int t0[] = {5,1,2,3,4};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	CyclesInPermutations * obj = new CyclesInPermutations();
	clock_t start = clock();
	int my_answer = obj->maxCycle(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 5;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	int t0[] = {5,7,14,6,16,10,8,17,11,12,18,3,4,13,2,15,9,1,20,19};
	vector <int> p0(t0, t0+sizeof(t0)/sizeof(int));
	CyclesInPermutations * obj = new CyclesInPermutations();
	clock_t start = clock();
	int my_answer = obj->maxCycle(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p1 = 11;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p1 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p1 != my_answer) {
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
