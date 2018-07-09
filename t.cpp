#include "h.h" 

int main()
{

	cout << "hello" << endl;
	//Racket dd;
	yonex dd;
        dd.length = 2;
        dd.weight = 89;
	dd.setNo(7777);
	cout << dd.length << endl;
        cout << dd.weight << endl; 
        //cout << dd.getNo() << endl; 

	yonex *yy = new yonex;
	yonex *yy1;
	yy1 = &dd;
	cout << yy->getNo() << endl; 
	cout << yy1->getNo() << endl; 
	//yy->getNo()

        delete yy;
	
        cout << dd.getNo() << endl;

	return 0;
}
