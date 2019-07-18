[%bs.raw {|require("@ehrocks/eh-ant-design/styles/eh-antd.css")|}];

module Styles = {
  open Css;
  let wrapper = [20 |> px |> margin, 20 |> px |> padding] |> style;
};

let str = ReasonReact.string;

open Ehd;

module App = {
  [@react.component]
  let make = () =>
    <div className=Styles.wrapper>
      <h1> {str("Examples")} </h1>
      <Section title="Badge">
        <Ehd.Badge count=10 overflowCount=9>
          {str("Unread notifications")}
        </Ehd.Badge>
      </Section>
      <Section title="Buttons">
        <Button loading={Button.LoadingProp.Bool(true)} _type=`primary>
          {str("Button 1")}
        </Button>
        <Button
          onClick={_ => Js.log("you are at danger")}
          _type=`danger
          size=`large>
          {str("Button 2")}
        </Button>
        <Button _type=`link size=`xlarge icon=`search>
          {str("Button 3")}
        </Button>
        <br />
        <Button.ButtonGroup focusStyle=`trafficLights>
          <Button focusColorInGroup=`primary> {str("All")} </Button>
          <Button focusColorInGroup=`yellow> {str("Pending")} </Button>
          <Button focusColorInGroup=`green> {str("Accepted")} </Button>
          <Button focusColorInGroup=`pink> {str("Declined")} </Button>
        </Button.ButtonGroup>
      </Section>
      <Section title="Icons">
        <Icon
          style={ReactDOMRe.Style.make(
            ~width="100px",
            ~height="100px",
            ~color="red",
            ~marginRight="10px",
            ~fontSize="30px",
            (),
          )}
          name=`thankAHero
        />
        <Icon
          style={ReactDOMRe.Style.make(
            ~width="100px",
            ~height="100px",
            ~color="blue",
            ~marginRight="10px",
            ~fontSize="30px",
            (),
          )}
          name=`alignment
          color=`light
          rotate=90
          theme=`outlined
        />
      </Section>
      <RadioExample />
      <Section title="Progress">
        <Progress percent=75. status=`active />
        <Progress percent=70. status=`error />
        <Progress
          format={(percent, _successPercent) =>
            Js.Float.toString(percent) ++ " days"
          }
          percent=60.
          successPercent=30.
          _type=`dashboard
        />
      </Section>
      <Section title="Tooltip">
        <Tooltip
          placement=`top title={ReasonReact.string("3 done / 3 in progress")}>
          <span>
            {ReasonReact.string("Tooltip will show on mouse enter.")}
          </span>
        </Tooltip>
      </Section>
      <Section title="Typography">
        <Typography.Title level=3>
          {ReasonReact.string("This is a title")}
        </Typography.Title>
        <Typography.Paragraph code=true>
          {ReasonReact.string(
             {|
Js.log('Hello ReasonML World');
Js.log('Byebye ... World');
          |},
           )}
        </Typography.Paragraph>
      </Section>
      <Section title="Cards">
        <Card
          title="Default size card"
          extra={<a href="#"> {ReasonReact.string("More")} </a>}
          style={ReactDOMRe.Style.make(~width="300px", ())}>
          <p> {ReasonReact.string("Card content 1")} </p>
          <p> {ReasonReact.string("Card content 2")} </p>
          <p> {ReasonReact.string("Card content 3")} </p>
        </Card>
      </Section>
      <Alert
        message={str("You shall not pass")}
        _type=`warning
        closable=true
        onClose={_ => Js.log("Close")}
      />
    </div>;
};

ReactDOMRe.renderToElementWithId(<App />, "root");
