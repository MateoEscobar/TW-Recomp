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

// Function: sub_004CC008
// Address: 0x4cc008 - 0x4cc370
void sub_004CC008_0x4cc008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC008_0x4cc008");
#endif

    switch (ctx->pc) {
        case 0x4cc008u: goto label_4cc008;
        case 0x4cc00cu: goto label_4cc00c;
        case 0x4cc010u: goto label_4cc010;
        case 0x4cc014u: goto label_4cc014;
        case 0x4cc018u: goto label_4cc018;
        case 0x4cc01cu: goto label_4cc01c;
        case 0x4cc020u: goto label_4cc020;
        case 0x4cc024u: goto label_4cc024;
        case 0x4cc028u: goto label_4cc028;
        case 0x4cc02cu: goto label_4cc02c;
        case 0x4cc030u: goto label_4cc030;
        case 0x4cc034u: goto label_4cc034;
        case 0x4cc038u: goto label_4cc038;
        case 0x4cc03cu: goto label_4cc03c;
        case 0x4cc040u: goto label_4cc040;
        case 0x4cc044u: goto label_4cc044;
        case 0x4cc048u: goto label_4cc048;
        case 0x4cc04cu: goto label_4cc04c;
        case 0x4cc050u: goto label_4cc050;
        case 0x4cc054u: goto label_4cc054;
        case 0x4cc058u: goto label_4cc058;
        case 0x4cc05cu: goto label_4cc05c;
        case 0x4cc060u: goto label_4cc060;
        case 0x4cc064u: goto label_4cc064;
        case 0x4cc068u: goto label_4cc068;
        case 0x4cc06cu: goto label_4cc06c;
        case 0x4cc070u: goto label_4cc070;
        case 0x4cc074u: goto label_4cc074;
        case 0x4cc078u: goto label_4cc078;
        case 0x4cc07cu: goto label_4cc07c;
        case 0x4cc080u: goto label_4cc080;
        case 0x4cc084u: goto label_4cc084;
        case 0x4cc088u: goto label_4cc088;
        case 0x4cc08cu: goto label_4cc08c;
        case 0x4cc090u: goto label_4cc090;
        case 0x4cc094u: goto label_4cc094;
        case 0x4cc098u: goto label_4cc098;
        case 0x4cc09cu: goto label_4cc09c;
        case 0x4cc0a0u: goto label_4cc0a0;
        case 0x4cc0a4u: goto label_4cc0a4;
        case 0x4cc0a8u: goto label_4cc0a8;
        case 0x4cc0acu: goto label_4cc0ac;
        case 0x4cc0b0u: goto label_4cc0b0;
        case 0x4cc0b4u: goto label_4cc0b4;
        case 0x4cc0b8u: goto label_4cc0b8;
        case 0x4cc0bcu: goto label_4cc0bc;
        case 0x4cc0c0u: goto label_4cc0c0;
        case 0x4cc0c4u: goto label_4cc0c4;
        case 0x4cc0c8u: goto label_4cc0c8;
        case 0x4cc0ccu: goto label_4cc0cc;
        case 0x4cc0d0u: goto label_4cc0d0;
        case 0x4cc0d4u: goto label_4cc0d4;
        case 0x4cc0d8u: goto label_4cc0d8;
        case 0x4cc0dcu: goto label_4cc0dc;
        case 0x4cc0e0u: goto label_4cc0e0;
        case 0x4cc0e4u: goto label_4cc0e4;
        case 0x4cc0e8u: goto label_4cc0e8;
        case 0x4cc0ecu: goto label_4cc0ec;
        case 0x4cc0f0u: goto label_4cc0f0;
        case 0x4cc0f4u: goto label_4cc0f4;
        case 0x4cc0f8u: goto label_4cc0f8;
        case 0x4cc0fcu: goto label_4cc0fc;
        case 0x4cc100u: goto label_4cc100;
        case 0x4cc104u: goto label_4cc104;
        case 0x4cc108u: goto label_4cc108;
        case 0x4cc10cu: goto label_4cc10c;
        case 0x4cc110u: goto label_4cc110;
        case 0x4cc114u: goto label_4cc114;
        case 0x4cc118u: goto label_4cc118;
        case 0x4cc11cu: goto label_4cc11c;
        case 0x4cc120u: goto label_4cc120;
        case 0x4cc124u: goto label_4cc124;
        case 0x4cc128u: goto label_4cc128;
        case 0x4cc12cu: goto label_4cc12c;
        case 0x4cc130u: goto label_4cc130;
        case 0x4cc134u: goto label_4cc134;
        case 0x4cc138u: goto label_4cc138;
        case 0x4cc13cu: goto label_4cc13c;
        case 0x4cc140u: goto label_4cc140;
        case 0x4cc144u: goto label_4cc144;
        case 0x4cc148u: goto label_4cc148;
        case 0x4cc14cu: goto label_4cc14c;
        case 0x4cc150u: goto label_4cc150;
        case 0x4cc154u: goto label_4cc154;
        case 0x4cc158u: goto label_4cc158;
        case 0x4cc15cu: goto label_4cc15c;
        case 0x4cc160u: goto label_4cc160;
        case 0x4cc164u: goto label_4cc164;
        case 0x4cc168u: goto label_4cc168;
        case 0x4cc16cu: goto label_4cc16c;
        case 0x4cc170u: goto label_4cc170;
        case 0x4cc174u: goto label_4cc174;
        case 0x4cc178u: goto label_4cc178;
        case 0x4cc17cu: goto label_4cc17c;
        case 0x4cc180u: goto label_4cc180;
        case 0x4cc184u: goto label_4cc184;
        case 0x4cc188u: goto label_4cc188;
        case 0x4cc18cu: goto label_4cc18c;
        case 0x4cc190u: goto label_4cc190;
        case 0x4cc194u: goto label_4cc194;
        case 0x4cc198u: goto label_4cc198;
        case 0x4cc19cu: goto label_4cc19c;
        case 0x4cc1a0u: goto label_4cc1a0;
        case 0x4cc1a4u: goto label_4cc1a4;
        case 0x4cc1a8u: goto label_4cc1a8;
        case 0x4cc1acu: goto label_4cc1ac;
        case 0x4cc1b0u: goto label_4cc1b0;
        case 0x4cc1b4u: goto label_4cc1b4;
        case 0x4cc1b8u: goto label_4cc1b8;
        case 0x4cc1bcu: goto label_4cc1bc;
        case 0x4cc1c0u: goto label_4cc1c0;
        case 0x4cc1c4u: goto label_4cc1c4;
        case 0x4cc1c8u: goto label_4cc1c8;
        case 0x4cc1ccu: goto label_4cc1cc;
        case 0x4cc1d0u: goto label_4cc1d0;
        case 0x4cc1d4u: goto label_4cc1d4;
        case 0x4cc1d8u: goto label_4cc1d8;
        case 0x4cc1dcu: goto label_4cc1dc;
        case 0x4cc1e0u: goto label_4cc1e0;
        case 0x4cc1e4u: goto label_4cc1e4;
        case 0x4cc1e8u: goto label_4cc1e8;
        case 0x4cc1ecu: goto label_4cc1ec;
        case 0x4cc1f0u: goto label_4cc1f0;
        case 0x4cc1f4u: goto label_4cc1f4;
        case 0x4cc1f8u: goto label_4cc1f8;
        case 0x4cc1fcu: goto label_4cc1fc;
        case 0x4cc200u: goto label_4cc200;
        case 0x4cc204u: goto label_4cc204;
        case 0x4cc208u: goto label_4cc208;
        case 0x4cc20cu: goto label_4cc20c;
        case 0x4cc210u: goto label_4cc210;
        case 0x4cc214u: goto label_4cc214;
        case 0x4cc218u: goto label_4cc218;
        case 0x4cc21cu: goto label_4cc21c;
        case 0x4cc220u: goto label_4cc220;
        case 0x4cc224u: goto label_4cc224;
        case 0x4cc228u: goto label_4cc228;
        case 0x4cc22cu: goto label_4cc22c;
        case 0x4cc230u: goto label_4cc230;
        case 0x4cc234u: goto label_4cc234;
        case 0x4cc238u: goto label_4cc238;
        case 0x4cc23cu: goto label_4cc23c;
        case 0x4cc240u: goto label_4cc240;
        case 0x4cc244u: goto label_4cc244;
        case 0x4cc248u: goto label_4cc248;
        case 0x4cc24cu: goto label_4cc24c;
        case 0x4cc250u: goto label_4cc250;
        case 0x4cc254u: goto label_4cc254;
        case 0x4cc258u: goto label_4cc258;
        case 0x4cc25cu: goto label_4cc25c;
        case 0x4cc260u: goto label_4cc260;
        case 0x4cc264u: goto label_4cc264;
        case 0x4cc268u: goto label_4cc268;
        case 0x4cc26cu: goto label_4cc26c;
        case 0x4cc270u: goto label_4cc270;
        case 0x4cc274u: goto label_4cc274;
        case 0x4cc278u: goto label_4cc278;
        case 0x4cc27cu: goto label_4cc27c;
        case 0x4cc280u: goto label_4cc280;
        case 0x4cc284u: goto label_4cc284;
        case 0x4cc288u: goto label_4cc288;
        case 0x4cc28cu: goto label_4cc28c;
        case 0x4cc290u: goto label_4cc290;
        case 0x4cc294u: goto label_4cc294;
        case 0x4cc298u: goto label_4cc298;
        case 0x4cc29cu: goto label_4cc29c;
        case 0x4cc2a0u: goto label_4cc2a0;
        case 0x4cc2a4u: goto label_4cc2a4;
        case 0x4cc2a8u: goto label_4cc2a8;
        case 0x4cc2acu: goto label_4cc2ac;
        case 0x4cc2b0u: goto label_4cc2b0;
        case 0x4cc2b4u: goto label_4cc2b4;
        case 0x4cc2b8u: goto label_4cc2b8;
        case 0x4cc2bcu: goto label_4cc2bc;
        case 0x4cc2c0u: goto label_4cc2c0;
        case 0x4cc2c4u: goto label_4cc2c4;
        case 0x4cc2c8u: goto label_4cc2c8;
        case 0x4cc2ccu: goto label_4cc2cc;
        case 0x4cc2d0u: goto label_4cc2d0;
        case 0x4cc2d4u: goto label_4cc2d4;
        case 0x4cc2d8u: goto label_4cc2d8;
        case 0x4cc2dcu: goto label_4cc2dc;
        case 0x4cc2e0u: goto label_4cc2e0;
        case 0x4cc2e4u: goto label_4cc2e4;
        case 0x4cc2e8u: goto label_4cc2e8;
        case 0x4cc2ecu: goto label_4cc2ec;
        case 0x4cc2f0u: goto label_4cc2f0;
        case 0x4cc2f4u: goto label_4cc2f4;
        case 0x4cc2f8u: goto label_4cc2f8;
        case 0x4cc2fcu: goto label_4cc2fc;
        case 0x4cc300u: goto label_4cc300;
        case 0x4cc304u: goto label_4cc304;
        case 0x4cc308u: goto label_4cc308;
        case 0x4cc30cu: goto label_4cc30c;
        case 0x4cc310u: goto label_4cc310;
        case 0x4cc314u: goto label_4cc314;
        case 0x4cc318u: goto label_4cc318;
        case 0x4cc31cu: goto label_4cc31c;
        case 0x4cc320u: goto label_4cc320;
        case 0x4cc324u: goto label_4cc324;
        case 0x4cc328u: goto label_4cc328;
        case 0x4cc32cu: goto label_4cc32c;
        case 0x4cc330u: goto label_4cc330;
        case 0x4cc334u: goto label_4cc334;
        case 0x4cc338u: goto label_4cc338;
        case 0x4cc33cu: goto label_4cc33c;
        case 0x4cc340u: goto label_4cc340;
        case 0x4cc344u: goto label_4cc344;
        case 0x4cc348u: goto label_4cc348;
        case 0x4cc34cu: goto label_4cc34c;
        case 0x4cc350u: goto label_4cc350;
        case 0x4cc354u: goto label_4cc354;
        case 0x4cc358u: goto label_4cc358;
        case 0x4cc35cu: goto label_4cc35c;
        case 0x4cc360u: goto label_4cc360;
        case 0x4cc364u: goto label_4cc364;
        case 0x4cc368u: goto label_4cc368;
        case 0x4cc36cu: goto label_4cc36c;
        default: break;
    }

    ctx->pc = 0x4cc008u;

