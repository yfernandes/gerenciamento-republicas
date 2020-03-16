function faxina(dias, primeira, tarefas, pessoas) {
  // var data = parseData(dias, primeira, tarefas, pessoas);

  var data = {
    diasFaxina: [],
    primeiraFaxina: '',
    pessoas: [],
    tarefas: []
  };

  for (var i = 0; i < dias.length; i++) {
    data.diasFaxina[i] = dias[i];
  }

  data.primeiraFaxina = primeira;

  for (var i = 0; i < pessoas.length; i++) {
    data.pessoas[i] = pessoas[i];
  }

  for (var i = 0; i < tarefas.length; i++) {
    data.tarefas[i] = {
      lugar: tarefas[i][0],
      dificuldade: tarefas[i][1]
    };
  }

  var orderedTasks = orderTasks(data.tarefas, data.pessoas);
  var days = calculateDays(data.primeiraFaxina, data.diasFaxina, orderedTasks);
  var sheet = makeSheet(orderedTasks, days, data.pessoas);

  return sheet;
}
function mergeTasks(tarefas) {
  var values = [];

  for (var i = 0; i < 2; i++) {
    var min;
    for (var j = 0; j < tarefas.length; j++) {
      if (j == 0) {
        min = tarefas[j].dificuldade;
      } else if (tarefas[j].dificuldade < min) {
        min = tarefas[j].dificuldade;
      }
    }
    values.push(
      tarefas.splice(
        tarefas.findIndex(function(a) {
          a.dificuldade == min;
        }, 1)
      )
    );
  }

  var newTask = {
    lugar: values[0][0].lugar + ' & ' + values[1][0].lugar,
    dificuldade: values[0][0].dificuldade + values[1][0].dificuldade
  };
  tarefas.push(newTask);
}
function addBreak(tarefas) {
  var aux = tarefas.length;
  for (var j = 0; j < aux; j++) {
    tarefas[j].dificuldade += 1;
  }
  tarefas.push({
    lugar: 'Folga',
    dificuldade: 1
  });
  return tarefas;
}
function calculateDays(primeiraFaxina, diasFaxina, tarefas) {
  var d = new Date(primeiraFaxina);
  d.setDate(d.getDate() - d.getDay());

  var days = [];

  for (var i = 0; i < tarefas.length; i++) {
    var aux = new Date(d);

    var dayToAdd = diasFaxina[i % diasFaxina.length].toString();
    var add = 0;

    switch (dayToAdd) {
      case 'Domingo':
      case 'domingo':
        add = 0;
        break;
      case 'Segunda':
      case 'segunda':
        add = 1;
        break;
      case 'Terça':
      case 'Terca':
      case 'terça':
      case 'terca':
        add = 2;
        break;
      case 'Quarta':
      case 'quarta':
        add = 3;
        break;
      case 'Quinta':
      case 'quinta':
        add = 4;
        break;
      case 'Sexta':
      case 'sexta':
        add = 5;
        break;
      case 'Sabado':
      case 'Sábado':
      case 'sabado':
      case 'sábado':
        add = 6;
        break;
    }

    aux.setDate(aux.getDate() + Math.floor(i / diasFaxina.length) * 7 + add);
    days[i] = aux;
  }

  //for (var i = 0; i < days.length; i++) {
  //var formatted_date = days[i].getDate() + "-" + (days[i].getMonth() + 1) + "-" + days[i].getFullYear()
  //days[i] = formatted_date
  //}

  return days;
}
function makeSheet(tarefas, datas, pessoas) {
  var result = [];

  var header = ['Dias'];
  for (var i = 0; i < datas.length; i++) {
    header.push(datas[i]);
  }
  result.push(header);

  for (var i = 0; i < tarefas.length; i++) {
    var line = [];
    line.push(tarefas[i].lugar);
    for (var j = 0; j < pessoas.length; j++) {
      var k = (i + j) % pessoas.length;

      line[k + 1] = pessoas[j].toString();
    }
    result.push(line);
  }
  return result;
}
function orderTasks(tarefas, pessoas) {
  tarefas.sort(function(a, b) {
    if (a.dificuldade > b.dificuldade) {
      return 1;
    }
    if (a.dificuldade < b.dificuldade) {
      return -1;
    }
  });

  while (pessoas.length - tarefas.length !== 0) {
    if (pessoas.length - tarefas.length > 0) {
      addBreak(tarefas);
    } else {
      mergeTasks(tarefas);
    }
  }

  tarefas.sort(function(a, b) {
    if (a.dificuldade > b.dificuldade) {
      return 1;
    }
    if (a.dificuldade < b.dificuldade) {
      return -1;
    }
  });

  var sortedTasks = [];

  var a = tarefas.length;
  for (var i = 0; i < a; i++) {
    if (i % 2 == 0) {
      sortedTasks.push(tarefas.pop());
    } else {
      sortedTasks.push(tarefas.shift());
    }
  }
  return sortedTasks;
}
