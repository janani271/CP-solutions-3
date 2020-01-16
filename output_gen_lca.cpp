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

const int maxn = 1e6 + 1, logN = 22;
int arr[maxn], pows[logN], dp[maxn][logN], maxpow[maxn];
int q, n;


void solve() {
	in >> n;
	for (int i = 1; i <= n; i++) {
		in >> arr[i];
		dp[i][0] = arr[i];
	}
	for (int i = 1; i < logN; i++) {
		int shift = 1 << (i - 1);
		for (int j = 1; j <= n; j++) {
			dp[j][i] = dp[j][i - 1];
			if ((j + shift) <= n)
				dp[j][i] = max(dp[j][i], dp[j + shift][i - 1]);
		}
	}
	in >> q;
	while (q--) {
		int l, r, x;
		in >> l >> r >> x;
		int st = l, mini = INT_MAX;
		ll shift=1;
		while (st <= r) {
			int en = min((ll)r, st + shift - 1);
			int p = maxpow[en - st + 1];
			mini = min(mini, max(dp[st][p], dp[en - pows[p] + 1][p]));
			st = en + 1;
			shift *= x;
		}
		out << mini << endl;
	}
}
//end of test_specific contents



void precalc() {
	pows[0] = 1;
	for (int i = 1; i < logN; i++) pows[i] = 2 * pows[i - 1];
	maxpow[0] = 0;
	maxpow[1] = 0;
	for (int i = 2; i < maxn; i++) {
		int p = maxpow[i - 1];
		if (pows[p + 1] <= i)
			maxpow[i] = p + 1;
		else
			maxpow[i] = p;
	}
}

int main()
{
	srand(time(NULL));
	precalc();
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