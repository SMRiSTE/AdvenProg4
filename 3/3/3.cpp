#include <iostream>
#include <vector>

class functor {
private:
	int sum = 0;
	int count = 0;
	std::vector<int> arr;
public:
	functor(std::vector<int>& vec) {
		this->arr = vec;
	}
	void operator()() {
		for (int i = 0; i < arr.size(); i++) {
			if (arr[i] % 3 == 0) {
				count++;
				sum += arr[i];
			}
			else {
				continue;
			}
		}
	}

	int get_sum() {
		return sum;
	}

	int get_count() {
		return count;
	}
};

int main()
{
	std::vector<int> arr = { 4, 1, 3, 6, 25, 54 };
	functor fu(arr);
	std::cout << "[IN]: ";
	for (int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
	}
	fu();
	std::cout << "\n[OUT]: get_sum() = " << fu.get_sum();
	std::cout << "\n[OUT]: get_count() = " << fu.get_count();
}