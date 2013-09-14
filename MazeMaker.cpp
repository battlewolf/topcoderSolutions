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
#include <queue>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
class MazeMaker {
public:
	bool isSafe(vector<string> &maze, int i, int j)
	{
		int R = maze.size();
		int C = maze[0].size();
		return (i >= 0 && i < R && j >= 0 && j < C && maze[i][j] != 'X');
	}
	
	int longestPath(vector <string>, int, int, vector <int>, vector <int>);
	
};

int MazeMaker::longestPath(vector <string> maze, int startRow, int startCol, vector <int> moveRow, vector <int> moveCol) 
{
	int d_size = moveRow.size();
	vvi jump_dists(maze.size(), vector<int> (maze[0].size(), -9999));
	
	queue<pair<int, int> > Q;
	Q.push(pair<int,int> (startRow, startCol));
	jump_dists[startRow][startCol] = 0; // the starting node
	
	while( !Q.empty() )
	{
		pair<int, int> pi = Q.front();
		Q.pop();
		int x = pi.first, y = pi.second;
		for(int i = 0; i < d_size; i++)
		{
			int xd = x + moveRow[i], yd = y + moveCol[i];
			if(isSafe(maze, xd, yd) && jump_dists[xd][yd] == -9999) //this is to ensure we don't repeat the nodes
			{
				jump_dists[xd][yd] = jump_dists[x][y] + 1;
				Q.push(pair<int, int> (xd, yd));
				
			}
			
		}
	}
	
	
	
	int m = -(1<<20);
	for(int i = 0; i < maze.size(); i++)
	{
		for(int j = 0; j < maze[i].size(); j++)
		{
			if(jump_dists[i][j] == -9999 && maze[i][j] == '.') return -1;
			else if(jump_dists[i][j] != -9999) m = max(m, jump_dists[i][j]);
		}
	}
	
	return m;
	
	
}


double test0() {
	string t0[] = {"...",
 "...",
 "..."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 1;
	int t3[] = {1,0,-1,0};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {0,1,0,-1};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	MazeMaker * obj = new MazeMaker();
	clock_t start = clock();
	int my_answer = obj->longestPath(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 3;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test1() {
	string t0[] = {"...",
 "...",
 "..."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 1;
	int t3[] = {1, 0, -1, 0, 1, 1, -1, -1};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {0, 1, 0, -1, 1, -1, 1, -1};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	MazeMaker * obj = new MazeMaker();
	clock_t start = clock();
	int my_answer = obj->longestPath(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 2;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test2() {
	string t0[] = {"X.X",
 "...",
 "XXX",
 "X.X"};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 1;
	int t3[] = {1, 0, -1, 0};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {0, 1, 0, -1};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	MazeMaker * obj = new MazeMaker();
	clock_t start = clock();
	int my_answer = obj->longestPath(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test3() {
	string t0[] = {".......",
 "X.X.X..",
 "XXX...X",
 "....X..",
 "X....X.",
 "......."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 5;
	int p2 = 0;
	int t3[] = {1, 0, -1, 0,-2, 1};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {0, -1, 0, 1, 3, 0};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	MazeMaker * obj = new MazeMaker();
	clock_t start = clock();
	int my_answer = obj->longestPath(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 7;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test4() {
	string t0[] = {"......."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 0;
	int t3[] = {1, 0, 1, 0, 1, 0};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {0, 1, 0, 1, 0, 1};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	MazeMaker * obj = new MazeMaker();
	clock_t start = clock();
	int my_answer = obj->longestPath(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = 6;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
		cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
		return -1;
	}
	else {
		cout <<"Match :-)" <<endl <<endl;
		return (double)(end-start)/CLOCKS_PER_SEC;
	}
}
double test5() {
	string t0[] = {"..X.X.X.X.X.X."};
	vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
	int p1 = 0;
	int p2 = 0;
	int t3[] = {2,0,-2,0};
	vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
	int t4[] = {0,2,0,-2};
	vector <int> p4(t4, t4+sizeof(t4)/sizeof(int));
	MazeMaker * obj = new MazeMaker();
	clock_t start = clock();
	int my_answer = obj->longestPath(p0, p1, p2, p3, p4);
	clock_t end = clock();
	delete obj;
	cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
	int p5 = -1;
	cout <<"Desired answer: " <<endl;
	cout <<"\t" << p5 <<endl;
	cout <<"Your answer: " <<endl;
	cout <<"\t" << my_answer <<endl;
	if (p5 != my_answer) {
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
