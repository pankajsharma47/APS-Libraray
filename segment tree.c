#include <stdio.h>
#include <limits.h>

void buildSeg(int *arr, int *seg, int s, int e, int node)
{
    if(s==e){
        seg[node] = arr[s];
        return;
    }

    int mid = s + (e - s)/2;
    buildSeg(arr, seg, s, mid, 2*node + 1);
    buildSeg(arr, seg, mid+1, e, 2*node + 2);

    if(seg[2*node+1] < seg[2*node+2])
        seg[node] = seg[2*node+1];
    else
        seg[node] = seg[2 * node + 2];
}

int findMin(int *seg, int s, int e, int node, int l, int r)
{
    if(s > r || e < l){
        return INT_MAX;
    }  
    if(s >=l && e <= r )
        return seg[node];
    
    int mid = s + (e-s)/2;
    int a = findMin(seg, s, mid, 2*node+1, l, r);
    int b = findMin(seg, mid+1, e, 2*node+2, l, r);

    if(a<b)
        return a;
    return b;
}

int main()
{
    int t = 1;
    //cin >> t;

    while (t--)
    {
        int n, m;
        scanf("%d", &n);
        scanf("%d", &m);

        int arr[n];

        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        int segTree[4*n];
        
        buildSeg(arr, segTree, 0, n-1, 0);

        while(m--){
            int l, r;
            scanf("%d", &l);
            scanf("%d", &r);

            int res = findMin(segTree, 0, n-1, 0, l, r);

            printf("%d\n", res);

        }


    }

    return 0;
}