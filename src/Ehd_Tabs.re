[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~activeKey: string=?,
    ~animated: bool=?,
    ~defaultActiveKey: string=?,
    ~hideAdd: bool=?,
    ~size: [@bs.string] [ | `large | `defalt | `small]=?,
    ~tabBarExtraContent: React.element=?,
    ~tabBarGutter: int=?,
    ~tabBarStyle: ReactDOMRe.Style.t=?,
    ~tabPosition: [@bs.string] [ | `top | `right | `bottom | `left]=?,
    ~_type: [@bs.string] [
              | `line
              | `card
              | [@bs.as "editable-card"] `editableCard
            ]
              =?,
    ~onChange: string => unit=?,
    ~onNextClick: ReactEvent.Mouse.t => unit=?,
    ~onPrevClick: ReactEvent.Mouse.t => unit=?,
    ~onTabClick: (string, ReactEvent.Mouse.t) => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Tabs";

module TabPane = {
  [@bs.scope "Tabs"]
  [@bs.module "@ehrocks/eh-ant-design/lib"]
  [@react.component]
  external make:
    (~tab: string=?, ~key: string=?, ~children: React.element=?) =>
    React.element =
    "TabPane";
};
