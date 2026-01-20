#include <stdio.h>
#include <math.h>

int main() {
    //Problem 2

    int green_order = 3;              // Green light appears at third diffraction order
    int red_order = 2;                // Red light expected at second diffraction order
    double green_wavelength_nm = 530; // Wavelength of green light in nanometers
    double red_wavelength_nm = 700;   // Wavelength of red light in nanometers
    double green_angle_deg = 65.0;    // Observed diffraction angle for green light (in degrees)


    double green_angle_rad = green_angle_deg * (M_PI / 180.0);


    double grating_spacing = (green_order * green_wavelength_nm * 1e-9) / sin(green_angle_rad);


    double red_sin_theta = (red_order * red_wavelength_nm * 1e-9) / grating_spacing;


    if (red_sin_theta > 1) {
        printf("Second-order diffraction for red light is not possible with current setup.\n");
    }
    else
    {

        double red_angle_rad = asin (red_sin_theta);
        double red_angle_deg = red_angle_rad*(180.0 /M_PI);
        printf("Red light appears at %.2f degrees for second-order diffraction.\n",red_angle_deg);
    }
    return 0;
}

