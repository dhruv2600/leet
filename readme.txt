1)INCREASING TRIPLETS->(LIS lower_bound nlogn way)

2)nested arrays->(DFS)

3)perfect numbers->(DP,recursion W memo)

4)length of longest substr appearing even number of times->

5)Sliding window maximum->dequeue monotonically decreasing

6)maximal rectangle->monotonicallly increasing stack (BF-find  left limit & right limit, 2 stacks to remember limits)

7)Daily Temperatures->Monotonically decreasing stack

8)monotonically flip bits->DP(0/1 are states,index changes)(TLE CURRENT STATUS)

9)SUM OF DISTANCE IN TREES->(DP ON TREES TLE STATUS)

10)partition equal subset sum->(dp)

11)minimum size subarray sum->(sliding window)

12)OPEN THE LOCK->GOOD PROBLEM(BFS SHORTEST PATH LEVEL WISE for i in q.size())

13)(BIG BRAIN PROBLEM)->maximum sum of 2 non overlapping subarrays(kadanes + 2 windows, left & right)

14)unique BSTs->MCM problem

15)Rod cutting problem->coin change problem

16)repeated dna SEQ->hashtable+sliding window

17)largest Plus(make 4 prefix arrays-top,bottom,left,right)

18) number of arithmetic sequences(DP, simple->if A[i] is a seq,then)

19)egg dropping prpblem(MCM) NSS

20)PALIND partition(MCM)

21)pascal triangle(DP)

22)longest substring without repeating->(sliding window,dequeue)

23)given a pointer to delete node delete in O(1) space(put data of next in temp & delete next)

24) stock span problem->monotonically decreasing stack(pair)

25)Shortest Path in a Grid with Obstacles Elimination->BFS with visited array keeping track of if u visited that node with lesser obstacles->S+++ Q(QUEUE<X,Y,DIST,OBS>)

26)???? JUMP GAME-3 DFS

27)bipartite graph dfs

28)longest consecutive sequence->(hashing,sorting check if current elemnt is the beginning of sequence.then check for next elements)

29) maximal rectangle in histogram->(left smalles,right smallest)

30)minimum steps to make array unique->(sort, then trickle down);

31)minimum add to make paranthesis valid->(EZ,with stack)

32)single element in unsorted array. If(mid is even) compare with next element if mid is odd compare with previous element.


33)max product in subarray->kadane + states

34)max turbulent->2 pointer(sliding window)

35)subsets 2->first do subsets 1->then,we only need to calculate recursion for the trees which have not been rooted(i.e if i==begin || nums[i]!=nums[i-1])

36)permutations->dfs

37)MAXIMAL square->DP, sub problems,check diagonal,left,right+1

38) beautiful subarrays->DFS

39) bitwise AND of numbers in range->

40)find the first & last position of element in sorted array(Binary search ->after found,search the halves accordingly)

41)Maximum Points You Can Obtain from Cards->BIG BRAIN SLIDING WINDOW->POINTS ARE OUTSIDE THE WINDOW.(done)

42)Time Needed to Inform All Employees->DFS GIVES TLE(NEED TO ASK OASIS)

43)Max Distance->SORT,start from back wards,make a pair


44)Cousin Nodes->keep track of req node heights,& depts.compare at end.

45)largest subarray sum 0->hashtable,store the sums in array

46)number of subarrays divisible by K->store remainders in hashmap.

47)kth missing number(binary search->at end,return low+k)

48)Minimum Moves to Equal Array Elements II->(find median of array,& set k to that)

49)Majority element->(sort/hashmap)

50) Longest Turbulent Subarray->(keep track of the increasing,decreasing at every step)

51) Wiggle Subsequence->states->(up wiggle,down wiggle)

52) Subtree of Another Tree->(is same tree(root) or is subtree left & right)

53) Heaters->(find LHS nearest & RHS nearest,max(min(RHS,LHS)) is the answer.

54)max sum in levels(just level order but PLEASE REVISE before goig in any interview/can use hashmap wiht dfs also)

55)submatriceswithnones->(maximal square)

56)permutations->swapping way

57)next permutation->Find increasing seq from right, find greatest element on right >curr,swap 2,reverse i+1

58)maxsumLIS->(just LIS)(DP)

59)Minimum Path Sum->(NUMBER of paths problem)(DP)

60)subprod sum less than k number of arrays->(sliding window,each time you expand,add size of array)

61)X of a kind->(GCD)

62) Minimum Insertion Steps to Make a String Palindrome

63) shortest string supersequence-> LCS+backtracking from down.

64)LRU->doubly linked list+hashmap

65)rotate array->(start with array, keep count of rotated elements,+when it cycles back)

66)rotate list->join tail to head(k%len times)

67)rotate image->transpose matrix,then just reverse

68)dungeon game->recursion+dp[IMP]

69)max consecutive ones 3->sliding window(take care of number of zeroes & s & e ALWAYS)

70)triangle->gay dp

71)russian doll envelopes->DP

72)Min stack->monotonically decreasing stack :D

73)Minimum deletions to make string palindrome->Longest Palindromic Subsequence

74)Djikstra->Priority queue using c++

75) Number of Ways to Arrive at Destination->TLE(ASK OASIS WHY??? )->DJIKSTRA+DP(sexy question)->KEY->dont add everything to heap

76) Split LL into parts-> pointer DONE.

77)Trapping rain water->suffix max,prefix max->BIG BRAIN 2 POINTER

78)construct binary tree from preorder->ONE ROOT,Left,Right.(Time complexity->??????????????)

79)Kth smallest->quick select(partition, & then look at elements at left & right,min heap->(smallest element in K window)

80)floor & ceil of BST->ez pz

81)Validate BST->Inorder predecessor(rightmost node on the left subtree)

82)Largest BST->Inorder predecessor,instead of bool,return size.

83)Count Inversions->(UNSOLVED->count elements on right whenever element on right is lesser,MERGE SORT)

84) Maximum Length of Repeated Subarray->longest common substring

85)longest arithmetic subseq->LIS

86)Split Array Largest Sum->DP(Similar to Egg Dropping Problem)


87)Minimum Number of Operations to Move All Balls to Each Box->Big Brain prefix sum+dp


88)Boolean Parenthesization->(MCM+DP->MUST SEE BEFORE MCM Qs


89)Minimum Swaps to Arrange a Binary Grid->Modified bubblesort(REMEMBER IF ADJ SWAPS ONLY USE BUBBLE SORT MODIFIED)

90)Minimum Swaps To Make Sequences Increasing->DP+MEMO(2 vars->start,swapped or not)

91)Path Sum 3->RootSum+Normal recursion sum(rlly clever)

92)Copy List with Random Pointer->My Sol->Hashmap(<node*,node*>)


93)Bits_>algo to convert dec to binary is(start from number,keep pushing remainder%2 in array & do remaining=remainder/2,at end reverse array to get the rep)

94)top view->vert order,with level order