#include <iostream>

#include "Sample.h" //including header file of sample class

using namespace std;


//default constructor

Sample::Sample(){

}

//overloaded constructor is initiated

Sample::Sample(string sampID, string sampName, string sampType, string sampLocation, string sampDescription, string sampStorageCondition, int sampQuantity, string sampDateCollected){
        sampleID = sampID;
        sampleName = sampName;
        sampleType = sampType;
        location = sampLocation;
        description = sampDescription;
        storageCondition = sampStorageCondition;
        quantity = sampQuantity;
        dateCollected = sampDateCollected;
}

void Sample::displaySampleDetails(){
        cout <<  endl;
        cout << "Sample details" << endl;
        cout << "Sample ID         : " << sampleID << endl;
        cout << "Sample Name       : " << sampleName << endl;
        cout << "Sample Type       : " << sampleType << endl;
        cout << "Location          : " << location << endl;
        cout << "Description       : " << description << endl;
        cout << "Storage Condition : " << storageCondition << endl;
        cout << "Quantity          : " << quantity << endl;
        cout << "Date Collected    : " << dateCollected << endl;
        cout <<  endl;
}

//Destructor

Sample::~Sample(){
  cout << "--> Delete Sample" << endl ; 
}






