#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "string"
#include <iostream>
#include <vector>
#include "OrgChart.hpp"

using namespace std;

namespace ariel {

    OrgChart::OrgChart(){
        this->m_first= nullptr;
    }
    OrgChart::~OrgChart() {

    }

    OrgChart& OrgChart::add_root(string s){
        size++;
        m_first=new Node(s,nullptr);
        ite=m_first;
        return *this;

    }

    OrgChart& OrgChart::add_sub(string s,string str){
        size++;
        while (ite->m_value!=s) {
		    ite=ite->m_next;
		    // cout << val;
	    }
        ite->m_next=new Node(str,nullptr);
        return *this;

    }

    // void OrgChart::print(){
    //     string str;
    //     auto e = this->end();
    //     for (
    //         auto it = this->begin(); 
    //         // Stk<string>::iterator it = strStk.begin(); 
    //         it!=e; 
    //         ++it
    //         )
    //     {
    //         str+= *it<<"->";
    //     }
    // }


    std::ostream& operator<< (std::ostream& output, OrgChart& orgChart){
        string str;
        str="meeeee";
        auto e = orgChart.end();
        for (
            auto it = orgChart.begin(); 
            // Stk<string>::iterator it = strStk.begin(); 
            it!=e; 
            ++it
            )
        {
            str+= *it<<"->";
        }
        return output<<str;
    }
}