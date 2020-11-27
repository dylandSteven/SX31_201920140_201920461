#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <functional>
#include <fstream>
#include <sstream>
using namespace std;


template <typename T>
class Lista {

    struct Node {
        T elem;
        Node* next;

        Node(T elem, Node* next = nullptr) : elem(elem), next(next) {}

    };


    Node* head;
    int     len;
    function<int(T)> key;

public:



    Lista(function<int(T)> key = [](T a) {return a; }) : head(nullptr), len(0), key(key) {}


    ~Lista() {
        //        while (head != nullptr) {
        //            Node* aux = head;
        //            head = head->next;
        //            delete aux;
        //        }
    }

    int    size() {
        return len;
    }

    bool    empty() {
        return len == 0;
    }

    void    addFirst(T elem) {
        head = new Node(elem, head);
        ++len;
    }


    void    addPos(T elem, int pos) {
        if (pos < 0 || pos > len) return;
        if (pos == 0) {
            addFirst(elem);
        }
        else {
            Node* aux = head;
            for (int i = 1; i < pos; ++i) {
                aux = aux->next;
            }
            aux->next = new Node(elem, aux->next);
            ++len;
        }
    }

    void    addLast(T elem) {
        addPos(elem, len);
    }

    void    removeFirst() {
        if (len > 0) {
            Node* aux = head;
            head = head->next;
            delete aux;
            --len;
        }
    }

    void   removePos(int pos) {
        if (pos < 0 || pos >= len) return;
        if (pos == 0) {
            removeFirst();
        }
        else {
            Node* aux = head;
            for (int i = 1; i < pos; ++i) {
                aux = aux->next;
            }
            Node* aux2 = aux->next;
            aux->next = aux2->next;
            delete aux2;
            --len;
        }
    }

    void    removeLast() {
        removePos(len - 1);
    }

    void    editFirst(T elem) {
        if (len > 0) {
            head->elem = elem;
        }
    }

    void    editPos(T elem, int pos) {
        if (pos < 0 || pos >= len) return;
        Node* aux = head;
        for (int i = 0; i < pos; ++i) {
            aux = aux->next;
        }
        aux->elem = elem;
    }
    void    editLast(T elem) {
        editPos(elem, len - 1);
    }

    T   getFirst() {

        if (len > 0) {
            return head->elem;
        }
        else {
            -.0;
        }

    }

    T   get(int pos) {
        if (pos >= 0 && pos < len) {
            Node* aux = head;
            for (int i = 0; i < pos; ++i) {
                aux = aux->next;
            }
            return aux->elem;
        }
    }

    T&   get_referencia(int pos) {
        if (pos >= 0 && pos < len) {
            Node* aux = head;
            for (int i = 0; i < pos; ++i) {
                aux = aux->next;
            }
            return aux->elem;
        }
    }

    T  getLast() {
        return get(len - 1);
    }

    T& getPorID(int idUsuaruio, function<int(T)> keyIDUsuario) {
        Node* aux = head;
        for (int i = 0; i < len; ++i) {
            if (keyIDUsuario(aux->elem) == idUsuaruio) {
                return aux->elem;
            }
            aux = aux->next;
        }
        return aux->elem;
    }


    void    Show() {
        //        Node* aux = head;
        //        for(int i = 0 ; i < len; i++){
        //                cout << aux->elem << " ";
        //                aux = aux->next;
        //        }
        ////      if(aux == nullptr) cout << "?";
        //        cout << endl;
    }


    int     find( T elem) {
        Node* aux = head;
        for (int i = 0; i < len; ++i) {
            if (key(aux->elem) == key(elem)) {
                return i;
            }
            aux = aux->next;
        }
        return -1;

        return 0;
    }


};

#endif // LISTA_H
