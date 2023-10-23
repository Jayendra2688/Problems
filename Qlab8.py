import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Create a figure and a 3D axis
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Define the circle parameters
radius = 1.0
num_points = 100  # Number of points for drawing the circle
z = 0  # The z-coordinate of the plane where the circle is located

# Create points on the circle in 3D space
for i in range(10):
    theta = np.linspace(0, 2 * np.pi, num_points)
    x = radius * np.cos(theta)
    y = radius * np.sin(theta)
    z = np.full_like(x, i)

    # Plot the circle on the 3D plane

    ax.plot(x, y, z, color='b')

# Set axis labels
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')

# Set axis limits
ax.set_xlim(-radius, radius)
ax.set_ylim(-radius, radius)

plt.show()