for(; a<=b; a++) {
        ehprimo = 1;
        for(int i=2; i<a && ehprimo ==1; i++){
            if(a % i == 0)
            ehprimo = 0;
        }
        if(ehprimo == 1){
            printf("%d\n",a);
        }
    }
