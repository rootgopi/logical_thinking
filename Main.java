import java.util.*;
public class Main{
	public static void main(String [] args)
	{
	    boolean flag=true;
	    Scanner s=new Scanner(System.in);
	    do{
	        System.out.println("\n******************************************\n");
	        System.out.println("1.stringreverse");
	        System.out.println("2.checkprime");
	        System.out.println("3.largest");
	        System.out.println("4.numreverse");
	        System.out.println("5.minmax");
	        System.out.println("press 6 to exit");
	        System.out.println("enter the choice for output");
	        System.out.println("\n****************************************\n");
	        int inp=s.nextInt();
	        switch(inp)
	        {
	            case 1:
	                {
	                    System.out.println("Enter the string to reverse");
	                    stringreverse();
	                    break;
	                }
	            case 2:
	                {
	                    System.out.println("Enter the num to check for prime/not");
	                    checkprime(s.nextInt());
	                    break;
	                }
	            case 3:
	                {
	                    System.out.println("largest num from array");
	                    largest();
	                    break;
	                }
	            case 4:
	               {
	                  
	                   numreverse();
	                   break;
	               }
	           case 5:
	               {
	                   System.out.println("min and max from an array");
	                   minmax();
	                   break;
	               }
	           case 6:
	           {
	               flag=false;
	               break;
	           }
	           default:
	           {
	               System.out.println("Enter the correct input value");
	               break;
	               
	           }
	        }
	        
	    }while(flag);
	   
	    
	}

public static void stringreverse()
{
		String s="codecode";
		String r="";
		for(int i=s.length()-1;i>=0;i--)
		{
			r+=s.charAt(i);
		}
		System.out.println(r);
}
public static void checkprime(int a)
{
    int count=0;
    for(int i=2;i<=a;i++)
    {
        if(count==2)
          {
              System.out.println("prime");
              break;
          }
          if(a%i!=0)
            count++;
          else{
              System.out.println("not prime");
              break;
          }
    }
   
    
}

public static int len(int g)
	{
		int count=0;
		while(g>0)
		{
			g=g/10;
			count++;
		}
		return count;
	}
	public static int powr(int b)
	{
		int ten=1;
		int i=0;
		while(i<b)
		{
			ten=ten*10;
			i++;
		}
		return ten;
	}
	
	public static long com(int giv)
	{
		long res=0;
		res=(res*(powr(len(giv))))+(giv);
		return res;
	}
	public static int last(int given)
	{
		while(given>9)
		{
			given=given/10;
		}
		return given;
			
	}

	public static void largest()
	{
		int a[]= {54,546,548,60};
		int leng=a.length;
		int key=-1;
		int j=0,z=0;
		int fin;
		while(j<leng)
		{
			key=-1;
			for(int i=0;i<leng;i++)
			{
				if(last(a[i])>key)
				{
					key=last(a[i]);
					z=i;
				}
				else if(last(a[i])==key)
				{
					if(a[i]>a[z])
					{
						key=last(a[i]);
						z=i;
					}
				}
				
			}
			fin=a[z];
			a[z]=-1;
			j++;
			if(j==leng)
				System.out.print(com(fin));
			else
				System.out.print(com(fin));
		}
		
	   System.out.println();	
	}
	public static void numreverse()
	{
		int num=988;
		int res=0;
		while(num>0)
		{
			res=res*10+num%10;
			num/=10;
		}
		System.out.println("reversed num="+res);
	}
	
	public static void minmax()
	{
		int a[]= {54, 546, 548, 60};
		int n=a.length;
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				
			}
		}
		
		System.out.println("min="+a[0]+"  max="+a[a.length-1]);
		
	}
	
}
	


