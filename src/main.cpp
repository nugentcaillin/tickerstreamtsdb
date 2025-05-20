#include <string>
#include <vector>
#include <tickerstreamTSDB.h>

class DailyStockSchema : public DatabaseDrivers::InfluxDB::InfluxDBSchema {
private:
	static std::vector<std::string> _requiredTags;
	static std::vector<std::string> _requiredStringFields;
	static std::vector<std::string> _requiredFloatFields;
	static std::vector<std::string> _requiredIntFields;
	static std::vector<std::string> _requiredUnsignedIntFields;

public:
	bool verify(DatabaseDrivers::InfluxDB::InfluxDBPoint point) override
	{
		return true;
	}

};




int main()
{
	return 0;
}
