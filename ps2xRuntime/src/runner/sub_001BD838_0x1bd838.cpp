#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD838
// Address: 0x1bd838 - 0x1bdc10
void sub_001BD838_0x1bd838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD838_0x1bd838");
#endif

    switch (ctx->pc) {
        case 0x1bd838u: goto label_1bd838;
        case 0x1bd83cu: goto label_1bd83c;
        case 0x1bd840u: goto label_1bd840;
        case 0x1bd844u: goto label_1bd844;
        case 0x1bd848u: goto label_1bd848;
        case 0x1bd84cu: goto label_1bd84c;
        case 0x1bd850u: goto label_1bd850;
        case 0x1bd854u: goto label_1bd854;
        case 0x1bd858u: goto label_1bd858;
        case 0x1bd85cu: goto label_1bd85c;
        case 0x1bd860u: goto label_1bd860;
        case 0x1bd864u: goto label_1bd864;
        case 0x1bd868u: goto label_1bd868;
        case 0x1bd86cu: goto label_1bd86c;
        case 0x1bd870u: goto label_1bd870;
        case 0x1bd874u: goto label_1bd874;
        case 0x1bd878u: goto label_1bd878;
        case 0x1bd87cu: goto label_1bd87c;
        case 0x1bd880u: goto label_1bd880;
        case 0x1bd884u: goto label_1bd884;
        case 0x1bd888u: goto label_1bd888;
        case 0x1bd88cu: goto label_1bd88c;
        case 0x1bd890u: goto label_1bd890;
        case 0x1bd894u: goto label_1bd894;
        case 0x1bd898u: goto label_1bd898;
        case 0x1bd89cu: goto label_1bd89c;
        case 0x1bd8a0u: goto label_1bd8a0;
        case 0x1bd8a4u: goto label_1bd8a4;
        case 0x1bd8a8u: goto label_1bd8a8;
        case 0x1bd8acu: goto label_1bd8ac;
        case 0x1bd8b0u: goto label_1bd8b0;
        case 0x1bd8b4u: goto label_1bd8b4;
        case 0x1bd8b8u: goto label_1bd8b8;
        case 0x1bd8bcu: goto label_1bd8bc;
        case 0x1bd8c0u: goto label_1bd8c0;
        case 0x1bd8c4u: goto label_1bd8c4;
        case 0x1bd8c8u: goto label_1bd8c8;
        case 0x1bd8ccu: goto label_1bd8cc;
        case 0x1bd8d0u: goto label_1bd8d0;
        case 0x1bd8d4u: goto label_1bd8d4;
        case 0x1bd8d8u: goto label_1bd8d8;
        case 0x1bd8dcu: goto label_1bd8dc;
        case 0x1bd8e0u: goto label_1bd8e0;
        case 0x1bd8e4u: goto label_1bd8e4;
        case 0x1bd8e8u: goto label_1bd8e8;
        case 0x1bd8ecu: goto label_1bd8ec;
        case 0x1bd8f0u: goto label_1bd8f0;
        case 0x1bd8f4u: goto label_1bd8f4;
        case 0x1bd8f8u: goto label_1bd8f8;
        case 0x1bd8fcu: goto label_1bd8fc;
        case 0x1bd900u: goto label_1bd900;
        case 0x1bd904u: goto label_1bd904;
        case 0x1bd908u: goto label_1bd908;
        case 0x1bd90cu: goto label_1bd90c;
        case 0x1bd910u: goto label_1bd910;
        case 0x1bd914u: goto label_1bd914;
        case 0x1bd918u: goto label_1bd918;
        case 0x1bd91cu: goto label_1bd91c;
        case 0x1bd920u: goto label_1bd920;
        case 0x1bd924u: goto label_1bd924;
        case 0x1bd928u: goto label_1bd928;
        case 0x1bd92cu: goto label_1bd92c;
        case 0x1bd930u: goto label_1bd930;
        case 0x1bd934u: goto label_1bd934;
        case 0x1bd938u: goto label_1bd938;
        case 0x1bd93cu: goto label_1bd93c;
        case 0x1bd940u: goto label_1bd940;
        case 0x1bd944u: goto label_1bd944;
        case 0x1bd948u: goto label_1bd948;
        case 0x1bd94cu: goto label_1bd94c;
        case 0x1bd950u: goto label_1bd950;
        case 0x1bd954u: goto label_1bd954;
        case 0x1bd958u: goto label_1bd958;
        case 0x1bd95cu: goto label_1bd95c;
        case 0x1bd960u: goto label_1bd960;
        case 0x1bd964u: goto label_1bd964;
        case 0x1bd968u: goto label_1bd968;
        case 0x1bd96cu: goto label_1bd96c;
        case 0x1bd970u: goto label_1bd970;
        case 0x1bd974u: goto label_1bd974;
        case 0x1bd978u: goto label_1bd978;
        case 0x1bd97cu: goto label_1bd97c;
        case 0x1bd980u: goto label_1bd980;
        case 0x1bd984u: goto label_1bd984;
        case 0x1bd988u: goto label_1bd988;
        case 0x1bd98cu: goto label_1bd98c;
        case 0x1bd990u: goto label_1bd990;
        case 0x1bd994u: goto label_1bd994;
        case 0x1bd998u: goto label_1bd998;
        case 0x1bd99cu: goto label_1bd99c;
        case 0x1bd9a0u: goto label_1bd9a0;
        case 0x1bd9a4u: goto label_1bd9a4;
        case 0x1bd9a8u: goto label_1bd9a8;
        case 0x1bd9acu: goto label_1bd9ac;
        case 0x1bd9b0u: goto label_1bd9b0;
        case 0x1bd9b4u: goto label_1bd9b4;
        case 0x1bd9b8u: goto label_1bd9b8;
        case 0x1bd9bcu: goto label_1bd9bc;
        case 0x1bd9c0u: goto label_1bd9c0;
        case 0x1bd9c4u: goto label_1bd9c4;
        case 0x1bd9c8u: goto label_1bd9c8;
        case 0x1bd9ccu: goto label_1bd9cc;
        case 0x1bd9d0u: goto label_1bd9d0;
        case 0x1bd9d4u: goto label_1bd9d4;
        case 0x1bd9d8u: goto label_1bd9d8;
        case 0x1bd9dcu: goto label_1bd9dc;
        case 0x1bd9e0u: goto label_1bd9e0;
        case 0x1bd9e4u: goto label_1bd9e4;
        case 0x1bd9e8u: goto label_1bd9e8;
        case 0x1bd9ecu: goto label_1bd9ec;
        case 0x1bd9f0u: goto label_1bd9f0;
        case 0x1bd9f4u: goto label_1bd9f4;
        case 0x1bd9f8u: goto label_1bd9f8;
        case 0x1bd9fcu: goto label_1bd9fc;
        case 0x1bda00u: goto label_1bda00;
        case 0x1bda04u: goto label_1bda04;
        case 0x1bda08u: goto label_1bda08;
        case 0x1bda0cu: goto label_1bda0c;
        case 0x1bda10u: goto label_1bda10;
        case 0x1bda14u: goto label_1bda14;
        case 0x1bda18u: goto label_1bda18;
        case 0x1bda1cu: goto label_1bda1c;
        case 0x1bda20u: goto label_1bda20;
        case 0x1bda24u: goto label_1bda24;
        case 0x1bda28u: goto label_1bda28;
        case 0x1bda2cu: goto label_1bda2c;
        case 0x1bda30u: goto label_1bda30;
        case 0x1bda34u: goto label_1bda34;
        case 0x1bda38u: goto label_1bda38;
        case 0x1bda3cu: goto label_1bda3c;
        case 0x1bda40u: goto label_1bda40;
        case 0x1bda44u: goto label_1bda44;
        case 0x1bda48u: goto label_1bda48;
        case 0x1bda4cu: goto label_1bda4c;
        case 0x1bda50u: goto label_1bda50;
        case 0x1bda54u: goto label_1bda54;
        case 0x1bda58u: goto label_1bda58;
        case 0x1bda5cu: goto label_1bda5c;
        case 0x1bda60u: goto label_1bda60;
        case 0x1bda64u: goto label_1bda64;
        case 0x1bda68u: goto label_1bda68;
        case 0x1bda6cu: goto label_1bda6c;
        case 0x1bda70u: goto label_1bda70;
        case 0x1bda74u: goto label_1bda74;
        case 0x1bda78u: goto label_1bda78;
        case 0x1bda7cu: goto label_1bda7c;
        case 0x1bda80u: goto label_1bda80;
        case 0x1bda84u: goto label_1bda84;
        case 0x1bda88u: goto label_1bda88;
        case 0x1bda8cu: goto label_1bda8c;
        case 0x1bda90u: goto label_1bda90;
        case 0x1bda94u: goto label_1bda94;
        case 0x1bda98u: goto label_1bda98;
        case 0x1bda9cu: goto label_1bda9c;
        case 0x1bdaa0u: goto label_1bdaa0;
        case 0x1bdaa4u: goto label_1bdaa4;
        case 0x1bdaa8u: goto label_1bdaa8;
        case 0x1bdaacu: goto label_1bdaac;
        case 0x1bdab0u: goto label_1bdab0;
        case 0x1bdab4u: goto label_1bdab4;
        case 0x1bdab8u: goto label_1bdab8;
        case 0x1bdabcu: goto label_1bdabc;
        case 0x1bdac0u: goto label_1bdac0;
        case 0x1bdac4u: goto label_1bdac4;
        case 0x1bdac8u: goto label_1bdac8;
        case 0x1bdaccu: goto label_1bdacc;
        case 0x1bdad0u: goto label_1bdad0;
        case 0x1bdad4u: goto label_1bdad4;
        case 0x1bdad8u: goto label_1bdad8;
        case 0x1bdadcu: goto label_1bdadc;
        case 0x1bdae0u: goto label_1bdae0;
        case 0x1bdae4u: goto label_1bdae4;
        case 0x1bdae8u: goto label_1bdae8;
        case 0x1bdaecu: goto label_1bdaec;
        case 0x1bdaf0u: goto label_1bdaf0;
        case 0x1bdaf4u: goto label_1bdaf4;
        case 0x1bdaf8u: goto label_1bdaf8;
        case 0x1bdafcu: goto label_1bdafc;
        case 0x1bdb00u: goto label_1bdb00;
        case 0x1bdb04u: goto label_1bdb04;
        case 0x1bdb08u: goto label_1bdb08;
        case 0x1bdb0cu: goto label_1bdb0c;
        case 0x1bdb10u: goto label_1bdb10;
        case 0x1bdb14u: goto label_1bdb14;
        case 0x1bdb18u: goto label_1bdb18;
        case 0x1bdb1cu: goto label_1bdb1c;
        case 0x1bdb20u: goto label_1bdb20;
        case 0x1bdb24u: goto label_1bdb24;
        case 0x1bdb28u: goto label_1bdb28;
        case 0x1bdb2cu: goto label_1bdb2c;
        case 0x1bdb30u: goto label_1bdb30;
        case 0x1bdb34u: goto label_1bdb34;
        case 0x1bdb38u: goto label_1bdb38;
        case 0x1bdb3cu: goto label_1bdb3c;
        case 0x1bdb40u: goto label_1bdb40;
        case 0x1bdb44u: goto label_1bdb44;
        case 0x1bdb48u: goto label_1bdb48;
        case 0x1bdb4cu: goto label_1bdb4c;
        case 0x1bdb50u: goto label_1bdb50;
        case 0x1bdb54u: goto label_1bdb54;
        case 0x1bdb58u: goto label_1bdb58;
        case 0x1bdb5cu: goto label_1bdb5c;
        case 0x1bdb60u: goto label_1bdb60;
        case 0x1bdb64u: goto label_1bdb64;
        case 0x1bdb68u: goto label_1bdb68;
        case 0x1bdb6cu: goto label_1bdb6c;
        case 0x1bdb70u: goto label_1bdb70;
        case 0x1bdb74u: goto label_1bdb74;
        case 0x1bdb78u: goto label_1bdb78;
        case 0x1bdb7cu: goto label_1bdb7c;
        case 0x1bdb80u: goto label_1bdb80;
        case 0x1bdb84u: goto label_1bdb84;
        case 0x1bdb88u: goto label_1bdb88;
        case 0x1bdb8cu: goto label_1bdb8c;
        case 0x1bdb90u: goto label_1bdb90;
        case 0x1bdb94u: goto label_1bdb94;
        case 0x1bdb98u: goto label_1bdb98;
        case 0x1bdb9cu: goto label_1bdb9c;
        case 0x1bdba0u: goto label_1bdba0;
        case 0x1bdba4u: goto label_1bdba4;
        case 0x1bdba8u: goto label_1bdba8;
        case 0x1bdbacu: goto label_1bdbac;
        case 0x1bdbb0u: goto label_1bdbb0;
        case 0x1bdbb4u: goto label_1bdbb4;
        case 0x1bdbb8u: goto label_1bdbb8;
        case 0x1bdbbcu: goto label_1bdbbc;
        case 0x1bdbc0u: goto label_1bdbc0;
        case 0x1bdbc4u: goto label_1bdbc4;
        case 0x1bdbc8u: goto label_1bdbc8;
        case 0x1bdbccu: goto label_1bdbcc;
        case 0x1bdbd0u: goto label_1bdbd0;
        case 0x1bdbd4u: goto label_1bdbd4;
        case 0x1bdbd8u: goto label_1bdbd8;
        case 0x1bdbdcu: goto label_1bdbdc;
        case 0x1bdbe0u: goto label_1bdbe0;
        case 0x1bdbe4u: goto label_1bdbe4;
        case 0x1bdbe8u: goto label_1bdbe8;
        case 0x1bdbecu: goto label_1bdbec;
        case 0x1bdbf0u: goto label_1bdbf0;
        case 0x1bdbf4u: goto label_1bdbf4;
        case 0x1bdbf8u: goto label_1bdbf8;
        case 0x1bdbfcu: goto label_1bdbfc;
        case 0x1bdc00u: goto label_1bdc00;
        case 0x1bdc04u: goto label_1bdc04;
        case 0x1bdc08u: goto label_1bdc08;
        case 0x1bdc0cu: goto label_1bdc0c;
        default: break;
    }

    ctx->pc = 0x1bd838u;

