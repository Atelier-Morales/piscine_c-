#include <iostream>
#include <fstream>

#define	BUFF_SIZE	50000

int	main(int ac, char **av) {
	std::string		filename;
	std::string		content;
	std::string		s1;
	std::string		s2;
	char			line[BUFF_SIZE + 1];
	size_t			i;

	if (ac == 4) {
		filename = av[1];
		s1 = av[2];
		s2 = av[3];
		if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0)
			return (0);
		std::ifstream	ifs(av[1]);
		while(!ifs.eof()) {
			ifs.read(line, BUFF_SIZE);
			content += line;
		}
		filename += ".replace";
		i = 0;
		while (i != std::string::npos) {
			i = content.find(s1, i);
			if (i != std::string::npos) {
				content.replace(i, s1.length(), s2);
				i += s2.length();
			}
		}
		std::ofstream	ofs(filename.c_str());
		ofs << content;
		ifs.close();
		ofs.close();
	}
	return (0);
}