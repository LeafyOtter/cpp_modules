#include <iostream>
#include <fstream>
#include <string>

void	replace(std::ostream& outfile, std::string line, std::string oldWord, std::string newWord) {
	size_t	begin, end;
	std::string	str;

	begin = 0;
	do
	{
		end = line.find(oldWord, begin);
		str.append(line, begin, end - begin);
		if (end == line.npos)
			break ;
		begin = end + oldWord.length();
		str.append(newWord);
	} while (end != line.npos);
	outfile << str << std::endl;
}

int	main(int ac, char **av) {
	std::string	filename_out, line;
	std::ifstream infile;
	std::ofstream outfile;

	if (ac != 4) {
		std::cerr << "Wrong number of arguments." << \
			"Expected :\n- filename\n- old word\n- new word" << std::endl;
		return (1);
	}
	filename_out = av[1];
	filename_out.append(".replace");
	infile.exceptions ( std::ifstream::failbit | std::ifstream::badbit );
	outfile.exceptions ( std::ofstream::failbit | std::ofstream::badbit );
	try
	{
		infile.open(av[1], std::ios::in);
		outfile.open(filename_out.c_str(), std::ios::out);
		do
		{
			getline(infile, line);
			replace(outfile, line, av[2], av[3]);
		} while (!infile.eof());
		infile.close();
		outfile.close();
	}
	catch(std::ifstream::failure e)
	{
		std::cerr << "Exception opening/reading/closing file\n";
		return (1);
	}
	return (0);
}