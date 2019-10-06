int deletefile(char filename[20])
{
    int ret;
    ret= remove(filename);
    return(ret);
}

