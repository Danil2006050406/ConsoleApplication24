#include <iostream>
#include <deque>
#include <Windows.h>
using namespace std;

void extendRight(std::deque<int>& sequence) {
    int size = sequence.size();
    for (int i = 0; i < 48 - size; ++i) {
        int nextElement = sequence[size - 1] + sequence[size - 2] + sequence[size - 3] - 1;
        sequence.push_back(nextElement);
    }
}

void extendLeft(std::deque<int>& sequence) {
    int size = sequence.size();
    for (int i = 0; i < 48 - size; ++i) {
        int prevElement = sequence[2] - sequence[1] - sequence[0] + 1;
        sequence.push_front(prevElement);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    deque<int> sequence = { -13, 0, 10, -4, 6, 11, 12, 28, 50, 89, 166, 304 };

    extendRight(sequence);

    
    extendLeft(sequence);

   
    for (int elem : sequence) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
