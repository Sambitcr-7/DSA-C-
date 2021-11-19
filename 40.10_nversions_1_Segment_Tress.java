import java.io.*;
import java.util.*;

public class Inversions{
    public static int N = 100002;
    public static int []tree = new int[4*N];

    public static int query(int node, int st, int en, int l, int r){
        if(l>en || r < st)
        return 0;

        if(l <=st && en <= r){
            return tree[node];
        }
        int mid = (st + en)/2;
        int q1 = query(2*node, st, mid, l, r);
        int q2 = query(2*node+1, mid+1, en, l, r);

        return q1+q2;
    }

    public static void update(int node, int st, int en, int idc, int val){
        if(st == en){
            tree[node] = val;
            return;
        }
        int mid = (str + en)/2;
        if(idx <= mid){
            update(2*node, st, mid, idx, val);
        }
        else{
            update(2*node+1, mid+1, en, idx, val);
        }
        tree[node] = tree[2*node] + tree[2*node+1];
    }

    public static void main(String[] arges){
        for(int i=0; i<4*N; i++){
            tree[i] = 0;
        }
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i=0; i<n; i++){
            int x = sc.nextInt();

            int ans = query(1,1,n,x,n);
            System.out.print(ans + " ");
            update(1,1,n,x,1);
        }

    }
}