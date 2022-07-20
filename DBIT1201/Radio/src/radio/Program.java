
package radio;

import java.text.ParseException;

import java.text.SimpleDateFormat;

import java.util.Date;

public class Program {
    String item;

    public String getItem() {
        return item;
    }

    public void setItem(String item) {
        this.item = item;
    }

    public String getStart_time() {
        return start_time;
    }

    public void setStart_time(String start_time) {
        this.start_time = start_time;
    }

    public String getEnd_time() {
        return end_time;
    }

    public void setEnd_time(String end_time) {
        this.end_time = end_time;
    }
    String start_time;
    String end_time;
    
    public double getDurationMinute() throws ParseException{

    System.out.println("Enter Start time in format HH:mm:ss");
    String sta = getStart_time();

    System.out.println("Enter Stop time in format HH:mm:ss");
    String sto = getEnd_time();


    SimpleDateFormat format = new SimpleDateFormat("HH:mm:ss");
    Date date1 = format.parse(sta);
    Date date2 = format.parse(sto);

    long difference = date2.getTime() - date1.getTime();
    long minutes = difference/60000;

    double m = (double) minutes;

    //	System.out.println(minutes+" minutes");
    // System.out.println(hours+" hours");

    return m;
    }
    }
