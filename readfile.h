struct customer{
    int customerId;
    char account;
    char name[50];
    int balance;
};

void readfile(struct customer c1)
{
    FILE *f;
    f = fopen("data.dat","r");
    while(fread(&c1,sizeof(c1),1,f));
    printf("%s -----> name of the customer \n",c1.name);
    printf("%d -----> balance in his account\noexcept",c1.balance);
    fclose(f);
}