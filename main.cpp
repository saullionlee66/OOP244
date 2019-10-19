#include <iostream>
#include <string>

using namespace std;

double Calculator()
{
    const double dayRate=0.4;
    const double nightRate=0.25;
    const double weekendRate=0.15;
    string day;
    char temp;
    int hour=0, minute=0;
    int duration;
    while(day!="Mo"&&day!="MO"&&day!="mo"&&day!="tu"&&day!="Tu"&&day!="TU"&&
    day!="We"&&day!="WE"&&day!="we"&&day!="Th"&&day!="TH"&&day!="th"&&
    day!="fr"&&day!="Fr"&&day!="FR"&&day!="Sa"&&day!="SA"&&day!="sa"&&
            day!="Su"&&day!="SU"&&day!="su")
    {
        cout<<"Enter the day (Mo Tu We Th Fr Sa Su): "<<endl;
        cin>>day;
    }
    cout<<"Enter the start time in 24-hour notation(eg, 13:30):"<<endl;
    cin>>hour>>temp>>minute;//cin is awesome here! Greatly simplify the problem
    cout<<"How long is the call in minutes?"<<endl;
    cin>>duration;
    if(day=="su" || day=="Su"|| day=="SU"||day=="sa"||day=="Sa"||day=="SA")
        return duration * weekendRate;
    else
    {
        if(hour>=8 && hour<=18 )
            return duration * dayRate;
        else
            return duration * nightRate;

    }

}
int main() {
    char yn;
    do{
        double totalFee=Calculator();
        cout<<"The total fee is "<<totalFee<<endl;
        cout<<"Do you want to continue?(Y/N): "<<endl;
        cin>>yn;
    }
    while(yn=='y'||yn=='Y');
    cout<<"GoodBye!"<<endl;

    return 0;
}