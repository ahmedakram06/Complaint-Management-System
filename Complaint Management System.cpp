//#include <iostream>
//#include <vector>
//#include <list>
//#include <string>
//#include <conio.h>
//#include <ctime>
//#include<assert.h>
//using namespace std;
//
//int main()
//{
//	char c;
//	cout << endl << endl << endl << endl << endl;
//	cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//	cout << "\n\t\t\t\t   ........... WELCOME ..........." << endl << endl;
//	cout << "\n\t\t\t\t     ........... TO ..........." << endl << endl;
//	cout << "\n\t\t\t........... COMPLAINT MANAGEMENT SYSTEM ..........." << endl << endl << endl;
//	cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl << endl;
//
//	cout << "Press Enter key to continue" << endl;
//	c = _getch();
//	system("cls");
//	
//	char ch;
//	cout << endl << endl << endl << endl << endl << endl;
//	cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//	cout << "\n\t\t\t\t\tPress T to Login as a TEACHER" << endl << endl
//		<< "\n\t\t\t\t\tPress M to Login as a MANAGER" << endl << endl
//		<< "\n\t\t\t\t\tPress Q to Quit " << endl << endl << endl << endl;
//	cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//
//
//	ch = _getch();
//	system("cls");
//
//		if (ch == 'T' || ch == 't')
//		{
//			cout << endl << endl << endl << endl << endl << endl;
//			cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//			cout << "\n\tNAME : Ahmed Akram" << endl;
//			cout << "\n\tPhone No : 03007653876" << endl
//				<< "\n\tEMAIL : ahmedakram@gmail.com" << endl
//				<< "\n\tPress 1 to COMPLAIN " << endl
//				<< "\n\tPress 2 to REVIEW " << endl << endl << endl << endl;
//			cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//			
//			ch = _getch();
//			system("cls");
//
//			if (ch == '1')
//			{
//				cout << endl << endl << endl << endl << endl << endl;
//				cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//				cout << "  Enter Complain : " << endl << endl << endl;
//				cout << "\n\tSELECT DEPARTMENT" << endl;
//				cout << "\n\tPress 1 for IT department" << endl
//					<< "\n\tPress 2 for ACCOUNTS department" << endl
//					<< "\n\tPress 3 for ADMIN department " << endl << endl << endl << endl;
//				cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//
//			}
//
//			else if (ch == '2')
//			{
//
//			}
//
//			else
//			{
//				cout << "\nInvalid Input...";
//			}
//
//			ch = _getch();
//			system("cls");
//
//			if (ch == '1' || ch == '2' || ch == '3')
//			{
//				cout << endl << endl << endl << endl << endl << endl;
//				cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//				cout << "\n\t\t\t\tYOUR COMPLAINT HAS BEEN SENT TO DESIRED DEPARTMENT" << endl << endl;
//				cout << "\n\t  \t\t\t\t             THANK YOU" << endl << endl << endl << endl;
//				cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
//			}
//
//			else
//			{
//				cout << "\nInvalid Input...";
//			}
//		}
//
//		else if (ch == 'M' || ch == 'm')
//		{
//			cout << endl << endl << endl << endl << endl << endl;
//			cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//			cout << "\n\tNAME : Ahmed Akram" << endl;
//			cout << "\n\tPhone No : 03007653876" << endl
//				<< "\n\tEMAIL : ahmedakram@gmail.com" << endl
//				<< "\n\tPress 1 to ASSIGN complain " << endl
//				<< "\n\tPress 2 to REVIEW complain" << endl << endl << endl << endl;
//			cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//
//			ch = _getch();
//			system("cls");
//
//			if (ch == '1')
//			{
//				cout << endl << endl << endl << endl << endl << endl;
//				cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//
//				cout << "\n\tPress 1 to assign BILAL" << endl
//					<< "\n\tPress 2 to assign ARSLAN " << endl
//					<< "\n\tPress 3 to assign TALHA " << endl
//					<< "\n\tPress 4 to assign RAFAY " << endl
//					<< "\n\tPress 5 to assign SHAHID" << endl << endl << endl << endl;
//				cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//
//			}
//
//			else if (ch == '2')
//			{
//
//			}
//
//			else
//			{
//				cout << "\nInvalid Input...";
//			}
//
//			ch = _getch();
//			system("cls");
//
//			if (ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5')
//			{
//				cout << endl << endl << endl << endl << endl << endl;
//				cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//				cout << "\n\t\t\t\tYOUR COMPLAINT HAS BEEN ASSIGNED TO DESIRED EMPLOYEE" << endl << endl;
//				cout << "\n\t  \t\t\t\t             THANK YOU" << endl << endl << endl << endl;
//				cout << "------------------------------------------------------------------------------------------------------------------------" << endl << endl;
//				cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
//			}
//
//			else
//			{
//				cout << "\nInvalid Input...";
//			}
//		}
//
//		else if (ch == 'Q' || ch == 'q')
//		{
//			return 0;
//		}
//
//		else
//		{
//			cout << "\nInvalid Input...";
//		}
//
//	
//		ch = _getch();
//		system("cls");
//
//	return 0;
//}




