#include <string>
#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
#include "sources/OrgChart.cpp"
using namespace ariel;

int main(){
    OrgChart org;
    org.add_root("Haim");
    org.add_sub("Haim","Willinger");
    org.add_sub("Willinger","King");
    org.add_sub("King","Shlomo");


    cout<<org.size<<endl;
    cout<<org.m_first->m_value <<endl;
    cout<<org.m_first->m_next->m_value<<"\n";
    cout<<org.m_first->m_next->m_next->m_value<<"\n";
    cout<<org.m_first->m_next->m_next->m_next->m_value<<"\n";


    auto e = org.end();
	for (
		auto it = org.begin(); 
		// Stk<string>::iterator it = strStk.begin(); 
		it!=e; 
		++it
		)
	{
		const string& val = *it;
		cout <<"size:"<< it->size() << "\n";
		cout <<"word:"<< *it<<"\n";
	}

    // org.print;
    cout<<org<<endl;

    // struct Node n1,n2;
    // org.m_first->m_next=n2;
    // cout<<"Hi"<<endl;
    // struct Node n1;
    // org.m_first= Node("Haim",nullptr) n1;
    // Node("Willinger",&n1);

//     OrgChart org;
//     org.add_root("1");
//     org.add_sub("1","2");

//     for (Node* val: org) {
//     cout << val.m_value << " ";
//     cout << org.size;
// }
//     vector<string> vec= (org.BFS());
// 	for (const string& val: strStk) {
// 		cout << val.size() << " ";
// 		cout << val;
// 	}


    return 0;
}