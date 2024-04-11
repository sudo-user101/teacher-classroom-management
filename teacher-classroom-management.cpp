#include <iostream>
using namespace std;
using std::string;
#include <array>
int main() {
   string teachers [] = {"BOB","HAPPY"};
   string teacher;
   int class_number;

   cout << "Enter name: ";
   cin>>teacher;
   for(char &teacher_name_upper : teacher){
      teacher_name_upper = toupper(teacher_name_upper);
   }
   for (string &t : teachers){
    if (teacher == t){
        true;
        cout << "How man leaners do you have?: ";
        cin >> class_number;
        string *ptr = new string [class_number];
        for(int i=0; i< class_number ; i++){
          cout << "Enter name of learner "<< "[" << i+1 << "]: ";
          cin >> ptr[i];
   }
        cout << "----Leaners-----"<< endl;
        for (int i =0 ; i< class_number ; i++){
          cout << "Leaners "<< "[" << i <<"]: " << ptr[i] <<endl;
   }
        cout << teacher << "'s CLASS ROOM";

        delete [] ptr;
        break;
    }
      else{
   cout << "Teacher: " << teacher << " not found in system" << endl;
   break;

   }

   }




    return 0;
}
