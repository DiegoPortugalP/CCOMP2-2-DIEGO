#include <string>

//members—a month (type int), a day (type int) and a year (type int).
class Date { 
    public:

    Date(int initialDay,int initialMonth, int initialYear)
                :day{initialDay}, year {initialYear} {
            if((initialMonth > 0)&&(initialMonth <=12)) {
                month = initialMonth;
            }
            else{
                month=1;
            }
        }

        void setDay(int daySet){
            day=daySet;
        }
        void setMonth(int monthSet){
            if((monthSet > 0)&&(monthSet <=12)) {
                month = monthSet;
            }
            else{
                month=1;
            }
        
        }
        void setYear(int yearSet){
            year=yearSet;
        }

        int getDay()const{
            return day;
        }
        
        int getMonth()const{
            return month;
        }
        
        int getYear()const{
            return year;
        }


    void displayDate()const{
            std::cout<<day<<"//"<<month<< "//"<< year << std::endl;

    }   
 private:
        int day{0};
        int month{0};
        int year{0};
 };