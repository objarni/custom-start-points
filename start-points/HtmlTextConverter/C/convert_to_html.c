#define  _GNU_SOURCE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "convert_to_html.h"
#include "string_utils.h"

int convert_to_html(char* infile_name, char* outfile_name)
{
    FILE *fsp,*fdp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fsp = fopen(infile_name, "r");
    fdp = fopen(outfile_name, "w");
    if (fsp == NULL)
        return -1;
    if (fdp == NULL)
        return -2;

    while ((read = getline(&line, &len, fsp)) != -1) {
        line = str_replace(line, "&", "&amp;");
        line = str_replace(line, "<", "&lt;");
        line = str_replace(line, ">", "&gt;");
        line = str_replace(line, "\"", "&quot;");
        line = str_replace(line, "'", "&quot;");
        fprintf(fdp,"%s%s", line, " </br> "); /*writes data to the file*/
    }
    //close the source file
    fclose(fsp);
    fclose(fdp);
    //free the pointer line
    free(line);
    
    return 0;
}
