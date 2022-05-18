class Sample {
private: 
    string sampleID;
    string sampleName;
    string sampleType;
    string location;
    string description;
    string storageCondition;
    int quantity;
    string dateCollected;
public:
    Sample();//default constructor
    Sample(string sampID, string sampName, string sampType, string sampLocation, string sampDescription, string sampStorageCondition, int sampQuantity, string sampDateCollected);//overloaded constructor

    void displaySampleDetails();

    ~Sample(); //destructor
};