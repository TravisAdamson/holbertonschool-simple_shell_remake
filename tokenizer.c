#include "shellshocked.h"

char **tokenizer(char *temp_input)
{
	char *delim = " ";
	char *token = NULL;
	char **token_input;

	token = strtok(
