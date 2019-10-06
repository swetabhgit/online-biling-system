void append(struct employee e1)
{
    FILE *f;
    f = fopen("data.dat","a");
    fwrite(&e1,1,sizeof(e1),f);
    fclose(f);
}
