import matplotlib.pyplot as plt
from scipy.interpolate import make_interp_spline
import numpy as np

# Define the coordinates of control points for each letter
letters = {
    
    'U': [ (0.25, 4), (0.4, 1.5), (1.5, 1.5), (1.5, 4)],
    'C': [ (2.7, 1), (1.5, 1), (1.2, 1.5), (1.2, 2.5), (1.5, 3), (2.7, 3)],
    'R': [(0, 0), (0, 4), (1, 2.5), (0, 2.5), (2, 0)]
}
# Create a subplot with multiple plots for each letter
fig, axs = plt.subplots(1, len(letters), figsize=(12, 3))

# Define the number of interpolation points
num_points = 100

for ax, (letter, control_points) in zip(axs, letters.items()):
    x, y = zip(*control_points)
    t = np.linspace(0, 1, len(x))

    # Use B-spline interpolation for smooth curves
    spl = make_interp_spline(t, list(zip(x, y)), k=3)
    t_new = np.linspace(0, 1, num_points)
    xy_new = spl(t_new)

    x_new, y_new = zip(*xy_new)

    ax.plot(x_new, y_new, linestyle='-', color='blue')
    ax.set_xlim(0, 4)
    ax.set_ylim(0, 5)
    ax.set_title(letter)

# Adjust spacing between subplots
plt.tight_layout()

# Show the plot
plt.axis('equal')  # Equal aspect ratio
plt.show()