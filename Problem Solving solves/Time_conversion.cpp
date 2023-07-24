#include <iostream>
#include <string>

std::string convertToMilitaryTime(const std::string& time) {
    std::string militaryTime = time;
    
    bool isPM = (time.substr(time.length()-2)=="PM");
    militaryTime.erase(militaryTime.length()-2);
    
    std::string hours = militaryTime.substr(0,2);
    std::string minutes = militaryTime.substr(3,2);
    std::string seconds = militaryTime.substr(6,2);
    
    int hour = std::stoi(hours);
    
    if (isPM && hour < 12){
        hour += 12;
    }
    else if(!isPM && hour == 12){
        hour = 0;
    }
    
    hours = (hour < 10) ? "0" + std::to_string(hour) : std::to_string(hour);
    militaryTime = hours + ":" + minutes + ":" + seconds;
    
    return militaryTime;
}

int main(){
    std::string time;
    std::cin>>time;
    
    std::string militaryTime = convertToMilitaryTime(time);
    std::cout<<"" <<militaryTime<<std::endl;
    return 0;
}