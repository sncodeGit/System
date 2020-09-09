FROM python:3.7

ENV FLASK_APP src/app.py

WORKDIR /app

ADD requirements.txt .
RUN pip install -r requirements.txt

ADD . .

CMD /bin/sh docker-entrypoint.sh