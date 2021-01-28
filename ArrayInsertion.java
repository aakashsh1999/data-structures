import java.util.Scanner;

class Insertion{
    public int insert(int arr[], int index, int element, int size )
    {
        int len=0;
        len=size;
        if(len>=arr.length){
            System.out.println("Element can't Be Inserted. Array is fuLL");
        }
        else {
             for(int i=len-1;i>=index;i--) {
                 arr[i+1]=arr[i];
                 arr[index]=element;
             }   
             len+=1;
             System.out.println("The "+element+"Inserted Successfully");
        }
        return len;
    }
}

class ArrayInsertion{
   public static void main(String arg[]){

        int element, index;
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[100];   
        int size=5;
        Insertion in=new Insertion();

        arr[0] = 20;
        arr[1] = 30;
        arr[2] = 4;
        arr[3] = 75;
        arr[4] = 35;
        
        System.out.println("The Data is: ");
        for(int i=0;i<size;i++){
            System.out.println(arr[i]);
        }

        System.out.println("Enter the element you want to insert");
        element = sc.nextInt();
        System.out.println("Enter the index where you want to insert");
        index=sc.nextInt();
        
        size=in.insert(arr, index, element, size);
        System.out.println("Array After insertion is");
        
        for(int i=0;i<size;i++){
            System.out.println(arr[i]);
        }
    }
}
