

#include <iostream>
using namespace std;

class LinkedList {
public:
	class Node {
	public:
		int data;
		Node* next;
		Node(int d)
		{
			data = d;
			next = NULL;
		}
	};

	Node* head;

	void push(int data)
	{
		Node* new_node = new Node(data);
		new_node->next = head;
		head = new_node;
	}

	void display()
	{
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << endl;
			temp = temp->next;
		}
	}

	void deleteNthNodeFromEnd(Node* head, int n)
	{
		Node* fast = head;
		Node* slow = head;

		for (int i = 0; i < n; i++) {
			fast = fast->next;
		}

		if (fast == NULL) {
			head = head->next;
			return;
		}

		while (fast->next != NULL) {
			fast = fast->next;
			slow = slow->next;
		}
		slow->next = slow->next->next;
		return;
	}
};

int main()
{

	LinkedList* l = new LinkedList();

	l->push(5);
	l->push(4);
	l->push(3);
	l->push(2);
	l->push(1);
	cout << " Linked List Before deletion"
		<< endl;
	l->display();

	cout << "Delete nth Node from the End"<< endl;
	l->deleteNthNodeFromEnd(l->head, 2);

	cout << "Linked List after Deletion"<< endl;
	l->display();

	return 0;
}

