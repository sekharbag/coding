#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = {2, 1, 3, 6, 7, 9, 8};

	int max = *max_element(v.begin(), v.end());
	int min = *min_element(v.begin(), v.end());

	std::cout << min << ", " << max << std::endl;

	return 0;
}