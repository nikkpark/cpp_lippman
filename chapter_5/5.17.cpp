#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1{0, 1, 1, 2}, v2{0, 1, 1, 2, 3, 5, 8};
	auto size = (v1.size() < v2.size()) ? v1.size() : v2.size();

	for (decltype(v1.size()) i = 0; i != size; ++i) {
		if (v1[i] != v2[i]) {
			cout << "False." << endl;
			return 0;
		}
	}

	cout << "True" << endl;
	return 0;
}
		
		
