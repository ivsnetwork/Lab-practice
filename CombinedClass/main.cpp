#include <simplecpp>

struct Node {
    int data;
    Node* next;
};

// Insert at end
Node* insert(Node* head, int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) return newNode;

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Merge two sorted linked lists (descending order)
Node* mergeLists(Node* a, Node* b) {
    //Write only inside this

}

// Print first k elements
void printK(Node* head, int k) {
    //Write only inside this 
}

main_program {
    int n;
    cin >> n;

    Node* head1 = NULL;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        head1 = insert(head1, x);
    }

    int m;
    cin >> m;

    Node* head2 = NULL;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        head2 = insert(head2, x);
    }

    int k;
    cin >> k;

    Node* merged = mergeLists(head1, head2);
    printK(merged, k);
}