label_1bd838:
    // 0x1bd838: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1bd838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1bd83c:
    // 0x1bd83c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1bd83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1bd840:
    // 0x1bd840: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1bd840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1bd844:
    // 0x1bd844: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bd844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bd848:
    // 0x1bd848: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1bd848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1bd84c:
    // 0x1bd84c: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x1bd84cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1bd850:
    // 0x1bd850: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1bd850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1bd854:
    // 0x1bd854: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1bd854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1bd858:
    // 0x1bd858: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1bd858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1bd85c:
    // 0x1bd85c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1bd85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1bd860:
    // 0x1bd860: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1bd860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1bd864:
    // 0x1bd864: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1bd864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1bd868:
    // 0x1bd868: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bd868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1bd86c:
    // 0x1bd86c: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1bd86cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1bd870:
    // 0x1bd870: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1bd870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1bd874:
    // 0x1bd874: 0x144000d8  bnez        $v0, . + 4 + (0xD8 << 2)
label_1bd878:
    if (ctx->pc == 0x1BD878u) {
        ctx->pc = 0x1BD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD874u;
        // 0x1bd878: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD87Cu;
        goto label_1bd87c;
    }
    ctx->pc = 0x1BD874u;
    {
        const bool branch_taken_0x1bd874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD874u;
        // 0x1bd878: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd874) {
            ctx->pc = 0x1BDBD8u;
            goto label_1bdbd8;
        }
    }
    ctx->pc = 0x1BD87Cu;
