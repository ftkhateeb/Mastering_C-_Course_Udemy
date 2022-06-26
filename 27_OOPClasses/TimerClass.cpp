#include<iostream>
#include<vector>
using namespace std;
#include <sstream>
class Timer {
    
    private:
    int hours;
    int minutes;
    int seconds;
    
    public:
    Timer (int hours, int minutes, int  seconds)
    {
        setTime(hours, minutes, seconds);
    }
    Timer& setHours(int hours)
    {
        if (hours <0)
        {
            hours ==0;
        }
        else
        {
        this->hours = hours;
        }
    
        return *this;
    }
    
    Timer& setMinutes(int minutes)
    {
        if(minutes > 60)
        {
            while (minutes >= 60)
            {
                this-> hours++;
                minutes -= 60;
            }
            this->minutes = minutes;
        }
        else
        {
            this->minutes = minutes;
        }
        return *this;
    }
    
    
    Timer& setSecond(int seconds)
    {
        if(seconds >= 60)
        {
            while (seconds >=  60)
            {
                this-> minutes++;
                seconds -= 60;
            }
            this->seconds = seconds;

        }
        else
        {
            this->seconds = seconds;

        }
        
        return *this;
    }
    
    void setTime(int hours, int minutes, int seconds)
    {
        setHours(hours);
        setMinutes(minutes);
        setSecond(seconds);
    }
    
    void printTimeHHMMSS ()
    {
        cout<<toString()<<endl;
    }
    
    string toString (string separator = ":")
    {
        ostringstream oss;
        
        oss<<hours <<separator<<minutes<<separator<<seconds<<endl;
        return oss.str();
    }
    
};

int main ()
{
    Timer time1(0,120,120);
    time1.printTimeHHMMSS();
    
    time1.setHours(50).setMinutes(75).setSecond(75);
    time1.printTimeHHMMSS();

    
}