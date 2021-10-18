import java.util.*;
public class Main
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int r=sc.nextInt();
		int temp=n;
		int count=0;
		while(temp!=0)
		{
		    temp=temp/10;
		    count++;
		}
		
		    int q=n%(int)Math.pow(10,r);
		    int s=n/(int)Math.pow(10,r);
		    int num=q*(int)Math.pow(10,count-r)+s;
		    temp=num;
		    int count1=0;
		    while(temp!=0)
		{
		    temp=temp/10;
		    count1++;
		}
		String str=""+num;
		if (count1==count){
		    System.out.println(num);
		    
		} 
		else{
		    for (int i=0;i<count-count1 ;i++ ){
		        str='0'+str;
		    } 
		    System.out.println(str);
		}
		    
		    
		
	}
}

