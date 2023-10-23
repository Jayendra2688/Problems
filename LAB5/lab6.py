from PIL import Image, ImageDraw

# Define the size of the drawing space
width, height = 400, 400

# Create a white canvas
canvas = Image.new('RGB', (width, height), (255, 255, 255))

# Create a drawing context
draw = ImageDraw.Draw(canvas)

# Define a user-defined shape (e.g., a red triangle)
shape_points = [(200, 200), (200, 100), (300, 200)]
draw.polygon(shape_points, fill=(255, 0, 0))

# Define the clipping region (a rectangle)
clip_box = (50, 50, 250, 250)

# Create a mask for the clipping region
mask = Image.new('L', (width, height), 0)
draw_mask = ImageDraw.Draw(mask)
draw_mask.rectangle(clip_box, fill=255)

# Apply the mask to the shape
clipped_shape = Image.new('RGB', (width, height))
clipped_shape.paste(canvas, mask=mask)

# Display the original shape and the clipped shape
canvas.show(title="Original Shape")
clipped_shape.show(title="Clipped Shape")