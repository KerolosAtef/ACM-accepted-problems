/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package roma.and.lucky.numbers;

import java.util.Scanner;

/**
 *
 * @author kero atef
 */
public class RomaAndLuckyNumbers {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner o = new Scanner (System.in);
        int n = o.nextInt();
        int k = o.nextInt();
        for (int i=0;i<n ;i++)
        {
            char x = o.nextLine();
          int y=  x.length();
          char []arr =new char [y];
          for (int j=0;j<y ;j++)
          {
              arr [j]=x[0];
          }
        }
    }
    
}
