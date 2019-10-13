import java.util.Scanner;
import java.lang.*;
import java.io.*;
class Chef1
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		int n, x, s, temp;
		for (int i = 0; i<t; i++)
		{
			n = in.nextInt();
			x = in.nextInt();
			s = in.nextInt();
			int k [] = new int [n];
			for(int j = 0; j<n; j++)
			{
				k[j] = 0;
			}
			k[x-1] = 1;
			for(int l = 1; l<=s; l++)
			{
			int	a = in.nextInt();
				int b = in.nextInt();

				temp = k [a-1];
				k [a-1] = k [b-1];
				k [b-1] = temp;


			}
			for (int m = 1; m<=n; m++ )
			{
			if (k[m-1] == 1)
				System.out.println(m);
			else
				continue;
		}
		}
	}
}