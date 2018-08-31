#include <iostream>

using namespace std;

int main()
{
    string studfirstname, studlastname;
    int  counter, numstudent, studexam1, studexam2, studscore, studaverage, studidnumber;
    char grade;
    cout<< "enter number of student: ";
    cin>> numstudent;
    cout<< endl;
      for(int counter = 1; counter <= numstudent; counter++)
        {

       cout<< "enter student id number: ";
        cin >>studidnumber;
       cout<< "enter student first name: ";
       cin>> studfirstname;
       cout<< "enter student last name: ";
       cin >> studlastname;
       cout<< "enter student first exam score: ";
       cin >> studexam1;
       cout<< "enter student last name: ";
       cin >> studexam2;
        }
        studscore= studexam1 + studexam2;
        studaverage= studscore/2;

          cout << "student final grade:" << studaverage << endl;
          if (studaverage>=80)
            cout<< " your grade is = A";
          else if(studaverage>=75)
            cout << " your grade is = B+";
          else if(studaverage>=70)
            cout << "your grade is = B";
          else if(studaverage>=65)
            cout << "your grade is = C+";
          else if(studaverage>=60)
            cout << "your grade is = C";
          else if(studaverage>=55)
            cout << "your grade is = D+";
          else if(studaverage>=50)
            cout << "your grade is = D";
          else if(studaverage>=40)
            cout << "your grade is = E";
          else if(studaverage>=30)
            cout << "your grade is = F";


    return 0;
}
