// 返回值含义：如果已经是最后一个序列则返回false。
// 注意：需要引用<algorithm>或自己写一个swap。
bool next_perm(int *item, int n)
{
    int j=(n-1)-1;
 
    while (j>=0 and item[j]>=item[j+1]) j--;
 
    if (j>=0)
    {
        int k=n-1;
        while (item[k]<=item[j]) k--;
 
        swap(item[j], item[k]);
 
        for (int p=j+1,q=n-1; p<q; p++,q--)
            swap(item[p], item[q]);
    }
 
    return j>=0;
}
