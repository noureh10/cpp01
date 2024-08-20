/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nechaara <nechaara@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:54:19 by nechaara          #+#    #+#             */
/*   Updated: 2024/08/15 00:49:02 by nechaara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void findAndModify(std::ifstream &input, std::ofstream &output, const std::string &stringMatch, const std::string &stringReplace) {
    std::string line;
    while (std::getline(input, line)) { 
        size_t pos = 0;
        while ((pos = line.find(stringMatch, pos)) != std::string::npos) {
            line.erase(pos, stringMatch.length());
            line.insert(pos, stringReplace);
            pos += stringReplace.length();
        }
        output << line << '\n';
    }
}

void	errorHandler(std::string message) {
	std::cerr << message << std::endl;
}

int main(int ac, char **av) {
	std::ifstream inFile;
	std::ofstream outFile;
	std::string outFileName;
	char		*stringMatch;
	char		*stringReplace;
	
	if (ac == 4) {
		stringMatch = av[2];
		stringReplace = av[3];
		
		inFile.open(av[1]);
		if (!inFile.is_open()) {
			errorHandler("Couldn't open the input file, exiting");
			return (1);
		}
		outFileName = std::string(av[1]) + ".replace";
		outFile.open(outFileName.c_str(), std::ofstream::out);
		outFile.clear();
		if (!outFile.is_open()) {
			inFile.close();
			errorHandler("Couldn't open the output file, exiting");
			return (1);
		}
		findAndModify(inFile, outFile, stringMatch, stringReplace);
		inFile.close();
		outFile.close();
		
	} else {
		return (1);
	}
	return (0);
}