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

    void handle_circle(){
        head->prev = tail;
        tail->next = head;
    }

    bool insertFront(int value) {
        if(size >=k )
            return false;
        if(head== nullptr){
            head = tail = new Node(value);
        }else{
            Node *tmp = new Node(value);
            tmp->next = head;
            head->prev = tmp;
            head = tmp;

            // add circular
            handle_circle();
        }
        size++;
        return true;
    }

    bool insertLast(int value) {
        if(size >=k )
            return false;
        if (tail== nullptr)
            return insertFront(value);

        Node *tmp = new Node(value);
        tail->next = tmp;
        tmp->prev = tail;
        tail = tmp;
        handle_circle();
        size++;
        return true;
    }

    bool deleteFront() {
        if(size <= 0)
            return false;
        if(head==tail){
            delete head;
            head = tail = nullptr;
        }else{
            Node* tmp= head;
            head = head->next;
            delete tmp;
            handle_circle();
        }
        size--;
        return true;
    }

    bool deleteLast() {
        if(size <= 0)
            return false;
        if(head==tail){
            delete head;
            head = tail = nullptr;
        }else{
            Node* tmp= tail;
            tail = tail->prev;
            delete tmp;
            handle_circle();
        }
        size--;
        return true;
    }

    int getFront() {
        return head== nullptr ? -1 : head->val;
    }

    int getRear() {
        return tail== nullptr ? -1 : tail->val;
    }

    bool isEmpty() {
        return size <= 0;
    }

    bool isFull() {
        return size >= k;
    }
};