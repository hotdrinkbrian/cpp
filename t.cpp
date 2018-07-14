#include "h.h" 
//#include<vector>

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
    //static
    cout << vt80.getNumRac() << endl;
    cout << yonex::getNumOfRac() << endl;
    //virtual
    victor ti70;
    vt80.slogan();
    ti70.slogan();

    //pointer
    yonex *vt70 = new yonex;
    yonex *vt80_pt;
    vt80_pt = &vt80;
    cout << vt70->getYear() << endl; 
    cout << vt80_pt->getYear() << endl; 
    //static
    cout << vt80.getNumRac() << endl;
    cout << vt70->getNumOfRac() << endl;
    cout << Racket::getNumOfRac() << endl;

    //template
    player<int> LD;
    LD.setHeight(178);
    cout << LD.getHeight() << endl;
    player<string> MMT;
    MMT.setHeight("173");
    cout << MMT.getHeight() << endl;

    //* method??
    ti70.set_secret(9900);
    cout << *ti70.get_secret() << endl;
    int * var_secret = ti70.get_secret();
    cout << var_secret << endl;

    //vector
    vector <int> vv;
    vv.push_back(6);
    vv.push_back(7);
    vv.push_back(8);
    cout << vv[0] << endl;
    //interator
    vector<int>::iterator itrtr;
    for (itrtr = vv.begin(); itrtr != vv.end(); ++itrtr)
    {
        //cout << *itrtr << endl;
        int &ww = *itrtr;
        cout << ww << endl;
    }


    delete vt70;
    cout << vt80.getYear() << endl;

    return 0;
}
