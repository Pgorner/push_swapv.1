void	hilow(t_s *stacks, int i)
{
	int hi;
	int lo;
	int spacehi;
	int spacelo;
	//printf("next higher number: %i next lower number %i\n", ft_atoi(stacks->b[nexthighernumber(stacks, i)]), ft_atoi(stacks->b[nextlowernumber(stacks, i)]));
	spacehi = 0;
	spacelo = 0;
	hi = nexthighernumber(stacks, i);
	lo = nextlowernumber(stacks, i);
	printf("%s > %s | %s == -1\n", stacks->b[nexthighernumber(stacks, i)], stacks->b[nextlowernumber(stacks, i)], stacks->b[nexthighernumber(stacks, i)]);
		if ((size(stacks->b) - hi) < hi)
		{	
			spacehi = size(stacks->b) - hi;
		}
		else
			spacehi = hi;
		if ((size(stacks->b) - lo) < lo)
		{
			if (size(stacks->b) - lo == 0)
				spacehi = 1;
			else
				spacehi = size(stacks->b) - lo;
		}
		else
			spacelo = lo;
		printf("spacelo: %i\n spacehi %i\n", spacelo, spacehi);
		if (spacelo < spacehi && spacelo != -1)
			stacks->speed = stacks->speed + spacelo;
		else if (spacelo > spacehi && spacehi != -1)
			stacks->speed = stacks->speed + spacehi;
}
