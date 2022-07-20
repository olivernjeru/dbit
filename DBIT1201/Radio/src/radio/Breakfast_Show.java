package radio;

import java.text.ParseException;

public class Breakfast_Show extends Show {
String genre;
int noRequest;

public Breakfast_Show(){
noRequest=0;
}

public String getGenre() {
return genre;
}

public void setGenre(String genre) {
this.genre = genre;
}

public void makeRequest(){
noRequest++;
}

public int countRquest(){
return noRequest;
}

@Override
public String runShow() throws ParseException{
String show = "Genre: "+getGenre()+"\nRequests: "+countRquest()+super.program.getDurationMinute();
return show;
}


}

