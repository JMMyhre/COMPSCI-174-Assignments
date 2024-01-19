#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () 
{
  
  const int width = 640;
  const int height = 480;
  unsigned char imagedata[height][width*4];                             /* Each pixel contains 4 colors in 32-bit bitmap image */
  unsigned char header[54];                                             /* Bitmap header is 54 bytes */
  
  //
  /* Notice that the imagedata[][] and header[] are both declared as character arrays.
   * This is because characters are typically 8-bit (1-byte) in size, making them
   * a convenient datatype when we need to read one byte at a time */
  //
  
  string inputFile;
  string outputFile;
  
  std::cout << "+++++ Image Processor Alpha +++++" << endl << endl;
  cout << "Enter the name of the input image file (.bmp) ";
  getline(cin, inputFile);
  
  //
  /* For various reasons, users often don't include the extension (.bmp) when they specify the filename
   * We may have to manually add the '.bmp' extension to the filename */
  //
  
  if(inputFile.find(".bmp") == std::string::npos)                       /* First check if the user has specified the extension */
  {
    inputFile = inputFile + ".bmp";                                     /* If not, append the '.bmp' extension to the file name */
  }

  ifstream infile;
  infile.open(inputFile, ios::in | ios::binary);                        /* Open file in binary mode so that we can read raw data */
  
  if( infile.fail() )
  {
      cout << "Error: unable to open " << inputFile;
      return -1;
  }
  
  cout << "Enter the output file name (.bmp) ";
  getline(cin, outputFile);
  
  //
  /* Check for the extension and append if necessary */
  //
  
  if(outputFile.find(".bmp") == std::string::npos)                      /* First check if the user has specified the extension */
  {
    outputFile = outputFile + ".bmp";                                   /* If not, append the '.bmp' extension to the file name */
  }
  
  //
  /* Start reading from the input image file */
  //
  
  infile.read((char *)&header[0], sizeof(header));                      /* First, read the header */
  infile.read((char *)&imagedata[0][0], sizeof(imagedata));             /* Next, read the image data */
  infile.close();                                                       /* Close the file, we have what we need */
  
  //
  /* You will need to add your code here to implement the required functionalities */
  //
  string choice, colorchoice,weird;
  cout << "--------------------"<<endl;
  cout << "1.Invert an Image" << endl << "2.Apply a Basic pass filter" << endl << "3.Convert an image do greyscale" << endl << "4.Basic color enhancing" << endl<<"5.Do something wacky?"<<endl;
  cout << "--------------------"<<endl;
  cout << "What would you like to do?(#): ";
  getline(cin, choice);
  int red = 0, green = 0, blue = 0, alpha = 0;

  if (choice == "1")
  {
      for (int i = 0; i < height; i++)
      {
          for (int j = 0; j < width * 4; j++)
          {
              switch (j % 4)
              {
              case 0:
                  //blue
                  blue = imagedata[i][j];
                  imagedata[i][j] = 255 - imagedata[i][j];
                  break;
              case 1:
                  //green
                  green = imagedata[i][j];
                  imagedata[i][j] = 255 - imagedata[i][j];
                  break;
              case 2:
                  //red
                  red = imagedata[i][j];
                  imagedata[i][j] = 255 - imagedata[i][j];

                  break;
                  // red filter would destroy the rest of the data, same with the other colors so the value of the other colors would equal 0
                  // inverted color is subtracting the value we get from the maximum value.

              default:
                  alpha = imagedata[i][j];
                  break;
              }

          }
      }
  }
  else if (choice == "2")
  {
      cout << "--------------------"<<endl;
      cout << "1.Blue" << endl << "2.Green" << endl << "3.Red" << endl;
      cout << "--------------------" << endl;
      cout << "What color would you like to make the image?(#): ";
      getline(cin, colorchoice);
      if (colorchoice == "1")
      {
          for (int i = 0; i < height; i++)
          {
              for (int j = 0; j < width * 4; j++)
              {
                  switch (j % 4)
                  {
                  case 0:
                      //blue
                      blue = imagedata[i][j];
                      break;
                  case 1:
                      //green
                      green = imagedata[i][j];
                      imagedata[i][j] = 0;
                      break;
                  case 2:
                      //red
                      red = imagedata[i][j];
                      imagedata[i][j] = 0;

                      break;
                      // red filter would destroy the rest of the data, same with the other colors so the value of the other colors would equal 0
                      // inverted color is subtracting the value we get from the maximum value.

                  default:
                      alpha = imagedata[i][j];
                      break;
                  }

              }
          }
      }
      else if (colorchoice == "2")
      {
          for (int i = 0; i < height; i++)
          {
              for (int j = 0; j < width * 4; j++)
              {
                  switch (j % 4)
                  {
                  case 0:
                      //blue
                      blue = imagedata[i][j];
                      imagedata[i][j] = 0;
                      break;
                  case 1:
                      //green
                      green = imagedata[i][j];
                      break;
                  case 2:
                      //red
                      red = imagedata[i][j];
                      imagedata[i][j] = 0;

                      break;
                      // red filter would destroy the rest of the data, same with the other colors so the value of the other colors would equal 0
                      // inverted color is subtracting the value we get from the maximum value.

                  default:
                      alpha = imagedata[i][j];
                      break;
                  }

              }
          }
      }
      else if (colorchoice == "3")
      {
          for (int i = 0; i < height; i++)
          {
              for (int j = 0; j < width * 4; j++)
              {
                  switch (j % 4)
                  {
                  case 0:
                      //blue
                      blue = imagedata[i][j];
                      imagedata[i][j] = 0;
                      break;
                  case 1:
                      //green
                      green = imagedata[i][j];
                      imagedata[i][j] = 0;
                      break;
                  case 2:
                      //red
                      red = imagedata[i][j];

                      break;
                      // red filter would destroy the rest of the data, same with the other colors so the value of the other colors would equal 0
                      // inverted color is subtracting the value we get from the maximum value.

                  default:
                      alpha = imagedata[i][j];
                      break;
                  }

              }
          }
      }
  }
  else if (choice == "3")
  {
      for (int i = 0; i < height; i++)
      {
          for (int j = 0; j < width * 4; j++)
          {
              switch (j % 4)
              {
              case 0:
                  //blue
                  blue = imagedata[i][j];
                  blue = blue / 3;
                  break;
              case 1:
                  //green
                  green = imagedata[i][j];
                  green = green / 3;
                  break;
              case 2:
                  //red
                  red = imagedata[i][j];
                  red = red / 3;
                  break;
                  // red filter would destroy the rest of the data, same with the other colors so the value of the other colors would equal 0
                  // inverted color is subtracting the value we get from the maximum value.

              default:
                  alpha = imagedata[i][j];
                  break;
              }
              imagedata[i][j] = blue + green + red;

          }
      }
  }
  else if (choice == "4")
  {
      for (int i = 0; i < height; i++)
      {
          for (int j = 0; j < width * 4; j++)
          {
              switch (j % 4)
              {
              case 0:
                  //blue
                  blue = imagedata[i][j];
                  blue = max(0, blue - 20);
                  imagedata[i][j] = blue;
                  break;
              case 1:
                  //green
                  green = imagedata[i][j];
                  break;
              case 2:
                  //red
                  red = imagedata[i][j];
                  red = max(0, red - 20);
                  imagedata[i][j] = red;
                  break;
                  // red filter would destroy the rest of the data, same with the other colors so the value of the other colors would equal 0
                  // inverted color is subtracting the value we get from the maximum value.

              default:
                  alpha = imagedata[i][j];
                  break;
              }

          }
      }
 }
  else if (choice == "5")
  {
      cout << "1,2,or 3?(#): ";
      getline(cin, weird);
      if (weird == "1")
      {
          for (int i = 0; i < height; i++)
          {
              for (int j = 0; j < width * 4; j++)
              {
                  switch (j % 4)
                  {
                  case 0:
                      //blue
                      blue = imagedata[i][j];
                      blue = max(0, blue - 20);
                      imagedata[i][j] = blue;
                      break;
                  case 1:
                      //green
                      green = imagedata[i][j];
                      green = max(255, green + 20);
                      imagedata[i][j] = green;
                      break;
                  case 2:
                      //red
                      red = imagedata[i][j];
                      red = max(0, red - 20);
                      imagedata[i][j] = red;
                      break;
                      // red filter would destroy the rest of the data, same with the other colors so the value of the other colors would equal 0
                      // inverted color is subtracting the value we get from the maximum value.

                  default:
                      alpha = imagedata[i][j];
                      break;
                  }

              }
          }
      }
      else if (weird == "2")
      {
          for (int i = 0; i < height; i++)
          {
              for (int j = 0; j < width * 4; j++)
              {
                  switch (j % 4)
                  {
                  case 0:
                      //blue
                      blue = imagedata[i][j];
                      blue = max(0, blue - 20);
                      imagedata[i][j] = blue;
                      break;
                  case 1:
                      //green
                      green = imagedata[i][j];
                      green = max(255, green + 20);
                      imagedata[i][j] = green;
                      break;
                  case 2:
                      //red
                      red = imagedata[i][j];
                      red = max(0, red - 20);
                      imagedata[i][j] = red;
                      break;
                      // red filter would destroy the rest of the data, same with the other colors so the value of the other colors would equal 0
                      // inverted color is subtracting the value we get from the maximum value.

                  default:
                      alpha = imagedata[i][j];
                      break;
                  }
                  imagedata[i][j] = blue + green + red;
              }
          }
      }
      else if (weird == "3")
      {
          for (int i = 0; i < height; i++)
          {
              for (int j = 0; j < width * 4; j++)
              {
                  switch (j % 4)
                  {
                  case 0:
                      //blue
                      blue = imagedata[i][j];
                      blue = max(0, blue - 20);
                      imagedata[i][j] = blue;
                      break;
                  case 1:
                      //green
                      green = imagedata[i][j];
                      break;
                  case 2:
                      //red
                      red = imagedata[i][j];
                      red = max(0, red - 20);
                      imagedata[i][j] = red;
                      break;
                      // red filter would destroy the rest of the data, same with the other colors so the value of the other colors would equal 0
                      // inverted color is subtracting the value we get from the maximum value.

                  default:
                      alpha = imagedata[i][j];
                      break;
                  }
                  imagedata[i][j] = blue + green + red;
              }
          }
      }
 }
 
 
  //
  //
  
  //
  /* Start writing the modified image data to the file */
  //
  
  ofstream outfile;
  outfile.open(outputFile, ios::out | ios::binary);
  
  outfile.write((char *)&header[0], sizeof(header));                    /* First, write the header */
  outfile.write((char *)&imagedata[0][0], sizeof(imagedata));           /* Next, write the image data */
  outfile.close();                                                      /* Finally, close the file */
  
  cout << "---- Done! ----";
  
  return 0;
}
