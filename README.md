## Shale

[![Build Status](https://travis-ci.org/ShaleCoding/shale-services.svg?branch=master)](https://travis-ci.org/ShaleCoding/shale-services)

shale is a set of services for IRC networks designed for large IRC networks with high
scalability requirements.  It is relatively mature software, with some code and design
derived from another package called Atheme and Shrike.

shale's behavior is tunable using modules and a highly detailed configuration file.
Almost all behavior can be changed at deployment time just by editing the configuration.

If you are running this code from Git, you should read GIT-Access for instructions on
how to fully check out the shale tree, as it is spread across many repositories.

## Basic build instructions for the impatient

Whatever you do, make sure you do *not* install shale into the same location as the source.
shale will default to installing in `$HOME/shale`, so make sure you plan accordingly for this.

    $ git submodule update --init
    $ ./configure
    $ make
    $ make install

If you're still lost, read [INSTALL](INSTALL) or [GIT-Access](GIT-Access) for hints.
Help is also available on the [shale IRC Services Wiki](https://github.com/ShaleCoding/shale-services/wiki)

## IRC Support

 * [IRC](irc://irc.chatfreedom.us/#shaleservices) irc.chatfreedom.us #shaleservices

## links / contact

 * [GitHub](http://www.github.com/ShaleCoding/shale-services)
 * [Website](http://shale.chatfreedom.us)
 * [IRC](irc://irc.chatfreedom.us/#shaleservices) irc.chatfreedom.us #shaleservices
