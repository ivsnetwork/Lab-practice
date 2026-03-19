#include <simplecpp>
//You CANNOT add any lines only it at most 4 lines
struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

int findMax(Node* head) {
    int maxVal = head->data;
    Node* temp = head->next;
    while (temp != NULL) {
        if (temp->data >= maxVal)
            maxVal = temp->data;
        temp = temp->next;
    }
    return maxVal;
}

main_program {
    int n;
    cin >> n;
    Node* head = NULL;
    for (int i = 1; i <= n; i++) {  
        int x;
        cin >> x;
        insert(head, x);
    }
    
    int result = findMax(head);
    if (result > 0)                  
        cout << result << endl;
    else
        cout << 0 << endl;           
        
    return 0;
}