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
#define cpresent(container,value) container.find(value)!=container.end()
using namespace std;

class ConvertibleStrings {
public:
	int leastRemovals(string, string);
};

int ConvertibleStrings::leastRemovals(string A, string B) {
	map<char, char> M1;
	int n = A.size();
	for(int i = 0; i < n; i++) {
		if(!(cpresent(M1,A[i]))) {
			M1.insert( pair<char, char> (M1[A[i]], B[i]));
		}
	}
	for(typeof(M1.begin()) it = M1.begin(); it != M1.end(); it++)
		printf("\n%c %c", it -> first, it -> second);	
	
	
	int counter = 0;
	for(int i = 0; i < n; i++) {
		char c = A[i];
		if(M1[c] != B[i])
		{
			cout << endl << M1[c] << " " << B[i];
			counter++;
		}
	
	}
	return counter;	
}


double test0() {
	string p0 = "DD";
	string p1 = "FF";
	ConvertibleStrings * obj = new ConvertibleStrings();
	clock_t start = clock();
	int my_answer = obj->leastRemovals(p0, p1);
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
double test1() {
	string p0 = "AAAA";
	string p1 = "ABCD";
	ConvertibleStrings * obj = new ConvertibleStrings();
	clock_t start = clock();
	int my_answer = obj->leastRemovals(p0, p1);
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
double test2() {
	string p0 = "AAIAIA";
	string p1 = "BCDBEE";
	ConvertibleStrings * obj = new ConvertibleStrings();
	clock_t start = clock();
	int my_answer = obj->leastRemovals(p0, p1);
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
double test3() {
	string p0 = "ABACDCECDCDAAABBFBEHBDFDDHHD";
	string p1 = "GBGCDCECDCHAAIBBFHEBBDFHHHHE";
	ConvertibleStrings * obj = new ConvertibleStrings();
	clock_t start = clock();
	int my_answer = obj->leastRemovals(p0, p1);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p2 = 9;
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
