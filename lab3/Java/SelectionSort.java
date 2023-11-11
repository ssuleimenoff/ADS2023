package lab3;
import java.util.Arrays;
public class SelectionSort{
    public static void selectionSort(int[] array){
        for(i=0;i<array.length;i++){
            int iMin = i;
            for(int j = i + 1;j<array.length;j++){
                if(array[j] < array[iMin]){
                    iMin = j;
                }
            }
            if(iMin != i){
                int temp = array[i];
                array[i] = array[iMin];
                array[iMin] = temp;
            }
        }
    }
    public static void main(String[] args){
        int[] myArray = {4,2,6,5,1,3};
        selectionSort(myArray);
        System.out.println(Arrays.toString(myArray));
        /*
        EXPECTED OUTPUT:
        ----------------
        [1,2,3,4,5,6]
         */
    }
}