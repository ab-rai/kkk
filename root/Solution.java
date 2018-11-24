
import java.util.*;
public class Solution
{
  public static void main(String[] args)
  {
    Scanner scan = new Scanner(System.in);
    int n = scan.nextInt();
    int[][] arr = new int[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        arr[i][j] = scan.nextInt();
      }
    }
    int cart = 1;
    int i=0,j=0;
    if(arr[i][j]>cart)
    {
      cart = arr[i][j];
    }
    while(i!=n-1 || j!=n-1)
    {


      // System.out.println(i!=n-1 && j!=n-1);
      // System.out.println("i and j"+i+" "+j);
      // System.out.println("cart "+cart);
      // System.out.println(i+1<=n-1 && j+1<=n-1);
      // System.out.println(j+1<=n-1 && i+1>n-1);
      // System.out.println(i+1<=n-1 && j+1>n-1);
      if(i+1<n && j+1<n)
      {
        i = i+1;
        j = j+1;
        int row = arr[i-1][j];
        int col = arr[i][j-1];
        if(row<col)
        {
          if(row>cart)
          {
            cart = row;
          }
          i = i-1;
        }
        else if(col<row)
        {
          if(col>cart)
          {
            cart = col;
          }
          j = j-1;
        }
        else if(row==cart)
        {
          if(row>cart)
          {
            cart = row;
          }
          i= i-1;
        }
      }


      else if (i+1<=n-1 && j+1>n-1)
      {
        i = i+1;
        int row = arr[i][j];
        if(row>cart)
        {
          cart = row;
        }
      }


      else if(j+1<=n-1 && i+1>n-1)
      {
        j = j+1;
        int col = arr[i][j];
        if(col>cart)
        {
          cart = col;
        }
      }


    }
    // System.out.println("final "+i+" "+j);
    // System.out.println("cart "+cart);
    System.out.println(cart);
  }
}
