import pandas as pd
import numpy as np

# Random seed for reproducibility
np.random.seed(42)

# Number of samples
n = 500

# Generate synthetic features
GSM = np.random.randint(80, 350, n)
ThreadDensity = np.random.randint(50, 200, n)
TensileStrength = np.random.randint(200, 1000, n)
Shrinkage = np.round(np.random.uniform(0, 10, n), 2)
AirPermeability = np.random.randint(100, 800, n)
Thickness = np.round(np.random.uniform(0.1, 1.0, n), 2)

# Compute a "quality score" (artificial formula for realism)
score = (
    0.4 * (GSM / 350)
    + 0.3 * (TensileStrength / 1000)
    + 0.2 * (ThreadDensity / 200)
    - 0.1 * (Shrinkage / 10)
)

# Assign quality labels
Quality = np.where(score > 0.65, "High",
            np.where(score > 0.45, "Medium", "Low"))

# Create DataFrame
df = pd.DataFrame({
    "GSM": GSM,
    "ThreadDensity": ThreadDensity,
    "TensileStrength": TensileStrength,
    "Shrinkage": Shrinkage,
    "AirPermeability": AirPermeability,
    "Thickness": Thickness,
    "Quality": Quality
})

# Save to CSV
df.to_csv("cloth_quality.csv", index=False)

print("✅ cloth_quality.csv created successfully!")
print(df.head())
