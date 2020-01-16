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
ifstream in;

const int max_test_files = 21;





//test_specific contents

const int maxn = 1e4;
int arr[maxn], p[maxn], ans1, ans2;
int n;

bool comp(int a, int b) {
	return arr[a] < arr[b];
}

int asc() {
	for (int i = 0; i < n; i++)
		p[i] = arr[i];
	bool change = true;
	int val = 0;
	while (change) {
		change = false;
		for (int i = 0; i < (n - 1); i++) {
			if (p[i] > (p[i + 1])) {
				swap(p[i], p[i + 1]);
				val++;
				change = true;
			}
		}
	}
	return val;
}

int dec() {
	for (int i = 0; i < n; i++)
		p[i] = arr[i];
	bool change = true;
	int val = 0;
	while (change) {
		change = false;
		for (int i = 0; i < (n - 1); i++) {
			if (p[i] < (p[i + 1])) {
				swap(p[i], p[i + 1]);
				val++;
				change = true;
			}
		}
	}
	return val;
}

void solve() {
	in >> n;
	for (int i = 0; i < n; i++) {
		in >> arr[i];
	}
	out << asc() << " " << dec();
}
//end of test_specific contents

int main()
{
	srand(time(NULL));
	for (int i = 0; i < max_test_files; i++) {
		string file_name_ip = "input/input" + to_string(i, 2) + ".txt";
		string file_name_op = "output/output" + to_string(i, 2) + ".txt";
		in.open(file_name_ip.c_str(), std::ifstream::in);
		out.open(file_name_op.c_str(), std::ofstream::out | std::ofstream::trunc);
		assert(out.is_open());
		assert(in.is_open());
		solve();
		out.close();
		in.close();
		assert(!in.is_open());
		assert(!out.is_open());
	}
	return 0;
}