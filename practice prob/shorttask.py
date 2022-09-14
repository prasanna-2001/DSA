 for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(a[i] != b[j]){
                res = i;
                flag=1;
            }
            if(flag == 1)
                break;
        }
        if(flag==1)
            break;
    }
    cout << res;