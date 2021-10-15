
# define N 16 //array size
int Arr[N]={1351,624,546,238,41,907,1778,1995,812,1015,576,94,780,103,1083,679};//here are 8 numbers multiples of 7 and 8 arbitrary numbers for the division to be done by shifting the bits

int iteration(int count){
count++; 
return count;   
}
int average(int *a, int b){
    int sum;
    int num_it;
    int average;
    for(int i=0; i<b; i++)
    {
        if ( a[i] % 7 == 0)
        {
        sum=sum+a[i];
        num_it=iteration(i);
        }
    }
    average=sum/num_it;
    return average;
    }

int main (){
    int params = average(Arr,N);
    return 0;
}
