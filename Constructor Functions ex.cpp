//Constructor usage
#include <iostream>
#include <string>
using namespace std;

class Book {
	
	public:
		string title;
		string author;
		int pages;	
		
		Book(){
			title ="no title";
			author="no author";
			pages = 0;
		}
		Book(string aTitle, string aAuthor, int aPages){                       //constructor~special function that will get called whenever object created
			title=aTitle; 
			author=aAuthor;
			pages=aPages;
		}
		
};


int main()
{
	//manually inputing titles in this example is very tedious. Factoring in n objects.
	//constructor can intitialize values.
	
 	
	Book book1("Harry Potter","JK Rowling",500);


	Book book2("Lord of the Rings","Tolkien",700);
	
	Book book3;
	

	cout <<book3.title;
	
return 0;	
	
}


