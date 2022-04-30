FROM node:17
RUN mkdir -p /mrjb/app
WORKDIR /mrjb/app
COPY ./ ./
RUN npm install
EXPOSE 3000

CMD ["npm", "install"]
CMD ["npm", "start"]
