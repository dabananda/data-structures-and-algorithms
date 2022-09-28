#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* next;
};

// inserting node as head
void push_front(Node** head_ref, int data) {
	Node* new_node;
	new_node = new Node();
	new_node->data = data;
	new_node->next = (* head_ref);
	(* head_ref) = new_node;
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
	push_front(&head, 5);
	print(head);

	return 0;
}
