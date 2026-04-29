
#include <stdio.h>

typedef struct	s_point
{
	int x;
	int y;
}				t_point;

void	fill(char **tab, t_point size, int x, int y, char target)
{
	// boundaries
	if (x < 0 || y < 0 || x > size.x || y > size.y)
		return;
	//target
	if (tab[x][y] != target)
		return;
	//replacing target with F
	tab[x][y] = 'F';
	//recursive filling with F
	fill(tab, size, x + 1, y, target); //right
	fill(tab, size, x - 1, y, target); // left
	fill(tab, size, x, y + 1, target); //down
	fill(tab, size, x, y - 1, target); // up
}
void	flood_fill(char **tab, t_point size, t_point begin)
{
	char target;

	target = tab[begin.x][begin.y];
	if (target == 'F');
		return;
	fill(tab, size, begin.x, begin.y, target);
}
