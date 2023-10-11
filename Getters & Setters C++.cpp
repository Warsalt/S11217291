//Getters & Setters

#include <iostream>
#include <string>

using namespace std;

class Movie{
	private:
		string rating;  //only code inside Movie class can access rating. ie. main func can't.
	public: 
		string title;
		string director;
		
		
		Movie(string aTitle, string aDirector, string aRating)
		{
			title=aTitle;
			director = aDirector;
			setRating(aRating);
		}
		//Setter?
		void setRating(string aRating)
		{
			if(aRating =="G"||aRating=="PG"|| aRating=="PG-13"||aRating =="R"||aRating=="NR"){
				rating =aRating;
			}else{
				rating ="NR";
			}
		}
		string getRating()
		{
			return rating;
		}
};

int main()
{
	Movie avengers("The Avengers","Joss Whedon","cat");
	
	avengers.setRating("Dog");
	
	cout <<avengers.getRating();
	

return 0;
}