label_1bd87c:
    // 0x1bd87c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd880:
    // 0x1bd880: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bd880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bd884:
    // 0x1bd884: 0xc460e85c  lwc1        $f0, -0x17A4($v1)
    ctx->pc = 0x1bd884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd888:
    // 0x1bd888: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bd888u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1bd88c:
    // 0x1bd88c: 0xc441e854  lwc1        $f1, -0x17AC($v0)
    ctx->pc = 0x1bd88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bd890:
    // 0x1bd890: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd894:
    // 0x1bd894: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bd894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bd898:
    // 0x1bd898: 0xc463e868  lwc1        $f3, -0x1798($v1)
    ctx->pc = 0x1bd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1bd89c:
    // 0x1bd89c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bd89cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bd8a0:
    // 0x1bd8a0: 0xc442e864  lwc1        $f2, -0x179C($v0)
    ctx->pc = 0x1bd8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bd8a4:
    // 0x1bd8a4: 0xc600e860  lwc1        $f0, -0x17A0($s0)
    ctx->pc = 0x1bd8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294961248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd8a8:
    // 0x1bd8a8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1bd8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1bd8ac:
    // 0x1bd8ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bd8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bd8b0:
    // 0x1bd8b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bd8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1bd8b4:
    // 0x1bd8b4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1bd8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bd8b8:
    // 0x1bd8b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bd8b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1bd8bc:
    // 0x1bd8bc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1bd8bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1bd8c0:
    // 0x1bd8c0: 0xc480e850  lwc1        $f0, -0x17B0($a0)
    ctx->pc = 0x1bd8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd8c4:
    // 0x1bd8c4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1bd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bd8c8:
    // 0x1bd8c8: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1bd8c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1bd8cc:
    // 0x1bd8cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bd8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd8d0:
    // 0x1bd8d0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1bd8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1bd8d4:
    // 0x1bd8d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bd8d8:
    // 0x1bd8d8: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1bd8d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1bd8dc:
    // 0x1bd8dc: 0x26a60050  addiu       $a2, $s5, 0x50
    ctx->pc = 0x1bd8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
