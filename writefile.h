
void printData(struct customer c1)
{
    FILE *f;
     printf("\n enter the account you want to open S for saving and C for current");
        getchar();
        c1.account = getchar();
        printf("\n enter the name of customer ");
        scanf("%s",&c1.name);
        printf("\n enter initial balance account");
        scanf("%d",&c1.balance);
        f = fopen("data.dat","a");
        fwrite(&c1,sizeof(c1),1,f);
        printf("\n recorded updated");
        fclose(f);
}
