# tickerstreamtsdb
Service for fetching, processing and storing stock market data into a time-series database to act as the data pipeline for projects requiring stock data, ensuring that clean, validated and timestamped stock data is available for analysis, focusing on reliability and scalability.

## Features
### Support for multiple data sources
### Data handling
- missing values
- type conversions
- timezone handling (all timestamps in UTC)
- configurable parsing for different data sources
### Time-series database integration
- well defined schema for storing data
- efficient writing to TSDB with batching
### API handling
- graceful handling of API rate limits (delay / exponential backoff)
### Configuration
- external configuration file for data parsing / different data sources
### Logging
- logging important events, errors and warning

## Docs

