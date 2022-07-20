/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package helloworld;

/**
 *
 * @author Oliver Njiru
 */
public class HelloWorld {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int first=357;
        int second=47;
        int third;
        third=second;
        second=first;
        first=third;
        System.out.println("Hello World!!!"); 
        System.out.println("first= " + first + "second= " + second);
    }
    
}
