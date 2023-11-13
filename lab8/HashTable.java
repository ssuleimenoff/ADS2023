/* 
import java.util.*;

public class Main{
    public static void main(String args[]){
        HashTable<Integer, String> table = new HashTable<>(10);

        table.put(100, "Spongebob");
        table.put(123, "Patrick");
        table.put(321, "Sandy");
        table.put(555, "Squidward");
        table.put(777, "Gary");

        //table.remove(777);

        for(Integer key : table.keySet()){
            System.out.println(key.hashCode() + "\t" + key + "\t" + table.get(key));

        }
    }
} 
*/