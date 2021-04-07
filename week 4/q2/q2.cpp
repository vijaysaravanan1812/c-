#include <iostream>
#include <stdlib.h>

using namespace std;
namespace NewNsOne
{
	int p = 4;
	int funct(int q);
}

namespace NewNsTwo
{

	int r = 10;
	int funct1(int numb);
   	namespace InNewNsTwo
	{
            int p = 40;
            int r = 20;
			double tst = 20.9456;
    }
}
 int  r = 2000 ;

int main()
{
  	int r = 200;
	cout<<"NewNsOne::p is "<<(NewNsOne::p)<<endl;
	cout<<"NewNsTwo::r is "<<(NewNsTwo::r)<<endl;
	cout<<"NewNsTwo::InNewNsTwo::tstis"<<(NewNsTwo::InNewNsTwo::tst)<<endl;

	using namespace NewNsTwo;

	cout<<"Global variable is "<< ::r << endl;
	cout<<"NewNsTwo::r is "<< NewNsTwo::r << "\t" << r << endl;

	using namespace NewNsTwo::InNewNsTwo;

	cout<<"InNewNsTwo::p is "<< p << "\t" << InNewNsTwo::r << "\t" << endl;
	getchar();
	return 0; 
}