#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include<string>
#include <sstream>

using std::ifstream;
using namespace std;
// Forward declarations
class User;
class Complaint;
class Department;
fstream FileName1;
fstream FileName2;
fstream empfile;
fstream tchfile;
fstream compalinfile;


// Enumeration for complaint states
enum class ComplaintState { NEW, ASSIGNED, RESOLVED, CLOSED };

// Base class for User
class User {
public:
    string name;
    int id = 0;
    User()
    {
        name = "";
        id = NULL;

    }
    User(const string& _name)
    {
        name = _name;
        id = 1;
    }
    User(const string& name, int id) : name(name), id(id) {}

    const string& getName() const {
        return name;
    }

    const int& getid() const {
        return id;
    }
};

// Class representing a Teacher
class Teacher : public User {
public:
    Teacher() :User() {}
    Teacher(const string& name) :User(name) {}
    Teacher(const string& name, int id) : User(name, id) {}
};

// Class representing an Employee
class Employee : public User {
private:

public:
    int assign_complain_id = -1;
    Employee() :User()
    {

        assign_complain_id = -1;
    }
    Employee(const string& name) :User(name) { assign_complain_id = -1; }
    Employee(const string& name, int id) : User(name, id) { assign_complain_id = -1; }
    int seeassigncomplain()
    {
        return assign_complain_id;
    }


};
//int Employee::count = 0;

// Class representing a Manager
class Manager : public Employee {
public:
    Manager() :Employee() {}
    Manager(const string& name) :Employee(name) {}
    Manager(const string& name, int id) : Employee(name, id) {}
};

// Class representing a Department
class Department {
public:
    int id;
    string name;
    Manager manager;
    vector<Employee*> employees;

    Department()
    {

    }
    Department(const string& name) :name(name) {
        id = 0;


    };
    Department(int id, const string& name, const Manager& manager, const vector<Employee*>& employees)
        : id(0), name(name), manager(manager), employees(employees) {}
};

// Class representing a Complaint
class Complaint {
public:
    int id;
    string description;
    Teacher teacher;
    Department department;
    Employee assignedEmployee;
    ComplaintState state;

    Complaint()
    {}

    Complaint(const string& description, const Teacher& teacher, const Department& department) :
        description(description), teacher(teacher), department(department), state(ComplaintState::NEW) {
        id = 0;
    }

    Complaint(int id, const string& description, const Teacher& teacher, const Department& department)
        : id(id), description(description), teacher(teacher), department(department), state(ComplaintState::NEW) {
        id = 0;
    }
    // Complaint(const string& _description) : description(_description){}

};

// Class representing the Complaint Management System
class ComplaintManagementSystem {
private:
    vector<Teacher*> teachers;
    vector<Employee*> employees;
    vector<Department> departments;
    vector<Complaint> complaints;
    vector<Manager> managers;

public:
    // Functions for loading and saving data
    void loadData();
    void saveData();


    //
    void newEmployee(Employee employee)
    {
        employees.push_back(&employee);

        FileName1.open("employee.txt", ios::app);
        if (!FileName1) {
            cout << "Error while creating the file1";
        }
        else {
            cout << "File2 created successfully" << endl;


            FileName1 << endl << employee.getName();
        }
        FileName1.close();
    }

