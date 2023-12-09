DROP TABLE Subjects

CREATE TABLE Subjects(
	Id int primary key identity(1,1),
	Name nvarchar(100)
)

CREATE TABLE Departments(
	Id int primary key identity(1,1),
	Name nvarchar(100),
	Phone int
)