#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;



const int MAX_SIZE = 10;


class Student{
	public:
		
		//Constructor
		Student()
		{
			id="";
			marks=0;
			grade =' ';	
				}
				//Destructor
		~Student()
		{
			cout <<"Hasta la Vista Baby! "<<endl;
		}
				
		//Getting ID
		void setID(string x)
		{
			id=x;
		}
		string getID()
		{
			return id;
		}
		//Gettin Marks
		void setMark(int y){
			marks=y;
		}
		int getMark(){
			return marks;
		}
		void setGrade(char z){
			grade = z;
		}
		char getGrade(){
			return grade;
		}
	private:
		string id;
		int marks;
		char grade;
};

//Prototypes of functions
char determine_grade(int smarks);
void discard_line(ifstream &in);
//*New* Function.
void print_students_records(Student allStudents[], int size);

int main(){
	//Array Class
	Student allStudents[7];
	
    
    int total_records;
    int choice;
    char response;

//file input part of code
    ifstream input;
    cout<<"This program determines the grades of students."<<endl;

    input.open("students.txt",ios::in);

    if(!input){
		cerr<<"File could not be opened"<<endl;
		system("PAUSE");
		exit(1);
	}
    
    discard_line(input);

    total_records = 0;
	string id;
	int mark;
	int grade;

    while(input>>id>>mark){
    	allStudents[total_records].setID(id);
    	allStudents[total_records].setMark(mark);
        total_records++;
    }

    for (int i = 0; i < total_records; i++){
        grade = allStudents[i].getMark();
		char marks = determine_grade(grade);
		 allStudents[i].setMark(marks);
    
    }

    input.close();

    print_students_records (allStudents, total_records );
    
    system("PAUSE");
    return 0;  
}

////*New* Function 1: Print Student records

void print_students_records(Student allStudents[], int size){
    cout<<"\n\nstudents' records"<<endl<<endl;
    for (int i = 0; i < size; i++){
    	
        cout <<"id: "<<allStudents[i].getID()<<", marks: " << allStudents[i].getMark() <<", grade: "<<allStudents[i].getGrade() <<endl;
    }
    cout<<endl;
}
/*
//Chatgpt
void print_students_records(Student allStudents[], int size) {
    cout << "\n\nStudents' records" << endl << endl;
    for (int i = 0; i < size; i++) {
        cout << "ID: " << allStudents[i].getID() << ", Marks: " << allStudents[i].getMark() << ", Grade: " << allStudents[i].getGrade() << endl;
        //                                       ^^^^^^^^^^^^^^^^^^^^^^
    }
    cout << endl;
}*/



//Function 2: Determine student grade.
char determine_grade(int smarks){
     char sgrade;

     if (smarks >= 80)
        sgrade = 'A';
     else if(smarks >= 65)
        sgrade = 'B';
     else if(smarks >= 50)
        sgrade = 'C';
     else
        sgrade = 'D';

     return sgrade;
}
//Function 3: Determine Grade.
void discard_line(ifstream &in)
{
    char c;

    do
   	    in.get(c);
    while (c!='\n');
}
