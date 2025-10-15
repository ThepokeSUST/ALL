import java.util.Scanner;
import java.util.Arrays;
import java.lang.Math;

public class ArrayClass {
    public static void main(String[] args) {

        // for(int i=0;i<10;i++)
        // System.out.println(Math.random());

        Scanner sc = new Scanner(System.in);










        // int n=sc.nextInt();
        // int[] arr= new int[n];

        // for(int i=0;i<n;i++)
        // System.out.print(arr[i]+" ");
        // System.out.println();

        // System.out.println("now for multidiamnetional arrays");
        // n= sc.nextInt();
        // int[][] brr=new int[n][];
        // System.out.println("for inner array");
        // for(int i=0;i<n;i++){
        // int m= sc.nextInt();
        // brr[i]=new int[m];
        // }

        // System.out.println("printing the array");
        // for(int i=0;i<n;i++){
        // for(int j=0;j<brr[i].length;j++){
        // System.out.print(brr[i][j]+" ");

        // }
        // System.out.println();
        // }











     


        // int[] arr = { 4, 2, 5, 672, 23, 7 };// arr previously declared as a one diamentional array

        // int n;
        // n = 4;
        // int[][] brr = new int[n][n];
        // int idx = 9;
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         brr[i][j] = idx++;
        //     }
        // }
        // System.out.println(Arrays.toString(arr));
        // System.out.println(Arrays.toString(brr));
        // System.out.println();
        // System.out.println(Arrays.deepToString(brr));
        // System.out.println();
        // System.out.println(Arrays.asList(arr));
        // System.out.println(Arrays.asList(brr));

        // System.out.println("3D Array Created");
        // int[][][] crr= {{{1,2,3},{6,4,34}},{{7,54,34},{3,243,45}}};
        // System.out.println(Arrays.toString(crr));
        // System.out.println(Arrays.deepToString(crr));

        // System.out.println();
        // System.out.println(Arrays.asList(crr));

        // System.out.println("Binary search on crr");
        // // System.out.println(Arrays.binarySearch(crr, 45));//error . binarySearch works only on one diamnetional arrays only.
        // System.out.println(Arrays.toString(arr));
        // System.out.println(Arrays.binarySearch(arr, 4));
        // arr[2]=0;
        // System.out.println(Arrays.binarySearch(arr, 4));
        // Arrays.sort(arr);
        // System.out.println(Arrays.toString(arr));
        // System.out.println(Arrays.binarySearch(arr, 4));











        // System.out.println("Compare to Arrays");
        // int[] arr={3,44,45,45};
        // int[] brr={5,432};
        // System.out.println();
        // System.out.println(Arrays.toString(arr));
        // System.out.println(Arrays.toString(brr));
        // System.out.println();
        // System.out.println(Arrays.compare(arr,brr));//compare lexicpgraphically 
        // System.out.println(Arrays.compare(brr,arr));

        // // arr={-3,44,45,45};//error
        // arr[0]*=-1;
        // brr[0]*=-1;
        // System.out.println(Arrays.toString(arr));
        // System.out.println(Arrays.toString(brr));
        // System.out.println(Arrays.compareUnsigned(arr,brr));
        // System.out.println(Arrays.compare(brr,arr));
        // System.out.println();
        // System.out.println(Arrays.compareUnsigned(arr,brr));
        // System.out.println(Arrays.compareUnsigned(brr,arr));
        
        // int[][] ARR={{1,2,3},{3,45,4}};
        // int[][] BRR={{1,2,3},{3,45,4}};
        // // System.out.println(Arrays.compare(ARR, BRR));
        // int[][] CRR=Arrays.copyOf(ARR,ARR.length);
        // System.out.println(Arrays.deepToString(ARR));
        // System.out.println(Arrays.deepToString(CRR));
        // ARR[1][1]=999;
        // System.out.println(Arrays.deepToString(ARR));
        // System.out.println(Arrays.deepToString(CRR));

        
           
           

           
           int[] arr={1,2,3,4};
           int[] brr={1,2,3,4};
           System.out.println(Arrays.equals(arr, brr));
           brr[0]=0;
           System.out.println(Arrays.equals(arr,brr));
           int[][] ARR={{1,2,3},{4,5,6},{2,33}};
           int[][] BRR={{1,2,3},{4,5,6}};
           System.out.println(Arrays.deepEquals(ARR, BRR));
           System.out.println();
           Arrays.fill(arr,5);
           System.out.println(Arrays.toString(arr));
           int a[]={2,3};
           Arrays.fill(ARR,a);
           System.out.println(Arrays.deepToString(ARR));
           ARR=Arrays.copyOf(BRR, BRR.length);
           System.out.println(Arrays.equals(ARR, BRR));
           System.out.println(Arrays.deepEquals(ARR, BRR));


    }
}
