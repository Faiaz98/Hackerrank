#include <iostream>

bool isLeapYear(int year){
    if (year <= 1917){
        return (year % 4 == 0);
    }
    else {
        return ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)));
    }
}

std::string dayOfProgrammer(int year) {
    int day = 256;
    int dayOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if(year == 1918) {
        dayOfMonth[1] = 15;
    }else if (isLeapYear(year)){
        dayOfMonth[1] = 29;
    }
    
    int month = 0;
    while (day > dayOfMonth[month]) {
    day -= dayOfMonth[month];
    month++;
    }
    
    int dayWithZero = day;
    int monthWithZero = month + 1;
    
    std::string result = (dayWithZero < 10 ? "0" : "") + std::to_string(dayWithZero) + ".";
    result += (monthWithZero < 10 ? "0" : "") + std::to_string(monthWithZero) + ".";
    result += std::to_string(year);
    
    return result;
}

int main() {
    int year;
    std::cin >> year;
    
    if (year >= 1700 && year <= 2700) {
        std::string date = dayOfProgrammer(year);
        std::cout << ""<<date<<std::endl;
    }
    else{
        std::cout<<"error"<<std::endl;
    }
    
    return 0;
}