label_4cc008:
    // 0x4cc008: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cc008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4cc00c:
    // 0x4cc00c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cc00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4cc010:
    // 0x4cc010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cc010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4cc014:
    // 0x4cc014: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cc014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4cc018:
    // 0x4cc018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cc018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cc01c:
    // 0x4cc01c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cc01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4cc020:
    // 0x4cc020: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4cc020u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc024:
    // 0x4cc024: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cc024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4cc028:
    // 0x4cc028: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cc028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4cc02c:
    // 0x4cc02c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cc02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4cc030:
    // 0x4cc030: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cc030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4cc034:
    // 0x4cc034: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cc034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4cc038:
    // 0x4cc038: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4cc038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4cc03c:
    // 0x4cc03c: 0x8c433968  lw          $v1, 0x3968($v0)
    ctx->pc = 0x4cc03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14696)));
label_4cc040:
    // 0x4cc040: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4cc040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4cc044:
    // 0x4cc044: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4cc044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4cc048:
    // 0x4cc048: 0xac433968  sw          $v1, 0x3968($v0)
    ctx->pc = 0x4cc048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14696), GPR_U32(ctx, 3));
label_4cc04c:
    // 0x4cc04c: 0x2ca40003  sltiu       $a0, $a1, 0x3
    ctx->pc = 0x4cc04cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4cc050:
    // 0x4cc050: 0x10800074  beqz        $a0, . + 4 + (0x74 << 2)
