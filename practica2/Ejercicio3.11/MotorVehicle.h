#include <string>

//make (type string), fuelType (type string), yearOfManufacture (type int), color (type string) and engineCapacity (type int).
//using: make (type string), fuelType (type string), yearOfManufacture constructor
class MotorVehicle { 
    public:

    MotorVehicle(std::string makeName,std::string colorName, int year)
                :make{makeName}, color {colorName} {
            if(year > 0) {
                yearofManufacture = year;
            }
        }

        void setmakeName(std::string makeName) {
            make = makeName;
        }

        std::string getmakeName() const {
            return make;
        }

        void setfuel(std::string fuel) {
            fuelType = fuel;
        }

        std::string getfuel() const {
            return fuelType;
        }

        void setyear(int year) {
            yearofManufacture = year;
        }

        int getyear() const {
            return yearofManufacture;
        }
        void setcolor(std::string colorName) {
            color = colorName;
        }

        std::string getcolor() const {
            return color;
        }

        void setengineCapacity(int engine) {
            engineCapacity = engine;
        }

        int getengineCapacity() const {
            return engineCapacity;
        }

        void displayCarDetails() const{
            std::cout<<" makeName: "<<make <<"\n color: "<< color<<"\n yearofManufacture: "<< yearofManufacture<<"\n fuelType: "<< fuelType<<"\n engineCapacity: "<<engineCapacity<<"\n"<< std::endl;
        }
 private:
        std::string make;
        std::string fuelType{"sin definir"};
        std::string color;
        int yearofManufacture{0};
        int engineCapacity{0};
 };