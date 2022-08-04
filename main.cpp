#include <iostream>
#include "List/LinkedList.h"

int main() {
    LinkedList<int> list;
    auto *node = new LinkedListNode<int>(1);
    list += node;
    std::cout << list.size() << std::endl;
    return 0;
}
