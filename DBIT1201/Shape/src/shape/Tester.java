package shape;
import java.util.Scanner;

public class Tester {
    public static void main(String args[]){
        Shape tri = new Shape();
        Scanner myInput=new Scanner(System.in);
        System.out.println("Enter base");
        int b=myInput.nextInt();
        tri.setBase(b);
        Scanner myInput2=new Scanner(System.in);
        System.out.println("Enter Height");
       int h=myInput2.nextInt();
        tri.setHeight(h);
        System.out.println("Area is: "+
                tri.cal_tArea(b,h));
        Shape cir=new Shape();
        Scanner myInput3=new Scanner(System.in);
        System.out.println("Enter Radius");
        double r=myInput3.nextDouble();
        cir.setRadius(r);
        System.out.println("Area is: "+
                cir.cal_cArea(r));
    
}
}