label_4cc054:
    if (ctx->pc == 0x4CC054u) {
        ctx->pc = 0x4CC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC050u;
        // 0x4cc054: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC058u;
        goto label_4cc058;
    }
    ctx->pc = 0x4CC050u;
    {
        const bool branch_taken_0x4cc050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC050u;
        // 0x4cc054: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc050) {
            ctx->pc = 0x4CC224u;
            goto label_4cc224;
        }
    }
    ctx->pc = 0x4CC058u;
label_4cc058:
    // 0x4cc058: 0x50a30048  beql        $a1, $v1, . + 4 + (0x48 << 2)
label_4cc05c:
    if (ctx->pc == 0x4CC05Cu) {
        ctx->pc = 0x4CC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC058u;
        // 0x4cc05c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC060u;
        goto label_4cc060;
    }
    ctx->pc = 0x4CC058u;
    {
        const bool branch_taken_0x4cc058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cc058) {
            ctx->pc = 0x4CC05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CC058u;
            // 0x4cc05c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CC17Cu;
            goto label_4cc17c;
        }
    }
    ctx->pc = 0x4CC060u;
label_4cc060:
    // 0x4cc060: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_4cc064:
    if (ctx->pc == 0x4CC064u) {
        ctx->pc = 0x4CC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC060u;
        // 0x4cc064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC068u;
        goto label_4cc068;
    }
    ctx->pc = 0x4CC060u;
    {
        const bool branch_taken_0x4cc060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC060u;
        // 0x4cc064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc060) {
            ctx->pc = 0x4CC07Cu;
            goto label_4cc07c;
        }
    }
    ctx->pc = 0x4CC068u;
label_4cc068:
    // 0x4cc068: 0x14a200b2  bne         $a1, $v0, . + 4 + (0xB2 << 2)
label_4cc06c:
    if (ctx->pc == 0x4CC06Cu) {
        ctx->pc = 0x4CC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC068u;
        // 0x4cc06c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC070u;
        goto label_4cc070;
    }
    ctx->pc = 0x4CC068u;
    {
        const bool branch_taken_0x4cc068 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC068u;
        // 0x4cc06c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc068) {
            ctx->pc = 0x4CC334u;
            goto label_4cc334;
        }
    }
    ctx->pc = 0x4CC070u;
label_4cc070:
    // 0x4cc070: 0xac4346b0  sw          $v1, 0x46B0($v0)
    ctx->pc = 0x4cc070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18096), GPR_U32(ctx, 3));
label_4cc074:
    // 0x4cc074: 0x100000af  b           . + 4 + (0xAF << 2)
label_4cc078:
    if (ctx->pc == 0x4CC078u) {
        ctx->pc = 0x4CC07Cu;
        goto label_4cc07c;
    }
    ctx->pc = 0x4CC074u;
    {
        const bool branch_taken_0x4cc074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc074) {
            ctx->pc = 0x4CC334u;
            goto label_4cc334;
        }
    }
    ctx->pc = 0x4CC07Cu;
label_4cc07c:
    // 0x4cc07c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x4cc07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4cc080:
    // 0x4cc080: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cc084:
    // 0x4cc084: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4cc084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4cc088:
    // 0x4cc088: 0x24850fff  addiu       $a1, $a0, 0xFFF
    ctx->pc = 0x4cc088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
label_4cc08c:
    // 0x4cc08c: 0xac6246a8  sw          $v0, 0x46A8($v1)
    ctx->pc = 0x4cc08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18088), GPR_U32(ctx, 2));
label_4cc090:
    // 0x4cc090: 0xc10f644  jal         func_43D910
