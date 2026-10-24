#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {7, 14, 21, 32, 45};

    numbers.push_front(3);
    numbers.push_back(55);
    numbers.pop_front();

    cout << "Список після змін: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
