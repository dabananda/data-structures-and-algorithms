#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void print(Node* current_node) {
	while(current_node != NULL) {
		cout << current_node->data << " ";
		current_node = current_node->next;
	}
}

int main() {
	Node* head;
	Node* second;
	Node* third;
	head = new Node();
	second = new Node();
	third = new Node();
	head->data = 10;
	head->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30;
	third->next = NULL;
	print(head);

	return 0;
}