label_4cc094:
    if (ctx->pc == 0x4CC094u) {
        ctx->pc = 0x4CC098u;
        goto label_4cc098;
    }
    ctx->pc = 0x4CC090u;
    SET_GPR_U32(ctx, 31, 0x4CC098u);
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4CC090u, 0x4CC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC098u;
label_4cc098:
    // 0x4cc098: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4cc098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4cc09c:
    // 0x4cc09c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cc0a0:
    // 0x4cc0a0: 0xac4046a4  sw          $zero, 0x46A4($v0)
    ctx->pc = 0x4cc0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18084), GPR_U32(ctx, 0));
label_4cc0a4:
    // 0x4cc0a4: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
label_4cc0a8:
    if (ctx->pc == 0x4CC0A8u) {
        ctx->pc = 0x4CC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC0A4u;
        // 0x4cc0a8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC0ACu;
        goto label_4cc0ac;
    }
    ctx->pc = 0x4CC0A4u;
    {
        const bool branch_taken_0x4cc0a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC0A4u;
        // 0x4cc0a8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc0a4) {
            ctx->pc = 0x4CC13Cu;
            goto label_4cc13c;
        }
    }
    ctx->pc = 0x4CC0ACu;
label_4cc0ac:
    // 0x4cc0ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4cc0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4cc0b0:
    // 0x4cc0b0: 0x8c434800  lw          $v1, 0x4800($v0)
    ctx->pc = 0x4cc0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18432)));
label_4cc0b4:
    // 0x4cc0b4: 0x14640057  bne         $v1, $a0, . + 4 + (0x57 << 2)
label_4cc0b8:
    if (ctx->pc == 0x4CC0B8u) {
        ctx->pc = 0x4CC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC0B4u;
        // 0x4cc0b8: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC0BCu;
        goto label_4cc0bc;
    }
    ctx->pc = 0x4CC0B4u;
    {
        const bool branch_taken_0x4cc0b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4CC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC0B4u;
        // 0x4cc0b8: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc0b4) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC0BCu;
label_4cc0bc:
    // 0x4cc0bc: 0x8cc247cc  lw          $v0, 0x47CC($a2)
    ctx->pc = 0x4cc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18380)));
label_4cc0c0:
    // 0x4cc0c0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_4cc0c4:
    if (ctx->pc == 0x4CC0C4u) {
        ctx->pc = 0x4CC0C8u;
        goto label_4cc0c8;
    }
    ctx->pc = 0x4CC0C0u;
    {
        const bool branch_taken_0x4cc0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc0c0) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC0C8u;
label_4cc0c8:
    // 0x4cc0c8: 0x8cc347cc  lw          $v1, 0x47CC($a2)
    ctx->pc = 0x4cc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18380)));
label_4cc0cc:
    // 0x4cc0cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4cc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4cc0d0:
    // 0x4cc0d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4cc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4cc0d4:
    // 0x4cc0d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4cc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4cc0d8:
    // 0x4cc0d8: 0x8cc447cc  lw          $a0, 0x47CC($a2)
    ctx->pc = 0x4cc0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18380)));
label_4cc0dc:
    // 0x4cc0dc: 0x8cc347cc  lw          $v1, 0x47CC($a2)
    ctx->pc = 0x4cc0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18380)));
label_4cc0e0:
    // 0x4cc0e0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4cc0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4cc0e4:
    // 0x4cc0e4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4cc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4cc0e8:
    // 0x4cc0e8: 0x14a2004a  bne         $a1, $v0, . + 4 + (0x4A << 2)
label_4cc0ec:
    if (ctx->pc == 0x4CC0ECu) {
        ctx->pc = 0x4CC0F0u;
        goto label_4cc0f0;
    }
    ctx->pc = 0x4CC0E8u;
    {
        const bool branch_taken_0x4cc0e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4cc0e8) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC0F0u;
label_4cc0f0:
    // 0x4cc0f0: 0x8cc447cc  lw          $a0, 0x47CC($a2)
    ctx->pc = 0x4cc0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18380)));
label_4cc0f4:
    // 0x4cc0f4: 0xacc047cc  sw          $zero, 0x47CC($a2)
    ctx->pc = 0x4cc0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 18380), GPR_U32(ctx, 0));
label_4cc0f8:
    // 0x4cc0f8: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
label_4cc0fc:
    if (ctx->pc == 0x4CC0FCu) {
        ctx->pc = 0x4CC100u;
        goto label_4cc100;
    }
    ctx->pc = 0x4CC0F8u;
    {
        const bool branch_taken_0x4cc0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc0f8) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC100u;
label_4cc100:
    // 0x4cc100: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4cc100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cc104:
    // 0x4cc104: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4cc104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cc108:
    // 0x4cc108: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_4cc10c:
    if (ctx->pc == 0x4CC10Cu) {
        ctx->pc = 0x4CC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC108u;
        // 0x4cc10c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC110u;
        goto label_4cc110;
    }
    ctx->pc = 0x4CC108u;
    {
        const bool branch_taken_0x4cc108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC108u;
        // 0x4cc10c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc108) {
            ctx->pc = 0x4CC114u;
            goto label_4cc114;
        }
    }
    ctx->pc = 0x4CC110u;
label_4cc110:
    // 0x4cc110: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cc110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4cc114:
    // 0x4cc114: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x4cc114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4cc118:
    // 0x4cc118: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_4cc11c:
    if (ctx->pc == 0x4CC11Cu) {
        ctx->pc = 0x4CC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC118u;
        // 0x4cc11c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC120u;
        goto label_4cc120;
    }
    ctx->pc = 0x4CC118u;
    {
        const bool branch_taken_0x4cc118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC118u;
        // 0x4cc11c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc118) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC120u;
label_4cc120:
    // 0x4cc120: 0x8c433964  lw          $v1, 0x3964($v0)
    ctx->pc = 0x4cc120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14692)));
label_4cc124:
    // 0x4cc124: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_4cc128:
    if (ctx->pc == 0x4CC128u) {
        ctx->pc = 0x4CC12Cu;
        goto label_4cc12c;
    }
    ctx->pc = 0x4CC124u;
    {
        const bool branch_taken_0x4cc124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cc124) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC12Cu;
label_4cc12c:
    // 0x4cc12c: 0xa0f809  jalr        $a1
