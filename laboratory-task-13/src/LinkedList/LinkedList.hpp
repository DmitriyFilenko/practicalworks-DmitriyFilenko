#ifndef LIST_HPP
#define LIST_HPP

#include <cstdlib>
#include <iostream>
#include <stdexcept>


class LinkedList {
    struct Node {
        int value;
        Node* next;
        Node(int Rhs, Node* nextRhs = NULL) {
            value = Rhs;
            next = nextRhs;
        }
    };
private:
    Node* head;
public:

/*===========================================================================
============================ Конструкторы ===================================
===========================================================================*/

    LinkedList();
    LinkedList(const LinkedList&);

/*===========================================================================
============================== Деструктор ===================================
===========================================================================*/

   virtual ~LinkedList();

/*===========================================================================
========================== Добавление элемента ==============================
===========================================================================*/

    void addValue(int);

/*===========================================================================
=========================== Удаление элемента ===============================
===========================================================================*/

    int popValue();

/*===========================================================================
=========================== Метод копирования ===============================
===========================================================================*/

    LinkedList& Clone(const LinkedList&);

/*===========================================================================
========================= Вставка с сортировкой =============================
===========================================================================*/

    void insertSorted(int val);


/*===========================================================================
============================== Вывод списка =================================
===========================================================================*/

    void print();

/*===========================================================================
============================ Поиск по элементу ==============================
===========================================================================*/

    int search(int);

/*===========================================================================
=================== Проход по списку с изменением значений ==================
===========================================================================*/

    void modifyValuesManually();

/*===========================================================================
===================== Удаление элемента по значению =========================
===========================================================================*/

    void removeByValue(int val);

/*===========================================================================
======================= Добавление элемента в начало ========================
===========================================================================*/

    void addValueAtBegin(int val);

/*===========================================================================
=============================== Очистка списка ==============================
===========================================================================*/

    void clear();
};


#endif // LIST_HPP