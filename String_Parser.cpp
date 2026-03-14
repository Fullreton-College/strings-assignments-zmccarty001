#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // For parsing lines
using namespace std;

void parseCSV(const string& fileName);

int main() { 
   parseCSV("students.csv");

   return 0;
}
void parseCSV(const string& fileName) {
   ifstream studentsFile(fileName);
   string line;

   while (getline(studentsFile, line)) {
      stringstream ss(line);
      string name;
      string age;
      string initial;
      string isStudent;
      string grade;
      
      
      getline(ss, name, ' ');
      getline(ss, age, ' ');
      getline (ss, initial, ' ');
      getline (ss, isStudent, ' ');
      getline (ss, grade, ' ');

      cout<<name<<endl;
      cout<<age<<endl;
      cout<<initial<<endl;
      cout<<isStudent<<endl;
      cout<<grade<<endl;
      cout<<endl;
   }
   studentsFile.close();

   
}