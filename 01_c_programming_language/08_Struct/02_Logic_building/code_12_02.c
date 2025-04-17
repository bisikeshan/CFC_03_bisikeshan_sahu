/* S.G.M.P 
 * @file: vehicle_management.c
 * @brief: This program stores and displays vehicle, owner, insurance, and manufacture
 * @description: 
 * This program defines four structures: 'struct Manufacturer', 'struct Insurance', 'struct'
   'struct Manufacturer' contains: 
 * - 'manuId' (integer) for manufacturuer ID.
 * - 'manuName' (character array) for manufacturer name.
     'struct insurance' contains: 
 * - 'insId' (integer) for insurance ID.
 * - 'inscompany' (character array) for insurance company name.
 * - 'struct owner' contains: 
 * - 'ownerId' (integer) for owner ID.
 * - 'ownerName' (character array) for owner's name.
 * - 'ownerAddress' (character array) for owner's address.
     'struct vehicle' contains: 
 * 'vehId' (integer) for vehicle ID.
 * 'vehModel' (character array) for owner's name.
 * 'vehPrice' (float) for vehicle price.
 * 'vehManufacturer' (structure of type 'Manufacturer') for manufacturer details
 * 'vehInsurance' (structure of type 'Insurance') for insurance details
 * 'vehowner' (structure of type 'Owner' for owner details)
 *
 * 
 * The programs promts the user to enter details for a vehicle, its manufacturer, insurance
 * then display the information in a structured format.
 * author: bisikeshan sahu (bisikeshan567@gmail.com)
 * date: 25-03-2025 10:52 PM 
 */
  
 #include <stdio.h>

 // structure definition for manufacturer
 struct Manufacturer
 {
     int manuId; // stores manufacturer Id
     char manuName[50]; // stores insurance company name 
 }; 

 struct Insurance
 {
    int insId; 
    char insCompany[50]; 
 }; 

 struct Owner
 {
     int ownerId; 
     char ownerName[50]; 
     char ownerAddress[100]; 
 }; 

 struct Vehicle
 {
    int vehId; 
    char vehModel[50]; 
    float vehPrice; 

    struct Manufacturer vehManufacturer; 
    struct Insurance vehInsurance; 
    struct Owner vehOwner; 
 };

 int main()
 {
    // declare a structure vehicle to store vehicle details
    struct Vehicle vehicle; 

    printf("Enter Manufacturer ID: \n"); 
    scanf("%d",&vehicle.vehManufacturer.manuId); 

    printf("Enter Manufacturer Name: \n"); 
    scanf(" %[^\n]s",vehicle.vehManufacturer.manuName); 

    printf("Enter Insurance ID: \n"); 
    scanf("%d",&vehicle.vehInsurance.insId); 

    printf("Enter Insurance company: \n"); 
    scanf(" %[^\n]s",vehicle.vehInsurance.insCompany); 

    // owner details
    printf("Enter owner ID: \n"); 
    scanf("%d",&vehicle.vehOwner.ownerId); 

    printf("Enter owner Name: \n"); 
    scanf(" %[^\n]s",vehicle.vehOwner.ownerName); 

    // vehicle details

    printf("Enter vehicle Id: \n"); 
    scanf("%d",&vehicle.vehId); 

    printf("Enter vehicle Model: \n"); 
    scanf(" %[^\n]s",vehicle.vehModel); 

    printf("Enter vehicle Price: \n"); 
    scanf("%f",&vehicle.vehPrice); 

    // display manufacturer details
    printf("manufacturer Details: \n"); 
    printf("manufacturer Id: %d\n",vehicle.vehManufacturer.manuId); 
    printf("manufacturer Name: %s\n",vehicle.vehManufacturer.manuName);


    // insurance details
    printf("Insurance details\n"); 
    printf("Insurance Id: %d\n",vehicle.vehInsurance.insId); 
    printf("Insurance company Name: %s\n",vehicle.vehInsurance.insCompany); 
   
    // owner details 
    printf("owner details:\n"); 
    printf("owner Id: %d\n",vehicle.vehOwner.ownerId); 
    printf("owner Name: %s\n",vehicle.vehOwner.ownerName); 

    // vehicle details
    printf("vehicle details: \n"); 
    printf("vehicle Id: \n",vehicle.vehId); 
    printf("vehicle Model: \n",vehicle.vehModel); 
    printf("vehicle price: %.2f\n",vehicle.vehPrice); 

    return(0);   


 }


