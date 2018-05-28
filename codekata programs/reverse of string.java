package guvi;

import java.util.Scanner;

public class whatever {
	public static void main(String[] args)
    {
      Scanner s=new Scanner(System.in);
      String a;
        a = s.nextLine();
      int n=a.length();
      
      String b="";
      int k=0;
      for(int i=n-1;i>=0;i--)
      {
          
          b+=a.charAt(i);
          
      }
    
    System.out.println(b);
}
}
