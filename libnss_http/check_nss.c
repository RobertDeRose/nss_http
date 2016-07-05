//
// Created by ajey on 5/7/16.

#include "nss_http.h"

int main(int argc, char *argv[])
{
    int retval=0;
    const char *command="nobody";
    char host_name[255];
    char token[255];
    get_config_host(host_name, token);

    printf("host %s token %s\n", host_name, token);

    if(argc == 3) {
        command = argv[1];
    }

    if(argc > 3 || argc < 3) {
        fprintf(stderr, "Usage: check_nss [user|group] [user or group name]\n");
        exit(1);
    }

    if (!strncmp(command, "group", strlen(command)))
    {

    }
    return retval;
}

//




