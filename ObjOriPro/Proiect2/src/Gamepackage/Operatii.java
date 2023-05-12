package Gamepackage;

import java.util.ArrayList;

public class Operatii {
    public static double AfisareMediePreturi(ArrayList<Game> list) {
        int i = 0;
        double sum = 0;
        for (i = 0; i < list.size() && list.get(i) != null; i++) {
            sum += list.get(i).getPrice();
        }
        return sum/i;
    }
    public static Game AfisareMaxRating(ArrayList<Game> list){
        Game aux=new Game();
        double maxrating=0;
        for(int i = 0; i<list.size() && list.get(i) !=null; i++)
        {
            if(maxrating< list.get(i).getRating())
            {
                maxrating= list.get(i).getRating();
                aux=list.get(i);
            }
        }
        return aux;
    }
}
