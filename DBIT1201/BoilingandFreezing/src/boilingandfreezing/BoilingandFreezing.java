package BoilingandFreezing;

import java.util.Scanner;

public class BoilingandFreezing{
    public static void main(String[] args){
        System.out.println("Please input the temperature");
        Scanner sc=new Scanner(System.in);
        int temperature=sc.nextInt();
        if(temperature<=0){
            System.out.println("The water has frozen");
        }else{
            if(0<temperature && temperature<100){
                System.out.println("The water is in normal state");
            }else{
                System.out.println("The water is boiling");
            }
        }
    }
}