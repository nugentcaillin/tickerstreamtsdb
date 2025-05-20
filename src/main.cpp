#include <string>
#include <vector>
#include <influx_db_client.h>

class DailyStockSchema : public InfluxDBClient::InfluxDBSchema {
private:
	static std::vector<std::string> _requiredTags;
	static std::vector<std::string> _requiredStringFields;
	static std::vector<std::string> _requiredFloatFields;
	static std::vector<std::string> _requiredIntFields;
	static std::vector<std::string> _requiredUnsignedIntFields;

public:
	bool verify(InfluxDBClient::InfluxDBPoint point) override
	{
		return true;
	}

};




int main()
{
	return 0;
}
