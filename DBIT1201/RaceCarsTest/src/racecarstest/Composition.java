package racecarstest;

import java.util.Scanner;

public class Composition {
    
public static void main (String[] args){
    Scanner input1=new Scanner(System.in);
    Scanner input2=new Scanner(System.in);
    Scanner input3=new Scanner(System.in);
    Scanner input4=new Scanner(System.in);
    
    //create instance for Car and Engine
    //classes
    Car car1= new Car();
    //ask user to key in Car details
    System.out.println("Enter No. Plate");
    car1.setNumber_plate(input1.nextLine());
    System.out.println("Enter Performance");
    car1.setPerformance(input2.nextLine());
    //we ask form the Engine details
    System.out.println("Enter no of pistons");
    car1.setNumber_of_pistons(input3.nextLine());
    System.out.println("Enter no of Carburators");
    car1.setCarburetor_number(input4.nextLine());
    System.out.println("No Plate: "+car1.getNumber_plate()+"\nperformance: "+car1.getPerformance()+"\nNumber of Pistons: "+car1.getNumber_of_pistons()+"\nCarburetors: "+car1.getCarburetor_number());
}
}