    void addEmployee(Employee employee)
    {
        employees.push_back(&employee);
        // Save to file logic here


    }

    void addManager(const Manager& manager) {
        managers.push_back(manager);
        // Save to file logic here
    }

    void addTeacher(Teacher teacher) {
        teachers.push_back(&teacher);
        // Save to file logic here
    }
    //void fileComplaint(const Teacher& teacher, const std::string& description) {
    //    Complaint complaint(description);
    //    complaints.push_back(complaint);
    //    // Save to file logic here
    //}

    /*******************/

    void printemp()
    {
        cout << "employee" << endl;
        for (int i = 0; i < employees.size(); i++)
        {

            cout << employees[i]->getName() << endl;
        }
    }
    void printteach()
    {
        cout << "teacher name :" << endl;
        for (int i = 0; i < teachers.size(); i++)
        {
            cout << teachers[i]->getName() << endl;
        }
    }

    /*****************/
    // Functions for handling complaints
    void fileComplaint(const string& description, const Teacher& teacher, const Department& department);
    void assignJob(Complaint* complaint, Employee* employee);
    void completeJob(Complaint& complaint);
    void closeComplaint(Complaint& complaint);

    // Functions for generating reports
    void generateSummaryReport();
    void generateDepartmentReport(const Department& department);
    void generateComplaintDetails(int complaintId);
};
void tokens();
void loadcompalin(vector<Complaint*>& cm);
void loademployee(vector<Employee*>& em);
void printem(vector<Employee*>& em)
{
    int iter = 0;

    for (iter = 0; iter < em.size(); iter++)
    {
        cout << em[iter]->getName() << " " << em[iter]->getid() << endl;;
    }
}
void updateallfile(vector<Employee*>& emp, vector<Complaint*>& cm)
{

    empfile.open("employee.txt", ios::out);
    compalinfile.open("complain.txt", ios::out);
    if (!empfile) {
        cout << "Error while creating the file1";
    }
    else {
        cout << "File2 created successfully" << endl;
        int iter = 0;
        for (iter; iter < emp.size(); iter++)
        {
            empfile << emp[iter]->getid() << " " << emp[iter]->getName() << endl;


        }


        empfile.close();
    }

    if (!compalinfile)
    {
        cout << "Error while creating the file1";
    }
    else {
        cout << "File2 created successfully" << endl;
        int iter = 0;
        for (iter; iter < emp.size(); iter++)
        {
            empfile << emp[iter]->getid() << " " << emp[iter]->getName() << endl;


        }


        empfile.close();
    }

}
// Function definitions

