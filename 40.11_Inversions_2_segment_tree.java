import java.io.*;
import java.util.*;

public class Inversions2{
    public static int N = 100000;
    public static int []a = new int[N];
    public static int []tree = new int[4*N];

    public static void bulid(int node, int st, int en){
        if(st == en){
            tree[node] =a[st];
            return;
        }
        int mid = (st + en)/2;
        bulid(2*node, st, mid);
        bulid(2*node+1, mid+1, en);

        tree[node] = tree[2*node] + tree[2*node+1];
  
    }

    public static void update(int node , int st, int en, int idx, int val){
        if(st == en){
            a[idx] = val;
            tree[node] = val;
            return;
        }
        int mid = (st + en)/2;
        if(idx <= mid){
            update(2*node, st , mid, idx, val);
        }
        else
            update(2*node+1, st, mid, idx, val);

        tree[node] = tree[2*node] + tree[2*node+1];    
    }

    //kth one from the start
    public static int query(int node, int st , int en , int k){
        if(st == en){
            return st;
        }
        int mid = (st + en)/2;
        if(k < tree[2*node])
           return query(2*node, st , mid , k);
        else
           return query(2*node+1, mid+1, en , k-tree[2*node]);   
    }


    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i=0; i< n; i++){
            a[i] =1;

        }
        bulid(1,0,n-1);
        int cnt = n;
        int []b = new int[n];
        for(int i=0; i<n; i++){
            b[i] = sc.nextInt();
        }
        int []ans =new int[n];
        for(int i= n-1; i>=0; i--){
            int k = cnt - b[i] - 1;
            cnt--;

            int temp = query(1, 0, n-1, k);
            update(1,0,-1,temp,0);
            ans[i] = temp + 1;
        } 
        for(int i= 0 ; i<n; i++){
            System.out.print(ans[i] + " ");
        }

    }
}



// import java.util.*;
// public class test{
//     public static void main(String[] args){
//         Scanner in = new Scanner(System.in);
//         int lo = 1, hi = 1000000;
//         int ans = -1;
//         while(lo<=hi){
//             int mid = (lo+hi)/2;
//             System.out.println(mid);
//             System.out.flush();
//             String s;s = in.next();
//             if(s.equals("<")){
//                hi = mid - 1; 
//             }
//             else{
//                 ans = Math.max(ans, mid);
//                 lo = mid + 1;
//             }
//             System.out.print("!");
//             System.out.println(ans);
//             System.out.flush();
//         }
//     }
// }