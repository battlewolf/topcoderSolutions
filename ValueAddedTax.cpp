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
#include <cctype>
#include <cstring>

/*Templates*/
#define INF 1<<32
#define PI 3.141592653589793
#define AND &&
#define OR || 
#define NOT !




#define all(c) c.begin(),c.end()
#define present(container, element) (container.find(element) != container.end()) 
#define cpresent(container, element) (find(all(container),element) != container.end())
//#define present(c,data) 
#define ins insert
#define sz size
#define pb push_back
#define pp pop
#define v(data) vector<data>
#define vi vector<int>
#define vvi vector<vector<int> >
#define vs vector<string>
#define mp make_pair()
#define pi pair<int, int>
#define vpi v(pi)
#define matrix(data) vector<vector<data> > 
#define FOR(i,end,begin) for(int i=start; i <= end; i++)
#define TR(c) for(typeof(c.begin()) it = c.begin(); it != c.end(); it++)
using namespace std;

class ValueAddedTax {
public:
	double calculateFinalPrice(string, int, vector <string>);
};

double ValueAddedTax::calculateFinalPrice(string product, int price, vector <string> food) {
	if (cpresent(food,product))
		return (double)price + (double)price *0.10;
	return (double)price + (double)price *0.18;	
}


double test0() {
	string p0 = "milk";
	int p1 = 1;
	string t2[] = {"bread", "butter", "milk"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	ValueAddedTax * obj = new ValueAddedTax();
	clock_t start = clock();
	double my_answer = obj->calculateFinalPrice(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 1.1;
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
	string p0 = "car";
	int p1 = 100;
	string t2[] = {"bread", "butter", "milk"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	ValueAddedTax * obj = new ValueAddedTax();
	clock_t start = clock();
	double my_answer = obj->calculateFinalPrice(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 118.0;
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
	string p0 = "abc";
	int p1 = 57;
	string t2[] = {"a", "b", "c"};
	vector <string> p2(t2, t2+sizeof(t2)/sizeof(string));
	ValueAddedTax * obj = new ValueAddedTax();
	clock_t start = clock();
	double my_answer = obj->calculateFinalPrice(p0, p1, p2);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	double p3 = 67.25999999999999;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