int main()
{

    // Instantiate the Complaint Management System
    ComplaintManagementSystem complaintSystem;

    // Load data from files
    complaintSystem.loadData();


    //***********************

    ComplaintManagementSystem cms;
    vector<Employee*> emp;
    vector<Manager*> mg;
    vector<Complaint*> compv;
    Complaint comp;



    /*vector<Employee> em;
    Employee empp;

    Employee empl[2];
    empl[0].name = "hashim";
    empl[0].id = 5;
    empl[1].name = "bushra";
    empl[1].id = 6;*/
    /*empp.addarr(empl);
    empp.printarr();*/


    // _sleep(500);
    // empp.add(empl[0]);


    /* Employee empl[100];
     empl[0].name = "haider";*/
    Employee emp1("John Doe", 1);
    Employee emp2("Harry", 2);
    Employee emp3("rahila", 3);



    emp.push_back(&emp1);
    emp.push_back(&emp2);
    emp.push_back(&emp3);


    //  emp.push_back(emp[0]);

    Manager mgr1("Jane", 1);
    Teacher tch1("Alice Johnson");
    Manager m1("siafullah", 2);
    mg.push_back(&mgr1);
    mg.push_back(&m1);
    // Department d1(1, "IT", mgr1, emp);


    // cms.addEmployee(emp1);
    // cms.addEmployee(emp2);
    cms.addManager(mgr1);
    cms.addTeacher(tch1);


    tokens();


    ///* cms.printemp();
    // cms.printteach();*/
     /*********************/
     /*int check = 0;
     cout << "if you want to enter compalin press 1" << endl;
     cin >> check;
     if (check == 1)
     {
         string teach;
         string desc;
         string dep;
         cout << "enter teacher name :" << endl;
         cin >> teach;
         Teacher tch2(teach);
         cout << "enter description :" << endl;
         cin >> desc;
         cout << "enter department name :" << endl;
         cin >> dep;
         Department d2(1, dep, mgr1, emp);

         cms.fileComplaint(desc, tch2, d2);

         Complaint c(desc, tch2, d2);


     }*/
     /***********************/
    /* string x;
     cout << "enter teacher name you want to enter :" << endl;
     cin>> x;
     Employee emp3(x);
     cms.newEmployee(emp3);*/

     /* cms.loadData();

      cms.printemp();*/


      /*************welcome screen*******************/
    int input = 0;
    while (input != 9)
    {

        cout << "welcome to complain managemnt system " << endl;
        cout << "press 1 fro teacher login " << endl;
        cout << "press 2 for manger login" << endl;
        cout << "press 3 for employee login" << endl;
        cout << "press 9 for manger login" << endl;
        cin >> input;





        /**********teacher login*************/

        if (input == 1)
        {
            string nam;
            int idi;
            cout << "teacher name and id :" << endl;
            cin >> nam;
            cin >> idi;


            int iter = 0;

            for (iter; iter < emp.size(); iter++)
            {
                if (emp[iter]->getName() == nam && emp[iter]->getid() == idi)
                {
                    system("CLS");
                    int z = 0;

                    while (z != 9)
                    {
                        cout << "welcome " << emp[iter]->getName() << endl;
                        cout << "enter 1 for comaplain :" << endl;
                        cout << "enter 9 for quit :" << endl;

                        cin >> z;
                        if (z == 1)
                        {
                            int key;
                            string desc;
                            string dep;
                            Teacher tch2(nam);
                            cout << "enter description :" << endl;
                            cin >> desc;
                            cout << "enter department id :" << endl;
                            cout << "press 1 for EE" << endl;
                            cout << "press 2 for CS" << endl;
                            cin >> key;
                            if (key == 1)
                            {
                                dep = "EE";
                            }
                            else if (key == 2)
                            {
                                dep = "CS";
                            }
                            else
                            {
                                dep = "CS";
                            }

                            Department d2(1, dep, mgr1, emp);


                            cms.fileComplaint(desc, tch2, d2);



                            Complaint compalin(1, desc, tch2, d2);
                            comp.description = desc;
                            comp.teacher = tch2;
                            comp.department = d2;
                            comp.id = 1;

                            compv.push_back(&comp);




                        }
                        else
                        {
                            cout << "you want to log out press 9 again" << endl;
                            cin >> z;
                        }
                    }
                }

            }
        }
        /************manger login*********************/

        if (input == 2)
        {
            string nam;
            int idi;
            cout << "manger name and id :" << endl;
            cin >> nam;
            cin >> idi;

            int iter = 0;

            for (iter; iter < mg.size(); iter++)
            {
                if (mg[iter]->getName() == nam && mg[iter]->getid() == idi)
                {
                    system("CLS");
                    int z = 0;

                    while (z != 9)
                    {
                        cout << "welcome " << endl;
                        cout << "enter 1 for see comaplain :" << endl;
                        cout << "enter 2 for assign comaplain to employee :" << endl;
                        cout << "enter 9 for logout :" << endl;

                        cin >> z;
                        if (z == 1)
                        {
                            cms.generateSummaryReport();
                        }
                        else if (z == 2)
                        {
                            int select2 = 0;

                            loadcompalin(compv);
                            cout << "select compalin id " << endl;
                            for (iter = 0; iter < compv.size(); iter++)
                            {
                                cout << compv[iter]->id << " " << compv[iter]->description << " " << " iter" << iter << endl;
                            }
                            cin >> select2;


                            int select = 0;
                            cout << "select employee id to assign a compalin " << endl;

                            for (iter = 0; iter < emp.size(); iter++)
                            {
                                cout << emp[iter]->getName() << " " << emp[iter]->getid() << " iter" << iter << endl;
                            }
                            cin >> select;

                            emp[select]->assign_complain_id = select2;
                            compv[select2]->state = ComplaintState::ASSIGNED;
                            cms.assignJob(compv[select2], emp[select]);

                        }
                        else
                        {
                            cout << "you want to log out press 9 again" << endl;
                            cin >> z;
                        }

                    }
                }


            }
        }
        if (input == 3)
        {
            loademployee(emp);
            printem(emp);

            string nam;
            int idi;
            cout << "employee name and id :" << endl;
            cin >> nam;
            cin >> idi;

            int iter = 0;

            for (iter; iter < emp.size(); iter++)
            {
                if (emp[iter]->getName() == nam && emp[iter]->getid() == idi)
                {
                    int z = 0;
                    while (z != 9)
                    {
                        cout << "welcome " << endl;
                        cout << "enter 1 for see assign comaplain :" << endl;
                        cout << "enter 2 update comaplain status :" << endl;
                        cout << "enter 9 for logout :" << endl;
                        cin >> z;

                        if (z == 1)
                        {
                            if (emp[iter]->seeassigncomplain() == -1)
                            {
                                cout << "No compalin assign" << endl;
                            }
                            else
                            {
                                cout << "compalin assign id is: " << emp[iter]->seeassigncomplain() << endl;
                            }
                        }
                        else if (z == 2)
                        {
                            compv[emp[iter]->seeassigncomplain()]->state = ComplaintState::RESOLVED;
                        }

                        /* int d = 0;
                         cout << emp[iter]->getName() << " " << emp[iter]->getid() << endl;
                         cin >> d;*/
                    }

                }
            }
        }
        /*********************************/
       // cms.fileComplaint(tch1, "IT support needed");


        // Perform operations (e.g., file complaints, assign jobs, generate reports)

       /* fstream FileName1;
        fstream FileName2;
        FileName2.open("teacher.txt", ios::app);
        FileName1.open("employee.txt", ios::in | ios::out);
        if (!FileName2) {
            cout << "Error while creating the file2";
        }
        else
        {
            cout << "File2 created successfully" << endl;
            char x[100];
            cout << "enter :" ;
            cin.getline(x, sizeof(x));

            FileName2 <<endl<< x;
        }
        if (!FileName1) {
            cout << "Error while creating the file1";
        }
        else {
            cout << "File created successfully"<<endl;
            string x;
            while (1) {
                FileName1 >> x;
                if (FileName1.eof())
                    break;

                cout << x<<" ";
            }
            FileName1.close();
        }*/

        // Save data to files
    //cms.generateSummaryReport();

        updateallfile(emp, compv);
        complaintSystem.saveData();
        return 0;
    }
}
/*****************************/
void teacherlogin(const vector<Employee*>& emp, Manager mgr1, ComplaintManagementSystem cms)
{

}
/****************************/
void ComplaintManagementSystem::loadData() {
    // Implement loading data from files into objects
    FileName2.open("employee.txt", ios::in);
    if (!FileName2) {
        cout << "Error while creating the file1";
    }
    else {
        cout << "File2 created successfully" << endl;
        string x;
        int i = 0;
        Employee em[100];

        while (!FileName2.eof())
        {
            FileName2 >> x;

            em[i].name = x;

            employees.push_back(&em[i]);

            i++;
        }

        FileName2.close();
    }
}

