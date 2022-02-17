#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double m, s, g;
	cin >> m >> s >> g;

	double a, b;
	cin >> a >> b;

	double l, r;
	cin >> l >> r;

	auto friskus = (m / g) + (l / a);
	auto latmask = (m / s) + (r / b);

	cout << (friskus < latmask ? "friskus" : "latmask");

	return 0;
}