/* /* S.G.M.P 
 * @file: hospital_management.c
 * @brief: This program stores and displays hospital, department, doctor, patient, and ins
 * @description: 
 * This program defines five structures: 'struct Hospital', 'struct Deparment', 
 * - 'struct Hospital' contains: 
 * - 'hospId' (integer) for hospital ID.
 * - 'hostName' (character array) for hospital name.
 * - 'struct Department' contains: 
 * - 'deptId' (integer) for department ID.
 * - 'deptName' (character array) for department name. 
 * - 'parentHospital' (struture of type 'Hospital') for hospital details
 * - 'struct Doctor' contains: 
 * - 'docId' (integer) for doctore ID.
 * - 'docName' (character array) for doctore name.
 * - 'docSpecialtly' (character array) for specialty.
 * - 'docDept' (structure of type 'Department') for department details
 * - 'struct Insurance contains:: 
 * - 'insId' (integer) for insurance ID.
 * - 'insCompany' (character array) for insurance provider name.
 * - 'struct Patient' contains: 
 * - 'patId' (integer) for patient ID.
 * - 'patName' (character array) for patient name.
 * - 'patAge' (integer) for patient age.
 * - 'patDoctor' (strucutre of type 'Doctor') for doctor details
 * - 'patInsurance' (structure of type 'Insurance') for insurance details.
 *
 * The program prompts the user to enter details for a hospital,department,doctor,patient
 * then displays the information in a structured format.
 * @author: bisikeshan sahu (bisikeshan567@gmail.com)
 * @date: 26-03-2025 4:24 PM 
 */ 

#include <stdio.h>

struct Hospital
{
	int hospId; 
	char hospName[100]; 
}; 

struct Department
{
	int deptId; 
	char deptName[50]; 
	struct Hospital parentHospital; 
};

struct Doctor
{
	int docId; 
	char docName[50]; 
	char docSpeciality[50]; 
	struct Department docDept; 
};

struct Insurance
{
	 int insId; 
	 char insCompany[50]; 
}; 

struct Patient
{
	int patId; 
	char patName[50]; 
	int patAge; 
	struct Doctor patDoctor; 
	struct Insurance patInsurance; 
}; 

int main()
{
	 struct Patient patient;

	 // hospital details
	 printf("Enter Hospital ID: \n"); 
	 scanf("%d",&patient.patDoctor.docDept.parentHospital.hospId); 

	 printf("Enter Hospital Name: \n"); 
	 scanf(" %[^\n]s",patient.patDoctor.docDept.parentHospital.hospName); 

	 printf("Enter Department Id: \n"); 
	 scanf("%d",&patient.patDoctor.docDept.deptId); 

	 printf("Enter Department name: \n"); 
	 scanf(" %[^\n]s",patient.patDoctor.docDept.deptName); 

	 printf("Enter Doctor Id: \n"); 
	 scanf("%d",&patient.patDoctor.docId); 

	 printf("Enter Doctor Name: \n"); 
	 scanf(" %[^\n]s",patient.patDoctor.docName); 

	 printf("Enter Doctor Speciality: \n"); 
	 scanf(" %[^\n]s",patient.patDoctor.docSpeciality); 

     printf("Enter Insurance Id: \n");
	 scanf("%d",&patient.patInsurance.insId); 	

	 printf("Enter Insurance company Name: \n"); 
	 scanf(" %[^\n]s",patient.patInsurance.insCompany); 

	 printf("Enter patient Id: \n"); 
	 scanf("%d",&patient.patId); 

	 printf("Enter patient Age: \n"); 
	 scanf("%d",&patient.patAge); 

	 // displays hospital, department, doctor, insurance and patient details
	 printf("\n --- hospital details ---\n");
	 printf("Hospital Id: %d\n",patient.patDoctor.docDept.parentHospital.hospId);
	 printf(" Hospital Name: %s\n",patient.patDoctor.docDept.parentHospital.hospName); 

	 printf("\n Department: \n");
	 printf(" Department Id: %d\n",patient.patDoctor.docDept.deptId); 
     printf("Department Name: %s\n",patient.patDoctor.docDept.deptName);

     printf("\n doctor details: \n"); 
     printf("Enter Doctor Id: %d\n",patient.patDoctor.docId);
     printf("Enter Doctor Name: %s\n",patient.patDoctor.docName);
     printf("Doctor Speciality %s\n",patient.patDoctor.docSpeciality); 

     printf("\n insurance details: \n");
	 printf("Insurance Id: %d\n",patient.patInsurance.insId);
	 printf("Insurance company Name: %s\n",patient.patInsurance.insCompany); 

	 printf("\n patient details: \n"); 
	 printf("patient Id: %d\n",patient.patId); 
	 printf("patient age: %d\n",patient.patAge); 


	 return (0); 


}