label_4cc130:
    if (ctx->pc == 0x4CC130u) {
        ctx->pc = 0x4CC134u;
        goto label_4cc134;
    }
    ctx->pc = 0x4CC12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4CC134u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CC12Cu, 0x4CC134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CC134u;
label_4cc134:
    // 0x4cc134: 0x10000037  b           . + 4 + (0x37 << 2)
label_4cc138:
    if (ctx->pc == 0x4CC138u) {
        ctx->pc = 0x4CC13Cu;
        goto label_4cc13c;
    }
    ctx->pc = 0x4CC134u;
    {
        const bool branch_taken_0x4cc134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc134) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC13Cu;
label_4cc13c:
    // 0x4cc13c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cc140:
    // 0x4cc140: 0x8c4447cc  lw          $a0, 0x47CC($v0)
    ctx->pc = 0x4cc140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18380)));
label_4cc144:
    // 0x4cc144: 0xac4047cc  sw          $zero, 0x47CC($v0)
    ctx->pc = 0x4cc144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18380), GPR_U32(ctx, 0));
label_4cc148:
    // 0x4cc148: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
label_4cc14c:
    if (ctx->pc == 0x4CC14Cu) {
        ctx->pc = 0x4CC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC148u;
        // 0x4cc14c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC150u;
        goto label_4cc150;
    }
    ctx->pc = 0x4CC148u;
    {
        const bool branch_taken_0x4cc148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC148u;
        // 0x4cc14c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc148) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC150u;
label_4cc150:
    // 0x4cc150: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x4cc150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4cc154:
    // 0x4cc154: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cc154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4cc158:
    // 0x4cc158: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
label_4cc15c:
    if (ctx->pc == 0x4CC15Cu) {
        ctx->pc = 0x4CC15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC158u;
        // 0x4cc15c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC160u;
        goto label_4cc160;
    }
    ctx->pc = 0x4CC158u;
    {
        const bool branch_taken_0x4cc158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC158u;
        // 0x4cc15c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc158) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC160u;
label_4cc160:
    // 0x4cc160: 0x8c433964  lw          $v1, 0x3964($v0)
    ctx->pc = 0x4cc160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14692)));
label_4cc164:
    // 0x4cc164: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_4cc168:
    if (ctx->pc == 0x4CC168u) {
        ctx->pc = 0x4CC16Cu;
        goto label_4cc16c;
    }
    ctx->pc = 0x4CC164u;
    {
        const bool branch_taken_0x4cc164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cc164) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC16Cu;
label_4cc16c:
    // 0x4cc16c: 0xa0f809  jalr        $a1
label_4cc170:
    if (ctx->pc == 0x4CC170u) {
        ctx->pc = 0x4CC174u;
        goto label_4cc174;
    }
    ctx->pc = 0x4CC16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x4CC174u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CC16Cu, 0x4CC174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CC174u;
label_4cc174:
    // 0x4cc174: 0x10000027  b           . + 4 + (0x27 << 2)
label_4cc178:
    if (ctx->pc == 0x4CC178u) {
        ctx->pc = 0x4CC17Cu;
        goto label_4cc17c;
    }
    ctx->pc = 0x4CC174u;
    {
        const bool branch_taken_0x4cc174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc174) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC17Cu;
label_4cc17c:
    // 0x4cc17c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cc180:
    // 0x4cc180: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4cc180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_4cc184:
    // 0x4cc184: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cc188:
    // 0x4cc188: 0xac4446a8  sw          $a0, 0x46A8($v0)
    ctx->pc = 0x4cc188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18088), GPR_U32(ctx, 4));
label_4cc18c:
    // 0x4cc18c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x4cc18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4cc190:
    // 0x4cc190: 0xaca046a4  sw          $zero, 0x46A4($a1)
    ctx->pc = 0x4cc190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18084), GPR_U32(ctx, 0));
label_4cc194:
    // 0x4cc194: 0x8c6247c8  lw          $v0, 0x47C8($v1)
    ctx->pc = 0x4cc194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18376)));
label_4cc198:
    // 0x4cc198: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4cc19c:
    if (ctx->pc == 0x4CC19Cu) {
        ctx->pc = 0x4CC1A0u;
        goto label_4cc1a0;
    }
    ctx->pc = 0x4CC198u;
    {
        const bool branch_taken_0x4cc198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc198) {
            ctx->pc = 0x4CC214u;
            goto label_4cc214;
        }
    }
    ctx->pc = 0x4CC1A0u;
label_4cc1a0:
    // 0x4cc1a0: 0x8e2247c8  lw          $v0, 0x47C8($s1)
    ctx->pc = 0x4cc1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18376)));
label_4cc1a4:
    // 0x4cc1a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4cc1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cc1a8:
    // 0x4cc1a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4cc1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4cc1ac:
    // 0x4cc1ac: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
label_4cc1b0:
    if (ctx->pc == 0x4CC1B0u) {
        ctx->pc = 0x4CC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC1ACu;
        // 0x4cc1b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC1B4u;
        goto label_4cc1b4;
    }
    ctx->pc = 0x4CC1ACu;
    {
        const bool branch_taken_0x4cc1ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4CC1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC1ACu;
        // 0x4cc1b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc1ac) {
            ctx->pc = 0x4CC1C8u;
            goto label_4cc1c8;
        }
    }
    ctx->pc = 0x4CC1B4u;
label_4cc1b4:
    // 0x4cc1b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4cc1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4cc1b8:
    // 0x4cc1b8: 0x8e2447c8  lw          $a0, 0x47C8($s1)
    ctx->pc = 0x4cc1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18376)));
label_4cc1bc:
    // 0x4cc1bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4cc1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4cc1c0:
    // 0x4cc1c0: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x4cc1c0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_4cc1c4:
    // 0x4cc1c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cc1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4cc1c8:
    // 0x4cc1c8: 0x8e2447c8  lw          $a0, 0x47C8($s1)
    ctx->pc = 0x4cc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18376)));
