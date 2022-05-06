//  Declare a function accepting void 
//  returning pointer to array of poinnter 
//  to function accepting two integers and returning integer 

int my_add(int, int); 
int my_sub(int, int); 
int my_mul(int, int); 
int my_quo(int, int); 
int my_rem(int, int); 

int main(void)
{
    //  p should be pointer to array 5 of pointer to 
    //  function accepting two ints and returning int 
    
    p = get_function_ptr_arr(); 
}

get_function_ptr_arr(void)
{
    //  local static array of pointer to 
    //  function accepting two ints and returning it 
    //  initialize array by the addresses of my_add(index 0)
    //  my_sub(index 1), my_mul(index 2), my_quo(index 3), 
    //  my_rem(index 4)

    //  return address of array 
}


int my_add(int a, int b)
{
    return (a+b); 
} 

int my_sub(int a, int b)
{
    return (a-b); 
}

int my_mul(int a, int b)
{
    return (a*b); 
}

int my_quo(int a , int b)
{
    assert(b != 0); 
    return (a/b); 
}

int my_rem(int a, int b)
{
    return (a%b); 
}