#ifndef _H_H_
#define _H_H_


#include<iostream>

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~namespace
namespace chinese{
    string LCW(){ return "Li Zong Wei";}
}
namespace english{
    string LCW(){ return "Lee Chong Wei";}
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~namespace

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~template
template < class B >
class player
{
    private:
        B height;
    public:
        void setHeight( B pp ){ height = pp; };
        B getHeight(){ return height; };
};
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~template

class Racket
{
    public:
        int length;
	    int year;
        static int NumOfRac;
        void setWeight(int pp);
        int getWeight();
        int getNumRac(){ return NumOfRac; };
        static int getNumOfRac(){ return NumOfRac; };
        virtual void slogan(){ cout << "Never settle." << endl; };
    private:
	    int weight;	
};

int Racket::NumOfRac = 0;

class yonex : public Racket
{
    private:
        string area;

    public:
	    int getYear();
        string getArea();
	    void setYear(int pp);
        void setArea(string pp);
	    yonex();
	    ~yonex();
};

class victor : public Racket
{
    private:
        //string area;

    public:
        void slogan(){ cout << "faster." << endl; };
	    //int getYear();
        //string getArea();
	    //void setYear(int pp);
        //void setArea(string pp);
	    //victor();
	    //~victor();
};



void Racket::setWeight(int pp){ weight = pp; }
int Racket::getWeight(){ return weight; }

yonex::yonex()
{
    year = 2018;
    NumOfRac++;
    cout << "yy created!" << endl;
}

yonex::~yonex()
{
    cout << "yy deleted!" << endl;
}

int yonex::getYear(){ return year; }
string yonex::getArea(){ return area; }

void yonex::setYear(int pp){ year = pp; }
void yonex::setArea(string pp){ area = pp; }















#endif