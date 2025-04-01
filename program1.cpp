#include<iostream>
#include<vector>
#include<string>
using namespace std;
template <typename T>
 class StudentSystem{
    public:
        vector<T>sid;
        vector<T>sname;

        StudentSystem(){
            cout<<"The student details initialized successfully."<<endl;
        }
       ~StudentSystem(){
            cout<<"The student details is destoryed."<<endl;
        }
};
template<typename T>
class Students:public StudentSystem<T>{
    public:

        void studentAdd(){
            int no_student;
            cout<<"Enter the number of students:";
            cin>>no_student;
            
            for(int i=0;i<no_student;i++){
                T stud_id,stud_name;
                cout<<"Enter the Students ID: ";
                cin>>stud_id;
                cout<<"Enter the Students Name: ";
                cin>>stud_name;

                this->sid.push_back(stud_id);
                this->sname.push_back(stud_name);
            }
        }

        void studentDisplayAll(){
            if (this->sid.empty()) 
            {
                cout << "Not students information." << endl;
                
            }
            else{
                cout<< "student information:" << endl;
            }
            for (int i=0;i<this->sid.size();i++)
            {
                cout << "Student ID: " << this->sid[i] << endl 
                     << "Student Name: " << this->sname[i] << endl;
            }
        }

        void studentRemove(){
            T stud_id;
            cout << "Enter Student ID to Remove: ";
            cin >> stud_id;

            for (int i=0;i<this->sid.size();i++)
            {
                if (stud_id==this->sid[i])
                {
                    this->sid.erase(this->sid.begin()+i);
                    this->sname.erase(this->sname.begin()+i); 
                    cout<<"Student ID "<<stud_id<<"removed successfully."<<endl;
                }   
            }
            cout << "Invalid Student ID & No student Details." << endl;      
        }

        void studentSearch(){
            T stud_id;
            cout << "Enter Student ID to Search: ";
            cin >> stud_id;
            for (int i=0;i<this->sid.size();i++) 
            {
                if (stud_id==this->sid[i])
                {
                        cout << endl
                         << "Student Details:" << endl
                         << "Student ID: " << this->sid[i] << endl
                         << "Student Name: " << this->sname[i] << endl;    
                }
            }
            cout << "Student not ID." << endl;
        }
        

};
int main(){
    int choice;
    Students<string> std_show;
    do{
        cout<<"----------The Students Managements System----------"<<endl;
        if(choice==0){
            cout<<"The exit for the exit."<<endl;
        }
        cout<<"Press 1 Add the Students Details."<<endl
            <<"Press 2 Diplay All Students Details."<<endl
            <<"Press 3 Remove the Studnets Details."<<endl
            <<"Press 4 Search for a Students Details."<<endl 
            <<"Press 5  0 for The Exit."<<endl;
        cout<<"Enter your choice:";
        cin>>choice;
        cout<<endl;
       switch (choice)
        {
            case 1:
            std_show.studentAdd();
            break;
            case 2:
            std_show.studentDisplayAll();
            break;
            case 3:
            std_show.studentRemove();
            break;
            case 4:
            std_show.studentSearch();
            break;
            case 0:
            cout<<"Exit the Program."<<endl;
            break;
            default:
            cout<<"Invalid choice."<<endl;
        }
    }while(choice!=0);
       
    return 0;
}