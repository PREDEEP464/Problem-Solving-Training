class Solution {

    static long factorial(int n, int mod) {

        long fact = 1;
        for (int i = 2; i <= n; i++) 
            fact = (fact * i) % mod;
        return fact;
    }

    public int numPrimeArrangements(int n) 
    {
        if (n == 0) 
            return 0;
        if (n == 1)
            return 1;

        int mod = 1_000_000_007;
        
        boolean[] isPrime = new boolean[n + 1];
        Arrays.fill(isPrime, true);

        for (int i = 2; i <= Math.sqrt(n); i++) 
        {
            if (isPrime[i]) 
            {
                for (int j = i * i; j <= n; j += i) 
                    isPrime[j] = false;
            }
        }

        int primeCount = 0;
        for (int i = 2; i <= n; i++) 
        {
            if (isPrime[i]) 
                primeCount++;

        }


        int nonPrimeCount = n - primeCount;
        long primeFactorial = factorial(primeCount, mod);
        long nonPrimeFactorial = factorial(nonPrimeCount, mod);
        long result = (primeFactorial * nonPrimeFactorial) % mod;

        return (int) result;
    }
}