# Challenges
This repository contains standard programming challenges on the web

## Organizational Scheme

This is organized primarily by challenge.  
Then this is organized by language (C++/C#/Java/Go/Python).  
Many of the challenges have the same solution, or very similar solutions.

In summary:
```
- repo-root/
  - README.md (this file)
  - <challenge-name>
    - cpp/
    - csharp/
    - java/
    - go/
    - python/
    - README.md
```

## Building and Running Solutions

#### Requirements
***
1.  g++
2.  .NET SDK (tested with version 10)
3.  Java SDK (tested with version 21)
4.  Go (tested with go1.22.2)
5.  Python (testetd with 3.5.12)

#### C+++ 
***
```
g++ -o foo foo.cpp
foo < sample_data
```
#### C#
***
```
dotnet run foo.cs < sample_data
```

#### Java
***
```
javac foo.java
java foo < sample_data
```

#### Go
***
```
go build foo.go
./foo < sample_data
```

#### Python
***
```
python foo.py < sample_data
```

