void main()
{
int row,col,i,j;
int a[10][10],b[10][10],c[10][10];
clrscr();
printf("enter the number of rows and columns of matrix");
scanf("%d %d",&row,&col);
printf("enter the elements of first matrix\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
scanf("%d",&a[i][j]);
}
printf("enter the number of rows and columns of matrices\n");
scanf("%d %d",&row,&col);
printf("enter the elements of second matrix\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
scanf("%d",&b[i][j]);
}
printf("sum of entered matrices\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}