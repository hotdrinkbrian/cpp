#include "h.h" 

int main()
{
    //Racket vt80;
    yonex vt80;
    vt80.length = 675;
    vt80.setWeight(85);
    //vt80.weight = 85;
    vt80.setYear(2011);
    cout << vt80.length << endl;
    cout << vt80.getWeight() << endl; 
    //cout << vt80.getYear() << endl; 

    yonex *vt70 = new yonex;
    yonex *vt80_pt;
    vt80_pt = &vt80;
    cout << vt70->getYear() << endl; 
    cout << vt80_pt->getYear() << endl; 

    delete vt70;
    cout << vt80.getYear() << endl;

    return 0;
}
