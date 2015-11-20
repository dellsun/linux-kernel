
int creat(const char *filename, mode_t mode);
int umask(int newmask);

int open(const char *pathname, int flags);
int open(const char *pathname, int flags, mode_t mode);

int read(int fd, const void *buf, size_t length);
int write(int fd, const void *buf, size_t length);

int lseek(int fd, offset_t offset, int whence);

int close(int fd);

FILE *fopen(const char *path, const char *mode);

int fgetc(FILE *stream);
int fputc(int c, FILE *stream);
char *fgets(char *s, int n, FILE *stream);
int fputs(const char *s, FILE *stream);
int fprintf(FILE *stream, const char *format, ...);
int fscanf(FILE *stream, const char *format, ...);
size_t fread(void *ptr, size_t size, size_t n, FILE *stream);
size_t fwrite(const void *ptr, size_t size, size_t n, FILE *stream);

int fgetpos(FILE *stream, fpos_t *pos);
int fsetpos(FILE *stream, const fpos_t *pos);
int fseek(FILE *stream, long offset, int whence);

int fclose(FILE *stream);

//linux/include/linux/fs.h
//strcut file/inode

unsigned int iminor(struct inode *inode);
unsigned int imajor(struct inode *inode);

devfs_handle_t devfs_mk_dir(devfs_handle_t dir, const char *name, void *info);
devfs_handle_t devfs_register(devfs_handle_t dir, const char *name, unsigned int flags, unsigned int major, unsigned int minor, umode_t mode, void *ops, void *info);
void devfs_unregister(devfs_handle_t de);

//linux/include/linux/device.h
//struct bus_type/device_driver
//udevadm monitor --kernel --property --udev

