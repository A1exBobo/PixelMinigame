import matplotlib.pyplot as plt

# Read coordinates from file
points = []

with open("../data/coordinates.txt", "r") as f:
    for line in f:
        line = line.strip()
        if not line:  # skip empty lines
            continue
        try:
            x, y = map(int, line.split())
            points.append((x, y))
        except ValueError:
            continue

if not points:
    print("No coordinates found.")
    exit()

x_vals, y_vals = zip(*points)

# Create figure and axes
fig, ax = plt.subplots(figsize=(6, 4))  # ~600x400 pixels

# Plot points with smaller markers
ax.scatter(x_vals, y_vals, c='blue', s=20, label='Points')  # s=marker size
ax.plot(x_vals + (x_vals[0],), y_vals + (y_vals[0],), c='red', label='Shape')

# Set axes limits to match window
ax.set_xlim(0, 600)
ax.set_ylim(0, 400)
ax.set_aspect('equal')

ax.set_title("Coordinates Plot")
ax.set_xlabel("X")
ax.set_ylabel("Y")
ax.grid(True)
ax.legend()

# Save figure directly
plt.savefig("CoordGraph.png", dpi=500)  # you can increase dpi if you want higher resolution
plt.close(fig)  # close the figure to avoid displaying it
print("end of program")
