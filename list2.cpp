#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void addNode(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void sortList(Node* head) {
    if (!head) return;
    bool swapped;
    do {
        swapped = false;
        Node* current = head;
        while (current->next) {
            if (current->data > current->next->data) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int n;
    cout << "Введите размер списка: ";
    cin >> n;
    Node* head = nullptr;
    for (int i = 0; i < n; i++) addNode(head, rand() % 100);
    cout << "\nИсходный список: ";
    printList(head);
    sortList(head);
    cout << "\nСписок после сортировки: ";
    printList(head);
    return 0;
}
