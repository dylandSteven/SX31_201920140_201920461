#ifndef ABS_H
#define ABS_H


#include <functional>
#include <string>
#include <fstream>

using namespace std;

template <typename T, typename R = T>
class Bst {
    struct Node {
        T       elem;
        Node* left;
        Node* right;

        Node(T elem, Node* left = nullptr, Node* right = nullptr)
            : elem(elem), left(left), right(right) {}
    };

    using lmbKey = function<R(T)>;
    using lmbP = function<void(T)>;

    Node* root;
    int     len;
    lmbKey  key;
public:
    Bst(lmbKey key = [](T a) {return a; }) : root(nullptr), len(0), key(key) {}
    ~Bst() { destroy(root); }

    void add(T elem) { add(root, elem); }

    void inOrder(lmbP proc) { inOrder(root, proc); }

    T find(R attr) {
        auto node = find(root, attr);
        return node == nullptr ? nullptr : node->elem;
    }
    T greatest() {
        if (root == nullptr) {
            return nullptr;
        }
        else {
            auto node = greatest(root);
            return node->elem;
        }
    }
    void remove(R attr) {
        Node*& node = find(root, attr); // NO USAR AUTO par atipos referencia
        if (node == nullptr) return;
        if (node->left == nullptr) {
            Node* aux = node;
            node = node->right;
            delete aux;
        }
        else {
            Node*& cand = greatest(node->left);
            node->elem = cand->elem;
            Node* aux = cand;
            cand = cand->left;
            delete aux;
        }
    }


private:
    void destroy(Node* node) {
        if (node != nullptr) {
            destroy(node->left);
            destroy(node->right);
            delete node;
        }
    }
    void add(Node*& node, T elem) {
        if (node == nullptr) {
            node = new Node(elem);
            ++len;
        }
        else if (key(elem) < key(node->elem)) {
            add(node->left, elem);
        }
        else if (key(elem) >= key(node->elem)) {
            add(node->right, elem);
        }
    }
    void inOrder(Node* node, lmbP proc) {
        if (node != nullptr) {
            inOrder(node->right, proc);
            proc(node->elem);
            inOrder(node->left, proc);
        }
    }

    Node*& find(Node*& node, R attr) {
        if (node == nullptr) {
            return dummynull;
        }
        else if (attr == key(node->elem)) {
            return node;
        }
        else if (attr < key(node->elem)) {
            return find(node->left, attr);
        }
        else {
            return find(node->right, attr);
        }
        // return find((attr < key(node->elem)? node->left: node->right, attr);
    }
    Node*& greatest(Node*& node) {
        return node->right == nullptr ? node : greatest(node->right);
    }

    // Mandrakeada
    Node* dummynull = nullptr;
};

#endif // ABS_H
