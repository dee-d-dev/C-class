#include <iostream>
using namespace std;

//implement Class
class Car{
    //access modifiers private, public, protected ENCAPSULATION CONCEPT
 private:
    int Year_of_prod;
    double Price;
 protected:
    string Model;
    bool IsBroken;
 public:
    //class Constructor(for creating instances)
    Car(string model, int year_of_prod, double price){
        Model = model;
        Year_of_prod = year_of_prod;
        Price = price;
        IsBroken = false;
    }

    //class methods(for creating actions)
    void getInfo(){
        cout<<"name: " << Model<<endl;
        cout<<"year of production: " << Year_of_prod<<endl;
        cout<<"price: " << Price<<endl;
    }

    void crashCar(){
        cout<<"Your "<<Model<<" crashed"<<endl;
        IsBroken = true;
    }

    void repairCar(){
        cout<<"Your "<<Model<<" has been repaired."<<endl;
        IsBroken = false;
    }

    void move(){
        if(IsBroken){
            cout<<"Your "<< Model<<" is broken"<<endl;
        } else{
            cout<<"your "<< Model<<" is moving"<<endl;
        }
    }
};

//Derived classes INHERITANCE
class FlyingCar :public Car {
    public:
    FlyingCar(string model, int year_of_prod, double price): Car(model, year_of_prod, price){

    }
    void move(){
        if(IsBroken){
            cout<<"Your "<<Model<<" is broken"<<endl;
        } else{
            cout<<"your "<<Model<<" is flying"<<endl;
        }
    }
    
    
};

//Derived classes INHERITANCE
class UnderWaterCar :public Car {
    public:
    UnderWaterCar(string model, int year_of_prod, double price): Car(model, year_of_prod, price){

    }

    //POLYMORPHISM smae method but different implementations
    void move(){
        if(IsBroken){
            cout<<"your "<<Model<<" is broken"<<endl;
        } else{
            cout<<"your "<<Model<<" is swimming"<<endl;
        }
    }
};

int main(){
    Car Tesla("Tesla", 2020, 50000);
    FlyingCar SpaceX("Sky nomad", 2040, 100000);
    UnderWaterCar SeaGhost("Sea beast", 2025, 300000);

    // Tesla.move();
    // SpaceX.move();
    // SeaGhost.move();

    string name;

    cin>>name;

    cout<<name;

    system("pause>0");
}
