typedef char htag[280];

typedef struct {
    char text[281];
    htag hashtags[100];
    int htagNum;
    char author[51];
} tweet;

float analizza(tweet collezione[], int n, char hashtag[])
{
    int i, j = 0, k = 0;
    
    for(i = 0; i < n; i++)
    {
        while(!found)
        {
            if(!strcmp(hashtag, collezione[i].hashtags[j]))
                found = 1;
            j++;
        }

        if(found == 1 && strlen(collezione[i].text) <= 140)
            k++;

        j = 0;
        found = 0;
    }

    return k / n;
}