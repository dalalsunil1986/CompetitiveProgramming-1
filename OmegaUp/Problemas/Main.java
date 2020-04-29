import java.util.*; 
import java.math.*; 
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
  
public class Main
{ 
    //Function to check and return prime numbers 

    static boolean checkPrime(long n) 
    { 
        // Converting long to BigInteger 
        BigInteger b = new BigInteger(String.valueOf(n)); 
  
        return b.isProbablePrime(1); 
    } 

    static BigInteger fib(int n){
        BigInteger a = new BigInteger("0");
        BigInteger b = new BigInteger("1");

        for(int i=0;i<n;i++){
            BigInteger c = a.add(b);
            a = b;
            b = c;
        }
        return a;
    }
  
    // Driver method 
    public static void main (String[] args) 
                         throws java.lang.Exception 
    { 

       	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine().trim());
        if(checkPrime(n)) System.out.println("Primo");
        else System.out.println(fib(n)); 
    } 
} 