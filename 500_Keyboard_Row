 犹记多情 
Reputation:  2
 int in_the_same_level(char *str, int *hash)
{
	int i;
	for (i = 1; str[i] != '\0'; i++)
	{
		if (hash[tolower(str[i - 1]) - 'a'] != hash[tolower(str[i]) - 'a'])
			break;
	}
	if (str[i] != '\0')
		return(0);
	else
		return(1);
}
char** findWords(char** words, int wordsSize, int* returnSize)
{
	*returnSize = 0;
	int hash[26] = { 0,-1,-1,0,1,0,0,0,1,0,0,0,-1,-1,1,1,1,1,0,1,1,-1,1,-1,1,-1 };
	char **str = (char **)malloc(sizeof(char *)*wordsSize);
	for (int i = 0; i<wordsSize; i++)
	{
		if (in_the_same_level(words[i], hash) == 1)
		{
			str[*returnSize]=words[i];
			(*returnSize)++;
		}
	}
	return(str);
}
