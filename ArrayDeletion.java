import java.util.Scanner;

class Delete{
    Scanner sc=new Scanner(System.in);
    int arr[];
    int n, index, temp;

    public void getIndex(){
        System.out.println("Enter the index of element you want to delete");
        index = sc.nextInt();
    }
    
    public int delete()
    {
        if(n == -1){
            System.out.println("Element can't be deleted. Array is Empty");
        }
        else{
            for(int i=index;i<n-1;i++){
            arr[i] = arr[i+1];
            temp = arr[index];
            }
            n -= 1;
        }
      return n;  
   }


}

class ArrayDeletion{
public static void main(String arg[]){
    int n = 0;
    Delete dl = new Delete();
    Scanner sc = new Scanner(System.in);

    System.out.println("Enter the  Number of Element you Want to Enter");
    n = sc.nextInt();

    int arr[] = new int[n];
    System.out.println("Enter the Elements");

    for(int i=0;i<n;i++)    {
        arr[i] = sc.nextInt();
    }

    System.out.println("The Elements are");
    
    for(int i=0;i<n;i++){
    System.out.println(arr[i]);
    }    
        dl.arr = arr;
        dl.n = n;
        dl.getIndex();
        n = dl.delete();
    
    System.out.println("The array After Deletion is");
 
    for(int i=0;i<n;i++){
        System.out.println(arr[i]);
        }    
     
    }
}