# Python version of the attractor for performance comparison
# Run with: python attractor.py

import math
import time

def generate_attractor():
    a, b, c, d = -2.0, -2.0, -1.2, 2.0
    num_points = 1000000

    start = time.time()

    with open("python.svg", "w") as f:
        f.write("<svg xmlns='http://www.w3.org/2000/svg' ")
        f.write("width='800' height='800' viewBox='-3 -3 6 6'>\n")
        f.write("<rect width='100%' height='100%' fill='black'/>\n")

        x, y = 0.0, 0.0
        for i in range(num_points):
            x_new = math.sin(a * y) - math.cos(b * x)
            y_new = math.sin(c * x) - math.cos(d * y)
            f.write(f"<circle cx='{x_new}' cy='{y_new}' ")
            f.write("r='0.005' fill='white' opacity='0.1'/>\n")
            x, y = x_new, y_new

        f.write("</svg>\n")

    end = time.time()
    print(f"Generated {num_points} points in {(end-start)*1000:.0f} ms")

generate_attractor()
