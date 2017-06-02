#include<iostream>
#include<vector>
using namespace std;

 class widget{
public:
    virtual int f(){return 1;}
    };
class gadget: public widget{
    virtual int f(){return 2;}
    };
class gizmo: public widget{
    virtual int f(){return 3;}
    };
void do_it(widget *w){
    cout << w->f()<<" ";}
int main(){
    vector<widget *> widgets;
    widget wid;
    gadget gad;
    gizmo giz;
    widgets.push_back(&wid);
    widgets.push_back(&gad);
    widgets.push_back(&giz);
    for(size_t i=0; i<widgets.size(); i++)
        do_it(widgets[i]);
    }
