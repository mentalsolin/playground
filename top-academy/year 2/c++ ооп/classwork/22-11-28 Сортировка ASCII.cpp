#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<char>& values) {
    for (size_t idx_i = 0; idx_i + 1 < values.size(); ++idx_i) {
        for (size_t idx_j = 0; idx_j + 1 < values.size() - idx_i; ++idx_j) {
            if (values[idx_j + 1] < values[idx_j]) {
                swap(values[idx_j], values[idx_j + 1]);
            }
        }
    }
}

int main()
{
    vector<char>ascii{ 'a', 'g', 'c', 'b', '4', '2'};

    BubbleSort(ascii);

    for (size_t i = 0; i < 6; i++)
    {
        cout << ascii[i] << endl;
    }
}