void ComplaintManagementSystem::saveData() {
    // Implement saving data from objects to files
}

void ComplaintManagementSystem::fileComplaint(const string& description, const Teacher& teacher, const Department& department)
{
    // Implement filing a complaint

    compalinfile.open("complain.txt", ios::app);
    if (!compalinfile) {
        cout << "Error while creating the file1";
    }
    else {
        cout << "File2 created successfully" << endl;


        compalinfile << endl << teacher.getid() << " " << teacher.getName() << " " << department.name << " " << description << " " << "new";
    }
    compalinfile.close();
}

void ComplaintManagementSystem::assignJob(Complaint* complaint, Employee* employee) {
    // Implement assigning a job to an employee
    cout << "employee :" << employee->getName() << endl;
    cout << "complain decription :" << complaint->description << endl;
}

void ComplaintManagementSystem::completeJob(Complaint& complaint) {
    // Implement completing a job
}

void ComplaintManagementSystem::closeComplaint(Complaint& complaint) {
    // Implement closing a complaint
}

void ComplaintManagementSystem::generateSummaryReport() {
    // Implement generating a summary report
    cout << "welcome complain list" << endl;

    compalinfile.open("complain.txt", ios::in | ios::out);
    if (!compalinfile) {
        cout << "Error while creating the file1";
    }
    else {
        // cout << "File2 created successfully" << endl;

        // while (!compalinfile.eof())
        // {
        string cf("complain.txt");
        vector<string> lines;
        string x;
        ifstream input_file(cf);
        if (!input_file.is_open())
        {

        }

        while ((getline(input_file, x)))
        {
            lines.push_back(x);
        }
        for (int i = 0; i < lines.size(); i++)
        {
            cout << lines[i] << endl;
        }

        input_file.close();
        //    compalinfile >> x;

         //   cout << x<<" ";

 //   }
    }
    compalinfile.close();
}

