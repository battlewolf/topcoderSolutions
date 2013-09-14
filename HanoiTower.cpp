#include <queue>
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
#define cpresent(container,data) container.find(data) != container.end()
#define pb push_back
#define FOR(i,start,end) for(int i = start; i <= end; i++)
using namespace std;
typedef vector<string> vs;
class HanoiTower {
	public:
		bool isOK(vs &P)
		{
			char c = 'A';
			for(int i = 0; i < P.size(); i++)
			{
				for(int j = 0; j < P[i].size(); j++)
					if(P[i][j] != c)
						return false;
				c++;
			}
			return true;
		}
	
		void rotateStrings(vs &P, int r, bool f)
		{
			switch(r)
			{
				case 1:
				{
					if(P[0].size() == 0) return;
					char cadd = P[0][P[0].size()-1];
					P[0].erase(P[0].end()-1);
					if(!f)
						P[1] = P[1] + cadd;
					else
						P[2] = P[2] + cadd;
					return;					
				}
				case 2:
				{
					if(P[1].size() == 0) return;
					char cadd = P[1][P[1].size()-1];
					P[1].erase(P[1].end()-1);
					if(!f)
						P[0] = P[0] + cadd;
					else
						P[2] = P[2] + cadd;
					return;
				}
				case 3:
				{
					if(P[2].size() == 0) return;
					char cadd = P[2][P[2].size()-1];
					P[2].erase(P[2].end()-1);
					if(!f)
						P[0] = P[0] + cadd;
					else
						P[1] = P[1] + cadd;
					return;
				}
			}
		}
		
		int BFS(vs pegs)
		{
			if(isOK(pegs)) return 0;
			
			int d;
			vs tv1, tv2;				
			pair<vs, int> P1, P2, P3;
			set<vs> S;
			queue<pair<vs, int> > Q;
			
			
			
			S.insert(pegs);
			Q.push(pair<vs,int> (pegs, 0));
			
			while(!Q.empty())
			{
				P1 = Q.front();
				Q.pop();
				
				tv1 = P1.first;
				d = P1.second;
				for(int i = 1; i <= 3; i++)
				{
					tv2 = tv1;
					rotateStrings(tv2, i, 0);
					if(isOK(tv2)) return d+1;
					if(S.find(tv2) == S.end()) // It means this is a new node
					{
						S.insert(tv2);
						Q.push(pair<vs, int> (tv2, d+1));
					}
					
					tv2 = tv1;
					rotateStrings(tv2, i, 1);
					if(isOK(tv2)) return d+1;
					if(S.find(tv2) == S.end()) // It means this is a new node
					{
						S.insert(tv2);
						Q.push(pair<vs, int> (tv2, d+1));
					}
					
				}
				
				
			}
			
			
		}
		
		int moves(string, string, string);
};

int HanoiTower::moves(string pegA, string pegB, string pegC) {
		vs pegs;
		pegs.pb(pegA);
		pegs.pb(pegB);
		pegs.pb(pegC);
		return BFS(pegs);
}



double test0() {
	string p0 = "A";
	string p1 = "AA";
	string p2 = "AA";
	HanoiTower * obj = new HanoiTower();
	clock_t start = clock();
	int my_answer = obj->moves(p0, p1, p2);
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
double test1() {
	string p0 = "B";
	string p1 = "C";
	string p2 = "A";
	HanoiTower * obj = new HanoiTower();
	clock_t start = clock();
	int my_answer = obj->moves(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 5;
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
	string p0 = "CBA";
	string p1 = "";
	string p2 = "";
	HanoiTower * obj = new HanoiTower();
	clock_t start = clock();
	int my_answer = obj->moves(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 5;
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
	string p0 = "BBBBBBBBBA";
	string p1 = "";
	string p2 = "";
	HanoiTower * obj = new HanoiTower();
	clock_t start = clock();
	int my_answer = obj->moves(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 11;
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
	string p0 = "CBACBACBAA";
	string p1 = "";
	string p2 = "";
	HanoiTower * obj = new HanoiTower();
	clock_t start = clock();
	int my_answer = obj->moves(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p3 = 19;
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
