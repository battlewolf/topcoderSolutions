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

class Trekking {
public:
	int findCamps(string, vector <string>);
};

int Trekking::findCamps(string trail, vector <string> plans) {
	set<int> S;
	int invalid=0, occ;
	bool f;
	for(int i = 0 ; i < plans.size(); i++)
	{
		occ = 0;
		f = 0;
		for(int j = 0 ; j < trail.size() ; j++)
		{
			if(plans[i][j]=='C' && trail[j]=='^')
			{
				f = 1;
				invalid++;
				break;
			}
			else if(plans[i][j]=='C' && trail[j]=='.')
				occ++;
		}
		if(!f)
			S.insert(occ);
	}
	if(!(plans.size() ^ invalid)) return -1;
	set<int>::iterator it = S.begin();
	return *it;
	
	
}


double test0() {
	string p0 = "^^....^^^...";
	string t1[] = {"CwwCwwCwwCww",
 "wwwCwCwwwCww",
 "wwwwCwwwwCww"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Trekking * obj = new Trekking();
	clock_t start = clock();
	int my_answer = obj->findCamps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 2;
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
	string p0 = "^^^^";
	string t1[] = {"wwww",
 "wwwC"
};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Trekking * obj = new Trekking();
	clock_t start = clock();
	int my_answer = obj->findCamps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 0;
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
	string p0 = "^^.^^^^";
	string t1[] = {"wwCwwwC",
 "wwwCwww",
 "wCwwwCw"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Trekking * obj = new Trekking();
	clock_t start = clock();
	int my_answer = obj->findCamps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = -1;
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
	string p0 = "^^^^....^.^.^.";
	string t1[] = {"wwwwCwwwwCwCwC",
 "wwwwCwwCwCwwwC",
 "wwwCwwwCwwwCww",
 "wwwwwCwwwCwwwC"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Trekking * obj = new Trekking();
	clock_t start = clock();
	int my_answer = obj->findCamps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 3;
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
	string p0 = "..............";
	string t1[] = {"CwCwCwCwCwCwCw",
 "CwwCwwCwwCwwCw"};
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	Trekking * obj = new Trekking();
	clock_t start = clock();
	int my_answer = obj->findCamps(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 5;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
