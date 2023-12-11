CREATE TABLE Departments (
	Id int not null primary key identity(1,1),
	Building int not null check (Building >= 1 AND Building <=5),
	Financing money not null DEFAULT (1) check (Financing >= 0),
	FirstName nvarchar(100) not null unique check(datalength(FirstName) > 0),
);
CREATE TABLE Diseases (
	Id int not null primary key identity(1,1),
	FirstName nvarchar(100) not null unique check(datalength(FirstName) > 0),
	Severity int not null check (Severity >= 1) DEFAULT (1)
);
CREATE TABLE Doctors (
	Id int not null primary key identity(1,1),
	FirstName nvarchar(100) not null unique check(datalength(FirstName) > 0),
	Phone char(10),
	Salary money not null check (Salary <= 0),
	Surname nvarchar(100) not null check(datalength(Surname) > 0)
);
CREATE TABLE Examinations (
	Id int not null primary key identity(1,1),
	DayOfWeeks int not null check (DayOfWeeks <= 1 AND DayOfWeeks <=7),
	EndTime time not null,
	FirstName nvarchar(100) not null unique check(datalength(FirstName) > 0),
	StartTime time not null check (StartTime >= '8:00' AND StartTime <= '18:00'),
	CONSTRAINT chektime check (EndTime > StartTime)
);

INSERT INTO Departments(Building, Financing, FirstName) 
VALUES (1, 10000, 'Greg'), (1, 8000, 'Allison'), (1, 8000, 'Eric')

INSERT INTO Diseases(FirstName, Severity)
VALUES ('John', 5), ('Bread', 2), ('Gleb', 4)

INSERT INTO Doctors (FirstName, Phone, Salary, Surname)
VALUES ('Greg', '+185728574', 10000, 'House'), ('Allison', '+125224671', 8000, 'Cameron'), ('Eric', '+126748632', 8000, 'Foreman')

INSERT INTO Examinations (DayOfWeeks, EndTime, FirstName, StartTime)
VALUES (4, '17:50', 'Greg', '8:10')

