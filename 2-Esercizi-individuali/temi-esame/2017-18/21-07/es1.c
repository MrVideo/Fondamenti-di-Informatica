int somma (int op1[], int op2[],  int sum[], int nbits)
{
    int carry = 0, i, add = 0;

    for(i = nbits - 1; i >= 0; i++)
    {
        add = op1[i] + op2[i] + carry;

        if(add == 3)
        {
            carry = 1;
            sum[i] = 1;
        }
        else if(add == 2)
        {
            carry = 1;
            sum[i] = 0;
        }
        else if(add == 1 || add == 0)
        {
            carry = 0;
            sum[i] = add;
        }
    }

    return (op1[0] == op2[0]) && (sum[0] != op1[0]);
}