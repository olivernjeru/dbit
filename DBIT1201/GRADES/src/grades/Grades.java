package grades;

import java.util.Scanner;

public class Grades {
    public static void main(String[] args){
        System.out.println("Enter the number of questions that are in the quiz");
        int P;
        Scanner myP=new Scanner(System.in);
        P=myP.nextInt();
        
        Scanner sc2 =new Scanner(System.in);
        System.out.println("Input marking scheme");
        int[] correctanswers=new int[P];
        for (int j=0;j<P; j++){
        correctanswers[j]=sc2.nextInt();
        }
        Scanner sc1 =new Scanner(System.in);
        System.out.println("Please enter your answers");
        int count=0;
        int[] givenanswers;
        givenanswers=new int[P];
        for(int i=0;i<P;i++){
        givenanswers[i]=sc1.nextInt();
        
        if (correctanswers[i]==givenanswers[i]){
            System.out.println("Correct");
          count=count+1;
        }else{
            System.out.println("Wrong");
        }
        }
        System.out.println((count*100)/P);
    }
    }

    
