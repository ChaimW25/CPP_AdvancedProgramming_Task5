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

    OrgChart OrgChart::add_root(string s){
        return *this;

    }

    OrgChart OrgChart::add_sub(string s,string str){
        return *this;

    }

    std::ostream& operator<< (std::ostream& output, const OrgChart& orgChart){
        return output;
    }
}