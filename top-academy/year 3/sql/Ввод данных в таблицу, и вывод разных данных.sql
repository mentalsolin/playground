INSERT INTO Doctors([Name], Premium, Salary, Surname)
VALUES ('Greg', '30000', '48234', 'House'),('Eric', '2000', '36784', 'Foreman'),('Allison', '2000', '46643', 'Cameron')

INSERT INTO Departments(Building,[Name])
VALUES (3,'Dep im. House'),(2,'Dep im. Allison'),(5,'Dep im. Eric')

INSERT INTO Examinations([Name])
VALUES ('TEST NA HLEB'),('TEST NA BATON'),('TEST NA LA BAGUETTE')

INSERT INTO DoctorsExaminations(EndTime,StartTime,DoctorId,ExaminationId,WardId)
VALUES ('17:00','16:00',13,15,0),('17:00','16:00',13,15,1),('17:00','16:00',13,15,2)

INSERT INTO Wards([Name], Places, DepartmentId)
VALUES ('Palata Im. Gleba', 24, 1),('Palata Im. Nikito', 24, 2),('Palata Im. Ruslana', 24, 3)

--1
SELECT COUNT(*) AS [Amount of Wards]
FROM Wards
WHERE Wards.Places > 14

--2
SELECT Wards.Name, Places AS [Amount of Wards]
FROM Wards

--3
SELECT Departments.Name, Places AS [Amount of Places]
FROM Departments, Wards

--4
SELECT Departments.Name, SUM(Doctors.Premium) AS [Premium]
FROM Departments, Wards, DoctorsExaminations, Doctors
WHERE Departments.Id = Wards.DepartmentId AND Wards.Id = DoctorsExaminations.WardId AND Doctors.Id = DoctorsExaminations.DoctorId
GROUP BY Departments.Name

--5



--6
SELECT COUNT(*) AS [Count of Doctors],
SUM(Doctors.Salary) + SUM(Doctors.Premium) AS [Sum]
FROM Doctors

--7
SELECT COUNT(*) AS [Count of Doctors],
AVG(Doctors.Salary) + AVG(Doctors.Premium) AS [Sum]
FROM Doctors

--8
SELECT Wards.Places AS [Ward],
MIN(Wards.Places) AS [Places]
FROM Wards
GROUP BY Wards.Places

--9
