/* Counting Words in a Piece of Text
   SuriyaaKumar G M, Sep 2014  */


#include <stdio.h>
#include <stdbool.h>

int getword(void)
{
	char s1[81], s2[81], s3[81];
	
	printf ("Enter text:\n");
	scanf ("%s%s%s", s1, s2, s3);

	printf ("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);

	return 0;
}

void readLine (char buffer[])
{
	char character;
	int i = 0;

	do{
		character = getchar ();
		buffer[i] = character;
		++i;
	}
	while ( character != '\n' );
	buffer[i - 1] = '\0';
}

}

int countWords (const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic (const char c);

	for ( i = 0; string[i] != '\0'; ++i )
		if ( alphabetic(string[i]) )
		{
			if ( lookingForWord )
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;
	
	return wordCount;
}

int main(void)
{
	char text[81];
	int totalWords = 0;
	int countWords (const char string[]);
	void readLine (char buffer[]);
	bool endOfText = false;

	printf ("Type in your text.\n");
	printf ("When you are done, press 'RETURN'.\n\n");

	while ( ! endOfText )
	{
		readLine (text);

		if ( text[0] == '\0' )
			endOfText = true;
		else
			totalWords += countWords (text);
	}

	printf ("\nThere are %i words in the above text.\n", totalWords);

	return 0;
}