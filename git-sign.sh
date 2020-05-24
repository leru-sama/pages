#!/bin/bash
echo -e  "your email:\c"
read email
echo -e "your name:\c"
read name
git config --global user.email $email
git config --global user.name $name
echo Welcome! $name
