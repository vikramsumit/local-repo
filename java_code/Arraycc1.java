// import java.util.*;

public class Arraycc1 {
    public static int linearsearch(int numbers[], int key){
        for(int i=0; i<numbers.length; i++) {
            if(numbers[i] == key){
                return i;
            }
        }

        return -5;
    }
    public static String searchFruit(String fruits[], String key2) {  
        for (int i = 0; i < fruits.length; i++) { // FIXED: Used correct array
            if (fruits[i] == (key2)) {
                return fruits[i];
            }
        }
        return "Not found";  
    }

    public static void main(String[] args) {
        int numbers[]= {2,4,6,8,10,12,14,16,18,888};
        String fruits[] = {"raja" , "khaja" , "bamd" , "baja"};
        int key = 18;
        String key2 = "bamd";


        int index=linearsearch(numbers, key);
        if (index == -5){
            System.out.println("not found");
        }
        else{
        System.out.println("key is at index:"+ index);
        }

        String result = searchFruit(fruits, key2);
        System.out.println("Fruit search result: " + result); 
    }
}
