#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T get_square(T a) {
    cout << "\n[In]: " << a << "\n";
    cout << "[OUT]: ";
    return a * a;
}

template <typename T>
void get_vectors_square(vector<T>& vec) {
    cout << "\n[In]: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";
    cout << "[OUT]: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] * vec[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> vec = { -1, 4, 8 };
    std::cout << get_square(4);
    get_vectors_square(vec);
}