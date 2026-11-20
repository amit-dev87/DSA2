class Node{
public:
    int val;
    Node* next;
    int minimum;
    Node(int x , int mini){
        val = x;
        next = nullptr;
        minimum = mini;
    }
};
class MinStack {
private:
    int size;
    Node* head;
    int minimum;
public:
    MinStack() {
        head = nullptr;
    }
    void push(int value) {
        int mini = value;
        if (head != nullptr) {
            mini = min(head->minimum, value);
        }
        Node * newNode = new Node(value , mini);
        newNode -> next = head;
        head = newNode;
       // mini = min(mini , value);
    }
    
    void pop() {
        if (head == nullptr) return;
        Node * temp = head;
        head = head -> next;
        temp -> next = nullptr;
        delete temp;
        //mini = INT_MAX;
        // Node * temp1 = head;
        // while(temp1  != nullptr){
        //     mini = min(mini , temp1 -> val);
        //     temp1 = temp1 -> next;
        // }
    }
    
    int top() {
        if(head == nullptr) return -1;
        return head -> val;
    }    
    int getMin() {
        if(head == nullptr) return -1;
        return head -> minimum;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */