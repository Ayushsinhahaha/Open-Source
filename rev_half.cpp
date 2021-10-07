// C++ code to reverse half part of linked list
// contributed by Danish

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

// Function to insert node in list
void Insert(Node **ref, int val)
{
	Node *newNode = new Node();
	newNode->data = val;
	newNode->next = *ref;
	*ref = newNode;
}

// Finction to print the list
void printList(Node *node)
{
	while (node)
	{
		cout << node->data << " ";
		node = node->next;
	}
	cout << "\n";
}

// Function to reverse the half list
void RevHalf(Node *node)
{
	Node *first = node;
	Node *second = node;

	// Find middle of list
	while (first && first->next && first->next->next)
	{
		first = first->next->next;
		second = second->next;
	}

	Node *prev = NULL, *curr = second->next, *nxt = NULL;

	// Reversing the half portion
	while (curr != NULL)
	{
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}

	second->next = prev;
}

int main()
{
	Node *head = NULL; // List initialisation
	Insert(&head, 7);
	Insert(&head, 6);
	Insert(&head, 5);
	Insert(&head, 4);
	Insert(&head, 3);
	Insert(&head, 2);
	Insert(&head, 1);
	Insert(&head, 0);

	cout << "Initial List: ";
	printList(head);

	RevHalf(head);

	cout << "After Reversing Half List: ";
	printList(head);

	return 0;
}