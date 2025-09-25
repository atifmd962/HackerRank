import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class PROBLEM3 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int check=sc.nextInt();
        if(check%2!=0){
            System.out.println("Weird");
        }else if(check>=2 && check<=5){
            System.out.println("Not Weird");
            } else if(check>=6 && check<=20){
                System.out.println("Weird");
            }
            else if(check>20){
                System.out.println("Not Weird");
            }
            
    }



}
