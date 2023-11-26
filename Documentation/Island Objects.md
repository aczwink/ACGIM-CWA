Objects placed on islands have a unique id and a model path. Apparently the engine uses the model path to find a matching CfgVehicles class. The actual CfgVehicles class name is not stored in the island file.
Event handlers from the CfgVehicles class are indeed called for the island objects!
