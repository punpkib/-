## EX10
```
int main()
{
    int in = 0, in2 = 0, c = 0;
    cin >> in >> in2;
 ```
    
聲明三個整數變量in、in2和c，然後使用輸入運算符>> 讀取兩個整數，並把它們分別存儲在in和in2中。

```
if (in < in2)
 {
        c = in;
        in = in2;
        in2= c;
    }
```
檢查in和in2的大小，如果in小於in2，則交換它們的值，第一個輸入參數必須大於等於第二個輸入參數。
```

    cout << euc(in, in2) << endl;
    return 0;
}
```
把in和in2的值作為輸入參數傳遞給euc，最後，使用<<將euc函數的返回值輸出到輸出流。
```
int euc(int a, int b)
{
    int f = a % b;
    if (f == 0) return b;
    else return euc(b, f);
}
```

兩個整數作為輸入參數，分別是a和b。首先，計算a除以b的餘數，將結果存在f中，如果f等於0，則b是最大公因數，直接返回b，否則，它遞迴調用自身，將b和f作為輸入參數傳遞給它，直到f等於0為止。



