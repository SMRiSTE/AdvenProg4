#include <iostream>
#include <vector>

using namespace std;

template <class T>
class arr {
private:
	int cols;
	int rows;
	std::vector<std::vector<T>> arr;
public:
	arr(int a, int b) {
		this->rows = a;
		this->cols = b;
		this->arr.resize(rows, vector<T>(cols));
	}
	std::vector<T>& operator[](int a) {
		return arr[a];
	}

	const std::vector<T>& operator[](int a) const{
		return arr[a];
	}
};

int main()
{
	auto test = arr<int>(2, 3);
	test[1][2] = 4;
	std::cout << test[1][2];
}