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
#define ALL(c) c.begin(),c.end()
using namespace std;

class NounReform {
public:
	bool isOkay(string str1, string str2);
	vector <string> makePlural(vector <string>);
};
bool NounReform::isOkay(string str1, string str2)
{
	reverse(str1.begin(),str1.end());
	reverse(str2.begin(),str2.end());
	
	for(int i = 0 ; i < str2.size();i++)
		if(str1[i] != str2[i])
			return false;
	return true;
}
vector <string> NounReform::makePlural(vector <string> nouns) {
	for(int i = 0 ; i < nouns.size(); i++)
	{
		if(isOkay(nouns[i],"s") || isOkay(nouns[i],"z") || isOkay(nouns[i],"x") || isOkay(nouns[i],"ch") || isOkay(nouns[i],"sh"))
		nouns[i] = nouns[i] + "es";
		else if(isOkay(nouns[i],"ay") || isOkay(nouns[i],"ey") || isOkay(nouns[i],"iy") || isOkay(nouns[i],"oy") || isOkay(nouns[i],"uy"))
		nouns[i] = nouns[i] + "s";
		else if(isOkay(nouns[i],"y"))
		{
			nouns[i][nouns[i].size()-1] = 'i';
			nouns[i] = nouns[i] + "es";
		}
		else
			nouns[i] = nouns[i] + "s";
	}
	return nouns;
}	


double test0() {
	string t0[] = {"box", "church", "elephant", "stereo"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NounReform * obj = new NounReform();
	clock_t start = clock();
	vector <string> my_answer = obj->makePlural(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"boxes", "churches", "elephants", "stereos" };
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
	string t0[] = {"tray", "key", "enemy", "baby"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NounReform * obj = new NounReform();
	clock_t start = clock();
	vector <string> my_answer = obj->makePlural(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"trays", "keys", "enemies", "babies" };
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
	string t0[] = {"a", "s", "oy", "y", "yy"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	NounReform * obj = new NounReform();
	clock_t start = clock();
	vector <string> my_answer = obj->makePlural(p0);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	string t1[] = {"as", "ses", "oys", "ies", "yies" };
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
	
	if (!errors)
		cout <<"You're a stud (at least on the example cases)!" <<endl;
	else
		cout <<"Some of the test cases had errors." <<endl;
}

//Powered by [KawigiEdit] 2.0!
