#include "vector"
#include "list"

template<typename T>
class BinaryTreeNode {
    T value;
    BinaryTreeNode *left, *right;
public:
    void setLeft(BinaryTreeNode<T> *node);
    void setRight(BinaryTreeNode<T> *node);
    void removeLeft();
    void removeRight();
    std::vector<T> preOrder();
    std::vector<T> inOrder();
    std::vector<T> postOrder();
};

template<typename T>
std::vector<T> BinaryTreeNode<T>::preOrder() {
    if (this == nullptr) return;

}

template<typename T>
class BinaryTree {
    BinaryTreeNode<T> *root;
    int nodeNum;
public:
    int size();
    void preOrder();
    void inOrder();
    void postOrder();
};

template<typename T>
int BinaryTree<T>::size() {
    return this->nodeNum;
}

template<typename T>
void BinaryTree<T>::preOrder() {

}
