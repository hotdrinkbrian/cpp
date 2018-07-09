#ifndef _H_H_
#define _H_H_


#include<iostream>

using namespace std;

class Racket
{
    public:
        int length;
	int no;
    private:
	//int no;	
};

class yonex : public Racket
{
    private:
        //int No;
    public:
        int weight;
	int getNo();
	void setNo(int pp);
	yonex();
	~yonex();
};

yonex::yonex()
{
    no = 2017;
    cout << "yonex is being created!" << endl;
}

yonex::~yonex()
{
    cout << "yonex is being deleted!" << endl;
}

int yonex::getNo()
{
    return no;
}

void yonex::setNo(int pp)
{
    no = pp;
}

#endif
