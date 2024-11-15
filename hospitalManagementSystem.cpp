// you are required to implement a simplified hospital managment ayatem in c++ to manage patients , doctors and their appointments.The system should allow adding new patients and doctors ,scheduling appointments and viewing the details of patients, doctors and , schedules appointments.

// addPatient-> name age and gender,ID 
// addDoctor ->name ,age,Gender, ID
//Schedule appiontment ->Patient ID,Doctor ID,Date
//View Pateints->Print all the patients->store them
//view Doctors->Print all the Doctors->store them
//view appointments-> print all the appointments->store them
// Exit
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int pid,did;
class Patient{
    public:
    string name;
    string gender;
    int age;
    int ID;
    Patient(string n, int a,string g){
        ID=pid;
        ++pid;
        name=n;
        age=a;
        gender=g;
        
    }

};
class Doctor{
    public:
    string name;
    string gender;
    int age;
    int ID;
    Doctor(string n,int a, string g){
        ID=did;
        ++did;
        name=n;
        age=a;
        gender=g;
    }
};
class Appointment{
    public:
    int patientID;
    int doctorID;
    string Date;

    Appointment(int p,int d,string date){
        Date=date;
        patientID=p;
        doctorID=d;

    }
};
vector<Patient> allPatients;
vector<Doctor> allDoctors;
vector<Appointment> allAppointments;
void addPatient(){
    string n,g;
    int a;

    cout<<"Give the Patient Name :"<<endl;
    cin>>n;
    cout<<"Give the Patient Age :"<<endl;
    cin>>a;
    cout<<"Give the Patient Gender :"<<endl;
    cin>>g;
    Patient temp(n,a,g);
    allPatients.push_back(temp);
    cout<<n<<" has been added successfully as a patient "<<endl;
}

void addDoctor(){
    string n,g;
    int a;
    
    cout<<"Give the Doctor Name :"<<endl;
    cin>>n;
    cout<<"Give the Doctor Age :"<<endl;
    cin>>a;
    cout<<"Give the Doctor Gender :"<<endl;
    cin>>g;
    Doctor temp(n,a,g);
    allDoctors.push_back(temp);
    cout<<n<<" has been added successfully as a doctor "<<endl<<endl;

}
void scheduleAppointments(){
    int patientID;
    int doctorID;
    string Date;
    cout<<"Give the Patient ID :"<<endl;
    cin>>patientID;
    
    cout<<"Give the Doctor ID :"<<endl;
    
    cin>>doctorID;
    
    cout<<"Give the Date in DDMMYYYY format :"<<endl;
    cin>>Date;
    if(patientID>pid || patientID==0){
        cout<<"Invalid patientID"<<endl;
        return;
    }
    if(doctorID>did || doctorID==0){
        cout<<"Invalid doctorID"<<endl;
        return;
    } 
    Appointment temp(patientID,doctorID,Date);
    allAppointments.push_back(temp);
    
    cout<<"The appointment had been successfully scheduled on "<<Date<<endl<<endl;

}  
void viewAllPatients(){
    for(int i=0;i<allPatients.size();i++){
        cout<<allPatients[i].name<<endl;
    }
    cout<<"All the patients are displayed successfully"<<endl<<endl;
}
void viewAllDoctors(){
    for(int i=0;i<allDoctors.size();i++){
        cout<<allDoctors[i].name<<endl;
    }
    cout<<"All the doctors are displayed successfully"<<endl<<endl;

}
void viewAllAppointments(){
     for(int i=0;i<allAppointments.size();i++){
        cout<<"PatientID "<<  allAppointments[i].patientID <<" is appointed to "<<allAppointments[i].doctorID<<" doctorID"<<endl;
    }
    cout<<"All the appointments are displayed successfully"<<endl<<endl;

}

    
    


int main(){
    pid=0;
    did=0;
    int choice;
    do{ cout<<"Select the operation you want to perform"<<endl<<endl;
        cout<<"1. Add Patient :"<<endl;
        cout<<"2. Add Doctors :"<<endl;
        cout<<"3. Schedule Appointment :"<<endl;
        cout<<"4. View Patients :"<<endl;
        cout<<"5. View Doctors :"<<endl;
        cout<<"6. View Appointments :"<<endl;
        cout<<"0. Exit :"<<endl;
        cout<<"Enter your choice "<<endl<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                addPatient();
                break;
            case 2:
                addDoctor();
                break;
            case 3:
                scheduleAppointments();
                break;
            case 4:
                viewAllPatients();
                break;
            case 5:
                viewAllDoctors();
                break;
            case 6:
                viewAllAppointments();
                break;
            case 0:
                cout<<"Thanking You!!!!"<<endl;
                cout<<"Nice interaction\nMay you have a good day"<<endl;
                break;
            default:
                cout<<"Invalid Input Please enter the correct choice...."<<endl;
        }
    }while(choice!=0);
}