label_1bd8e0:
    // 0x1bd8e0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1bd8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1bd8e4:
    // 0x1bd8e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bd8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd8e8:
    // 0x1bd8e8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1bd8e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1bd8ec:
    // 0x1bd8ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1bd8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1bd8f0:
    // 0x1bd8f0: 0xc0785bc  jal         func_1E16F0
label_1bd8f4:
    if (ctx->pc == 0x1BD8F4u) {
        ctx->pc = 0x1BD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD8F0u;
        // 0x1bd8f4: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD8F8u;
        goto label_1bd8f8;
    }
    ctx->pc = 0x1BD8F0u;
    SET_GPR_U32(ctx, 31, 0x1BD8F8u);
    ctx->pc = 0x1BD8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD8F0u;
    // 0x1bd8f4: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E16F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E16F0u, 0x1BD8F0u, 0x1BD8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD8F8u;
label_1bd8f8:
    // 0x1bd8f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bd8fc:
    // 0x1bd8fc: 0xc600e860  lwc1        $f0, -0x17A0($s0)
    ctx->pc = 0x1bd8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294961248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd900:
    // 0x1bd900: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1bd900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1bd904:
    // 0x1bd904: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x1bd904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1bd908:
    // 0x1bd908: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x1bd908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_1bd90c:
    // 0x1bd90c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1bd90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1bd910:
    // 0x1bd910: 0x8c760004  lw          $s6, 0x4($v1)
    ctx->pc = 0x1bd910u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1bd914:
    // 0x1bd914: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bd914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bd918:
    // 0x1bd918: 0x12c200af  beq         $s6, $v0, . + 4 + (0xAF << 2)
label_1bd91c:
    if (ctx->pc == 0x1BD91Cu) {
        ctx->pc = 0x1BD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD918u;
        // 0x1bd91c: 0x249714d4  addiu       $s7, $a0, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD920u;
        goto label_1bd920;
    }
    ctx->pc = 0x1BD918u;
    {
        const bool branch_taken_0x1bd918 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD918u;
        // 0x1bd91c: 0x249714d4  addiu       $s7, $a0, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd918) {
            ctx->pc = 0x1BDBD8u;
            goto label_1bdbd8;
        }
    }
    ctx->pc = 0x1BD920u;
label_1bd920:
    // 0x1bd920: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1bd920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1bd924:
    // 0x1bd924: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1bd924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1bd928:
    // 0x1bd928: 0xafb1006c  sw          $s1, 0x6C($sp)
    ctx->pc = 0x1bd928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
label_1bd92c:
    // 0x1bd92c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1bd92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1bd930:
    // 0x1bd930: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1bd930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_1bd934:
    // 0x1bd934: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x1bd934u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1bd938:
    // 0x1bd938: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1bd938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bd93c:
    // 0x1bd93c: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
label_1bd940:
    if (ctx->pc == 0x1BD940u) {
        ctx->pc = 0x1BD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD93Cu;
        // 0x1bd940: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD944u;
        goto label_1bd944;
    }
    ctx->pc = 0x1BD93Cu;
    {
        const bool branch_taken_0x1bd93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD93Cu;
        // 0x1bd940: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd93c) {
            ctx->pc = 0x1BDBC8u;
            goto label_1bdbc8;
        }
    }
    ctx->pc = 0x1BD944u;
label_1bd944:
    // 0x1bd944: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bd944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bd948:
    // 0x1bd948: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1bd948u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1bd94c:
    // 0x1bd94c: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1bd94cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1bd950:
    // 0x1bd950: 0x24c54bf0  addiu       $a1, $a2, 0x4BF0
    ctx->pc = 0x1bd950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 19440));
