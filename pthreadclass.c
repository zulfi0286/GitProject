#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *print_message_function( void *ptr );
void main()
{
    pthread_t thread1,thread2;
    char *message1 ="thread one";
    char *message2 ="thread two";
    int it1,it2;
    it1=pthread_create(&thread1,NULL,print_message_function,(void*)message1);
    it2=pthread_create(&thread2,NULL,print_message_function,(void*)message2);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);
    printf("Thread 1 returns: %d\n",it1);
    printf("Thread 2 returns: %d\n",it1);
    exit(0);
i
}
void *print_message_function(void *ptr)
{
     char *message;
     message = (char *) ptr;
     printf("%s \n", message);
}
