#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void check_argument_count(int argc)
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
}

void check_file_from(int check, const char *file_from, int fd_from, int fd_to)
{
    if (check == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        if (fd_from != -1)
            close(fd_from);
        if (fd_to != -1)
            close(fd_to);
        exit(98);
    }
}

void check_file_to(int check, const char *file_to, int fd_from, int fd_to)
{
    if (check == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        if (fd_from != -1)
            close(fd_from);
        if (fd_to != -1)
            close(fd_to);
        exit(99);
    }
}

void check_close(int check, int fd)
{
    if (check == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char *argv[])
{
    int fd_from, fd_to, close_status_from, close_status_to;
    ssize_t len_read, len_written;
    char buffer[1024];
    mode_t file_perm;

    check_argument_count(argc);

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    fd_from = open(file_from, O_RDONLY);
    check_file_from(fd_from, file_from, -1, -1);

    file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, file_perm);
    check_file_to(fd_to, file_to, fd_from, -1);

    len_read = 1024;
    while (len_read == 1024)
    {
        len_read = read(fd_from, buffer, 1024);
        check_file_from(len_read, file_from, fd_from, fd_to);

        len_written = write(fd_to, buffer, len_read);
        if (len_written != len_read)
            len_written = -1;
        check_file_to(len_written, file_to, fd_from, fd_to);
    }

    close_status_to = close(fd_to);
    close_status_from = close(fd_from);
    check_close(close_status_to, fd_to);
    check_close(close_status_from, fd_from);

    return 0;
}
