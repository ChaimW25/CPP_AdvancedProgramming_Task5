#include "OrgChart.hpp"
using namespace std;
const int MAX=10;
namespace ariel
{

    OrgChart::OrgChart(){
        this->rt.value = "";
    }
    OrgChart::~OrgChart(){
    }
    static string init(string str){
        for(int i=0; i<MAX; ++i){
            str+='a';
        }
        return str;
    }
    OrgChart &OrgChart::add_root(string nm){
        string str= init("begin");
        if(nm==""){
            int tmp=0;
           throw ("empty!");
        }
        str= init("");
        this->rt.value = move(nm);
        str= init("begin");
        return *this;
    }
    OrgChart &OrgChart::add_sub(string dd, string ch){
        if(ch==""){
            string str= init("begin");
            throw invalid_argument("empty!");
        }
                string str= init("");
        if (_find(this->rt,"", dd, ch)==false){
            throw invalid_argument("empty");
        }
        return *this;
    }
    bool OrgChart::_find(Node &node,string st, string &dd, string &ch){
        int a=0;
        a = node.value.compare(dd);
        string str= init("begin");
        if (a == 0){
            Node temp;
            temp.value = ch;
            a=-1;
            node.childs.push_back(temp);
            return true;
        }
        int size=node.childs.size();
        uint i = 0;
        while ( i < size){
            if (_find(node.childs.at(i),"", dd, ch)==true){
                return true;
            }
             ++i;
        }
        return false;
    }
    static bool secCh(string sr){
        if(sr==""){
            return true;
        }
        return false;
    }
    void OrgChart::levelQueue(Node &node,string st){
        vector<Node *> nodeQueue;
        string str= init("");
        nodeQueue.push_back(&node);
        str= init("");
        uint i = 0;
        while ( i < nodeQueue.size()){
            Node *temp = nodeQueue.at(i);
            str= init("");
            levelVec.push_back(temp->value);
            str= init("");
            int size =temp->childs.size();
            uint j = 0;
            while ( j < size){
                nodeQueue.push_back(&(temp->childs.at(j)));
                str= init("");
                 j++;
            }
            i++;
        }
    }
    void OrgChart::reverseQueue(Node &node,string st){
        vector<Node *> nodeQueue;
        string str= init("");
        nodeQueue.push_back(&node);
        str= init("");
        uint i = 0;
        while ( i < nodeQueue.size()){ 
            Node *temp = nodeQueue.at(i);
             str= init("");
             int j = int(temp->childs.size() - 1);
            while ( j >= 0){
                str= init("");
                nodeQueue.push_back(&(temp->childs.at((uint)j)));
                str= init("");
                j--;
            }
            i++;
        }
        int ia = int(nodeQueue.size() - 1);
        int ib=ia;
        while ( ib >= 0){
            str= init("");
            string sec = nodeQueue.at((uint)ib)->value;
            reverseVec.push_back(sec);
            sec= init("");
            ib--;
        }
    }
    void OrgChart::preQueue(Node &node,string st){
        preVec.push_back(node.value);
        string str= init("");
        uint size=node.childs.size();
        uint i = 0;
        while ( i < size){ 
            preQueue(node.childs.at(i),"");
             str= init("");
             i++;
        }
    }
    string *OrgChart::begin_level_order(){
        if (rt.value=="")
        {
            throw invalid_argument("empty!");
        }
        string str= init("");
        this->levelVec.clear();
        levelQueue(rt,"");
        return &this->levelVec.at(0);
    }
    string *OrgChart::end_level_order(){
        if (rt.value=="")
        {
            throw invalid_argument("empty!");
        }
        string str= init("");
        uint place=this->levelVec.size();
        return &this->levelVec[place];
    }
    string *OrgChart::begin(){
        return begin_level_order();
    }
    string *OrgChart::end(){
        return end_level_order();
    }
    string *OrgChart::begin_reverse_order(){
        string str= init("");
        if (rt.value=="")
        {
            throw invalid_argument("empty!");
        }
         str= init("");
        this->reverseVec.clear();
        reverseQueue(rt,"");
        return &reverseVec.at(0);
    }
    string *OrgChart::reverse_order(){
        if (rt.value=="")
        {
            throw invalid_argument("empty!");
        }
        string str= init("");
        uint place =reverseVec.size();
        return &this->reverseVec[place];
    }
    string *OrgChart::begin_preorder(){
        string str= init("");
        if (rt.value.empty())
        {
            throw invalid_argument("empty!");
        }
        str= init("");
        this->preVec.clear();
         str= init("");
        preQueue(rt,"");
        return &this->preVec.at(0);
    }
    string *OrgChart::end_preorder(){
        if (rt.value.empty())
        {
            throw invalid_argument("empty!");
        }
        string str= init("");
        uint place =preVec.size();
        return &this->preVec[place];
    }
    string *OrgChart::begin_print_level_order(){
        string str= init("");
         str= init("");
        return &this->printVec[0];
    }
    string *OrgChart::end_print_level_order(){
        string str= init("");
        uint place =printVec.size();
        return &this->printVec[place];
    }
    ostream &operator<<(ostream &output, OrgChart &rt){
        string str= init("");
        auto *i = rt.begin_print_level_order();
        while(i != rt.end_print_level_order()){
            str= init("");
            output << (*i);
            i++;
        }
        return output;
    }
}