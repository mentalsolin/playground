#include <iostream>

using namespace std;

class DataSource {
public:
	DataSource() {}
	virtual void writeData(string pData) = 0;
	virtual string readData() = 0;
	virtual ~DataSource() {}
};

class FileDataSource : public DataSource {
	string filename;
public:
	FileDataSource() {}
	FileDataSource(string pdata) { filename = pdata; }
	void writeData(string data)override {
		filename = data;
	}
	string readData() override {
		return filename;
	}
};

class DataSourceDecorator : public DataSource {
protected:
	DataSource* wrappee;
public:
	DataSourceDecorator(DataSource* wrappee) {
		this->wrappee = wrappee;
	}
	string readData() override {
		return wrappee->readData();
	}
	void writeData(string data)override {
		this->wrappee->writeData(data);
	}
};

class EncryptionDecorator : public DataSourceDecorator {
public:
	EncryptionDecorator(DataSource* obj) : DataSourceDecorator(obj) {}
	void writeData(string data)override {
		for (int i = 0; i < data.size(); i++) {
			if (data[i] != ' ') {//в строке не меняем пробелы
				data[i] += 1;
			}
		}
		this->wrappee->writeData(data);//обращаемся к строке и сохраняем её в защифрованном виде
	}
	string readData() override {
		return this->wrappee->readData();
	}
};

class CompressionDecorator : public DataSourceDecorator {
public:
	CompressionDecorator(DataSource* obj) : DataSourceDecorator(obj) {}
	void writeData(string data)override {
		while (data.find(" ") != -1) {//пока не дошли до конца строки
			//После пробела каждая буква заглавная
			data[data.find(" ") + 1] = toupper(data[data.find(" ") + 1]);
			data.erase(data.find(" "), 1);//стираем только 1 пробел
		}
		this->wrappee->writeData(data);
	}
	string readData() override {
		return this->wrappee->readData();
	}
};

int main()
{
	DataSource* data1 = new FileDataSource();
	data1->writeData("2222");
	data1->readData();
	DataSource* decorator1 = new EncryptionDecorator(data1);
	decorator1->writeData("hello world");
	cout << "\nEncryption str: " << decorator1->readData() << endl;
	DataSource* decorator2 = new CompressionDecorator(data1);
	decorator2->writeData(decorator1->readData());
	cout << "\nCompression str: " << decorator2->readData() << endl;
}