module App = {
  [@react.component]
  let make = () => <h1> {ReasonReact.string("Bs EH design example")} </h1>;
};

ReactDOMRe.renderToElementWithId(<App />, "root");