label_4cc1cc:
    // 0x4cc1cc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4cc1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4cc1d0:
    // 0x4cc1d0: 0x8e2547c8  lw          $a1, 0x47C8($s1)
    ctx->pc = 0x4cc1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18376)));
label_4cc1d4:
    // 0x4cc1d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4cc1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4cc1d8:
    // 0x4cc1d8: 0x8e2347c8  lw          $v1, 0x47C8($s1)
    ctx->pc = 0x4cc1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18376)));
label_4cc1dc:
    // 0x4cc1dc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x4cc1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4cc1e0:
    // 0x4cc1e0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x4cc1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4cc1e4:
    // 0x4cc1e4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4cc1e8:
    if (ctx->pc == 0x4CC1E8u) {
        ctx->pc = 0x4CC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC1E4u;
        // 0x4cc1e8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC1ECu;
        goto label_4cc1ec;
    }
    ctx->pc = 0x4CC1E4u;
    {
        const bool branch_taken_0x4cc1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC1E4u;
        // 0x4cc1e8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc1e4) {
            ctx->pc = 0x4CC210u;
            goto label_4cc210;
        }
    }
    ctx->pc = 0x4CC1ECu;
label_4cc1ec:
    // 0x4cc1ec: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cc1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4cc1f0:
    // 0x4cc1f0: 0x8c433964  lw          $v1, 0x3964($v0)
    ctx->pc = 0x4cc1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14692)));
label_4cc1f4:
    // 0x4cc1f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4cc1f8:
    if (ctx->pc == 0x4CC1F8u) {
        ctx->pc = 0x4CC1FCu;
        goto label_4cc1fc;
    }
    ctx->pc = 0x4CC1F4u;
    {
        const bool branch_taken_0x4cc1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cc1f4) {
            ctx->pc = 0x4CC210u;
            goto label_4cc210;
        }
    }
    ctx->pc = 0x4CC1FCu;
label_4cc1fc:
    // 0x4cc1fc: 0x8e2347c8  lw          $v1, 0x47C8($s1)
    ctx->pc = 0x4cc1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18376)));
label_4cc200:
    // 0x4cc200: 0x8e2447c8  lw          $a0, 0x47C8($s1)
    ctx->pc = 0x4cc200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18376)));
label_4cc204:
    // 0x4cc204: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4cc204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_4cc208:
    // 0x4cc208: 0x40f809  jalr        $v0
label_4cc20c:
    if (ctx->pc == 0x4CC20Cu) {
        ctx->pc = 0x4CC210u;
        goto label_4cc210;
    }
    ctx->pc = 0x4CC208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4CC210u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CC208u, 0x4CC210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CC210u;
label_4cc210:
    // 0x4cc210: 0xae2047c8  sw          $zero, 0x47C8($s1)
    ctx->pc = 0x4cc210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 18376), GPR_U32(ctx, 0));
label_4cc214:
    // 0x4cc214: 0xc132e56  jal         func_4CB958
label_4cc218:
    if (ctx->pc == 0x4CC218u) {
        ctx->pc = 0x4CC21Cu;
        goto label_4cc21c;
    }
    ctx->pc = 0x4CC214u;
    SET_GPR_U32(ctx, 31, 0x4CC21Cu);
    ctx->pc = 0x4CB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB958u, 0x4CC214u, 0x4CC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC21Cu;
label_4cc21c:
    // 0x4cc21c: 0x10000045  b           . + 4 + (0x45 << 2)
label_4cc220:
    if (ctx->pc == 0x4CC220u) {
        ctx->pc = 0x4CC224u;
        goto label_4cc224;
    }
    ctx->pc = 0x4CC21Cu;
    {
        const bool branch_taken_0x4cc21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc21c) {
            ctx->pc = 0x4CC334u;
            goto label_4cc334;
        }
    }
    ctx->pc = 0x4CC224u;
label_4cc224:
    // 0x4cc224: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4cc224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cc228:
    // 0x4cc228: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
label_4cc22c:
    if (ctx->pc == 0x4CC22Cu) {
        ctx->pc = 0x4CC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC228u;
        // 0x4cc22c: 0x2ca20005  sltiu       $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC230u;
        goto label_4cc230;
    }
    ctx->pc = 0x4CC228u;
    {
        const bool branch_taken_0x4cc228 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC228u;
        // 0x4cc22c: 0x2ca20005  sltiu       $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc228) {
            ctx->pc = 0x4CC26Cu;
            goto label_4cc26c;
        }
    }
    ctx->pc = 0x4CC230u;
label_4cc230:
    // 0x4cc230: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4cc234:
    if (ctx->pc == 0x4CC234u) {
        ctx->pc = 0x4CC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC230u;
        // 0x4cc234: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC238u;
        goto label_4cc238;
    }
    ctx->pc = 0x4CC230u;
    {
        const bool branch_taken_0x4cc230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC230u;
        // 0x4cc234: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc230) {
            ctx->pc = 0x4CC248u;
            goto label_4cc248;
        }
    }
    ctx->pc = 0x4CC238u;
label_4cc238:
    // 0x4cc238: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_4cc23c:
    if (ctx->pc == 0x4CC23Cu) {
        ctx->pc = 0x4CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC238u;
        // 0x4cc23c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC240u;
        goto label_4cc240;
    }
    ctx->pc = 0x4CC238u;
    {
        const bool branch_taken_0x4cc238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC238u;
        // 0x4cc23c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc238) {
            ctx->pc = 0x4CC25Cu;
            goto label_4cc25c;
        }
    }
    ctx->pc = 0x4CC240u;
label_4cc240:
    // 0x4cc240: 0x1000003c  b           . + 4 + (0x3C << 2)
label_4cc244:
    if (ctx->pc == 0x4CC244u) {
        ctx->pc = 0x4CC248u;
        goto label_4cc248;
    }
    ctx->pc = 0x4CC240u;
    {
        const bool branch_taken_0x4cc240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc240) {
            ctx->pc = 0x4CC334u;
            goto label_4cc334;
        }
    }
    ctx->pc = 0x4CC248u;
