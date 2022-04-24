const char *bmi (int weight, double height)
{
    double result = weight / (height * height);
    if (result <= 18.5) return "Underweight";
    if (result <= 25.0) return "Normal";
    if (result <= 30.0) return "Overweight";
    if (result > 30)    return "Obese";
    return "Obese";
}
