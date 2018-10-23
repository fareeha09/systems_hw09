/* open: */
/* int open(const char *pathname, int flags); */
/* int open(const char *pathname, int flags, mode_t mode);int open( */
/* --> opens file specifified by pathname, if doesn't exist creates */
/* --> flags-A bitwise 'or' separated list of values that determine the method in which the file is to be opened (whether it should be read only, read/write, whether it should be cleared when opened, etc). See a list of legal values for this field at the end. */
/* O_RDONLY    Open the file so that it is read only. */
/* O_WRONLY    Open the file so that it is write only. */
/* O_RDWR      Open the file so that it can be read from and written to. */
/* O_APPEND    Append new information to the end of the file. */
/* O_TRUNC     Initially clear all data from the file. */
/* O_CREAT     If the file does not exist, create it. If the O_CREAT option is used, then you must include the third parameter. */
/* O_EXCL      Combined with the O_CREAT option, it ensures that the caller must create the file. If the file already exists, the call will fail. */

/* --> mode- A bitwise 'or' separated list of values that determine the permissions of the file if it is created. See a list of legal values at the end.  	        */
/* S_IRUSR	Set read rights for the owner to true. */
/* S_IWUSR	Set write rights for the owner to true. */
/* S_IXUSR	Set execution rights for the owner to true. */
/* S_IRGRP	Set read rights for the group to true. */
/* S_IWGRP	Set write rights for the group to true. */
/* S_IXGRP	Set execution rights for the group to true. */
/* S_IROTH	Set read rights for other us
ers to true. */
/* S_IWOTH	Set write rights for other users to true. */
/* S_IXOTH	Set execution rights for other users to true. */
								
int main(){
}
