% Configure fonts
%   'no-math' prohibits 'fontspec' to automatically adjust math fonts whenever
%   it wants. We will handle math fonts ourselves
\RequirePackage[no-math]{fontspec}

% Use TeX-style ligatures like '<<', '>>', '---', etc.
\defaultfontfeatures{Mapping = tex-text}

%% \setseriffontfamily{font}    Sets document serif font to 'font'
%% Usage                        \setseriffontfamily{Linux Libertine}
\newcommand{\setseriffontfamily}[1]
{
    \newfontfamily\russianfont{#1}
    \setmainfont{#1}
}

%% \setsansfontfamily{font}     Sets document sans font to 'font'
%% Usage                        \setseriffontfamily{PT Sans}
\newcommand{\setsansfontfamily}[1]
{
    \newfontfamily\cyrillicfontsf[Scale = MatchLowercase]{#1}
    \setsansfont{#1}
}

%% \setmonofontfamily{font}     Sets document mono font to 'font'
%% Usage                        \setmonofontfamily{Droid Sans Mono}
\newcommand{\setmonofontfamily}[1]
{
    \newfontfamily\cyrillicfonttt[Scale = MatchLowercase]{#1}
    \setmonofont{#1}
}


% Line spacing

\RequirePackage{setspace}

% 'setstretch' is a strange name so introduce better named command

%% \setlinespacing{spacing}     Sets line spacing to 'spacing'
%% Usage                        \setlinespacing{1.5}
\newcommand{\setlinespacing}[1]{\setstretch{#1}}


% Make available command \geometry{left = l, right = r, top = t, bottom = b}
\RequirePackage{geometry}


% Indent first line even right after a section
\RequirePackage{indentfirst}

%% \setparagraphindent{indent}  Sets first paragraph line indent to 'indent'
%% Usage                        \setparagraphindent{1cm}
\newcommand{\setparagraphindent}[1]{\setlength{\parindent}{#1}}


% Use colors
\usepackage{xcolor}

% Define Tango color scheme
\definecolor{LightButter}{rgb}{0.98,0.91,0.31}
\definecolor{LightOrange}{rgb}{0.98,0.68,0.24}
\definecolor{LightChocolate}{rgb}{0.91,0.72,0.43}
\definecolor{LightChameleon}{rgb}{0.54,0.88,0.20}
\definecolor{LightSkyBlue}{rgb}{0.45,0.62,0.81}
\definecolor{LightPlum}{rgb}{0.68,0.50,0.66}
\definecolor{LightScarletRed}{rgb}{0.93,0.16,0.16}
\definecolor{Butter}{rgb}{0.93,0.86,0.25}
\definecolor{Orange}{rgb}{0.96,0.47,0.00}
\definecolor{Chocolate}{rgb}{0.75,0.49,0.07}
\definecolor{Chameleon}{rgb}{0.45,0.82,0.09}
\definecolor{SkyBlue}{rgb}{0.20,0.39,0.64}
\definecolor{Plum}{rgb}{0.46,0.31,0.48}
\definecolor{ScarletRed}{rgb}{0.80,0.00,0.00}
\definecolor{DarkButter}{rgb}{0.77,0.62,0.00}
\definecolor{DarkOrange}{rgb}{0.80,0.36,0.00}
\definecolor{DarkChocolate}{rgb}{0.56,0.35,0.01}
\definecolor{DarkChameleon}{rgb}{0.30,0.60,0.02}
\definecolor{DarkSkyBlue}{rgb}{0.12,0.29,0.53}
\definecolor{DarkPlum}{rgb}{0.36,0.21,0.40}
\definecolor{DarkScarletRed}{rgb}{0.64,0.00,0.00}
\definecolor{Aluminium1}{rgb}{0.93,0.93,0.92}
\definecolor{Aluminium2}{rgb}{0.82,0.84,0.81}
\definecolor{Aluminium3}{rgb}{0.73,0.74,0.71}
\definecolor{Aluminium4}{rgb}{0.53,0.54,0.52}
\definecolor{Aluminium5}{rgb}{0.33,0.34,0.32}
\definecolor{Aluminium6}{rgb}{0.18,0.20,0.21}


% Use URLs
\RequirePackage[colorlinks, breaklinks, bookmarks=true, xetex, unicode, pdfencoding=auto]{hyperref}

% Setup URLs color
\hypersetup{
  linkcolor = DarkSkyBlue,
  citecolor = DarkSkyBlue,
  filecolor = DarkSkyBlue,
  urlcolor  = DarkSkyBlue,
}

% Do not use mono font for urls
\urlstyle{same}


% Enable pdf files insertion by \includepdf{filename} command
\RequirePackage[final]{pdfpages}


% Floats label separator setup
\RequirePackage{caption}
\captionsetup
{
  font = small,
  singlelinecheck = false,
  justification = raggedright,
  figureposition = bottom,
  tableposition = top
}


\DeclareCaptionLabelSeparator{emdash}{ --- }


%% \setfloatslabelseparator{sep}    Sets floats (figure, table, listing) label
%%                                  separator to 'sep'
%% Usage                            \setfloatslabelseparator{period}

% Can't just \captionsetup{labelsep = #1} since it gets overwritten in GOST somehow
\newcommand{\setfloatslabelseparator}[1]
{
    \captionsetup[table]{labelsep = #1}
    \captionsetup[figure]{labelsep = #1}
    \captionsetup[listing]{labelsep = #1}
}


% Setup text alignment in table cells
\RequirePackage{tabularx}

% Left align
\newcolumntype{L}{>{\raggedright\arraybackslash}X}

% Paragraph-style align
\newcolumntype{P}[1]{>{\raggedright\arraybackslash}p{#1}}