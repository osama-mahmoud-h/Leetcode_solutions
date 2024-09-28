
struct Node {
    int val;
    Node* prev;
    Node* next;

     Node(int val) : val(val) {
         prev = next = nullptr;
     }
};

class MyCircularDeque {
private:
    int size, k;
    Node *q;
    Node *head, *tail;
public:
    MyCircularDeque(int k) {
        this->k = k;
        this->size = 0;
        head = tail = nullptr;
    }
    
    bool insertFront(int value) {
        if(isFull())
            return false;
        if(head== nullptr){
            head = tail = new Node(value);
        }else{
            Node *tmp = new Node(value);
            tmp->next = head;
            head->prev = tmp;
            head = tmp;
        }
        size++;
        return true;
    }

    bool insertLast(int value) {
        if(isFull())
            return false;
        if (tail== nullptr)
            return insertFront(value);

        Node *tmp = new Node(value);
        tail->next = tmp;
        tmp->prev = tail;
        tail = tmp;
        size++;
        return true;
    }

    bool deleteFront() {
        if(isEmpty())
            return false;
        if(head==tail){
            delete head;
            head = tail = nullptr;
        }else{
            Node* tmp= head;
            head = head->next;
            delete tmp;
        }
        size--;
        return true;
    }

    bool deleteLast() {
        if(isEmpty())
            return false;
        if(head==tail){
            delete head;
            head = tail = nullptr;
        }else{
            Node* tmp= tail;
            tail = tail->prev;
            delete tmp;
        }
        size--;
        return true;
    }

    int getFront() {
        return isEmpty() ? -1 : head->val;
    }

    int getRear() {
        return isEmpty() ? -1 : tail->val;
    }

    bool isEmpty() {
        return size <= 0;
    }

    bool isFull() {
        return size >= k;
    }
};