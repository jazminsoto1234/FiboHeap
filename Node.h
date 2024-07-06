//
// Created by Jazmin on 15/06/2024.
//

#ifndef FIBOHEAP_NODE_H
#define FIBOHEAP_NODE_H

template<typename T>
struct Node {
    T data;
    Node<T>* left;
    Node<T>* right; //Es la simulacion de lista doblemente enlazada
    Node<T>* parent; //Tiene un nodo padre en caso de que sea key es null
    Node<T>*child; //Tiene hijos
    int degree = 0; //Tiene un ranking en el cual estp indica el numero de hijo
    bool mark = false; // Este atributo indica si este nodo a perdido uno de los hijos (True)
    Node():left(nullptr), right(nullptr), parent(nullptr), child(nullptr){}
    Node(T data):data(data), left(nullptr), right(nullptr), parent(nullptr), child(nullptr), degree(0){}
    Node(Node<T>* l, Node<T>* r, Node<T>* p, Node<T>* c): left(l), right(r), parent(p), child(c){}
    Node(Node<T>* l, Node<T>* r): left(l), right(r){}

    ~Node(){
        if(child != nullptr){
            Node<T>* start = child;
            Node<T>* current = child;

            //Liberar los hijos de manera recursiva
            do{
                Node<T>* next = current->right;
                delete current;
                current = next;
            }while(current != start);
        }
    }


};


#endif //FIBOHEAP_NODE_H
