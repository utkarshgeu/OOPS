const express = require("express");
const mongoose = require("mongoose");
const cors = require("cors");

const app = express();
app.use(cors());
app.use(express.json());

// MongoDB Atlas connection string
const mongoURI = "mongodb+srv://prajwal:6QQaRdNN5W1kyF6R@cluster0.e12ch.mongodb.net/Restaurant?retryWrites=true";

mongoose
  .connect(mongoURI, {
    useNewUrlParser: true,
    useUnifiedTopology: true,
  })
  .then(() => console.log("MongoDB connected"))
  .catch((error) => console.log("Connection error:", error));

// Define a schema and model
const DataSchema = new mongoose.Schema({
  firstName: {
    type: String,
  },
  lastName: {
    type: String,
  },
  date: {
    type: String,
    required: true,
  },
  time: {
    type: String,
    required: true,
    unique: true,
  },
  email: {
    type: String,
    required: true,
  },
  phone: {
    type: String,
    required: true,
    minLength: [10, "Phone number must contain 10 Digits."],
    maxLength: [10, "Phone number must contain 10 Digits."],
  },
});

// Explicitly set the collection name to "reservations"
const DataModel = mongoose.model("Reservation", DataSchema, "reservations");

// Route to fetch data from the database
app.get("/api/data", async (req, res) => {
  try {
    const data = await DataModel.find();
    res.json(data);
  } catch (error) {
    res.status(500).json({ error: "Failed to fetch data" });
  }
});

// Start the server
const PORT = 5000;
app.listen(PORT, () => console.log(`Server running on port ${PORT}`));