void ComplaintManagementSystem::generateDepartmentReport(const Department& department) {
    // Implement generating a department-specific report
}

void ComplaintManagementSystem::generateComplaintDetails(int complaintId) {
    // Implement generating detailed information about a specific complaint
}
void tokens()
{

    string cf("complain.txt");
    vector<string> lines;
    string x;
    ifstream input_file(cf);
    ifstream input_file2(cf);

    if (!input_file.is_open())
    {
        cout << "complain file not open";
    }

    while ((getline(input_file, x)))
    {
        lines.push_back(x);
    }
    for (int i = 0; i < lines.size(); i++)
    {
        cout << lines[i] << endl;
    }
    vector<string> token;


    for (int i = 0; i < lines.size(); i++)
    {
        stringstream check1(lines[i]);

        string intermediate;

        // Tokenizing w.r.t. space ' '
        while (getline(check1, intermediate, ' '))
        {
            token.push_back(intermediate);
        }
    }
    cout << "now printing tokens" << endl;
    for (int i = 0; i < token.size(); i = i + 5)
    {
        cout << token[i] << ",";
        if (i == 0)
        {
            i++;
        }

    }



    input_file.close();
    input_file2.close();

}
void loademployee(vector<Employee*>& em)
{
    string cf("employee.txt");
    vector<string> lines;
    string x;
    ifstream input_file(cf);
    ifstream input_file2(cf);

    if (!input_file.is_open())
    {
        cout << "employee file not open";
    }

    while ((getline(input_file, x)))
    {
        lines.push_back(x);
    }

    vector<string> token;


    for (int i = 0; i < lines.size(); i++)
    {
        stringstream check1(lines[i]);

        string intermediate;

        // Tokenizing w.r.t. space ' '
        while (getline(check1, intermediate, ' '))
        {
            token.push_back(intermediate);
        }
    }
    int id;
    string n;
    for (int i = 0; i < token.size(); i++)
    {
        Employee* e;
        id = stoi(token[i]);
        i++;
        n = token[i];
        e = new Employee(n, id);
        em.push_back(e);
    }



    input_file.close();
    input_file2.close();

}
void loadcompalin(vector<Complaint*>& cm)
{
    string cf("complain.txt");
    vector<string> lines;
    string x;
    ifstream input_file(cf);
    ifstream input_file2(cf);

    if (!input_file.is_open())
    {
        cout << "complain file not open";
    }

    while ((getline(input_file, x)))
    {
        lines.push_back(x);
    }

    vector<string> token;


    for (int i = 0; i < lines.size(); i++)
    {
        stringstream check1(lines[i]);

        string intermediate;

        // Tokenizing w.r.t. space ' '
        while (getline(check1, intermediate, ' '))
        {
            token.push_back(intermediate);
        }
    }
    int id;
    string tr, dep, des;
    // cout << "now printing tokens" << endl;
    for (int i = 0; i < token.size(); i++)
    {
        Complaint* c;
        id = stoi(token[i]);
        i++;
        tr = token[i];
        i++;
        dep = token[i];
        i++;
        des = token[i];
        i++;
        c = new Complaint(id, des, tr, dep);
        //i++;
        cm.push_back(c);
    }



    input_file.close();
    input_file2.close();
}