package sales;

import java.util.Scanner;

public class Sales {

    public static void main(String[] args) {

        final int SALESPEOPLE = 5;
        int[] sales = new int[SALESPEOPLE];
        int sum;
        int high=0;
        int low = 0;
        int highest=sales[0];
        Scanner scan = new Scanner(System.in);
        for (int i=0; i<sales.length; i++)
        {
            
            System.out.println("Enter the sales for salesperson " + i + ": ");
            sales[i] = scan.nextInt();
        }
        int lowest=sales[0];
        for (int i=0; i<sales.length;i++){
            if(sales[i]>highest){ highest=sales[i];
            high=i;}
                    }
        System.out.println("The Highest sale is: " +highest+" for " +high);
        
            for (int i=0; i<sales.length;i++){
                if(sales[i]<lowest) {
                lowest=sales[i];
                low=i;
            }
            }
            System.out.println("The Lowest sale is: " +lowest+" for" +low);
            
        
        System.out.println("\nSalesperson Sales");
        System.out.println("--------------------");
        sum=0;
        for (int i=0; i<sales.length; i++)
        {
            System.out.println(" " + i + " " + sales[i]);
            sum += sales[i];
        }
        System.out.println("\nTotal sales: " + sum);
        double averagesale;
        averagesale=sum/5;
        System.out.println("Average Sale: " + averagesale);
        
        
        
     
        
    }
}
    
