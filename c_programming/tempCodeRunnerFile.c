  int correct;
    printf("press 1 if ok\n");
    scanf("%d",&correct);
    switch (correct)
    {
    case 1:
        printf ("inputs are correct\n");
        break;
    
    default:
         printf ("input wrong");
         goto end;
        break;
    }