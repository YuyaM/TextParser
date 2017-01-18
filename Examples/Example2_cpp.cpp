/*
 * TextParser - Text Parsing Library
 *
 * Copyright (C) 2012-2015 Institute of Industrial Science, The University of Tokyo.
 * All rights reserved.
 *
 * Copyright (c) 2014-2016 Advanced Institute for Computational Science, RIKEN.
 * All rights reserved.
 *
 * Copyright (c) 2016-2017 Research Institute for Information Technology, Kyushu University.
 * All rights reserved.
 *
 */

/** @file Example2_cpp.cpp
 *  @retval 0-success / 1-fail
 */

#include <string>
#include <vector>
#include <iostream>
#include "TextParser.h"

int read_parameters(std::string ifilename, std::string ofilename)
{
    int stat = 0;

    //    TextParser* tp=TextParser::get_instance();
    TextParser* tp=TextParser::get_instance_singleton();

    // ファイルの読み込み
    std::cout << ">>> Reading file(" << ifilename << ") <<<" << std::endl;
    stat=tp->read(ifilename);
    //std::cout << std::endl;
    if (stat == 0) {
        std::cout << "# Successful completion of reading a file : " << ifilename << std::endl;
    } else {
        std::cout << "# Error occurs during reading a file : C" << stat << std::endl;
        return 1;
    }

    //
    stat=tp->remove();
    if (stat == 0) {
        std::cout << "# Successful completion of deleting a Data base." << std::endl;
    } else {
        std::cout << "# Error occurs during deleting a Data base : C" << stat << std::endl;
        return 1;
    }
    std::cout << std::endl;

    return 0;
}

int main(int argc, char* argv[])
{
    //MGPPDebugWrite(true);
    // エラーまたは警告

    if ( read_parameters("./tpp_examples/incorrect_basic_1.txt",
		    "./tpp_examples/incorrect_basic_1_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_2.txt",
		    "./tpp_examples/incorrect_basic_2_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_3.txt",
		    "./tpp_examples/incorrect_basic_3_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_4.txt",
		    "./tpp_examples/incorrect_basic_4_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_5.txt",
		    "./tpp_examples/incorrect_basic_5_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_6.txt",
		    "./tpp_examples/incorrect_basic_6_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_7.txt",
		    "./tpp_examples/incorrect_basic_7_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_8.txt",
		    "./tpp_examples/incorrect_basic_8_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_9.txt",
		    "./tpp_examples/incorrect_basic_9_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_10.txt",
		    "./tpp_examples/incorrect_basic_10_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_11.txt",
		    "./tpp_examples/incorrect_basic_11_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_12.txt",
		    "./tpp_examples/incorrect_basic_12_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_13.txt",
		    "./tpp_examples/incorrect_basic_13_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_14.txt",
		    "./tpp_examples/incorrect_basic_14_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_15.txt",
		    "./tpp_examples/incorrect_basic_15_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_16.txt",
		    "./tpp_examples/incorrect_basic_16_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_17.txt",
		    "./tpp_examples/incorrect_basic_17_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_18.txt",
		    "./tpp_examples/incorrect_basic_18_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_basic_19.txt",
		    "./tpp_examples/incorrect_basic_19_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_cond_1.txt",
		    "./tpp_examples/incorrect_cond_1_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_cond_2.txt",
		    "./tpp_examples/incorrect_cond_2_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_cond_3.txt",
		    "./tpp_examples/incorrect_cond_3_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_cond_4.txt",
		    "./tpp_examples/incorrect_cond_4_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_cond_5.txt",
		    "./tpp_examples/incorrect_cond_5_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_1.txt",
		    "./tpp_examples/incorrect_label_1_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_2.txt",
		    "./tpp_examples/incorrect_label_2_out.txt") ) return 1;
    //if (read_parameters("./tpp_examples/incorrect_label_3.txt",
    // "./tpp_examples/incorrect_label_3_out.txt") ) return 1;
    //if ( read_parameters("./tpp_examples/incorrect_label_4.txt",
    //		    "./tpp_examples/incorrect_label_4_out.txt") ) return 1;
    //if ( read_parameters("./tpp_examples/incorrect_label_5.txt",
    // "./tpp_examples/incorrect_label_5_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_6.txt",
		    "./tpp_examples/incorrect_label_6_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_7.txt",
		    "./tpp_examples/incorrect_label_7_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_8.txt",
		    "./tpp_examples/incorrect_label_8_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_9.txt",
		    "./tpp_examples/incorrect_label_9_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_10.txt",
		    "./tpp_examples/incorrect_label_10_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_11.txt",
		    "./tpp_examples/incorrect_label_11_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_12.txt",
		    "./tpp_examples/incorrect_label_12_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_13.txt",
		    "./tpp_examples/incorrect_label_13_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_14.txt",
		    "./tpp_examples/incorrect_label_14_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_15.txt",
		    "./tpp_examples/incorrect_label_15_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_label_16.txt",
		    "./tpp_examples/incorrect_label_16_out.txt") ) return 1;
    //if ( read_parameters("./tpp_examples/incorrect_label_17.txt",
    //"./tpp_examples/incorrect_label_17_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_labelarray_1.txt",
		    "./tpp_examples/incorrect_labelarray_1_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_labelarray_2.txt",
		    "./tpp_examples/incorrect_labelarray_2_out.txt") ) return 1;
    if ( read_parameters("./tpp_examples/incorrect_labelarray_3.txt",
		    "./tpp_examples/incorrect_labelarray_3_out.txt") ) return 1;

    return 0;
}
