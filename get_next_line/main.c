
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
	fd = open("./i_am_thou", O_RDONLY);
	printf("Persona_Reference\n\n");
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
return (0);
}
