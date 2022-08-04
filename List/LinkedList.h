template<typename T>
class LinkedListNode {
public:
    T value;
    LinkedListNode *next;
    LinkedListNode();
    explicit LinkedListNode(T v);
    LinkedListNode(LinkedListNode<T> const &node);
    LinkedListNode(T v, LinkedListNode<T> *next);
    void append(LinkedListNode<T> *node);
};

template<typename T>
class LinkedList {
    LinkedListNode<T> *head;
public:
    LinkedList();
    void operator +=(LinkedListNode<T> *node);
    void operator +=(LinkedList<T> list);
    void operator +=(T value);
    LinkedListNode<T> *last();
    int size();
};