label_4cc248:
    // 0x4cc248: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4cc248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4cc24c:
    // 0x4cc24c: 0x50a20037  beql        $a1, $v0, . + 4 + (0x37 << 2)
label_4cc250:
    if (ctx->pc == 0x4CC250u) {
        ctx->pc = 0x4CC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC24Cu;
        // 0x4cc250: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC254u;
        goto label_4cc254;
    }
    ctx->pc = 0x4CC24Cu;
    {
        const bool branch_taken_0x4cc24c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cc24c) {
            ctx->pc = 0x4CC250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CC24Cu;
            // 0x4cc250: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CC32Cu;
            goto label_4cc32c;
        }
    }
    ctx->pc = 0x4CC254u;
label_4cc254:
    // 0x4cc254: 0x10000037  b           . + 4 + (0x37 << 2)
label_4cc258:
    if (ctx->pc == 0x4CC258u) {
        ctx->pc = 0x4CC25Cu;
        goto label_4cc25c;
    }
    ctx->pc = 0x4CC254u;
    {
        const bool branch_taken_0x4cc254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc254) {
            ctx->pc = 0x4CC334u;
            goto label_4cc334;
        }
    }
    ctx->pc = 0x4CC25Cu;
label_4cc25c:
    // 0x4cc25c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cc260:
    // 0x4cc260: 0xac6246ac  sw          $v0, 0x46AC($v1)
    ctx->pc = 0x4cc260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18092), GPR_U32(ctx, 2));
label_4cc264:
    // 0x4cc264: 0x10000033  b           . + 4 + (0x33 << 2)
label_4cc268:
    if (ctx->pc == 0x4CC268u) {
        ctx->pc = 0x4CC26Cu;
        goto label_4cc26c;
    }
    ctx->pc = 0x4CC264u;
    {
        const bool branch_taken_0x4cc264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc264) {
            ctx->pc = 0x4CC334u;
            goto label_4cc334;
        }
    }
    ctx->pc = 0x4CC26Cu;
label_4cc26c:
    // 0x4cc26c: 0xc1334f4  jal         func_4CD3D0
label_4cc270:
    if (ctx->pc == 0x4CC270u) {
        ctx->pc = 0x4CC274u;
        goto label_4cc274;
    }
    ctx->pc = 0x4CC26Cu;
    SET_GPR_U32(ctx, 31, 0x4CC274u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4CC26Cu, 0x4CC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC274u;
label_4cc274:
    // 0x4cc274: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4cc274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc278:
    // 0x4cc278: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4cc27c:
    // 0x4cc27c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cc280:
    // 0x4cc280: 0x246347e8  addiu       $v1, $v1, 0x47E8
    ctx->pc = 0x4cc280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18408));
label_4cc284:
    // 0x4cc284: 0x244247d0  addiu       $v0, $v0, 0x47D0
    ctx->pc = 0x4cc284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18384));
label_4cc288:
    // 0x4cc288: 0x8c510014  lw          $s1, 0x14($v0)
    ctx->pc = 0x4cc288u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4cc28c:
    // 0x4cc28c: 0x12230029  beq         $s1, $v1, . + 4 + (0x29 << 2)
label_4cc290:
    if (ctx->pc == 0x4CC290u) {
        ctx->pc = 0x4CC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC28Cu;
        // 0x4cc290: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC294u;
        goto label_4cc294;
    }
    ctx->pc = 0x4CC28Cu;
    {
        const bool branch_taken_0x4cc28c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x4CC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC28Cu;
        // 0x4cc290: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc28c) {
            ctx->pc = 0x4CC334u;
            goto label_4cc334;
        }
    }
    ctx->pc = 0x4CC294u;
label_4cc294:
    // 0x4cc294: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x4cc294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cc298:
    // 0x4cc298: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4cc298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cc29c:
    // 0x4cc29c: 0x0  nop
    ctx->pc = 0x4cc29cu;
    // NOP
label_4cc2a0:
    // 0x4cc2a0: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x4cc2a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4cc2a4:
    // 0x4cc2a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4cc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cc2a8:
    // 0x4cc2a8: 0x1455001c  bne         $v0, $s5, . + 4 + (0x1C << 2)
label_4cc2ac:
    if (ctx->pc == 0x4CC2ACu) {
        ctx->pc = 0x4CC2B0u;
        goto label_4cc2b0;
    }
    ctx->pc = 0x4CC2A8u;
    {
        const bool branch_taken_0x4cc2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x4cc2a8) {
            ctx->pc = 0x4CC31Cu;
            goto label_4cc31c;
        }
    }
    ctx->pc = 0x4CC2B0u;
label_4cc2b0:
    // 0x4cc2b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4cc2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4cc2b4:
    // 0x4cc2b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4cc2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4cc2b8:
    // 0x4cc2b8: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x4cc2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4cc2bc:
    // 0x4cc2bc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4cc2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4cc2c0:
    // 0x4cc2c0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_4cc2c4:
    if (ctx->pc == 0x4CC2C4u) {
        ctx->pc = 0x4CC2C8u;
        goto label_4cc2c8;
    }
    ctx->pc = 0x4CC2C0u;
    {
        const bool branch_taken_0x4cc2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc2c0) {
            ctx->pc = 0x4CC31Cu;
            goto label_4cc31c;
        }
    }
    ctx->pc = 0x4CC2C8u;
label_4cc2c8:
    // 0x4cc2c8: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4cc2c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
