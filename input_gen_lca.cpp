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
const int maxn = 1e6, maxval = 1e6, maxq = 1e6;
void generate() {
	int n = rand() % maxn + 1;
	out << n << endl;
	for (int i = 1; i <= n; i++)
		out << rand() % maxval + 1 << " ";
	out << endl;
	int q = rand() % maxq + 1;
	out << q << endl;
	while (q--) {
		int l = rand() % n + 1, r = rand() % n + 1;
		if (l > r)
			swap(l, r);
		int x = max(2, min(rand() % n + 1, r - l + 1));
		assert(x >= 2);
		out << l << " " << r << " " << x << endl;
	}
}


void strong() {
	int n = maxn;
	out << n << endl;
	for (int i = 1; i <= n; i++)
		out << rand() % maxval + 1 << " ";
	out << endl;
	int q = maxq;
	out << q << endl;
	for (int i = 1; i <= q; i++) {
		int l = 1, r = n;
		int x = i;
		out << l << " " << r << " " << x << endl;
	}
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
			strong();
		else
			generate();
		out.close();
		assert(!out.is_open());
	}
	return 0;
}