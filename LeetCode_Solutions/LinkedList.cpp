template <typename T>
struct node {
	node* next = nullptr;
	T data;
};

template <typename T>
class LinkedList {

private:
	node<T>* head = nullptr;
	node<T>* tail = nullptr;

public:
	// Insert new node at the end of the linked list
	void insert(T data) {

		node<T> newNode;
		newNode.data = data;

		if (tail != nullptr) {
			tail->next = &newNode;
		}
		if (head == nullptr) {
			head = &newNode;
			tail = &newNode;
		}
	}

	// Print out elements in linked list
	T removeTail();
	T removeHead();
};

