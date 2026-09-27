class LinkedList {
    struct Node{
        Node(int val, Node* next) : val{val}, next{next}{};
        int val{};
        Node* next{nullptr};
    };
public:
    LinkedList() {

    }

    int get(int index) {
        Node* current = head;
        int iter{0};
        while(current != nullptr)
        {
            if(iter == index)
            {
                return current->val;
            }
            current = current->next;
            iter++;
        }
        return -1;
    }

    void insertHead(int val) {
        if(head == nullptr)
        {
            head = new Node(val, nullptr);
            tail = head;
        }
        else{
            Node* oldHead = head;
            head = new Node(val, oldHead);
        }
    }
    
    void insertTail(int val) {
            if( tail != nullptr)
            {
                Node* newTail = new Node(val, nullptr);
                tail->next = newTail;
                tail = newTail;
            }
            else{
            tail = new Node(val, nullptr);
            head = tail;
            }
    }

    bool remove(int index) {
        Node* current = head;
        Node* prev = nullptr;

        int iter{0};
        while(current != nullptr)
        {
            if(iter == index)
            {
                if(prev != nullptr)
                {
                    prev->next = current->next;
                    delete current;
                    if(prev->next == nullptr)
                    {
                        tail = prev;
                    }
                    return true;
                }
                if(current->next == nullptr)
                {
                    delete current;
                    head = nullptr;
                    tail = nullptr;
                    return true;
                }
                head = current->next;
                delete current;
                return true;


            }
            prev = current;
            current = current->next;
            iter++;
        }
        return false;
    }

    vector<int> getValues() {
        std::vector<int> values{};
        Node* current = head;
        while(current != nullptr)
        {
            values.push_back(current->val);
            current = current->next;
        }
        return values;
    }
private:
Node* head{nullptr};
Node* tail{nullptr};
};
