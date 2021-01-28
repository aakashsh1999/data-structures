
import java.util.Scanner;
class Searching{
    void binarySearch(int arr[], int element, int n)
    {      
            int low = 0, high = n-1, mid = (high + low)/2, index = 0 , flag = 0;
            while(high>=low)
            {
                if(element == arr[mid])
                {
                    index=mid+1;
                    flag=0;
                }
                else if(element > mid){
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
            if(flag == 1)
            {
                System.out.println("Element not Found");
            }
            else 
            {
                System.out.println("Element found at"+ index);
            }
    }
}

public class BinarySearch {
    public static void main(String arg[]){
        Scanner sc = new Scanner(System.in);
         Searching br = new Searching();
         int arr[] = new int[50];
         int n, element;
 
         System.out.println("Enter the Number of Element");
         n = sc.nextInt();
         System.out.println("Enter the Elements of Array");
         for(int i=0;i<n;i++){
             arr[i]=sc.nextInt();
         }
         System.out.println("The array after input is");
         for(int i=0;i<n;i++){
             System.out.println(arr[i]);
         }
         System.out.println("Enter the Element you want to search");
         element = sc.nextInt();
 
         br.binarySearch(arr, element, n);
     }
 }
