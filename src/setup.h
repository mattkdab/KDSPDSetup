#pragma once

#include "details.h"

namespace KDSPDSetup::setup {

void handleMultifiles(toml::string &&typeStr, toml::table &&sinkTable, spdlog::sink_ptr &sinkPtr, bool const &trunct);

void handleTruncatable(toml::string &&typeStr, toml::table &&sinkTable, spdlog::sink_ptr &sinkPtr);

void setupSink(toml::table &&sinkTable);

void setupSinks(toml::value const &data);

void setupPatterns(toml::value const &data);

void setupThreadPools(toml::value const &data);

void register_async(toml::table const &loggerTable, toml::string const &name, std::vector<spdlog::sink_ptr> const &sinkList,
                    toml::string const &pattern);

void registerSyncr(toml::table const &loggerTable, toml::string const &name, std::vector<spdlog::sink_ptr> const &sinkList,
                    toml::string const &pattern);

void setupLogger(toml::table const &loggerTable);

void setupLoggers(toml::value const &data);

} // namespace KDSPDSetup::setup