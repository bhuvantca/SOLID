#include <iostream>
#include <string>

// Class 1: Responsible for data storage and manipulation (single responsibility).
class DataManager {
public:
    void storeData(const std::string& data) {
        // Simulate storing data to a file or database.
        std::cout << "Stored data: " << data << std::endl;
    }

    std::string retrieveData() {
        // Simulate retrieving data from a file or database.
        return "Retrieved data";
    }
};

// Class 2: Responsible for presentation (single responsibility).
class DataPresenter {
public:
    void presentData(const std::string& data) {
        // Simulate displaying data in the console.
        std::cout << "Presented data: " << data << std::endl;
    }
};

int main() {
    // Client code uses the two classes for their respective responsibilities.
    DataManager dataManager;
    DataPresenter dataPresenter;

    // Store and retrieve data.
    dataManager.storeData("Some important data");
    std::string retrievedData = dataManager.retrieveData();

    // Present the retrieved data.
    dataPresenter.presentData(retrievedData);

    return 0;
}
