import java.math.*; 
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
  
public class Main
{ 
  
    public static void main (String[] args) 
                         throws java.lang.Exception 
    { 

       	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BigInteger a = new BigInteger(br.readLine());
      
       	if(a.isProbablePrime(1))System.out.println("El " + a + " es primo");
      	else System.out.println("El "+ a + " no es primo");
    } 
}