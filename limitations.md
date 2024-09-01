# Parser Limitations

## Project
- Multiline-`Note` is not supported

## Table
- Schemas are not supported
- Notes are not supported 
- Settings are not supported: `Table users [headercolor: #3498DB] {`
- Enums are not supported
### Index Definitions
- Only Single Field and Compositie Field indexes are supported
- Index Settings are supported but limited to one setting per index
  - not supported by sql Exporter!
- Notes are not supported
- Expressions are not supported ```(`id*2`)```


## Column
- Notes are not supported 
- explicit column types are not supported: `id “bigint unsigned” [pk]`
- Expression-Defaults are not supported 

## Relationship
- Schemas are not supported
- Composite foreign keys are not supported
- Cross-schema relationships are not supported

## Enum
- not supported

## TableGroup
- not supported

## Misc
- Only top level comments `//` are supported
