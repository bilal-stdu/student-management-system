#include<iostream>
#include<fstream>
using namespace std;
string name[20], RollNo[20], course1[20]={"ict","pf","oop"},course2[20]={"calculus","mvc","la"},course3[20]={"ec","pst","cs"}, semester[20], contact[20];
int array[20];
int total=0;
string grade1[20],grade2[20],grade3[20];
double marks1[20], marks2[20], marks3[20];
double result1[20], result2[20], result3[20];
int maxMarks =100;

void insertData()
{
    int choice;

    cout<<endl;
    cout << "....YOU CANNOT ENTER STUDENTS GREATER THAN 20...."<<endl;
    cout << "....ENTER NO OF STUDENTS....";
    cin >> choice;
    while(choice>20|| choice <=0)
    {

        cout << "ENTER NO OF STUDENTS... ";
        cin >> choice;
    }
    if(total==0)
    {
        for(int i=0; i<choice; i++)
        {
            cout<<endl;
            cout << "Enter DATA OF STUDENT: "<<i+1<<endl;
            cout << "Enter Name: ";
            cin >> name[i];
            cout<<endl;
w:
            cout << "Enter RollNo: ";
            cin >> RollNo[i];
            cout<<endl;
for(int j=0;j<i;j++){
    if( RollNo[i] == RollNo[j]){
        cout<<"SAME ROLL NUMBER ENTER DIFFERENT ROLL NUMBER"<<endl;
        goto w;
    }}

            cout << "Enter semester: ";
            cin >> semester[i];
            cout<<endl;
           // cout << "Enter Course 1: ";
            //cin >> course1[i];
            //cout<<endl;
            //cout << "Enter Course 2: ";
            //cin >> course2[i];
            //cout<<endl;
            //cout << "Enter Course 3: ";
            //cin >> course3[i];
            //cout<<endl;

        }

    }
    else
    {
        for(int i=total; i<total+choice; i++)
        {
            cout << "Enter data of student: "<<i+1<<endl;
            cout << "Enter Name: ";
            cin >> name[i];
            cout<<endl;
        s:
            cout << "Enter RollNo: ";
            cin >> RollNo[i];
            cout<<endl;
            for(int j=0;j<i;j++){
     if( RollNo[i] == RollNo[j]){
        cout<<"ROLL NUMBER ALREADY EXISTS...."<<endl;
        goto s;
    }}
            cout << "Enter semester: ";
            cin >> semester[i];
            cout<<endl;
           // cout << "Enter Course 1: ";
            //cin >> course1[i];
            //cout<<endl;
            //cout << "Enter Course 2: ";
            //cin >> course2[i];
            //cout<<endl;
            //cout << "Enter Course 3: ";
            //cin >> course3[i];
            //cout<<endl;
        }
    }
    total = total+choice;
}
void courses(){
string semester1[20];
for(int i=0;i<total;i++){

        cout<<"semseter ..."<<semester[i]<<endl;
        for(int j=i;j<total;j++){
    if("1"==semester[i]){}
        cout<<"cousre 1..."<<course1[j]<<"\n course 2...."<<course2[j]<<"\n course 3...."<<course3[j]<<endl;

    }
     if("2"==semester[i]){

        cout<<"cousre 1..."<<course1[i]<<"\n course 2...."<<course2[i]<<"\n course 3...."<<course3[i]<<endl;
    }
     if("3"==semester[i]){

        cout<<"cousre 1..."<<course1[i]<<"\n course 2...."<<course2[i]<<"\n course 3...."<<course3[i]<<endl;
    }
}
}
void searchData()
{
    string searchRollNo;
    cout<<endl;
    cout << "Enter Roll No to be searched: ";
    cin >> searchRollNo;
    int flag=0, i;
    for(i=0; i<total; i++)
    {
        if(searchRollNo==RollNo[i])
        {

            flag=1;
            break;
        }
    }
    if(flag==1)
    {
            cout<<endl;
            cout << "Data of student: "<< i+1<<endl;
            cout << "Name: " << name[i]<<endl;
            cout << "Roll No: "<<RollNo[i]<<endl;
            cout << "Semester: "<< semester[i]<<endl;
            cout << "Course 1: "<<course1[i]<<endl;
            cout << "Course 2: "<<course2[i]<<endl;
            cout << "Course 3: "<<course3[i]<<endl;
    }
    else
        cout << "Record Not found"<<endl;

}


