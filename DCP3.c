public class MaxSumLevel {
	public static void maxSumLevel(Node root) {
		if (root == null) {
			System.out.println("Tree is empty");
			return;
		}
		Queue<Node> queue = new LinkedList<Node>();
		queue.offer(root);
		// level delimiter
		queue.offer(null);

		int maxSum = 0;
		int level = 0;
		// default root level
		int localLevel = 0;
		int localSum = 0;
		while (!queue.isEmpty()) {
			Node node = queue.poll();
			// Level change
			if (null == node) {
				if (!queue.isEmpty()) {
					// level delimiter
					queue.offer(null);
				}

				if (localSum > maxSum) {
					maxSum = localSum;
					level = localLevel;
				}
				// Reset the level sum for next level calculation
				localSum = 0;
				localLevel++;
			} else {
				if (node.left != null) {
					queue.offer(node.left);
				}
				if (node.right != null) {
					queue.offer(node.right);
				}
				localSum += node.data;
			}
		}