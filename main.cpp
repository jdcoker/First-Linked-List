#include "Classroom.h"
int main(void)
{
Classroom room;

room.addStudent("A25123","Izzie Cline","Mathematics");
room.addStudent("A23452","Bridget McCann","Computer Science");
room.addStudent("A45120","Isa Powell","History");
room.addStudent("A56009","Nick Miller","Computer Science");
room.addStudent("A65980","Alannah Wilks","Literature");
room.addStudent("A45018","Montana Gates","Biology");
room.addStudent("A86003","Janet Newman","Nursing");

cout << "Print the list of students in alphabetical order using Print()";
room.print();


cout<<"\n\nRemove Janet Newman from the list using removeStudent (string id)\n"<<endl;
room.removeStudent("A86003");

cout<<"Print Janet Newman information (you should give error message since Janet Newman is already removed)"<<endl;
room.print("A86003");

cout<<"\nPrint the list of students in alphabetical order using Print()";
room.print();

return 0;
}
