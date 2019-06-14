#include <stdio.h>
#include <dirent.h>


/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  struct dirent *directory_entry;
  DIR *directory;
  
  // Open directory
  if (!argv[3]) {
    printf("This program accepts 1 or 0 arguments.\n");
    return 0;
  } else {
    char *path = argv[1] != NULL ? argv[1] : ".";
    directory = opendir(path);
  }

  // Repeatedly read and print entries
  while ((directory_entry = readdir(directory))){
      printf("%s\n", directory_entry->d_name); 
  }
  
  // Close directory
  closedir(directory);
  return 0;
}