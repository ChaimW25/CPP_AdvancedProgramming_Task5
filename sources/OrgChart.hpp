

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
#include<bits/stdc++.h>


using namespace std;

namespace ariel {
//template<typename T>
class OrgChart {
public:
    OrgChart();

    ~OrgChart();


    OrgChart& add_root(string s);

    OrgChart& add_sub(string s, string str);
    void print();

    friend ostream& operator<< (ostream& output,  OrgChart& orgChart);

    struct Node {
        public:
        string m_value;
        // bool bo;
        Node *m_next;

        Node(string &v, Node *n)
                : m_value(v), m_next(n) {
        }
    };

    Node *m_first;
    Node* ite;
    int  size=0;
    // vector<list<Node*>> adj;  


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
        ite=m_first;
        while (ite->m_next!=nullptr) {
		    ite=ite->m_next;
		    // cout << val;
	    }
        // ite->m_next=new Node(str,nullptr);
        // return *this;
        return iterator{nullptr};
    }


    // iterator begin_level_order() {
    //     // return &(m_first->m_value);
    //     string s=this->m_first->m_value;
    //     vector<bool> visited;
    //     visited.resize(size,false);
    
    //     // Create a queue for BFS
    //     list<string> queue;
    
    //     // Mark the current node as visited and enqueue it
    //     visited.at(s) = true;
    //     queue.push_back(s);
    
    //     while(!queue.empty())
    //     {
    //         // Dequeue the oldest vertex from queue and print it
    //         s = queue.front();
    //         cout << s << " ";
    //         //removes the oldest vertex
    //         queue.pop_front();
    
    //         // Get all adjacent vertices of the dequeued
    //         // vertex s. If a adjacent has not been visited,
    //         // then mark it visited and enqueue it
    //         for (auto adjecent: adj[s])
    //         {
    //             if (!visited[adjecent])
    //             {
    //                 visited[adjecent] = true;
    //                 queue.push_back(adjecent);
    //             }
    //         }
    //         return iterator{m_first};
    // }

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

    // prints BFS traversal from a given source s
//     iterator& BFS(Node* s)
// {
//     // Mark all the vertices as not visited
//     vector<Node*> visited;
//     visited.resize(size,false);
//     iterator{s};//temp;// temp;

//     // Create a queue for BFS
//     list<Node*> queue;
 
//     // Mark the current node as visited and enqueue it
//     visited[s] = true;
//     s->bo=true;

//     queue.push_back(s);
 
//     while(!queue.empty())
//     {
//         // Dequeue the oldest vertex from queue and print it
//         s = queue.front();
//         cout << s << " ";
//         //removes the oldest vertex
//         queue.pop_front();
 
//         // Get all adjacent vertices of the dequeued
//         // vertex s. If a adjacent has not been visited,
//         // then mark it visited and enqueue it
//         for (auto adjecent: adj[s])
//         {
//             if (adjecent.bo)
//             {
//                 visited[adjecent] = true;
//                 queue.push_back(adjecent);
//                 iterator.pointer_to_current_node=iterator.pointer_to_current_node-<m_next;
//             }
//         }
//     }
//     return iterator;
// }

// void Graph::DFS(int v)
// {
//     // Mark the current node as visited and
//     // print it
//     visited[v] = true;
//     cout << v << " ";
 
//     // Recur for all the vertices adjacent
//     // to this vertex
//     list<int>::iterator i;
//     for (i = adj[v].begin(); i != adj[v].end(); ++i)
//         if (!visited[*i])
//             DFS(*i);
// }
};

}