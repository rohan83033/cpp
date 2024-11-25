#include <iostream>
using namespace std;

int mian(){
    std::cout << "hello welcome to carpet cleaning servie." << endl;
    std::cout << "\nHow many room would you like to cleaned " ;

    int number_of_Rooms {0};
    std::cin >> number_of_Rooms;

    std::cout << "estimate for claeaning service" << endl;
    std::cout << "number of rooms : $" << number_of_Rooms << endl;
    std::cout << "Price per Room: $" << 30 << endl;
    std::cout << "Cost : $" << 30 * number_of_Rooms << endl;
    std::cout << "tax: $" << 30 * number_of_Rooms * 0.06 << endl;
    std::cout << "=============================================" << endl;
    std::cout << "Total Estimate : " << (30 * number_of_Rooms) + (30 * number_of_Rooms * 0.06) << endl;
    std::cout << "This Estimate is valid for" << 30 << "days" << endl;

    std::cout << endl;
    return 0;
}