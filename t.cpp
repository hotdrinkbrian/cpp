#include "h.h" 

//int Racket::NumOfRac = 0;

int main()
{
    //namespace
    using namespace english;
    cout << chinese::LCW() << endl;
    cout << LCW() << endl;

    //class
    yonex vt80;
    vt80.length = 675;
    vt80.setWeight(85);
    vt80.setYear(2011);
    vt80.setArea("Japan");
    cout << vt80.length << endl;
    cout << vt80.getWeight() << endl; 
    cout << vt80.getArea() << endl;
    cout << vt80.getNumRac() << endl;

    //pointer
    yonex *vt70 = new yonex;
    yonex *vt80_pt;
    vt80_pt = &vt80;
    cout << vt70->getYear() << endl; 
    cout << vt80_pt->getYear() << endl; 
    cout << vt80.getNumRac() << endl;

    //template
    player<int> LD;
    LD.setHeight(178);
    cout << LD.getHeight() << endl;
    player<string> MMT;
    MMT.setHeight("173");
    cout << MMT.getHeight() << endl;


    delete vt70;
    cout << vt80.getYear() << endl;

    return 0;
}
