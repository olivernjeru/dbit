package radio;

import java.text.ParseException;

public class Show {
    String name;
    String language;
    Program program;

    public Show(){
        this.program=new Program();
    }
    
    public String getItem(){
    return program.getItem();
    }
    public double getDuration() throws ParseException{
    return program.getDurationMinute();
    }
    
    public String runShow() throws ParseException{
    String myshow = "Name: "+getName()+"\nLanguage: "+getLanguage()+"\nItem: "+getItem()+"Duration: "+getDuration();
    return myshow;
   }
    
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getLanguage() {
        return language;
    }

    public void setLanguage(String language) {
        this.language = language;
        
    }
    }


