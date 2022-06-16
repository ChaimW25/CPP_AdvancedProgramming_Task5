#pragma once
#include <iostream>
#include <algorithm>
#include <vector>
#include <list> 
#include <string>
#include <deque>
#include <list> 

using namespace std;
namespace ariel
{
        class Node
    {
        public:
            int size;
            string value;
            vector<string> strChilds;
            vector<Node> childs;
    };
    
        class OrgChart
    {
        public:
            vector<string> levelVec;
            vector<string> printVec;
            vector<string> reverseVec;
            vector<string> preVec;
            Node rt;
            OrgChart();
            OrgChart(OrgChart& org) = default;
            ~OrgChart();
            OrgChart& operator=(const OrgChart& org) = default;
            OrgChart &add_root(string name);
            OrgChart &add_sub(string father, string son);
            friend ostream &operator<<(ostream &out,OrgChart &root);
            bool _find(Node &node,string str, string &father, string &son);
            void levelQueue(Node &node,string str);
            void reverseQueue(Node &node,string str);
            void preQueue(Node &node,string str);
            string* begin();
            string* end();
            string* begin_level_order();
            string* end_level_order();
            string* begin_print_level_order();
            string* end_print_level_order(); 
            string* begin_reverse_order();
            string* reverse_order();
            string* begin_preorder();
            string* end_preorder();
        };
}