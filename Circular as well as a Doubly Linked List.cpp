#include <iostream>
using namespace std;

// ----------------------- DOUBLY LINKED LIST -----------------------
class DoublyLinkedList {
    struct Node {
        int data;
        Node* prev;
        Node* next;
        Node(int val) : data(val), prev(NULL), next(NULL) {}
    };

    Node* head;

public:
    DoublyLinkedList() : head(NULL) {}

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        cout << "Inserted " << val << " at beginning.\n";
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        cout << "Inserted " << val << " at end.\n";
    }

    // Insert after a specific node
    void insertAfter(int key, int val) {
        Node* temp = head;
        while (temp && temp->data != key)
            temp = temp->next;
        if (!temp) {
            cout << "Node " << key << " not found!\n";
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next)
            temp->next->prev = newNode;
        temp->next = newNode;
        cout << "Inserted " << val << " after " << key << ".\n";
    }

    // Insert before a specific node
    void insertBefore(int key, int val) {
        if (!head) return;
        if (head->data == key) {
            insertAtBeginning(val);
            return;
        }
        Node* temp = head;
        while (temp && temp->data != key)
            temp = temp->next;
        if (!temp) {
            cout << "Node " << key << " not found!\n";
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = temp;
        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        temp->prev = newNode;
        cout << "Inserted " << val << " before " << key << ".\n";
    }

    // Delete a specific node
    void deleteNode(int key) {
        if (!head) {
            cout << "List is empty!\n";
            return;
        }
        Node* temp = head;
        if (temp->data == key) {
            head = temp->next;
            if (head)
                head->prev = NULL;
            delete temp;
            cout << "Deleted node " << key << ".\n";
            return;
        }
        while (temp && temp->data != key)
            temp = temp->next;
        if (!temp) {
            cout << "Node not found!\n";
            return;
        }
        if (temp->next)
            temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        delete temp;
        cout << "Deleted node " << key << ".\n";
    }

    // Search a node
    void search(int key) {
        Node* temp = head;
        int pos = 1;
        while (temp) {
            if (temp->data == key) {
                cout << "Node " << key << " found at position " << pos << ".\n";
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Node " << key << " not found.\n";
    }

    // Display
    void display() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "List: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// ----------------------- CIRCULAR LINKED LIST -----------------------
class CircularLinkedList {
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(NULL) {}
    };

    Node* head;

public:
    CircularLinkedList() : head(NULL) {}

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
        cout << "Inserted " << val << " at beginning.\n";
    }

    // Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
            return;
        }
        Node* temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
        cout << "Inserted " << val << " at end.\n";
    }

    // Insert after a node
    void insertAfter(int key, int val) {
        if (!head) return;
        Node* temp = head;
        do {
            if (temp->data == key) {
                Node* newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
                cout << "Inserted " << val << " after " << key << ".\n";
                return;
            }
            temp = temp->next;
        } while (temp != head);
        cout << "Node " << key << " not found.\n";
    }

    // Delete a specific node
    void deleteNode(int key) {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        Node *curr = head, *prev = NULL;
        do {
            if (curr->data == key)
                break;
            prev = curr;
            curr = curr->next;
        } while (curr != head);

        if (curr->data != key) {
            cout << "Node not found.\n";
            return;
        }

        if (curr == head && curr->next == head) { // single node
            head = NULL;
        } else if (curr == head) {
            Node* temp = head;
            while (temp->next != head)
                temp = temp->next;
            head = head->next;
            temp->next = head;
        } else {
            prev->next = curr->next;
        }
        delete curr;
        cout << "Deleted node " << key << ".\n";
    }

    // Search
    void search(int key) {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        int pos = 1;
        do {
            if (temp->data == key) {
                cout << "Node " << key << " found at position " << pos << ".\n";
                return;
            }
            temp = temp->next;
            pos++;
        } while (temp != head);
        cout << "Node " << key << " not found.\n";
    }

    // Display
    void display() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "List: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

// ----------------------- MAIN MENU -----------------------
int main() {
    DoublyLinkedList dll;
    CircularLinkedList cll;
    int choice, val, key, listType;

    while (true) {
        cout << "\n----- MAIN MENU -----\n";
        cout << "1. Use Doubly Linked List\n";
        cout << "2. Use Circular Linked List\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> listType;

        if (listType == 3) break;

        cout << "1. Insert at beginning\n2. Insert at end\n3. Insert after node\n4. Insert before node (DLL only)\n5. Delete a node\n6. Search a node\n7. Display\n8. Back to main menu\n";

        while (true) {
            cout << "\nEnter operation choice: ";
            cin >> choice;
            if (choice == 8) break;

            switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                (listType == 1 ? dll.insertAtBeginning(val) : cll.insertAtBeginning(val));
                break;
            case 2:
                cout << "Enter value: ";
                cin >> val;
                (listType == 1 ? dll.insertAtEnd(val) : cll.insertAtEnd(val));
                break;
            case 3:
                cout << "Enter key and value: ";
                cin >> key >> val;
                (listType == 1 ? dll.insertAfter(key, val) : cll.insertAfter(key, val));
                break;
            case 4:
                if (listType == 1) {
                    cout << "Enter key and value: ";
                    cin >> key >> val;
                    dll.insertBefore(key, val);
                } else
                    cout << "Not available for Circular Linked List.\n";
                break;
            case 5:
                cout << "Enter key to delete: ";
                cin >> key;
                (listType == 1 ? dll.deleteNode(key) : cll.deleteNode(key));
                break;
            case 6:
                cout << "Enter key to search: ";
                cin >> key;
                (listType == 1 ? dll.search(key) : cll.search(key));
                break;
            case 7:
                (listType == 1 ? dll.display() : cll.display());
                break;
            default:
                cout << "Invalid choice.\n";
            }
        }
    }

    cout << "Program exited.\n";
    return 0;
}