label_1bd954:
    // 0x1bd954: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1bd954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1bd958:
    // 0x1bd958: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x1bd958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_1bd95c:
    // 0x1bd95c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1bd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1bd960:
    // 0x1bd960: 0x24484c08  addiu       $t0, $v0, 0x4C08
    ctx->pc = 0x1bd960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19464));
label_1bd964:
    // 0x1bd964: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1bd964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bd968:
    // 0x1bd968: 0x240902d9  addiu       $t1, $zero, 0x2D9
    ctx->pc = 0x1bd968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 729));
label_1bd96c:
    // 0x1bd96c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1bd96cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1bd970:
    // 0x1bd970: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bd970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd974:
    // 0x1bd974: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1bd974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1bd978:
    // 0x1bd978: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bd978u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd97c:
    // 0x1bd97c: 0x40f809  jalr        $v0
label_1bd980:
    if (ctx->pc == 0x1BD980u) {
        ctx->pc = 0x1BD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD97Cu;
        // 0x1bd980: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD984u;
        goto label_1bd984;
    }
    ctx->pc = 0x1BD97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD984u);
        ctx->pc = 0x1BD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD97Cu;
        // 0x1bd980: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD97Cu, 0x1BD984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BD984u;
label_1bd984:
    // 0x1bd984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bd984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd988:
    // 0x1bd988: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1bd98c:
    if (ctx->pc == 0x1BD98Cu) {
        ctx->pc = 0x1BD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD988u;
        // 0x1bd98c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD990u;
        goto label_1bd990;
    }
    ctx->pc = 0x1BD988u;
    {
        const bool branch_taken_0x1bd988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD988u;
        // 0x1bd98c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd988) {
            ctx->pc = 0x1BD9A0u;
            goto label_1bd9a0;
        }
    }
    ctx->pc = 0x1BD990u;
label_1bd990:
    // 0x1bd990: 0xc0742aa  jal         func_1D0AA8
label_1bd994:
    if (ctx->pc == 0x1BD994u) {
        ctx->pc = 0x1BD998u;
        goto label_1bd998;
    }
    ctx->pc = 0x1BD990u;
    SET_GPR_U32(ctx, 31, 0x1BD998u);
    ctx->pc = 0x1D0AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0AA8u, 0x1BD990u, 0x1BD998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD998u;
label_1bd998:
    // 0x1bd998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bd998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd99c:
    // 0x1bd99c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bd9a0:
    // 0x1bd9a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd9a4:
    // 0x1bd9a4: 0xc461e85c  lwc1        $f1, -0x17A4($v1)
    ctx->pc = 0x1bd9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bd9a8:
    // 0x1bd9a8: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1bd9a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bd9ac:
    // 0x1bd9ac: 0xc440e858  lwc1        $f0, -0x17A8($v0)
    ctx->pc = 0x1bd9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd9b0:
    // 0x1bd9b0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd9b4:
    // 0x1bd9b4: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x1bd9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_1bd9b8:
    // 0x1bd9b8: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x1bd9b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
label_1bd9bc:
    // 0x1bd9bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1bd9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1bd9c0:
    // 0x1bd9c0: 0x3c130014  lui         $s3, 0x14
    ctx->pc = 0x1bd9c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)20 << 16));
label_1bd9c4:
    // 0x1bd9c4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1bd9c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1bd9c8:
    // 0x1bd9c8: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x1bd9c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_1bd9cc:
    // 0x1bd9cc: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x1bd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_1bd9d0:
    // 0x1bd9d0: 0x36730003  ori         $s3, $s3, 0x3
    ctx->pc = 0x1bd9d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)3);
label_1bd9d4:
    // 0x1bd9d4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1bd9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1bd9d8:
    // 0x1bd9d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bd9dc:
    if (ctx->pc == 0x1BD9DCu) {
        ctx->pc = 0x1BD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9D8u;
        // 0x1bd9dc: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD9E0u;
        goto label_1bd9e0;
    }
    ctx->pc = 0x1BD9D8u;
    {
        const bool branch_taken_0x1bd9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9D8u;
        // 0x1bd9dc: 0xe694000c  swc1        $f20, 0xC($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9d8) {
            ctx->pc = 0x1BD9F0u;
            goto label_1bd9f0;
        }
    }
    ctx->pc = 0x1BD9E0u;
label_1bd9e0:
    // 0x1bd9e0: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x1bd9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
label_1bd9e4:
    // 0x1bd9e4: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x1bd9e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
label_1bd9e8:
    // 0x1bd9e8: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x1bd9e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_1bd9ec:
    // 0x1bd9ec: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x1bd9ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
label_1bd9f0:
    // 0x1bd9f0: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x1bd9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1bd9f4:
    // 0x1bd9f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bd9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bd9f8:
    // 0x1bd9f8: 0xc06f0bc  jal         func_1BC2F0
label_1bd9fc:
    if (ctx->pc == 0x1BD9FCu) {
        ctx->pc = 0x1BD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9F8u;
        // 0x1bd9fc: 0x241e0084  addiu       $fp, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDA00u;
        goto label_1bda00;
    }
    ctx->pc = 0x1BD9F8u;
    SET_GPR_U32(ctx, 31, 0x1BDA00u);
    ctx->pc = 0x1BD9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD9F8u;
    // 0x1bd9fc: 0x241e0084  addiu       $fp, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC2F0u, 0x1BD9F8u, 0x1BDA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDA00u;
