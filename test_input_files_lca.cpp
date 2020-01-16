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

ifstream in;

const int max_test_files = 21;



//test_specific contents

void check() {
	int n, q, tmp;
	in >> n;
	while (in >> tmp) {
		n--;
		if (n == 0)
			break;
	}
	assert(n == 0);
	in >> q;
	q *= 3;
	while (in >> tmp) q--;
	assert(q == 0);

}
//end of test_specific contents


int main()
{
	srand(time(NULL));
	for (int i = 0; i < max_test_files; i++) {
		string file_name = "input/input" + to_string(i, 2) + ".txt";
		in.open(file_name.c_str(), std::ifstream::in);
		assert(in.is_open());
		check();
		in.close();
		assert(!in.is_open());
	}
	return 0;
}