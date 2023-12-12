import numpy as np
import matplotlib.pyplot as plt
import math

filter = np.load("filter.npy")
odom = np.load("odom.npy")
ground_truth = np.load("ground_truth.npy")

position_rmse = math.sqrt(np.mean((filter[:,0] - ground_truth[:,0])**2 + (filter[:,1] - ground_truth[:,1])**2))
position_max_abs_error = np.max(np.abs(filter[:,0] - ground_truth[:,0]) + np.abs(filter[:,1] - ground_truth[:,1]))
position_total_cumulative_error = np.sum(np.abs(filter[:,0] - ground_truth[:,0]) + np.abs(filter[:,1] - ground_truth[:,1]))
position_error_percentage = (np.abs(filter[-1,0] - ground_truth[-1,0]) + np.abs(filter[-1,1] - ground_truth[-1,1])) / position_total_cumulative_error

orientation_rmse = math.sqrt(np.mean((filter[:,2] - ground_truth[:,2])**2))
orientation_max_abs_error = np.max(np.abs(filter[:,2] - ground_truth[:,2]))
orientation_total_cumulative_error = np.sum(np.abs(filter[:,2] - ground_truth[:,2]))

# write the values to a file
with open("errors_var_0.0001.txt", "w") as f:
    f.write("Position RMSE: " + str(position_rmse) + "\n")
    f.write("Position max abs error: " + str(position_max_abs_error) + "\n")
    f.write("Position total cumulative error: " + str(position_total_cumulative_error) + "\n")
    f.write("Position error percentage: " + str(position_error_percentage) + "\n")
    f.write("Orientation RMSE: " + str(orientation_rmse) + "\n")
    f.write("Orientation max abs error: " + str(orientation_max_abs_error) + "\n")
    f.write("Orientation total cumulative error: " + str(orientation_total_cumulative_error) + "\n")

# plot 
plt.plot(filter[:,0], filter[:,1], label="filter")
plt.plot(odom[:,0], odom[:,1], label="odom")
plt.plot(ground_truth[:,0], ground_truth[:,1], label="ground truth")
plt.legend()
plt.title("Position")
plt.savefig("position_var_0.0001.png")
plt.close()

plt.plot(np.sqrt((filter[:,0] - ground_truth[:,0])**2 + (filter[:,1] - ground_truth[:,1])**2))
plt.title("Position error")
plt.savefig("position_error_var_0.0001.png")
plt.close()

plt.plot(np.abs(filter[:,2] - ground_truth[:,2]))
plt.title("Orientation error")
plt.savefig("orientation_error_var_0.0001.png")
