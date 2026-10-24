#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {7, 14, 21, 32, 45};

    int minVal = numbers.front();
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it < minVal) {
            minVal = *it;
        }
    }
    cout << "Мінімальний елемент: " << minVal << endl;

    cout << "Список у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
