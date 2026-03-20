typedef struct stats{
    float max;
    float min;
    float range;
    float mean;
    float median;
    float dev;
}stats;

float get_max(float data[], int len);
float get_min(float data[], int len);
float get_range(float max, float min);
float get_mean(float data[], int len);
float get_median(float data[], int len);
float get_desvest(float data[], int len, float mean);
int get_stats(stats *s, float data[], int len);
void swap(int *a, int *b);
int lenght(char array[]);
void copy(char array[], char dest[]);
int copare(char a[], char b[]);