#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define x first
#define y second
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI (atan(1)*4)
#define mp make_pair
using namespace std;

string to_string(int num, int dig) {
	string s = "";
	for (int i = 0; i < dig; i++) {
		s += ((num % 10) + '0');
		num /= 10;
	}
	reverse(s.begin(), s.end());
	return s;
}

ofstream out;

const int max_test_files = 20;



//test_specific contents
const int maxn = 1e4;
void generate() {
	int n = rand() % maxn + 1;
	out << n << endl;
	set<int> s;
	for (int i = 1; i <= n; i++) {
		int v;
		do {
			v = rand() % INT_MAX;
		} while (s.find(v) != s.end());
		s.insert(v);
		out << v << " ";
	}

}

void strong0() {
	int n = maxn;
	out << n << endl;
	set<int> s;
	for (int i = 1; i <= n; i++) {
		int v;
		do {
			v = rand() % INT_MAX;
		} while (s.find(v) != s.end());
		s.insert(v);
		out << v << " ";
	}

}

void strong1() {
	int n = maxn;
	out << n << endl;
	for (int i = 1; i <= n; i++)
		out << i << " ";
}

void strong2() {
	int n = maxn;
	out << n << endl;
	for (int i = n; i >= 1; i--)
		out << i << " ";
}

//end of test_specific contents


int main()
{
	srand(time(NULL));
	for (int i = 0; i < max_test_files; i++) {
		string file_name = "input/input" + to_string(i, 2) + ".txt";
		out.open(file_name.c_str(), std::ofstream::out | std::ofstream::trunc);
		assert(out.is_open());
		if (i == 0)
			strong0();
		else if (i == 1)
			strong1();
		else if (i == 2)
			strong2();
		else
			generate();
		out.close();
		assert(!out.is_open());
	}
	return 0;
}