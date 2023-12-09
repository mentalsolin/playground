SELECT [Name], Places FROM Wards
WHERE DepartmentId = 3 and Places >= 15;

SELECT Wards.Name, Wards.Places
FROM Wards, Departments
WHERE Departments.Id = 3 AND Wards.Places >= 5 AND Departments.Id = Wards.DepartmentId AND 1 < (SELECT COUNT(*)
																								FROM Wards, Departments
																								WHERE Wards.Places >= 15);

