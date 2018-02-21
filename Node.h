//
// Created by 51474 on 2/14/18.
//
#ifndef LINKEDLISTSANDNODES_NODE_H
#define LINKEDLISTSANDNODES_NODE_H

template <class T> //generic type
class Node {
public:
    //node constructor
    Node<T>(T _data){
        data = _data;
        next = nullptr;
    }

    //setters
    void setData(T _data){
        data = _data;
    }
    void setNext(Node<T>* _next){
        next = _next;
    }

    //getters
    T getData(){
        return data;
    }
    Node<T>* getNext(){
        return next;
    }

private:
    T data;
    Node<T>* next;
};


#endif //LINKEDLISTSANDNODES_NODE_H

