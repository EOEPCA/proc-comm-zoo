
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
![Build][build-shield]

<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/EOEPCA/template-svce">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">proc-comm-zoo</h3>

  <p align="center">
    Dockerize <a href="http://zoo-project.org/">zoo-project.org</a>
    <br />
    <a href="#table-of-contents"><strong>Explore the docs »</strong></a>
    <br />
    <a href="http://zoo-project.org/examples/otb-example.html">View zoo-project Demo</a>
    ·
    <a href="https://github.com/EOEPCA/proc-comm-zoo/issues">Report Bug</a>
    ·
    <a href="https://github.com/EOEPCA/proc-comm-zoo/issues">Request Feature</a>
  </p>
</p>

<!-- TABLE OF CONTENTS -->

## Table of Contents

- [About the Project](#about-the-project)
  - [Built With](#built-with)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Testing](#testing)
- [Documentation](#documentation)
- [Usage](#usage)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)
- [Acknowledgements](#acknowledgements)

<!-- ABOUT THE PROJECT -->

## About The Project

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec maximus, libero id condimentum laoreet, magna sem tempor odio, sit amet vehicula est orci nec quam. Aenean ante ante, blandit ac tempus sed, sollicitudin sed purus. Interdum et malesuada fames ac ante ipsum primis in faucibus. Mauris turpis mauris, consectetur nec pharetra nec, finibus ut libero. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Curabitur ac leo sit amet dolor dignissim placerat at a quam. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Donec lacinia turpis mi, eu commodo mi auctor a. Curabitur vel neque mauris.

Praesent in vulputate mi, eget condimentum lorem. Donec euismod eros in turpis rutrum, non interdum augue porttitor. Praesent ac erat ac odio maximus blandit. Nunc luctus leo mattis dictum condimentum. Vivamus condimentum bibendum ligula, eget scelerisque felis posuere vitae. Nam aliquam suscipit leo sodales tristique. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nam sed lectus commodo, vestibulum nisl convallis, maximus arcu. Maecenas in tellus nec ipsum porta gravida.

Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Suspendisse at auctor enim, ac rhoncus ipsum. Nullam vel ullamcorper erat, non bibendum augue. Suspendisse potenti. Aliquam blandit suscipit viverra. Donec interdum ligula ut ante rutrum ultricies eleifend a elit. Mauris congue bibendum nisi, eget egestas orci scelerisque quis. Duis maximus mattis purus, eu rhoncus velit volutpat et.

### Built With

- [CMAKE](https://cmake.org/)
- [googletest](https://github.com/google/googletest)

<!-- GETTING STARTED -->


 


## Getting Started

To get a local copy up and running follow these simple steps.

### Prerequisites

This is an example of how to list things you need to use the software and how to install them.

- [Vagrant](https://www.vagrantup.com/docs/installation/)
- [EOEPCA Development Environment for C++](https://github.com/EOEPCA/dev-env-cpp)

### Installation

1. Get into EOEPCA's development environment for C++

```sh
vagrant ssh
```

3. Clone the repo

```sh
git clone https://github.com/EOEPCA/template-svce-cpp.git
```

4. Change local directory

```sh
cd template-service-cpp/build
```

5. Build application

```sh
cmake -DCMAKE_BUILD_TYPE=Debuf -G "CodeBlocks - Unix Makefiles" ..
make
```

### Testing

- `./test/eoepca-test` runs only the unit tests

## Documentation

The component documentation can be found at https://eoepca.github.io/template-svce-cpp/.

<!-- USAGE EXAMPLES -->

## Usage

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_

### Running the template service

To run the application

```sh
./src/eoepca
```

## Roadmap

See the [open issues](https://github.com/EOEPCA/template-svce-cpp/issues) for a list of proposed features (and known issues).

<!-- CONTRIBUTING -->

## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<!-- LICENSE -->

## License



Distributed under the Apache-2.0 License. See `LICENSE` for more information.

<!-- CONTACT -->

## Contact

Your Name - [@twitter_handle](https://twitter.com/twitter_handle) - email

Project Link: [https://github.com/EOEPCA/template-svce-cpp](https://github.com/EOEPCA/template-svce)

<!-- ACKNOWLEDGEMENTS -->

## Acknowledgements

- []()
- []()
- README.md is based on [this template](https://github.com/othneildrew/Best-README-Template) by [Othneil Drew](https://github.com/othneildrew).

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/EOEPCA/template-svce.svg?style=flat-square
[contributors-url]: https://github.com/EOEPCA/template-svce/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/EOEPCA/template-svce.svg?style=flat-square
[forks-url]: https://github.com/EOEPCA/template-svce/network/members
[stars-shield]: https://img.shields.io/github/stars/EOEPCA/template-svce.svg?style=flat-square
[stars-url]: https://github.com/EOEPCA/template-svce/stargazers
[issues-shield]: https://img.shields.io/github/issues/EOEPCA/template-svce.svg?style=flat-square
[issues-url]: https://github.com/EOEPCA/template-svce/issues
[license-shield]: https://img.shields.io/github/license/EOEPCA/template-svce.svg?style=flat-square
[license-url]: https://github.com/EOEPCA/template-svce/blob/master/LICENSE
[build-shield]: https://www.travis-ci.com/EOEPCA/template-svce.svg?branch=master
[product-screenshot]: images/screenshot.png
