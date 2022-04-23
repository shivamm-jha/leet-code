class Solution {
public:
    int getSum(int a, int b) {
        if(b==0) return a;
        int sum = a^b;
        int carry = (unsigned)(a&b)<<1;
        return getSum(sum,carry);
    }
};

//  // Once the carry becomes 0 then we return sum
//         if (b==0) return a;
// 		// Calculate the sum for 0+1 and 1+0 bits
//         int sum = (a^b);
//         // Calculate carry for 1+1 bits and left shift by one position
//         int carry = ((unsigned)(a&b)<<1); // Left shift in int not possible for negative int, so casted to unsigned
//         // Adding sum & carry now recursively until carry becomes 0 and we get sum
//         return getSum(sum, carry);