void updateData()
{
    string updateRollNo;
    cout<<endl;
    int flag=0, i;
    cout << "Enter Roll No to update: ";
    cin >> updateRollNo;
    for(i=0; i<total; i++)
    {

        if(updateRollNo==RollNo[i])
        {
            flag =1;
            break;
        }

    }
    if(flag==1)
    {
            cout<<endl;
            cout << "Previous Data of roll number"<<i+1<<"is.... "<<endl;
            cout << "Data of student: "<< i+1<<endl;
            cout << "Name: " << name[i]<<endl;
            cout << "Roll No: "<<RollNo[i]<<endl;
            cout << "Semester "<< semester[i]<<endl;
            cout << "Course 1: "<< course1[i]<<endl;
            cout << "Course 2: "<< course2[i]<<endl;
            cout << "Course 3: "<< course3[i]<<endl;
            cout<<"   "<<endl;

            cout<<endl;
            cout << "New Data is..."<<endl;
            cout << "Enter Name: ";
            cin >> name[i];
            cout << "Enter RollNo: ";
            cin >> RollNo[i];
            cout << "SEMESETER: ";
            cin >> semester[20];
            cout << "Course 1: "<< course1[i]<<endl;
            cin >>course1[i];
            cout << "Course 2: "<< course2[i]<<endl;
            cin>>course2[i];
            cout << "Course 3: "<< course3[i]<<endl;
            cin>>course3[i];
            cout<<endl;
    }
    else
        cout << "Record not found......."<<endl;
}
void showData()
{

    for(int i=0; i<total; i++)
    {
        cout<<endl;
        cout << "Data of student: "<< i+1<<endl;
        cout << "Name: " << name[i]<<endl;
        cout << "Roll No: "<<RollNo[i]<<endl;
        cout << "Course 1: "<< course1[i]<<endl;
        cout << "Course 2: "<< course2[i]<<endl;
        cout << "Course 3: "<< course3[i]<<endl;
        cout << "SEMESTER: "<< semester[i]<<endl;
        cout<<endl;
    }

}
void resetData()
{
    cout<<endl;
    total =0;
    cout << "All Records Clear Successfully."<<endl;
}
void addMarks()
{
    for(int i=0; i<total; i++)
    {
        cout<<endl;
        cout << "Enter Marks of Student "<<i+1<<endl;
        cout<<""<<endl;
        cout << "Enter Obtained marks of course 1: "<<course1[i]<<" ";
        cin >> marks1[i];
        cout<<endl;

        cout << "Enter Obtained marks of course 2: "<<course2[i]<<" ";
        cin >> marks2[i];
        cout<<endl;

        cout << "Enter Obtained marks of course 3: "<<course3[i]<<" ";
        cin >> marks3[i];
        cout<<endl;
    }
}
void calculateResult()
{
    string rollNo;
    cout<<endl;
    cout<<"Enter Your RollNo ";
    cin>>rollNo;
    for(int i=0; i<total; i++)
    {
        if(rollNo==RollNo[i])
        {
            result1[i] = (marks1[i]*100)/100;
            result2[i] = (marks2[i]*100)/100;
            result3[i] = (marks3[i]*100)/100;

            if(result1[i]>90)
                grade1[i] = "A+";
            else if(result1[i]>80)
                grade1[i] = "A";
            else if(result1[i]>70)
                grade1[i] = "B+";
            else if(result1[i]>60)
                grade1[i] = "B";
            else if(result1[i]>50)
                grade1[i] = "B-";
            else if(result1[i]<50)
                grade1[i] = "F";
            if(result2[i]>90)
                grade2[i] = "A+";
            else if(result1[i]>80)
                grade2[i] = "A";
            else if(result2[i]>70)
                grade2[i] = "B+";
            else if(result2[i]>60)
                grade2[i] = "B";
            else if(result2[i]>50)
                grade2[i] = "B-";
            else if(result2[i]<50)
                grade2[i] = "F";
            if(result3[i]>90)
                grade3[i] = "A+";
            else if(result3[i]>80)
                grade3[i] = "A";
            else if(result3[i]>70)
                grade3[i] = "B+";
            else if(result3[i]>60)
                grade3[i] = "B";
            else if(result3[i]>50)
                grade3[i] = "B-";
            else if(result3[i]<50)
                grade3[i] = "F";

            cout<<endl;
            cout <<"Result of: " << course1[i]<<" "<< result1[i]<<" " <<"L.G: "<<grade1[i]<<endl;
            cout <<"Result of: " << course2[i]<<" " << result2[i]<<" "<< "L.G: "<<grade2[i]<<endl;
            cout <<"Result of: " << course3[i]<<" " << result3[i]<<" "<< "L.G: "<<grade3[i]<<endl;
            cout<<endl;
            break;
        }

    }
}

