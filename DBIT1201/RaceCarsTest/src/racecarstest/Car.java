package racecarstest;

public class Car {
    //we create an attribute name for the
    public Engine engine;
    public Car(){
        // to create composition relationship
        // we call remote methods using the instance of the relating 
        //class within the constructor
        this.engine = new Engine();
    }
    String name;
    String performance;
    String number_plate;
    String number_of_pistons;
    String carburetor_number;

    public String getCarburetor_number() {
        return carburetor_number;
    }

    public void setCarburetor_number(String carburetor_number) {
        this.carburetor_number = carburetor_number;
    }

    public String getNumber_of_pistons() {
        return number_of_pistons;
    }

    public void setNumber_of_pistons(String number_of_pistons) {
        this.number_of_pistons = number_of_pistons;
    }

    public String getNumber_plate() {
        return number_plate;
    }

    public void setNumber_plate(String number_plate) {
        this.number_plate = number_plate;
    }
    
    //to get Piston No of the car
    public int getPiston_number(){
        return engine.getPiston_number();
    }
    //to get carburator

    public void setName(String name) {
        this.name = name;
    }

    public void setPerformance(String performance) {
        this.performance = performance;
    }

    public String getName() {
        return name;
    }

    public String getPerformance() {
        return performance;
    }
    
}
