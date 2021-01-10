#include <iostream>
#include<stdio.h>
using namespace std;

//string operations without using string header file
int main() {
    int i,ch,j,c=0,pos,k,len;
    char s1[100],s2[100],s3[100];

    do {
        cout<<"Enter 1 to find length of the string \n2 for string concatenation \n3 for string comparison \n4 to insert a substring \n";
        cout<<"5 to delete a substring \n6 to exit\n";
        cin>>ch;
        
        switch(ch) {

            case 1 :
                    fflush(stdin);
                    
                    cout<<"Enter a string: ";
                    gets(s1);
                    
                    for(i=0;s1[i]!='\0';i++);
                    cout<<"String length is "<<i;
                    break;

            case 2 :
                    fflush(stdin);
                    
                    cout<<"Enter a string: ";
                    gets(s1);
                    
                    cout<<"Enter the string to concatenate: ";
                    fflush(stdin);
                    gets(s2);
                    
                    for(i=0;s1[i]!='\0';i++);
                    for(j=0;s2[j]!='\0';j++)
                        s1[i++]=s2[j];
                    s1[i]='\0';

                    cout<<"String after concatenation is:\n";
                    puts(s1);
                    break;
                
            case 3 :
                
                    fflush(stdin);
                    cout<<"Enter a string: ";
                    gets(s1);
                 
                    cout<<"Enter the string to be compared: ";
                    fflush(stdin);
                    gets(s2);
                 
                    i=0;
                    while (s1[i]!='\0'&&s2[i]!='\0') {
                        if(s1[i]==s2[i])
                            i++;
                        else if(s1[i]>s2[i]) {
                            c=1;
                            break;
                        }
                        else {
                            c=-1;
                            break;
                        }
                    }
                    if(c==0) {
                        if(s1[i]!='\0')
                            c=1;
                        else if(s2[i]!='\0')
                            c=-1;
                        else
                            c=0;
                    }
                    if(c==1)
                        cout<<"s1 is the greater string\n";
                    else if(c=-1)
                        cout<<"s2 is the greater string\n";
                    else
                        cout<<"Both are identical strings\n";
                    break;
                
            case 4:
                
                    fflush(stdin);
                    cout<<"Enter a string: ";
                    gets(s1);
                    
                    cout<<"Enter the string to be inserted: ";
                    fflush(stdin);
                    gets(s2);
                    
                    cout<<"Enter the position at which the string is to be inserted: ";
                    cin>>pos;
                    
                    for(i=0;i<pos;i++)//till pos position, copy the 1st string
                        s3[i]=s1[i];
                    k=i;//mark the positing in 1st string
                    for(j=0;s2[j]!='\0';j++)//copy string 2 from pos i+1 to string 3
                        s3[i++]=s2[j];
                    for(;s1[k]!='\0';k++)//copy rest of string 1
                        s3[i++]=s1[k];
                    s3[i]='\0';
                    
                    puts(s3);
                    break;
                
            case 5:
               
                    cout<<"Enter a string: ";
                    fflush(stdin);
                    gets(s1);
                    
                    cout<<"Enter the sub-string to be deleted: ";
                    fflush(stdin);
                    gets(s2);
                    
                    for(i=0;s2[i]!='\0';i++);
                    sublen=i;
                    for(i=0;s1[i]!='\0';i++);
                    length=i;
                    
                    for(i=0;i<length-sublen;i++) {//check till len-sublen
                        j=0;
                        pos=i;//mark the position in main string
                        while (s1[i]==s2[j] && s2[j]!='\0') {//traverse through both the strings while they are equal
                            j++;
                            i++;
                        }
                        if (j==sublen) {//substring found
                            flag=1;
                            break;
                        }
                        //else continue;
                    }
                    if(flag==1) {
                        for(i=pos;i<length;i++)//delete the substring
                            s1[i]=s1[i+sublen];
                        puts (s1);
                    }
                    else 
                        cout<<"Substring not found\n";
            case 6 : break;
            default : cout<<"Invalid input\n";
        }//end of switch
    } while(ch!=6);
    return (0);
}
