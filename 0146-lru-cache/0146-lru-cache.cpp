class LRUCache {
public:
    class Node {
        public:
        int key, val;
        Node* next;
        Node* prev;

        Node(int k, int v) {
            key = k;
            val = v;
            next = prev = NULL;
        }
    };

    void addNode(Node* newNode) {
        Node* oldNode = head->next;
        head->next = newNode;
        newNode->prev = head;
        newNode->next = oldNode;
        oldNode->prev = newNode;
    }

    void delNode(Node* delNext) {
        Node* oldPrev = delNext->prev;
        Node* oldNext = delNext->next;
        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    unordered_map<int, Node*> m;
    int limit ;
    LRUCache(int capacity) {
         limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (m.find(key) == m.end()) {
            return -1;
        }
        Node* ansNode = m[key];
        int ans = ansNode->val;

        delNode(ansNode);
        m.erase(key);

        addNode(ansNode);
        m[key] = ansNode;
        return ans;
    }

    void put(int key, int value) {
        if (m.find(key) != m.end()) {
            Node* oldNode = m[key];
            m.erase(key);
            delNode(oldNode);
        }
        if (m.size() == limit) {
            m.erase(tail->prev->key);
            delNode(tail->prev);
        }
        Node* newNode = new Node(key, value);
        addNode(newNode);
        m[key] = newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */