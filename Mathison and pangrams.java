/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int[] n=new int[26];
		    for(int k=0;k<26;k++){
		        n[k]=sc.nextInt();
		    }
		    String s=sc.next();
		    int count=0;
		    for(int i='a';i<='z';i++){
		        if(s.indexOf(i)==-1){
		            count=count+n[i-'a'];
		        }
		       
		    }
		    System.out.println(count);
		}
		    
	}
}
