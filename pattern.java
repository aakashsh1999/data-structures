class pattern
{
    public static void main(String args[])
    {   int n=6;

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<(n*2)-1;j++)
                {
                    if(j>=n-i && j<=n+i)
                    {
                        System.out.print("#");
                    }
                    else 
                    {
                        System.out.print(" ");
                    }
                }
                
                System.out.println();
            
        }
        for(int i=n;i>=0;i--)
            {
                for(int j=(n*2)-1;j>=0;j--)
                {
                    if(j>=n-i && j<=n+i)
                    {
                        System.out.print("#");
                    }
                    else 
                    {
                        System.out.print(" ");
                    }                                                                                                                                                                               
                }
                
                System.out.println();
            
        }
    }
    
 }