label_1bda00:
    // 0x1bda00: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1bda00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bda04:
    // 0x1bda04: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1bda04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bda08:
    // 0x1bda08: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x1bda08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_1bda0c:
    // 0x1bda0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1bda0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bda10:
    // 0x1bda10: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1bda10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1bda14:
    // 0x1bda14: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1bda14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bda18:
    // 0x1bda18: 0x8eab0090  lw          $t3, 0x90($s5)
    ctx->pc = 0x1bda18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_1bda1c:
    // 0x1bda1c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1bda1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bda20:
    // 0x1bda20: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1bda24:
    // 0x1bda24: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x1bda24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_1bda28:
    // 0x1bda28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1bda28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1bda2c:
    // 0x1bda2c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1bda2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1bda30:
    // 0x1bda30: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bda30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1bda34:
    // 0x1bda34: 0x8fa80064  lw          $t0, 0x64($sp)
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1bda38:
    // 0x1bda38: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1bda38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1bda3c:
    // 0x1bda3c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1bda3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bda40:
    // 0x1bda40: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bda40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bda44:
    // 0x1bda44: 0xc4cce870  lwc1        $f12, -0x1790($a2)
    ctx->pc = 0x1bda44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294961264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bda48:
    // 0x1bda48: 0xc46de874  lwc1        $f13, -0x178C($v1)
    ctx->pc = 0x1bda48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bda4c:
    // 0x1bda4c: 0x40f809  jalr        $v0
label_1bda50:
    if (ctx->pc == 0x1BDA50u) {
        ctx->pc = 0x1BDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA4Cu;
        // 0x1bda50: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDA54u;
        goto label_1bda54;
    }
    ctx->pc = 0x1BDA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDA54u);
        ctx->pc = 0x1BDA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA4Cu;
        // 0x1bda50: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDA4Cu, 0x1BDA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDA54u;
label_1bda54:
    // 0x1bda54: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1bda54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1bda58:
    // 0x1bda58: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1bda58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bda5c:
    // 0x1bda5c: 0xbe1818  mult        $v1, $a1, $fp
    ctx->pc = 0x1bda5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1bda60:
    // 0x1bda60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1bda60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1bda64:
    // 0x1bda64: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1bda64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_1bda68:
    // 0x1bda68: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x1bda68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1bda6c:
    // 0x1bda6c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x1bda6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_1bda70:
    // 0x1bda70: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1bda70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1bda74:
    // 0x1bda74: 0x60f809  jalr        $v1
label_1bda78:
    if (ctx->pc == 0x1BDA78u) {
        ctx->pc = 0x1BDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA74u;
        // 0x1bda78: 0x24a50049  addiu       $a1, $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 73));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDA7Cu;
        goto label_1bda7c;
    }
    ctx->pc = 0x1BDA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDA7Cu);
        ctx->pc = 0x1BDA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA74u;
        // 0x1bda78: 0x24a50049  addiu       $a1, $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 73));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDA74u, 0x1BDA7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDA7Cu;
label_1bda7c:
    // 0x1bda7c: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1bda7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bda80:
    // 0x1bda80: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1bda80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bda84:
    // 0x1bda84: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bda84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bda88:
    // 0x1bda88: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1bda88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bda8c:
    // 0x1bda8c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1bda90:
    // 0x1bda90: 0x860200d0  lh          $v0, 0xD0($s0)
    ctx->pc = 0x1bda90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
label_1bda94:
    // 0x1bda94: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1bda94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_1bda98:
    // 0x1bda98: 0xc107d0a  jal         func_41F428
label_1bda9c:
    if (ctx->pc == 0x1BDA9Cu) {
        ctx->pc = 0x1BDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA98u;
        // 0x1bda9c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDAA0u;
        goto label_1bdaa0;
    }
    ctx->pc = 0x1BDA98u;
    SET_GPR_U32(ctx, 31, 0x1BDAA0u);
    ctx->pc = 0x1BDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA98u;
    // 0x1bda9c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F428u, 0x1BDA98u, 0x1BDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAA0u;
label_1bdaa0:
    // 0x1bdaa0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1bdaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bdaa4:
    // 0x1bdaa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bdaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bdaa8:
    // 0x1bdaa8: 0x60f809  jalr        $v1
label_1bdaac:
    if (ctx->pc == 0x1BDAACu) {
        ctx->pc = 0x1BDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDAA8u;
        // 0x1bdaac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDAB0u;
        goto label_1bdab0;
    }
    ctx->pc = 0x1BDAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDAB0u);
        ctx->pc = 0x1BDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDAA8u;
        // 0x1bdaac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDAA8u, 0x1BDAB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDAB0u;
label_1bdab0:
    // 0x1bdab0: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x1bdab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bdab4:
    // 0x1bdab4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1bdab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1bdab8:
    // 0x1bdab8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1bdab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1bdabc:
    // 0x1bdabc: 0xc107ca6  jal         func_41F298
label_1bdac0:
    if (ctx->pc == 0x1BDAC0u) {
        ctx->pc = 0x1BDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDABCu;
        // 0x1bdac0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDAC4u;
        goto label_1bdac4;
    }
    ctx->pc = 0x1BDABCu;
    SET_GPR_U32(ctx, 31, 0x1BDAC4u);
    ctx->pc = 0x1BDAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDABCu;
    // 0x1bdac0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F298u, 0x1BDABCu, 0x1BDAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAC4u;
