//destructors

#include <iostream> //for clout, cin

using namespace std;

Class Numbers
{
	private:
		int*p;
		int size;
		
	public: //Interface
		//Constructor
		Numbers()
		{
			size=5;
			p=new int[size];
		}
		//Destructor.                  automatically executed when object destroye, beyond scope of object
		~Numbers()
		{
			//place code to clean up after your object.
			delete[] p;
		}
		void set(int 1,)
}


