FROM node:18-alpine

RUN mkdir /app

WORKDIR /app

COPY ./package*.json ./

RUN npm install

COPY ./index.js ./
COPY ./views ./views
COPY ./public ./public
COPY ./routes ./routes

EXPOSE 3000

ENTRYPOINT ["node", "index.js"]