#include <iostream>
#include <cmath>

int main()
{
	int N, k;
	int res = 0;

	std::cin >> N >> k;

	for (int i = 1; i <= N; ++i) {
		res += pow(i, k);
	}
	std::cout << res;
}