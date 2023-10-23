import numpy as np
import matplotlib.pyplot as plt

# Create a 4x4 grid of frequencies
freq_grid = np.fft.fftfreq(4, d=1.0/4)
freq_x, freq_y = np.meshgrid(freq_grid, freq_grid)
magnitude_spectrum = np.sqrt(freq_x**2 + freq_y**2)

# 1. Ideal Low Pass Filter
cutoff_freq = 0.5
ideal_lowpass = magnitude_spectrum <= cutoff_freq

# 2. Ideal High Pass Filter
ideal_highpass = magnitude_spectrum > cutoff_freq

# 3. Butterworth Low Pass Filter with cutoff frequency 3 and order 2
cutoff_freq = 3
order = 2
butterworth_lowpass = 1 / (1 + (magnitude_spectrum / cutoff_freq)**(2 * order))

# 4. Butterworth Low Pass Filter with cutoff frequency 2 and order 1
cutoff_freq = 2
order = 1
butterworth_lowpass_2 = 1 / (1 + (magnitude_spectrum / cutoff_freq)**(2 * order))

# Display the filters
plt.figure(figsize=(12, 4))
plt.subplot(141)
plt.imshow(ideal_lowpass, cmap='gray')
plt.title('Ideal Low Pass Filter')

plt.subplot(142)
plt.imshow(ideal_highpass, cmap='gray')
plt.title('Ideal High Pass Filter')

plt.subplot(143)
plt.imshow(butterworth_lowpass, cmap='gray')
plt.title('Butterworth LP (cutoff=3, order=2)')

plt.subplot(144)
plt.imshow(butterworth_lowpass_2, cmap='gray')
plt.title('Butterworth LP (cutoff=2, order=1)')

plt.show()
