# Практична робота №3. Реалізація двозв'язних списків. Контейнер list

**Виконав:** студент групи 4СОМ Кланцатий Костянтин (Варіант №3)

**Тема: Реалізація списків. Двозв’язний список.**

**Мета:** *ознайомитися з концепцією двозв’язного списку та контейнером std::list у C++, навчитися ефективно використовувати його для виконання базових операцій вставки, видалення та пошуку елементів.*

## Варіант №3

**Початковий список:** `7, 14, 21, 32, 45`

| № | Завдання |
| :-: | :--- |
| **1** | Переберіть список за допомогою ітератора та виведіть усі його елементи. |
| **2** | Додайте 3 на початок і 55 у кінець списку. Видаліть перший елемент. |
| **3** | Виведіть список у зворотному порядку. |
| **4** | Зменште кожен елемент списку на 3. |
| **5** | Видаліть перший елемент, який ділиться на 7. Перед кожним парним елементом вставте 0. |
| **6** | Знайдіть мінімальний елемент та виведіть список у зворотному порядку. |

---

### Завдання №1

**Код:**
```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {7, 14, 21, 32, 45};

    cout << "Елементи списку: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
```

**Результат:**
```text
Елементи списку: 7 14 21 32 45
```

<img width="1417" height="481" alt="image" src="https://github.com/user-attachments/assets/ab418733-da1e-4a9d-ae48-e45d1612c4f9" />

---

### Завдання №2

**Код:**
```cpp
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
```

**Результат:**
```text
Список після змін: 7 14 21 32 45 55
```

<img width="1390" height="578" alt="image" src="https://github.com/user-attachments/assets/57fc8789-0843-400b-b9be-1a1afb683d84" />

---

### Завдання №3

**Код:**
```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numbers = {7, 14, 21, 32, 45};

    cout << "Елементи списку у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
```

**Результат:**
```text
Елементи списку у зворотному порядку: 45 32 21 14 7
```

<img width="1536" height="482" alt="image" src="https://github.com/user-attachments/assets/42b5b86a-e5b4-4321-9615-7735ac6c0d2d" />

---

### Завдання №4

**Код:**
```cpp
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
```

**Результат:**
```text
Список після зменшення кожного елемента на 3: 4 11 18 29 42
```

<img width="1627" height="577" alt="image" src="https://github.com/user-attachments/assets/8e458113-f38f-46fe-a557-98d89a490018" />

---

### Завдання №5

**Код:**
```cpp
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
```

**Результат:**
```text
Список після видалення та вставки: 0 14 21 0 32 45
```

<img width="1530" height="737" alt="image" src="https://github.com/user-attachments/assets/df647806-4a1a-4157-8419-17ef11e442c9" />

---

### Завдання №6

**Код:**
```cpp
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
```

**Результат:**
```text
Мінімальний елемент: 7
Список у зворотному порядку: 45 32 21 14 7
```

<img width="1442" height="680" alt="image" src="https://github.com/user-attachments/assets/30320575-6a0a-4c1f-b4b5-2874885a4926" />

### Висновок
У ході виконання практичної роботи було опановано концепцію двозв'язного списку та практичні навички роботи з контейнером std::list у мові C++, зокрема використання ітераторів для прямого й зворотного обходу елементів через begin(), end(), rbegin() та rend(). Опрацьовано базові операції маніпуляції даними: додавання й видалення елементів із початку й кінця списку за допомогою методів push_front(), push_back() і pop_front(), модифікацію значень через розіменування ітератора, а також точкове вилучення (erase()) та вставку (insert()) елементів за визначеними умовами. Додатково реалізовано алгоритми обчислення та пошуку характеристик списку, таких як визначення мінімального елемента, що підтвердило зручність використання ітераторів для ефективного керування динамічними структурами даних.
