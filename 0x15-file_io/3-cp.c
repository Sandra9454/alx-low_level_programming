#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
	int source_fd = -1;
	int dest_fd = -1;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}



	if (source_fd == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}


	if (dest_fd == -1)
	{
	close(source_fd);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}


	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
	bytes_written = write(dest_fd, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
	close(source_fd);
	close(dest_fd);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	}

	if (bytes_read == -1)
	{
	close(source_fd);
	close(dest_fd);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

	if (close(source_fd) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
	exit(100);
	}

	if (close(dest_fd) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
	exit(100);
	}

	return (0);
}
