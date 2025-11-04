#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    srand(time(0));


    int n;
    cout << "Введите размер списка: ";
    cin >> n;


    list<int> numbers;


    for (int i = 0; i < n; i++) {
        numbers.push_back(rand() % 100);
    }
    cout << "\nИсходный список: ";

    for (int num : numbers) cout << num << " ";
    numbers.sort();
    cout << "\n\nСписок после сортировки: ";

    for (int num : numbers) cout << num << " ";
    cout << endl;


    return 0;
}