label_4cc2cc:
    // 0x4cc2cc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x4cc2ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cc2d0:
    // 0x4cc2d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4cc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4cc2d4:
    // 0x4cc2d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4cc2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4cc2d8:
    // 0x4cc2d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4cc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4cc2dc:
    // 0x4cc2dc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4cc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4cc2e0:
    // 0x4cc2e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4cc2e4:
    if (ctx->pc == 0x4CC2E4u) {
        ctx->pc = 0x4CC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC2E0u;
        // 0x4cc2e4: 0x8e823964  lw          $v0, 0x3964($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC2E8u;
        goto label_4cc2e8;
    }
    ctx->pc = 0x4CC2E0u;
    {
        const bool branch_taken_0x4cc2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC2E0u;
        // 0x4cc2e4: 0x8e823964  lw          $v0, 0x3964($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc2e0) {
            ctx->pc = 0x4CC2F8u;
            goto label_4cc2f8;
        }
    }
    ctx->pc = 0x4CC2E8u;
label_4cc2e8:
    // 0x4cc2e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4cc2ec:
    if (ctx->pc == 0x4CC2ECu) {
        ctx->pc = 0x4CC2F0u;
        goto label_4cc2f0;
    }
    ctx->pc = 0x4CC2E8u;
    {
        const bool branch_taken_0x4cc2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cc2e8) {
            ctx->pc = 0x4CC2F8u;
            goto label_4cc2f8;
        }
    }
    ctx->pc = 0x4CC2F0u;
label_4cc2f0:
    // 0x4cc2f0: 0x60f809  jalr        $v1
label_4cc2f4:
    if (ctx->pc == 0x4CC2F4u) {
        ctx->pc = 0x4CC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC2F0u;
        // 0x4cc2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC2F8u;
        goto label_4cc2f8;
    }
    ctx->pc = 0x4CC2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4CC2F8u);
        ctx->pc = 0x4CC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC2F0u;
        // 0x4cc2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CC2F0u, 0x4CC2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4CC2F8u;
label_4cc2f8:
    // 0x4cc2f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4cc2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cc2fc:
    // 0x4cc2fc: 0x14530007  bne         $v0, $s3, . + 4 + (0x7 << 2)
label_4cc300:
    if (ctx->pc == 0x4CC300u) {
        ctx->pc = 0x4CC304u;
        goto label_4cc304;
    }
    ctx->pc = 0x4CC2FCu;
    {
        const bool branch_taken_0x4cc2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x4cc2fc) {
            ctx->pc = 0x4CC31Cu;
            goto label_4cc31c;
        }
    }
    ctx->pc = 0x4CC304u;
label_4cc304:
    // 0x4cc304: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4cc304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4cc308:
    // 0x4cc308: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4cc308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4cc30c:
    // 0x4cc30c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x4cc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4cc310:
    // 0x4cc310: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4cc310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4cc314:
    // 0x4cc314: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_4cc318:
    if (ctx->pc == 0x4CC318u) {
        ctx->pc = 0x4CC31Cu;
        goto label_4cc31c;
    }
    ctx->pc = 0x4CC314u;
    {
        const bool branch_taken_0x4cc314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cc314) {
            ctx->pc = 0x4CC2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc2d0;
        }
    }
    ctx->pc = 0x4CC31Cu;
label_4cc31c:
    // 0x4cc31c: 0x1636ffe0  bne         $s1, $s6, . + 4 + (-0x20 << 2)
label_4cc320:
    if (ctx->pc == 0x4CC320u) {
        ctx->pc = 0x4CC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC31Cu;
        // 0x4cc320: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC324u;
        goto label_4cc324;
    }
    ctx->pc = 0x4CC31Cu;
    {
        const bool branch_taken_0x4cc31c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x4CC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC31Cu;
        // 0x4cc320: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc31c) {
            ctx->pc = 0x4CC2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc2a0;
        }
    }
    ctx->pc = 0x4CC324u;
label_4cc324:
    // 0x4cc324: 0x10000003  b           . + 4 + (0x3 << 2)
label_4cc328:
    if (ctx->pc == 0x4CC328u) {
        ctx->pc = 0x4CC32Cu;
        goto label_4cc32c;
    }
    ctx->pc = 0x4CC324u;
    {
        const bool branch_taken_0x4cc324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc324) {
            ctx->pc = 0x4CC334u;
            goto label_4cc334;
        }
    }
    ctx->pc = 0x4CC32Cu;
label_4cc32c:
    // 0x4cc32c: 0xc132f96  jal         func_4CBE58
label_4cc330:
    if (ctx->pc == 0x4CC330u) {
        ctx->pc = 0x4CC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC32Cu;
        // 0x4cc330: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC334u;
        goto label_4cc334;
    }
    ctx->pc = 0x4CC32Cu;
    SET_GPR_U32(ctx, 31, 0x4CC334u);
    ctx->pc = 0x4CC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC32Cu;
    // 0x4cc330: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CBE58u, 0x4CC32Cu, 0x4CC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC334u;
label_4cc334:
    // 0x4cc334: 0x8ee23968  lw          $v0, 0x3968($s7)
    ctx->pc = 0x4cc334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 14696)));
label_4cc338:
    // 0x4cc338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cc338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc33c:
    // 0x4cc33c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4cc33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4cc340:
    // 0x4cc340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cc340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4cc344:
    // 0x4cc344: 0xaee23968  sw          $v0, 0x3968($s7)
    ctx->pc = 0x4cc344u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 14696), GPR_U32(ctx, 2));
label_4cc348:
    // 0x4cc348: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cc348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cc34c:
    // 0x4cc34c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cc34cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4cc350:
    // 0x4cc350: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cc350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cc354:
    // 0x4cc354: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cc354u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4cc358:
    // 0x4cc358: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cc358u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4cc35c:
    // 0x4cc35c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cc35cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4cc360:
    // 0x4cc360: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4cc360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4cc364:
    // 0x4cc364: 0x3e00008  jr          $ra
label_4cc368:
    if (ctx->pc == 0x4CC368u) {
        ctx->pc = 0x4CC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC364u;
        // 0x4cc368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4CC36Cu;
        goto label_4cc36c;
    }
    ctx->pc = 0x4CC364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC364u;
        // 0x4cc368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CC364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CC36Cu;
label_4cc36c:
    // 0x4cc36c: 0x0  nop
    ctx->pc = 0x4cc36cu;
    // NOP
    ctx->pc = 0x4cc370u;
}
