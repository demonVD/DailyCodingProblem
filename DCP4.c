// C# program to Sort square 
// of the numbers of the array 
using System; 

class GFG 
{ 
	
	// Function to sort 
	// an square array 
	public static void sortSquares(int []arr) 
	{ 
		int n = arr.Length; 
		
		// First convert each array 
		// elements into its square 
		for (int i = 0 ; i < n ; i++) 
			arr[i] = arr[i] * arr[i]; 

		// Sort an array using 
		// "inbuild sort function" 
		// in Arrays class. 
		Array.Sort(arr); 
	} 
	
	// Driver Code 
	public static void Main () 
	{ 
		int []arr = {-6, -3, -1, 
					2, 4, 5 }; 
		int n = arr.Length; 
	
		Console.WriteLine("Before sort "); 
		for (int i = 0; i < n; i++) 
			Console.Write(arr[i] + " "); 
		
		sortSquares(arr); 
		Console.WriteLine(""); 
		Console.WriteLine("After Sort "); 
		
		for (int i = 0 ; i < n ; i++) 
		Console.Write(arr[i] + " "); 

	} 
} 
