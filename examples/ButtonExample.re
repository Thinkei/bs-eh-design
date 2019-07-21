open Ehd;

let str = ReasonReact.string;

[@react.component]
let make = () => {
  <Section title="Button">
    <Button loading={Button.LoadingProp.Bool(true)} _type=`primary>
      {str("Button 1")}
    </Button>
    <Button
      onClick={_ => Js.log("you are at danger")} _type=`danger size=`large>
      {str("Button 2")}
    </Button>
    <Button _type=`link size=`xlarge icon=`search> {str("Button 3")} </Button>
    <br />
    <Button.ButtonGroup focusStyle=`trafficLights>
      <Button focusColorInGroup=`primary> {str("All")} </Button>
      <Button focusColorInGroup=`yellow> {str("Pending")} </Button>
      <Button focusColorInGroup=`green> {str("Accepted")} </Button>
      <Button focusColorInGroup=`pink> {str("Declined")} </Button>
    </Button.ButtonGroup>
  </Section>;
};
