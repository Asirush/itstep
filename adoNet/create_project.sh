#!/bin/bash
ProjectID=$1;
mkdir lesson_$ProjectID;
cd lesson_$ProjectID;

dotnet new console;
dotnet add package Microsoft.Data.SqlClient --version 5.0.1;

sudo systemctl start docker;
echo "FROM mcr.microsoft.com/mssql/server"
