
#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
#include "get_next_line_bonus.h"

int	main(void)
{
	char	*line;

	printf("MANDATORY TESTS\n");
/* Born2BeRoot_Checklist */
	int	fd = open("./born2beroot_checklist.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	printf("Born2BeRoot_Checklist\n\n");
	line = get_next_line(fd);
	int	i = 0;
	while (line)
	{
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n");
	free(line);
	close(fd);
/* Giant_Line */
	fd = open("./giant_line.txt", O_RDONLY);
	printf("Giant_Line\n\n");
	if (fd == -1)
		return (1);
	line = get_next_line(fd);
	i = 0;
	while (line)
	{
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n");
	free(line);
	close(fd);
/* Multiple_NL */
	fd = open("./multiple_nl.txt", O_RDONLY);
	printf("Multiple_NL\n\n");
	if (fd == -1)
		return (1);
	line = get_next_line(fd);
	i = 0;
	while (line)
	{
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n");
	free(line);
	close(fd);
/* ReadMe */
	fd = open("./README.md", O_RDONLY);
	printf("ReadMe\n\n");
	if (fd == -1)
		return (1);
	line = get_next_line(fd);
	i = 0;
	while (line)
	{
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	printf("\n");
	free(line);
	close(fd);
/* BONUS TESTS */	
	printf("BONUS TESTS\n");
	int fd1 = open("./born2beroot_checklist.txt", O_RDONLY);
	int	fd2 = open("./born2beroot_checklist.txt", O_RDONLY);
	int	fd3 = open("./born2beroot_checklist.txt", O_RDONLY);
	printf("Born2BeRoot_Checklist\n\n");
	if (fd == -1)
		return (1);
	line = get_next_line(fd1);
	printf("%d %s\n", i, line);
	line = get_next_line(fd2);
	printf("%d %s\n", i, line);
	line = get_next_line(fd3);
	i = 0;
	while (line)
	{
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd1);
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd3);
		i++;
	}
	printf("\n");
	free(line);
	close(fd1);
	close(fd2);
	close(fd3);
/* Giant_Line */
	fd1 = open("./giant_line.txt", O_RDONLY);
	fd2 = open("./giant_line.txt", O_RDONLY);
	fd3 = open("./giant_line.txt", O_RDONLY);
	printf("Giant_Line\n\n");
	if (fd == -1)
		return (1);
	line = get_next_line(fd1);
	printf("%d %s\n", i, line);
	line = get_next_line(fd2);
	printf("%d %s\n", i, line);
	line = get_next_line(fd3);
	i = 0;
	while (line)
	{
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd1);
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd3);
		i++;
	}
	printf("\n");
	free(line);
	close(fd1);
	close(fd2);
	close(fd3);
/* Multiple_NL */
	fd1 = open("./multiple_nl.txt", O_RDONLY);
	fd2 = open("./multiple_nl.txt", O_RDONLY);
	fd3 = open("./multiple_nl.txt", O_RDONLY);
	printf("Multiple_NL\n\n");
	if (fd == -1)
		return (1);
	line = get_next_line(fd1);
	printf("%d %s\n", i, line);
	line = get_next_line(fd2);
	printf("%d %s\n", i, line);
	line = get_next_line(fd3);
	i = 0;
	while (line)
	{
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd1);
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd3);
		i++;
	}
	printf("\n");
	free(line);
	close(fd1);
	close(fd2);
	close(fd3);
/* Read Me */
	fd1 = open("./README.md", O_RDONLY);
	fd2 = open("./README.md", O_RDONLY);
	fd3 = open("./README.md", O_RDONLY);
	printf("Read_Me\n\n");
	if (fd == -1)
		return (1);
	line = get_next_line(fd1);
	printf("%d %s\n", i, line);
	line = get_next_line(fd2);
	printf("%d %s\n", i, line);
	line = get_next_line(fd3);
	i = 0;
	while (line)
	{
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd1);
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("%d %s\n", i, line);
		free(line);
		line = get_next_line(fd3);
		i++;
	}
	printf("\n");
	free(line);
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
