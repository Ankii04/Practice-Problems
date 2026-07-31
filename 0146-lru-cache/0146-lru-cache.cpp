class Node{
public:
    int key,value;
    Node* prev;
    Node* next;
    Node(int k,int v){
        key=k;
        value=v;
        prev=NULL;
        next=NULL;
    }
};

class LRUCache {
public:
    unordered_map<int,Node*> mpp;
    Node* head;
    Node* tail;
    int capacity;

    LRUCache(int capacity) {
        this->capacity=capacity;
        head=new Node(-1,-1);
        tail=new Node(-1,-1);
        head->next=tail;
        tail->prev=head;
    }

    void deleteNode(Node* node){
        Node* p=node->prev;
        Node* n=node->next;
        p->next=n;
        n->prev=p;
    }

    void insertAfterHead(Node* node){
        node->next=head->next;
        node->prev=head;
        head->next->prev=node;
        head->next=node;
    }

    int get(int key) {
        if(!mpp.count(key))
            return -1;

        Node* node=mpp[key];
        deleteNode(node);
        insertAfterHead(node);
        return node->value;
    }

    void put(int key,int value) {
        if(mpp.count(key)){
            Node* node=mpp[key];
            node->value=value;
            deleteNode(node);
            insertAfterHead(node);
        }
        else{
            if(mpp.size()==capacity){
                Node* node=tail->prev;
                deleteNode(node);
                mpp.erase(node->key);
                delete node;
            }

            Node* node=new Node(key,value);
            insertAfterHead(node);
            mpp[key]=node;
        }
    }
};