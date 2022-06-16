

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

#include "sources/OrgChart.cpp"
using namespace ariel;

int main() {
  OrgChart organization;
  organization.add_root("CEO")
      .add_sub("CEO", "CTO")         // Now the CTO is subordinate to the CEO
      .add_sub("CEO", "CFO")         // Now the CFO is subordinate to the CEO
      .add_sub("CEO", "COO")         // Now the COO is subordinate to the CEO
      .add_sub("CTO", "VP_SW")      // Now the VP Software is subordinate to the CTO
      .add_sub("COO", "VP_BI");     

  cout << organization << endl; 

    cout << "level order: " << endl;
    for (auto it = organization.begin_level_order(); it != organization.end_level_order(); ++it) {
        cout << (*it) << " " ;
    } // should print: CEO CTO CFO COO VP_SW VP_BI
    cout << endl;

    cout << "reverse level order: " << endl;
    for (auto it = organization.begin_reverse_order(); it != organization.reverse_order(); ++it) {
        cout << (*it) << " " ;
    } // should print: VP_SW VP_BI CTO CFO COO CEO
    cout << endl;

    cout << "preorder: " << endl;
    for (auto it=organization.begin_preorder(); it!=organization.end_preorder(); ++it) {
        cout << (*it) << " " ;
    }  // should print: CEO CTO VP_SW CFO COO VP_BI
    cout << endl;

    cout << "level order sizes: " << endl;
    // demonstrate the arrow operator:
    for (auto it = organization.begin_level_order(); it != organization.end_level_order(); ++it) {
        cout << it->size() << " " ;
    } // should print: 3 3 3 3 5 5
    cout << endl;
}