#include <iostream>
#include <string>

using namespace std;

class Cat{
	private:
		string name;
		string color;
		string favorite_toy;
	public:
		void print_cat()
		{
			cout <<"Name: "<<name <<endl;
			cout <<"Color: "<<color <<endl;
			cout <<"Favourite Toy"<<favorite_toy <<endl;
		}
		Cat()
		{
			name="Unknown";
			color="Unknown";
			favorite_toy="Unknown";
		}
		Cat(string n)
		{
			name = n;
			color="unknown";
			favorite_toy="unkown";
		}
		Cat(string n, string c, string ft="Laser Pointer")
		{
		
		}
};

Cat::cat(string n, string c, string ft)
{
		name =n;
		color=c;
		favorite_toy=ft;
}

int main(){
	
	//Object 1
	Cat cat1();
	cout <<"Cat 1..."<<endl;
	
	cout <<endl;
	
	//Object 2
	Cat cat2("Spot");
	cout <<"Cat 2..."<<endl;
	cat2.print_cat();
	cout <<endl;
	
	//Object 3
	Cat cat3("Garfield","Orange");
	cout <<"Cat 3..."<<endl;
	cat3.print_cat();
	cout <<endl;
	
	return 0;
}
