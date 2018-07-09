#ifndef _H_H_
#define _H_H_


#include<iostream>

using namespace std;

class Racket
{
    public:
        int length;
	    int year;
        void setWeight(int pp);
        int getWeight();
    private:
	    int weight;	
};

class yonex : public Racket
{
    private:
        string area;

    public:
	    int getYear();
	    void setYear(int pp);
	    yonex();
	    ~yonex();
};



void Racket::setWeight(int pp)
{
    weight = pp;
}

int Racket::getWeight()
{
    return weight;
}

yonex::yonex()
{
    year = 2018;
    cout << "yy created!" << endl;
}

yonex::~yonex()
{
    cout << "yy deleted!" << endl;
}

int yonex::getYear()
{
    return year;
}

void yonex::setYear(int pp)
{
    year = pp;
}
















#endif