void deleteCourse(){

for(int i=0;i<total;i++){
         cout<<"DATA OF STUDENT..."<<i<<endl;
            cout<<"NAME...."<<name[i]<<endl;
            cout<<"ROLL NUMBER...."<<RollNo[i]<<endl;
            cout<<"SEMESTER"<<semester[i]<<endl;
            cout <<"COURSE 1..."<<course1[i]<<endl;
            cout<<"COURSE 2..."<< course2[i]<<endl;
            cout<<"COURSE 3..."<< course3[i]<<endl;
}
string Rollno;
cout<<"enter roll number u want to delete";
cin>>Rollno;
for(int i=0;i<total;i++){
if(RollNo[i]==Rollno){
    for(int j=i;j<total-1;j++){
          name[j]=name[j+1];
                    RollNo[j]=RollNo[j+1];
                    semester[j]=semester[j+1];
                    course1[j]=course1[j+1];
                    course2[j]=course2[j+1];
                    course3[j]=course3[j+1];
                    break;

    }
    total--;
}
else{
    cout<<"ROLL NUMBER NOT FOUND...."<<endl;
}

}
}
int main()
{
    int value;
    string name,password,confirm_password,command,username,pass;
    int i=1,j=1;
there:
    while(1)
    {
        cout<<endl;
        cout<<"ENTER 1 FOR ADMIN LOGIN"<<endl;
        cout<<"ENTER 2 FOR STUDENT REGISTARTION"<<endl;
        cout<<"ENTER 3 FOR STUDENT LOGIN"<<endl;
        cout<<"ENTER 0 FOR TERMINATION"<<endl;
        cout<<endl;


        cout<<".....********** ENTER COMMAND **********.....";
        cin>>command;

        if(command=="1")
        {


            cout<<endl;
            cout<<"********** ADMIN LOGIN **********"<<endl;
            cout<<"username....";
            cin>>name;
            cout<<"password....";
            cin>>password;
            cout<<"....ATTEMPT*...."<<i<<endl;
            cout<<endl;
            if(name=="admin" && password=="12345")
            {
                cout<<""<<endl;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"...............********** login successfully **********"<<endl;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<""<<endl;


                while(1)
                {
                    cout<<endl;
                    cout << "....Press 1 to insert data...."<<endl;
                    cout << "....Press 2 to search data...."<<endl;
                    cout << "....Press 3 to update data...."<<endl;
                    cout << "....Press 4 to reset data...."<<endl;
                    cout << "....Press 5 to add marks.... "<<endl;
                    cout << "....Press 6 to calculate data.... "<<endl;
                    cout << "....Press 7 to show data.... "<<endl;
                    cout << "....Press 8 to see courses.... "<<endl;
                    cout<<  "........press 9 to exit........"<<endl;
                    cout<<endl;
                    cout<<"....ENTER NUMBER....";
                    cin >> value;

        while(!cin){
                cout<<"....INVALID NUMBER...."<<endl;
                cin.clear();
                cin.ignore();
                cout<<"....ENTER VALID NUMBER....";
                cin >> value;}
                    switch(value)
                    {
                    case 1:
                        insertData();
                        break;
                    case 2:
                        searchData();
                        break;
                    case 3:
                        updateData();
                        break;

                    case 4:
                        resetData();
                        break;
                    case 5:
                        addMarks();
                        break;
                    case 6:
                        calculateResult();
                        break;

                    case 7:
                        showData();
                        break;
                    case 8:
                        courses();
                        break;
                    case 9:
                        deleteCourse();
                        break;
                    case 10:
                        cout<<""<<endl;
                        cout<<"..............."<<endl ;
                        cout<<"..............."<<endl ;
                        cout<<"..............."<<endl ;
                        cout<<"...............********** LOGOUT SUCCESSFULLY **********"<<endl;
                        cout<<"..............."<<endl ;
                        cout<<"..............."<<endl ;
                        cout<<"..............."<<endl ;
                        cout<<""<<endl;
                        goto there;
                    }
                }
            }
            else
            {

                cout<<""<<endl;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"...............**********  LOGIN FAILED **********"<<endl;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<""<<endl;
                i++;

            }
             if(i==4){
            cout<<endl;
            cout<<"PROGRAAM TERMINATING"<<endl;
            terminate();
        }
        }
        if(command=="2")
        {

            cout<<"ENTER NAME....";
            cin>>name;
            cout<<"PASSWORD.....";
            cin>>password;
            cout<<"CONFIRM PASSWORD....";
            cin>>confirm_password;
            cout<<""<<endl;
            cout<<"..............."<<endl ;
            cout<<"..............."<<endl ;
            cout<<"..............."<<endl ;
            cout<<"...............STDUENT SIGNUP SUCCESSFULLY"<<endl;
            cout<<"..............."<<endl ;
            cout<<"..............."<<endl ;
            cout<<"..............."<<endl ;
            cout<<""<<endl;
        }

        if(command=="3")
        {

            cout<<endl;
            cout<<"USERNAME....";
            cin>>username;
            cout<<"PASSWORD....";
            cin>>password;
            cout<<endl;
            cout<<"ATTEMPT"<<j<<endl;

            if(username=="student" && password=="123")
            {

                cout<<""<<endl;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"...............********** LOGIN SUCCESSFULLY **********"<<endl;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<""<<endl;
                while(1)
                {
                    cout<<endl;
                    cout<<"ENTER 1 FOR GRADES"<<endl;
                    cout<<"ENTER 2 FOR  REGISTERED COURSES "<<endl;
                    cout<<"ENTER 3 FOR  COMPLETE STUDENT REG INFO"<<endl;
                    cout<<"ENTER 4 FOR EXIT"<<endl;
                    cout<<endl;
                    cout<<"....ENTER A NUMBER...";
                    cin>>value;
 while(!cin){
                cout<<"....INVALID NUMBER...."<<endl;
                cin.clear();
                cin.ignore();
                cout<<"....ENTER VALID NUMBER....";
                cin >> value;
                }
      if(value>0 && value<5){
                    switch(value)
                    {
                    case 1:
                    {
                        calculateResult();
                        break;
                    }

                    case 3:
                    {
                        showData();
                        break;
                    }
                    case 4:
                        cout<<endl;
                        cout<<"..............."<<endl ;
                        cout<<"..............."<<endl ;
                        cout<<"..............."<<endl ;
                        cout<<"...............********** LOGOUT SUCCESSFULLY **********"<<endl;
                        cout<<"..............."<<endl ;
                        cout<<"..............."<<endl ;
                        cout<<"..............."<<endl ;
                        cout<<endl;
                        goto there;
                   } }
                }
            }

            else
            {
                cout<<""<<endl;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"...............**********  LOGIN FAILED **********"<<endl;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<"..............."<<endl ;
                cout<<""<<endl;
                j++;
            }
             if(j==4){
            cout<<endl;
            cout<<"PROGRAM TERMINATING"<<endl;
            terminate();
        }
        }
        if(command=="0")
        {
            cout<<endl;
            cout<<"........PROGRAAM TERMINATE SUCCESSFULLY..........*"<<endl;
            cout<<endl;
            return 0;
        }
    }
    return 0;
}