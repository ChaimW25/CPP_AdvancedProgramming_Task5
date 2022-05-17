

//#ifndef TASK5_ORGCHART_HPP
//#define TASK5_ORGCHART_HPP
//
//#endif //TASK5_ORGCHART_HPP
# pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "string"
#include <iostream>
#include <vector>

using namespace std;

namespace ariel {
//template<typename T>
class OrgChart {
public:
    OrgChart();

    ~OrgChart();


    OrgChart add_root(string s);

    OrgChart add_sub(string s, string str);

    friend ostream& operator<< (ostream& output, const OrgChart& orgChart);

    struct Node {
        string m_value;
        Node *m_next;

        Node(string &v, Node *n)
                : m_value(v), m_next(n) {
        }
    };

    Node *m_first;
    int * size;

    class iterator {

    private:
        Node *pointer_to_current_node;

    public:

        iterator(Node *ptr = nullptr)
                : pointer_to_current_node(ptr) {
        }

        // Note that the method is const as this operator does not
        // allow changing of the iterator.
        // Note that it returns T& as it allows to change what it points to.
        // A const_iterator class will return const T&
        // and the method will still be const
        string &operator*() const {
            //return *pointer_to_current_node;
            return pointer_to_current_node->m_value;
        }

        string *operator->() const {
            return &(pointer_to_current_node->m_value);
        }

        // ++i;
        iterator &operator++() {
            //++pointer_to_current_node;
            pointer_to_current_node = pointer_to_current_node->m_next;
            return *this;
        }

        // i++;
        // Usually iterators are passed by value and not by const& as they are small.
        const iterator operator++(int) {
            iterator tmp = *this;
            pointer_to_current_node = pointer_to_current_node->m_next;
            return tmp;
        }

        bool operator==(const iterator &rhs) const {
            return pointer_to_current_node == rhs.pointer_to_current_node;
        }

        bool operator!=(const iterator &rhs) const {
            return pointer_to_current_node != rhs.pointer_to_current_node;
        }
    };  // END OF CLASS ITERATOR

    iterator begin() {
        // return &(m_first->m_value);
        return iterator{m_first};
    }

    iterator end() {
        // return nullptr;
        return iterator{nullptr};
    }

    iterator begin_level_order() {
        // return &(m_first->m_value);
        return iterator{m_first};
    }

    iterator end_level_order() {
        // return nullptr;
        return iterator{nullptr};
    }

    iterator begin_reverse_order() {
        // return &(m_first->m_value);
        return iterator{m_first};
    }

    iterator reverse_order() {
        // return nullptr;
        return iterator{nullptr};
    }

    iterator begin_preorder() {
        // return &(m_first->m_value);
        return iterator{m_first};
    }

    iterator end_preorder() {
        // return nullptr;
        return iterator{nullptr};
    }

};

}