label_1bdac4:
    // 0x1bdac4: 0xc10ce9a  jal         func_433A68
label_1bdac8:
    if (ctx->pc == 0x1BDAC8u) {
        ctx->pc = 0x1BDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDAC4u;
        // 0x1bdac8: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDACCu;
        goto label_1bdacc;
    }
    ctx->pc = 0x1BDAC4u;
    SET_GPR_U32(ctx, 31, 0x1BDACCu);
    ctx->pc = 0x1BDAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDAC4u;
    // 0x1bdac8: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A68u, 0x1BDAC4u, 0x1BDACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDACCu;
label_1bdacc:
    // 0x1bdacc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1bdad0:
    if (ctx->pc == 0x1BDAD0u) {
        ctx->pc = 0x1BDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDACCu;
        // 0x1bdad0: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDAD4u;
        goto label_1bdad4;
    }
    ctx->pc = 0x1BDACCu;
    {
        const bool branch_taken_0x1bdacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdacc) {
            ctx->pc = 0x1BDAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDACCu;
            // 0x1bdad0: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDAF0u;
            goto label_1bdaf0;
        }
    }
    ctx->pc = 0x1BDAD4u;
label_1bdad4:
    // 0x1bdad4: 0x2402006a  addiu       $v0, $zero, 0x6A
    ctx->pc = 0x1bdad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_1bdad8:
    // 0x1bdad8: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1bdad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1bdadc:
    // 0x1bdadc: 0xa3a20060  sb          $v0, 0x60($sp)
    ctx->pc = 0x1bdadcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
label_1bdae0:
    // 0x1bdae0: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x1bdae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_1bdae4:
    // 0x1bdae4: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x1bdae4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
label_1bdae8:
    // 0x1bdae8: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x1bdae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
label_1bdaec:
    // 0x1bdaec: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1bdaecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bdaf0:
    // 0x1bdaf0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1bdaf4:
    // 0x1bdaf4: 0x2445d260  addiu       $a1, $v0, -0x2DA0
    ctx->pc = 0x1bdaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955616));
label_1bdaf8:
    // 0x1bdaf8: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1bdaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1bdafc:
    // 0x1bdafc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1bdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1bdb00:
    // 0x1bdb00: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x1bdb00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_1bdb04:
    // 0x1bdb04: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x1bdb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_1bdb08:
    // 0x1bdb08: 0x60f809  jalr        $v1
label_1bdb0c:
    if (ctx->pc == 0x1BDB0Cu) {
        ctx->pc = 0x1BDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB08u;
        // 0x1bdb0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDB10u;
        goto label_1bdb10;
    }
    ctx->pc = 0x1BDB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDB10u);
        ctx->pc = 0x1BDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB08u;
        // 0x1bdb0c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDB08u, 0x1BDB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDB10u;
label_1bdb10:
    // 0x1bdb10: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bdb14:
    // 0x1bdb14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bdb18:
    // 0x1bdb18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1bdb1c:
    // 0x1bdb1c: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x1bdb1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_1bdb20:
    // 0x1bdb20: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x1bdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1bdb24:
    // 0x1bdb24: 0x60f809  jalr        $v1
label_1bdb28:
    if (ctx->pc == 0x1BDB28u) {
        ctx->pc = 0x1BDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB24u;
        // 0x1bdb28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDB2Cu;
        goto label_1bdb2c;
    }
    ctx->pc = 0x1BDB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BDB2Cu);
        ctx->pc = 0x1BDB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB24u;
        // 0x1bdb28: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDB24u, 0x1BDB2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BDB2Cu;
label_1bdb2c:
    // 0x1bdb2c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bdb30:
    // 0x1bdb30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1bdb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bdb34:
    // 0x1bdb34: 0xc440e86c  lwc1        $f0, -0x1794($v0)
    ctx->pc = 0x1bdb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bdb38:
    // 0x1bdb38: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1bdb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1bdb3c:
    // 0x1bdb3c: 0xc06f5d0  jal         func_1BD740
label_1bdb40:
    if (ctx->pc == 0x1BDB40u) {
        ctx->pc = 0x1BDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB3Cu;
        // 0x1bdb40: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDB44u;
        goto label_1bdb44;
    }
    ctx->pc = 0x1BDB3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDB44u);
    ctx->pc = 0x1BDB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDB3Cu;
    // 0x1bdb40: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD740u, 0x1BDB3Cu, 0x1BDB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDB44u;
label_1bdb44:
    // 0x1bdb44: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1bdb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1bdb48:
    // 0x1bdb48: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bdb48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1bdb4c:
    // 0x1bdb4c: 0x8ea9008c  lw          $t1, 0x8C($s5)
    ctx->pc = 0x1bdb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_1bdb50:
    // 0x1bdb50: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x1bdb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
label_1bdb54:
    // 0x1bdb54: 0xbe1818  mult        $v1, $a1, $fp
    ctx->pc = 0x1bdb54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1bdb58:
    // 0x1bdb58: 0xc4cce870  lwc1        $f12, -0x1790($a2)
    ctx->pc = 0x1bdb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294961264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bdb5c:
    // 0x1bdb5c: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x1bdb5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
label_1bdb60:
    // 0x1bdb60: 0x3484000c  ori         $a0, $a0, 0xC
    ctx->pc = 0x1bdb60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
label_1bdb64:
    // 0x1bdb64: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bdb64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1bdb68:
    // 0x1bdb68: 0x34e7000c  ori         $a3, $a3, 0xC
    ctx->pc = 0x1bdb68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12);
