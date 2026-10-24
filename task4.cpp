#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {7, 14, 21, 32, 45};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it = *it - 3;
    }

    cout << "Список після зменшення кожного елемента на 3: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
