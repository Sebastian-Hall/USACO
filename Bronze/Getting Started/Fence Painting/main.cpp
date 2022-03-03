// Fence Painting

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double triple;


int main() {
	ios::sync_with_stdio(false);
	fstream fout("paint.out", ios::out), fin("paint.in", ios::in);

	int a = 0, b = 0, c = 0, d = 0;
	fin>>a>>b>>c>>d;

	if(c > b || a > d) fout<<(b - a) + (d - c)<<endl;
	else fout<<(b - a) + (d - c) - (min(b, d) - max(a, c))<<endl;

	return 0;
}