label_1bdb6c:
    // 0x1bdb6c: 0xc4cde874  lwc1        $f13, -0x178C($a2)
    ctx->pc = 0x1bdb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294961268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1bdb70:
    // 0x1bdb70: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1bdb70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bdb74:
    // 0x1bdb74: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x1bdb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1bdb78:
    // 0x1bdb78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1bdb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bdb7c:
    // 0x1bdb7c: 0x8ca80080  lw          $t0, 0x80($a1)
    ctx->pc = 0x1bdb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_1bdb80:
    // 0x1bdb80: 0x8ea3009c  lw          $v1, 0x9C($s5)
    ctx->pc = 0x1bdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_1bdb84:
    // 0x1bdb84: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1bdb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bdb88:
    // 0x1bdb88: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x1bdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
label_1bdb8c:
    // 0x1bdb8c: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1bdb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_1bdb90:
    // 0x1bdb90: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x1bdb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1bdb94:
    // 0x1bdb94: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x1bdb94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_1bdb98:
    // 0x1bdb98: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1bdb98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bdb9c:
    // 0x1bdb9c: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x1bdb9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1bdba0:
    // 0x1bdba0: 0xc074c7a  jal         func_1D31E8
label_1bdba4:
    if (ctx->pc == 0x1BDBA4u) {
        ctx->pc = 0x1BDBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBA0u;
        // 0x1bdba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDBA8u;
        goto label_1bdba8;
    }
    ctx->pc = 0x1BDBA0u;
    SET_GPR_U32(ctx, 31, 0x1BDBA8u);
    ctx->pc = 0x1BDBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBA0u;
    // 0x1bdba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D31E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D31E8u, 0x1BDBA0u, 0x1BDBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBA8u;
label_1bdba8:
    // 0x1bdba8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1bdba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bdbac:
    // 0x1bdbac: 0xc07860c  jal         func_1E1830
label_1bdbb0:
    if (ctx->pc == 0x1BDBB0u) {
        ctx->pc = 0x1BDBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBACu;
        // 0x1bdbb0: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDBB4u;
        goto label_1bdbb4;
    }
    ctx->pc = 0x1BDBACu;
    SET_GPR_U32(ctx, 31, 0x1BDBB4u);
    ctx->pc = 0x1BDBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBACu;
    // 0x1bdbb0: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1830u, 0x1BDBACu, 0x1BDBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBB4u;
label_1bdbb4:
    // 0x1bdbb4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1bdbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bdbb8:
    // 0x1bdbb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bdbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bdbbc:
    // 0x1bdbbc: 0xc07868e  jal         func_1E1A38
label_1bdbc0:
    if (ctx->pc == 0x1BDBC0u) {
        ctx->pc = 0x1BDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBBCu;
        // 0x1bdbc0: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDBC4u;
        goto label_1bdbc4;
    }
    ctx->pc = 0x1BDBBCu;
    SET_GPR_U32(ctx, 31, 0x1BDBC4u);
    ctx->pc = 0x1BDBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBBCu;
    // 0x1bdbc0: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A38u, 0x1BDBBCu, 0x1BDBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBC4u;
label_1bdbc4:
    // 0x1bdbc4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1bdbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1bdbc8:
    // 0x1bdbc8: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_1bdbcc:
    // 0x1bdbcc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1bdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1bdbd0:
    // 0x1bdbd0: 0x56c2ff59  bnel        $s6, $v0, . + 4 + (-0xA7 << 2)
label_1bdbd4:
    if (ctx->pc == 0x1BDBD4u) {
        ctx->pc = 0x1BDBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBD0u;
        // 0x1bdbd4: 0x8ed20000  lw          $s2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDBD8u;
        goto label_1bdbd8;
    }
    ctx->pc = 0x1BDBD0u;
    {
        const bool branch_taken_0x1bdbd0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdbd0) {
            ctx->pc = 0x1BDBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDBD0u;
            // 0x1bdbd4: 0x8ed20000  lw          $s2, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd938;
        }
    }
    ctx->pc = 0x1BDBD8u;
label_1bdbd8:
    // 0x1bdbd8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1bdbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1bdbdc:
    // 0x1bdbdc: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1bdbdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1bdbe0:
    // 0x1bdbe0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1bdbe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1bdbe4:
    // 0x1bdbe4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1bdbe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1bdbe8:
    // 0x1bdbe8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1bdbe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1bdbec:
    // 0x1bdbec: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1bdbecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1bdbf0:
    // 0x1bdbf0: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1bdbf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bdbf4:
    // 0x1bdbf4: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1bdbf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bdbf8:
    // 0x1bdbf8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1bdbf8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bdbfc:
    // 0x1bdbfc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bdbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1bdc00:
    // 0x1bdc00: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1bdc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bdc04:
    // 0x1bdc04: 0x3e00008  jr          $ra
label_1bdc08:
    if (ctx->pc == 0x1BDC08u) {
        ctx->pc = 0x1BDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC04u;
        // 0x1bdc08: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BDC0Cu;
        goto label_1bdc0c;
    }
    ctx->pc = 0x1BDC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC04u;
        // 0x1bdc08: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDC0Cu;
label_1bdc0c:
    // 0x1bdc0c: 0x0  nop
    ctx->pc = 0x1bdc0cu;
    // NOP
    ctx->pc = 0x1bdc10u;
}
