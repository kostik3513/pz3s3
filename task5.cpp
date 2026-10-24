#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {7, 14, 21, 32, 45};

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it % 7 == 0) {
            numbers.erase(it);
            break;
        }
    }

    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it % 2 == 0) {
            numbers.insert(it, 0);
        }
    }

    cout << "Список після видалення та вставки: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
