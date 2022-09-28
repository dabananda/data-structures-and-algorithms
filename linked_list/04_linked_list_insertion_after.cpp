#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void push_after(Node* previous_node, int new_data) {
	if(previous_node == NULL) {
		cout << "Previous node is NULL\n";
		return;
	}
	Node* new_node;
	new_node->data = new_data;
	new_node->next = previous_node->next;
	previous_node->next = new_node;
}

void print(Node* current_node) {
	while(current_node != NULL) {
		cout << current_node->data << " ";
		current_node = current_node->next;
	}
	cout << endl;
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
	push_after(second, 40);
	print(head);

	return 0;
}
