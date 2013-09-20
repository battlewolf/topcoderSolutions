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

class XBallGame {
public:
	vector <string> newStatistics(vector <string>);
};

vector <string> XBallGame::newStatistics(vector <string> placeboard) {
	vector<string> ans;
	ans = placeboard;
	for(int i = 0; i < placeboard.size(); i++) {
		size_t pos = placeboard[i].find('-', 0);
		string name = placeboard[i].substr(0, pos);
		set<string> ss;
		
		for(int j = placeboard.size() - 1; j >= 0; j--) {
			if(j == i) continue;
			size_t cpos = placeboard[j].find('-',0);
			string seestring = placeboard[j].substr(0, cpos);
			if(seestring == name)
				ss.insert (placeboard[j].substr(cpos+1));
		}
		
		
			for(set<string>::iterator it = ss.begin(); it != ss.end(); it++)
				ans[i] = ans[i] + ',' + *it;
		
		ss.clear();
	}
	
	return ans;
}



double test0() {
	string t0[] = {"John-DH", 
 "Jack-SP", 
 "Sam-OF", 
 "John-SP", 
 "John-RP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	XBallGame * obj = new XBallGame();
	clock_t start = clock();
	vector <string> my_answer = obj->newStatistics(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"John-DH,RP,SP", "Jack-SP", "Sam-OF", "John-SP,DH,RP", "John-RP,DH,SP" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"John-DH", 
 "Jack-SP", 
 "Sam-OF", 
 "John-SP", 
 "John-RP", 
 "John-RA", 
 "John-RZ", 
 "Jack-OF", 
 "Sam-SP"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	XBallGame * obj = new XBallGame();
	clock_t start = clock();
	vector <string> my_answer = obj->newStatistics(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"John-DH,RA,RP,RZ,SP", "Jack-SP,OF", "Sam-OF,SP", "John-SP,DH,RA,RP,RZ", "John-RP,DH,RA,RZ,SP", "John-RA,DH,RP,RZ,SP", "John-RZ,DH,RA,RP,SP", "Jack-OF,SP", "Sam-SP,OF" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"PFwL-GE", "PFwL-EV","agXL-SR", "PFwL-CS", "PFwL-FE", "PFwL-MS", "agXL-VS", "agXL-AL", "PFwL-BI", "PFwL-DK", 
 "PFwL-MW", "PFwL-DS", "agXL-XJ", "agXL-PJ", "agXL-CK", "PFwL-KI", "agXL-KP", "agXL-EL", "PFwL-EA"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	XBallGame * obj = new XBallGame();
	clock_t start = clock();
	vector <string> my_answer = obj->newStatistics(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"PFwL-GE,BI,CS,DK,DS,EA,EV,FE,KI,MS,MW", "PFwL-EV,BI,CS,DK,DS,EA,FE,GE,KI,MS,MW", "agXL-SR,AL,CK,EL,KP,PJ,VS,XJ", "PFwL-CS,BI,DK,DS,EA,EV,FE,GE,KI,MS,MW", "PFwL-FE,BI,CS,DK,DS,EA,EV,GE,KI,MS,MW", "PFwL-MS,BI,CS,DK,DS,EA,EV,FE,GE,KI,MW", "agXL-VS,AL,CK,EL,KP,PJ,SR,XJ", "agXL-AL,CK,EL,KP,PJ,SR,VS,XJ", "PFwL-BI,CS,DK,DS,EA,EV,FE,GE,KI,MS,MW", "PFwL-DK,BI,CS,DS,EA,EV,FE,GE,KI,MS,MW", "PFwL-MW,BI,CS,DK,DS,EA,EV,FE,GE,KI,MS", "PFwL-DS,BI,CS,DK,EA,EV,FE,GE,KI,MS,MW", "agXL-XJ,AL,CK,EL,KP,PJ,SR,VS", "agXL-PJ,AL,CK,EL,KP,SR,VS,XJ", "agXL-CK,AL,EL,KP,PJ,SR,VS,XJ", "PFwL-KI,BI,CS,DK,DS,EA,EV,FE,GE,MS,MW", "agXL-KP,AL,CK,EL,PJ,SR,VS,XJ", "agXL-EL,AL,CK,KP,PJ,SR,VS,XJ", "PFwL-EA,BI,CS,DK,DS,EV,FE,GE,KI,MS,MW" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {"a-AA", "a-ZZ"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	XBallGame * obj = new XBallGame();
	clock_t start = clock();
	vector <string> my_answer = obj->newStatistics(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"a-AA,ZZ", "a-ZZ,AA" };
	vector <string> p1(t1, t1+sizeof(t1)/sizeof(string));
	cout <<"Desired answer: " <<endl;
	cout <<"\t{ ";
	if (p1.size() > 0) {
		cout <<"\""<<p1[0]<<"\"";
		for (int i=1; i<p1.size(); i++)
			cout <<", \"" <<p1[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	cout <<endl <<"Your answer: " <<endl;
	cout <<"\t{ ";
	if (my_answer.size() > 0) {
		cout <<"\""<<my_answer[0]<<"\"";
		for (int i=1; i<my_answer.size(); i++)
			cout <<", \"" <<my_answer[i]<<"\"";
		cout <<" }" <<endl;
	}
	else
		cout <<"}" <<endl;
	if (my_answer != p1) {
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
