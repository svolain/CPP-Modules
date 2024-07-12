/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:58:14 by vsavolai          #+#    #+#             */
/*   Updated: 2024/07/12 15:38:20 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void    ft_replace(std::string infile, std::string str1, std::string str2)
{
    std::ifstream   in(infile); 
    std::ofstream   out(infile += ".replace");
    std::string     line;
    std::string     temp;
    size_t          found;

    if (!in)
        std::cout << "Error: Can't open input file\n";
    else if (!out)
        std::cout << "Error: Can't open output file\n";
    else
    {
        while(getline(in, line))
        {
            int begin = 0;
            while((found = line.find(str1, begin)) != std::string::npos)
            {
                temp = line.substr(found + str1.size());
                line.erase(found);
                line += str2 + temp;
                begin = found + str2.size();
            }
            out << line;
            if (!in.eof())
                out << std::endl;
        }
        in.close();
        out.close();
    }
    

}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string str1(argv[2]);
        std::string str2(argv[3]);
        if (str1.empty() || str2.empty())
            std::cout << "Error: empty string\n";
        else
            ft_replace(argv[1], str1, str2);
    }
    else
        std::cout << "Error: wrong number of arguments, enter <./repplace file str1 str2>\n";
}
