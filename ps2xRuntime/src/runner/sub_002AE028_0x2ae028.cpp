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

// Function: sub_002AE028
// Address: 0x2ae028 - 0x2ae2e8
void sub_002AE028_0x2ae028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE028_0x2ae028");
#endif

    switch (ctx->pc) {
        case 0x2ae028u: goto label_2ae028;
        case 0x2ae02cu: goto label_2ae02c;
        case 0x2ae030u: goto label_2ae030;
        case 0x2ae034u: goto label_2ae034;
        case 0x2ae038u: goto label_2ae038;
        case 0x2ae03cu: goto label_2ae03c;
        case 0x2ae040u: goto label_2ae040;
        case 0x2ae044u: goto label_2ae044;
        case 0x2ae048u: goto label_2ae048;
        case 0x2ae04cu: goto label_2ae04c;
        case 0x2ae050u: goto label_2ae050;
        case 0x2ae054u: goto label_2ae054;
        case 0x2ae058u: goto label_2ae058;
        case 0x2ae05cu: goto label_2ae05c;
        case 0x2ae060u: goto label_2ae060;
        case 0x2ae064u: goto label_2ae064;
        case 0x2ae068u: goto label_2ae068;
        case 0x2ae06cu: goto label_2ae06c;
        case 0x2ae070u: goto label_2ae070;
        case 0x2ae074u: goto label_2ae074;
        case 0x2ae078u: goto label_2ae078;
        case 0x2ae07cu: goto label_2ae07c;
        case 0x2ae080u: goto label_2ae080;
        case 0x2ae084u: goto label_2ae084;
        case 0x2ae088u: goto label_2ae088;
        case 0x2ae08cu: goto label_2ae08c;
        case 0x2ae090u: goto label_2ae090;
        case 0x2ae094u: goto label_2ae094;
        case 0x2ae098u: goto label_2ae098;
        case 0x2ae09cu: goto label_2ae09c;
        case 0x2ae0a0u: goto label_2ae0a0;
        case 0x2ae0a4u: goto label_2ae0a4;
        case 0x2ae0a8u: goto label_2ae0a8;
        case 0x2ae0acu: goto label_2ae0ac;
        case 0x2ae0b0u: goto label_2ae0b0;
        case 0x2ae0b4u: goto label_2ae0b4;
        case 0x2ae0b8u: goto label_2ae0b8;
        case 0x2ae0bcu: goto label_2ae0bc;
        case 0x2ae0c0u: goto label_2ae0c0;
        case 0x2ae0c4u: goto label_2ae0c4;
        case 0x2ae0c8u: goto label_2ae0c8;
        case 0x2ae0ccu: goto label_2ae0cc;
        case 0x2ae0d0u: goto label_2ae0d0;
        case 0x2ae0d4u: goto label_2ae0d4;
        case 0x2ae0d8u: goto label_2ae0d8;
        case 0x2ae0dcu: goto label_2ae0dc;
        case 0x2ae0e0u: goto label_2ae0e0;
        case 0x2ae0e4u: goto label_2ae0e4;
        case 0x2ae0e8u: goto label_2ae0e8;
        case 0x2ae0ecu: goto label_2ae0ec;
        case 0x2ae0f0u: goto label_2ae0f0;
        case 0x2ae0f4u: goto label_2ae0f4;
        case 0x2ae0f8u: goto label_2ae0f8;
        case 0x2ae0fcu: goto label_2ae0fc;
        case 0x2ae100u: goto label_2ae100;
        case 0x2ae104u: goto label_2ae104;
        case 0x2ae108u: goto label_2ae108;
        case 0x2ae10cu: goto label_2ae10c;
        case 0x2ae110u: goto label_2ae110;
        case 0x2ae114u: goto label_2ae114;
        case 0x2ae118u: goto label_2ae118;
        case 0x2ae11cu: goto label_2ae11c;
        case 0x2ae120u: goto label_2ae120;
        case 0x2ae124u: goto label_2ae124;
        case 0x2ae128u: goto label_2ae128;
        case 0x2ae12cu: goto label_2ae12c;
        case 0x2ae130u: goto label_2ae130;
        case 0x2ae134u: goto label_2ae134;
        case 0x2ae138u: goto label_2ae138;
        case 0x2ae13cu: goto label_2ae13c;
        case 0x2ae140u: goto label_2ae140;
        case 0x2ae144u: goto label_2ae144;
        case 0x2ae148u: goto label_2ae148;
        case 0x2ae14cu: goto label_2ae14c;
        case 0x2ae150u: goto label_2ae150;
        case 0x2ae154u: goto label_2ae154;
        case 0x2ae158u: goto label_2ae158;
        case 0x2ae15cu: goto label_2ae15c;
        case 0x2ae160u: goto label_2ae160;
        case 0x2ae164u: goto label_2ae164;
        case 0x2ae168u: goto label_2ae168;
        case 0x2ae16cu: goto label_2ae16c;
        case 0x2ae170u: goto label_2ae170;
        case 0x2ae174u: goto label_2ae174;
        case 0x2ae178u: goto label_2ae178;
        case 0x2ae17cu: goto label_2ae17c;
        case 0x2ae180u: goto label_2ae180;
        case 0x2ae184u: goto label_2ae184;
        case 0x2ae188u: goto label_2ae188;
        case 0x2ae18cu: goto label_2ae18c;
        case 0x2ae190u: goto label_2ae190;
        case 0x2ae194u: goto label_2ae194;
        case 0x2ae198u: goto label_2ae198;
        case 0x2ae19cu: goto label_2ae19c;
        case 0x2ae1a0u: goto label_2ae1a0;
        case 0x2ae1a4u: goto label_2ae1a4;
        case 0x2ae1a8u: goto label_2ae1a8;
        case 0x2ae1acu: goto label_2ae1ac;
        case 0x2ae1b0u: goto label_2ae1b0;
        case 0x2ae1b4u: goto label_2ae1b4;
        case 0x2ae1b8u: goto label_2ae1b8;
        case 0x2ae1bcu: goto label_2ae1bc;
        case 0x2ae1c0u: goto label_2ae1c0;
        case 0x2ae1c4u: goto label_2ae1c4;
        case 0x2ae1c8u: goto label_2ae1c8;
        case 0x2ae1ccu: goto label_2ae1cc;
        case 0x2ae1d0u: goto label_2ae1d0;
        case 0x2ae1d4u: goto label_2ae1d4;
        case 0x2ae1d8u: goto label_2ae1d8;
        case 0x2ae1dcu: goto label_2ae1dc;
        case 0x2ae1e0u: goto label_2ae1e0;
        case 0x2ae1e4u: goto label_2ae1e4;
        case 0x2ae1e8u: goto label_2ae1e8;
        case 0x2ae1ecu: goto label_2ae1ec;
        case 0x2ae1f0u: goto label_2ae1f0;
        case 0x2ae1f4u: goto label_2ae1f4;
        case 0x2ae1f8u: goto label_2ae1f8;
        case 0x2ae1fcu: goto label_2ae1fc;
        case 0x2ae200u: goto label_2ae200;
        case 0x2ae204u: goto label_2ae204;
        case 0x2ae208u: goto label_2ae208;
        case 0x2ae20cu: goto label_2ae20c;
        case 0x2ae210u: goto label_2ae210;
        case 0x2ae214u: goto label_2ae214;
        case 0x2ae218u: goto label_2ae218;
        case 0x2ae21cu: goto label_2ae21c;
        case 0x2ae220u: goto label_2ae220;
        case 0x2ae224u: goto label_2ae224;
        case 0x2ae228u: goto label_2ae228;
        case 0x2ae22cu: goto label_2ae22c;
        case 0x2ae230u: goto label_2ae230;
        case 0x2ae234u: goto label_2ae234;
        case 0x2ae238u: goto label_2ae238;
        case 0x2ae23cu: goto label_2ae23c;
        case 0x2ae240u: goto label_2ae240;
        case 0x2ae244u: goto label_2ae244;
        case 0x2ae248u: goto label_2ae248;
        case 0x2ae24cu: goto label_2ae24c;
        case 0x2ae250u: goto label_2ae250;
        case 0x2ae254u: goto label_2ae254;
        case 0x2ae258u: goto label_2ae258;
        case 0x2ae25cu: goto label_2ae25c;
        case 0x2ae260u: goto label_2ae260;
        case 0x2ae264u: goto label_2ae264;
        case 0x2ae268u: goto label_2ae268;
        case 0x2ae26cu: goto label_2ae26c;
        case 0x2ae270u: goto label_2ae270;
        case 0x2ae274u: goto label_2ae274;
        case 0x2ae278u: goto label_2ae278;
        case 0x2ae27cu: goto label_2ae27c;
        case 0x2ae280u: goto label_2ae280;
        case 0x2ae284u: goto label_2ae284;
        case 0x2ae288u: goto label_2ae288;
        case 0x2ae28cu: goto label_2ae28c;
        case 0x2ae290u: goto label_2ae290;
        case 0x2ae294u: goto label_2ae294;
        case 0x2ae298u: goto label_2ae298;
        case 0x2ae29cu: goto label_2ae29c;
        case 0x2ae2a0u: goto label_2ae2a0;
        case 0x2ae2a4u: goto label_2ae2a4;
        case 0x2ae2a8u: goto label_2ae2a8;
        case 0x2ae2acu: goto label_2ae2ac;
        case 0x2ae2b0u: goto label_2ae2b0;
        case 0x2ae2b4u: goto label_2ae2b4;
        case 0x2ae2b8u: goto label_2ae2b8;
        case 0x2ae2bcu: goto label_2ae2bc;
        case 0x2ae2c0u: goto label_2ae2c0;
        case 0x2ae2c4u: goto label_2ae2c4;
        case 0x2ae2c8u: goto label_2ae2c8;
        case 0x2ae2ccu: goto label_2ae2cc;
        case 0x2ae2d0u: goto label_2ae2d0;
        case 0x2ae2d4u: goto label_2ae2d4;
        case 0x2ae2d8u: goto label_2ae2d8;
        case 0x2ae2dcu: goto label_2ae2dc;
        case 0x2ae2e0u: goto label_2ae2e0;
        case 0x2ae2e4u: goto label_2ae2e4;
        default: break;
    }

    ctx->pc = 0x2ae028u;

label_2ae028:
    // 0x2ae028: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ae028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2ae02c:
    // 0x2ae02c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2ae02cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ae030:
    // 0x2ae030: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2ae030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2ae034:
    // 0x2ae034: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ae034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2ae038:
    // 0x2ae038: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ae038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ae03c:
    // 0x2ae03c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ae03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ae040:
    // 0x2ae040: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ae040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ae044:
    // 0x2ae044: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2ae044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2ae048:
    // 0x2ae048: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ae048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ae04c:
    // 0x2ae04c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ae04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2ae050:
    // 0x2ae050: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ae050u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2ae054:
    // 0x2ae054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ae054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2ae058:
    // 0x2ae058: 0x12400099  beqz        $s2, . + 4 + (0x99 << 2)
label_2ae05c:
    if (ctx->pc == 0x2AE05Cu) {
        ctx->pc = 0x2AE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE058u;
        // 0x2ae05c: 0xe7b50078  swc1        $f21, 0x78($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE060u;
        goto label_2ae060;
    }
    ctx->pc = 0x2AE058u;
    {
        const bool branch_taken_0x2ae058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE058u;
        // 0x2ae05c: 0xe7b50078  swc1        $f21, 0x78($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae058) {
            ctx->pc = 0x2AE2C0u;
            goto label_2ae2c0;
        }
    }
    ctx->pc = 0x2AE060u;
label_2ae060:
    // 0x2ae060: 0x11000097  beqz        $t0, . + 4 + (0x97 << 2)
label_2ae064:
    if (ctx->pc == 0x2AE064u) {
        ctx->pc = 0x2AE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE060u;
        // 0x2ae064: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE068u;
        goto label_2ae068;
    }
    ctx->pc = 0x2AE060u;
    {
        const bool branch_taken_0x2ae060 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE060u;
        // 0x2ae064: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae060) {
            ctx->pc = 0x2AE2C0u;
            goto label_2ae2c0;
        }
    }
    ctx->pc = 0x2AE068u;
label_2ae068:
    // 0x2ae068: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ae068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae06c:
    // 0x2ae06c: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2ae06cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2ae070:
    // 0x2ae070: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2ae070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2ae074:
    // 0x2ae074: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ae074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ae078:
    // 0x2ae078: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ae078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ae07c:
    // 0x2ae07c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ae07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2ae080:
    // 0x2ae080: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ae080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2ae084:
    // 0x2ae084: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x2ae084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2ae088:
    // 0x2ae088: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2ae088u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ae08c:
    // 0x2ae08c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2ae08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2ae090:
    // 0x2ae090: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x2ae090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_2ae094:
    // 0x2ae094: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ae094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2ae098:
    // 0x2ae098: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2ae098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2ae09c:
    // 0x2ae09c: 0x11060032  beq         $t0, $a2, . + 4 + (0x32 << 2)
label_2ae0a0:
    if (ctx->pc == 0x2AE0A0u) {
        ctx->pc = 0x2AE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE09Cu;
        // 0x2ae0a0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE0A4u;
        goto label_2ae0a4;
    }
    ctx->pc = 0x2AE09Cu;
    {
        const bool branch_taken_0x2ae09c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x2AE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE09Cu;
        // 0x2ae0a0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae09c) {
            ctx->pc = 0x2AE168u;
            goto label_2ae168;
        }
    }
    ctx->pc = 0x2AE0A4u;
label_2ae0a4:
    // 0x2ae0a4: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x2ae0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
label_2ae0a8:
    // 0x2ae0a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ae0ac:
    if (ctx->pc == 0x2AE0ACu) {
        ctx->pc = 0x2AE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0A8u;
        // 0x2ae0ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE0B0u;
        goto label_2ae0b0;
    }
    ctx->pc = 0x2AE0A8u;
    {
        const bool branch_taken_0x2ae0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0A8u;
        // 0x2ae0ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0a8) {
            ctx->pc = 0x2AE0C0u;
            goto label_2ae0c0;
        }
    }
    ctx->pc = 0x2AE0B0u;
label_2ae0b0:
    // 0x2ae0b0: 0x1102000a  beq         $t0, $v0, . + 4 + (0xA << 2)
label_2ae0b4:
    if (ctx->pc == 0x2AE0B4u) {
        ctx->pc = 0x2AE0B8u;
        goto label_2ae0b8;
    }
    ctx->pc = 0x2AE0B0u;
    {
        const bool branch_taken_0x2ae0b0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ae0b0) {
            ctx->pc = 0x2AE0DCu;
            goto label_2ae0dc;
        }
    }
    ctx->pc = 0x2AE0B8u;
label_2ae0b8:
    // 0x2ae0b8: 0x10000082  b           . + 4 + (0x82 << 2)
label_2ae0bc:
    if (ctx->pc == 0x2AE0BCu) {
        ctx->pc = 0x2AE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0B8u;
        // 0x2ae0bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE0C0u;
        goto label_2ae0c0;
    }
    ctx->pc = 0x2AE0B8u;
    {
        const bool branch_taken_0x2ae0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0B8u;
        // 0x2ae0bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0b8) {
            ctx->pc = 0x2AE2C4u;
            goto label_2ae2c4;
        }
    }
    ctx->pc = 0x2AE0C0u;
label_2ae0c0:
    // 0x2ae0c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ae0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ae0c4:
    // 0x2ae0c4: 0x11020043  beq         $t0, $v0, . + 4 + (0x43 << 2)
label_2ae0c8:
    if (ctx->pc == 0x2AE0C8u) {
        ctx->pc = 0x2AE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0C4u;
        // 0x2ae0c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE0CCu;
        goto label_2ae0cc;
    }
    ctx->pc = 0x2AE0C4u;
    {
        const bool branch_taken_0x2ae0c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0C4u;
        // 0x2ae0c8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0c4) {
            ctx->pc = 0x2AE1D4u;
            goto label_2ae1d4;
        }
    }
    ctx->pc = 0x2AE0CCu;
label_2ae0cc:
    // 0x2ae0cc: 0x11020055  beq         $t0, $v0, . + 4 + (0x55 << 2)
label_2ae0d0:
    if (ctx->pc == 0x2AE0D0u) {
        ctx->pc = 0x2AE0D4u;
        goto label_2ae0d4;
    }
    ctx->pc = 0x2AE0CCu;
    {
        const bool branch_taken_0x2ae0cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ae0cc) {
            ctx->pc = 0x2AE224u;
            goto label_2ae224;
        }
    }
    ctx->pc = 0x2AE0D4u;
label_2ae0d4:
    // 0x2ae0d4: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2ae0d8:
    if (ctx->pc == 0x2AE0D8u) {
        ctx->pc = 0x2AE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0D4u;
        // 0x2ae0d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE0DCu;
        goto label_2ae0dc;
    }
    ctx->pc = 0x2AE0D4u;
    {
        const bool branch_taken_0x2ae0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0D4u;
        // 0x2ae0d8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0d4) {
            ctx->pc = 0x2AE2C4u;
            goto label_2ae2c4;
        }
    }
    ctx->pc = 0x2AE0DCu;
label_2ae0dc:
    // 0x2ae0dc: 0xc08bfa0  jal         func_22FE80
label_2ae0e0:
    if (ctx->pc == 0x2AE0E0u) {
        ctx->pc = 0x2AE0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0DCu;
        // 0x2ae0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE0E4u;
        goto label_2ae0e4;
    }
    ctx->pc = 0x2AE0DCu;
    SET_GPR_U32(ctx, 31, 0x2AE0E4u);
    ctx->pc = 0x2AE0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE0DCu;
    // 0x2ae0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2AE0DCu, 0x2AE0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE0E4u;
label_2ae0e4:
    // 0x2ae0e4: 0x56600011  bnel        $s3, $zero, . + 4 + (0x11 << 2)
label_2ae0e8:
    if (ctx->pc == 0x2AE0E8u) {
        ctx->pc = 0x2AE0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0E4u;
        // 0x2ae0e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE0ECu;
        goto label_2ae0ec;
    }
    ctx->pc = 0x2AE0E4u;
    {
        const bool branch_taken_0x2ae0e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae0e4) {
            ctx->pc = 0x2AE0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE0E4u;
            // 0x2ae0e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE12Cu;
            goto label_2ae12c;
        }
    }
    ctx->pc = 0x2AE0ECu;
label_2ae0ec:
    // 0x2ae0ec: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2ae0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae0f0:
    // 0x2ae0f0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ae0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae0f4:
    // 0x2ae0f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ae0f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ae0f8:
    // 0x2ae0f8: 0x0  nop
    ctx->pc = 0x2ae0f8u;
    // NOP
label_2ae0fc:
    // 0x2ae0fc: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_2ae100:
    if (ctx->pc == 0x2AE100u) {
        ctx->pc = 0x2AE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE0FCu;
        // 0x2ae100: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE104u;
        goto label_2ae104;
    }
    ctx->pc = 0x2AE0FCu;
    {
        const bool branch_taken_0x2ae0fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ae0fc) {
            ctx->pc = 0x2AE100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE0FCu;
            // 0x2ae100: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE12Cu;
            goto label_2ae12c;
        }
    }
    ctx->pc = 0x2AE104u;
label_2ae104:
    // 0x2ae104: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2ae104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2ae108:
    // 0x2ae108: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ae108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ae10c:
    // 0x2ae10c: 0x0  nop
    ctx->pc = 0x2ae10cu;
    // NOP
label_2ae110:
    // 0x2ae110: 0x0  nop
    ctx->pc = 0x2ae110u;
    // NOP
label_2ae114:
    // 0x2ae114: 0x46140044  c1          0x140044
    ctx->pc = 0x2ae114u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2ae118:
    // 0x2ae118: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ae11c:
    // 0x2ae11c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ae11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ae120:
    // 0x2ae120: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2ae120u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ae124:
    // 0x2ae124: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ae128:
    if (ctx->pc == 0x2AE128u) {
        ctx->pc = 0x2AE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE124u;
        // 0x2ae128: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE12Cu;
        goto label_2ae12c;
    }
    ctx->pc = 0x2AE124u;
    {
        const bool branch_taken_0x2ae124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE124u;
        // 0x2ae128: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae124) {
            ctx->pc = 0x2AE134u;
            goto label_2ae134;
        }
    }
    ctx->pc = 0x2AE12Cu;
label_2ae12c:
    // 0x2ae12c: 0xc4550140  lwc1        $f21, 0x140($v0)
    ctx->pc = 0x2ae12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ae130:
    // 0x2ae130: 0xc454013c  lwc1        $f20, 0x13C($v0)
    ctx->pc = 0x2ae130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ae134:
    // 0x2ae134: 0xc0a367c  jal         func_28D9F0
label_2ae138:
    if (ctx->pc == 0x2AE138u) {
        ctx->pc = 0x2AE138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE134u;
        // 0x2ae138: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE13Cu;
        goto label_2ae13c;
    }
    ctx->pc = 0x2AE134u;
    SET_GPR_U32(ctx, 31, 0x2AE13Cu);
    ctx->pc = 0x2AE138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE134u;
    // 0x2ae138: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE134u, 0x2AE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE13Cu;
label_2ae13c:
    // 0x2ae13c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_2ae140:
    if (ctx->pc == 0x2AE140u) {
        ctx->pc = 0x2AE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE13Cu;
        // 0x2ae140: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE144u;
        goto label_2ae144;
    }
    ctx->pc = 0x2AE13Cu;
    {
        const bool branch_taken_0x2ae13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE13Cu;
        // 0x2ae140: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae13c) {
            ctx->pc = 0x2AE2C0u;
            goto label_2ae2c0;
        }
    }
    ctx->pc = 0x2AE144u;
label_2ae144:
    // 0x2ae144: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ae144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae148:
    // 0x2ae148: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ae148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ae14c:
    // 0x2ae14c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ae14cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ae150:
    // 0x2ae150: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2ae150u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2ae154:
    // 0x2ae154: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ae154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ae158:
    // 0x2ae158: 0xc0bf3d4  jal         func_2FCF50
label_2ae15c:
    if (ctx->pc == 0x2AE15Cu) {
        ctx->pc = 0x2AE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE158u;
        // 0x2ae15c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE160u;
        goto label_2ae160;
    }
    ctx->pc = 0x2AE158u;
    SET_GPR_U32(ctx, 31, 0x2AE160u);
    ctx->pc = 0x2AE15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE158u;
    // 0x2ae15c: 0x240807d0  addiu       $t0, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2AE158u, 0x2AE160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE160u;
label_2ae160:
    // 0x2ae160: 0x10000058  b           . + 4 + (0x58 << 2)
label_2ae164:
    if (ctx->pc == 0x2AE164u) {
        ctx->pc = 0x2AE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE160u;
        // 0x2ae164: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE168u;
        goto label_2ae168;
    }
    ctx->pc = 0x2AE160u;
    {
        const bool branch_taken_0x2ae160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE160u;
        // 0x2ae164: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae160) {
            ctx->pc = 0x2AE2C4u;
            goto label_2ae2c4;
        }
    }
    ctx->pc = 0x2AE168u;
label_2ae168:
    // 0x2ae168: 0xc08bfa0  jal         func_22FE80
label_2ae16c:
    if (ctx->pc == 0x2AE16Cu) {
        ctx->pc = 0x2AE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE168u;
        // 0x2ae16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE170u;
        goto label_2ae170;
    }
    ctx->pc = 0x2AE168u;
    SET_GPR_U32(ctx, 31, 0x2AE170u);
    ctx->pc = 0x2AE16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE168u;
    // 0x2ae16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2AE168u, 0x2AE170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE170u;
label_2ae170:
    // 0x2ae170: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2ae170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ae174:
    // 0x2ae174: 0x0  nop
    ctx->pc = 0x2ae174u;
    // NOP
label_2ae178:
    // 0x2ae178: 0x0  nop
    ctx->pc = 0x2ae178u;
    // NOP
label_2ae17c:
    // 0x2ae17c: 0x46140004  c1          0x140004
    ctx->pc = 0x2ae17cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2ae180:
    // 0x2ae180: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ae180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae184:
    // 0x2ae184: 0xc0a367c  jal         func_28D9F0
label_2ae188:
    if (ctx->pc == 0x2AE188u) {
        ctx->pc = 0x2AE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE184u;
        // 0x2ae188: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE18Cu;
        goto label_2ae18c;
    }
    ctx->pc = 0x2AE184u;
    SET_GPR_U32(ctx, 31, 0x2AE18Cu);
    ctx->pc = 0x2AE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE184u;
    // 0x2ae188: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE184u, 0x2AE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE18Cu;
label_2ae18c:
    // 0x2ae18c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2ae190:
    if (ctx->pc == 0x2AE190u) {
        ctx->pc = 0x2AE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE18Cu;
        // 0x2ae190: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE194u;
        goto label_2ae194;
    }
    ctx->pc = 0x2AE18Cu;
    {
        const bool branch_taken_0x2ae18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE18Cu;
        // 0x2ae190: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae18c) {
            ctx->pc = 0x2AE1B8u;
            goto label_2ae1b8;
        }
    }
    ctx->pc = 0x2AE194u;
label_2ae194:
    // 0x2ae194: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ae194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2ae198:
    // 0x2ae198: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2ae198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ae19c:
    // 0x2ae19c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ae19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae1a0:
    // 0x2ae1a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae1a4:
    // 0x2ae1a4: 0x460d6340  add.s       $f13, $f12, $f13
    ctx->pc = 0x2ae1a4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_2ae1a8:
    // 0x2ae1a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ae1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ae1ac:
    // 0x2ae1ac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ae1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ae1b0:
    // 0x2ae1b0: 0xc0bf3d4  jal         func_2FCF50
label_2ae1b4:
    if (ctx->pc == 0x2AE1B4u) {
        ctx->pc = 0x2AE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1B0u;
        // 0x2ae1b4: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE1B8u;
        goto label_2ae1b8;
    }
    ctx->pc = 0x2AE1B0u;
    SET_GPR_U32(ctx, 31, 0x2AE1B8u);
    ctx->pc = 0x2AE1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1B0u;
    // 0x2ae1b4: 0x24080bb8  addiu       $t0, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2AE1B0u, 0x2AE1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1B8u;
label_2ae1b8:
    // 0x2ae1b8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2ae1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ae1bc:
    // 0x2ae1bc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2ae1bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2ae1c0:
    // 0x2ae1c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ae1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ae1c4:
    // 0x2ae1c4: 0x0  nop
    ctx->pc = 0x2ae1c4u;
    // NOP
label_2ae1c8:
    // 0x2ae1c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae1c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2ae1cc:
    // 0x2ae1cc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2ae1d0:
    if (ctx->pc == 0x2AE1D0u) {
        ctx->pc = 0x2AE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1CCu;
        // 0x2ae1d0: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE1D4u;
        goto label_2ae1d4;
    }
    ctx->pc = 0x2AE1CCu;
    {
        const bool branch_taken_0x2ae1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1CCu;
        // 0x2ae1d0: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae1cc) {
            ctx->pc = 0x2AE2C0u;
            goto label_2ae2c0;
        }
    }
    ctx->pc = 0x2AE1D4u;
label_2ae1d4:
    // 0x2ae1d4: 0xc08bfa0  jal         func_22FE80
label_2ae1d8:
    if (ctx->pc == 0x2AE1D8u) {
        ctx->pc = 0x2AE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1D4u;
        // 0x2ae1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE1DCu;
        goto label_2ae1dc;
    }
    ctx->pc = 0x2AE1D4u;
    SET_GPR_U32(ctx, 31, 0x2AE1DCu);
    ctx->pc = 0x2AE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1D4u;
    // 0x2ae1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2AE1D4u, 0x2AE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1DCu;
label_2ae1dc:
    // 0x2ae1dc: 0xc0a367c  jal         func_28D9F0
label_2ae1e0:
    if (ctx->pc == 0x2AE1E0u) {
        ctx->pc = 0x2AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1DCu;
        // 0x2ae1e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE1E4u;
        goto label_2ae1e4;
    }
    ctx->pc = 0x2AE1DCu;
    SET_GPR_U32(ctx, 31, 0x2AE1E4u);
    ctx->pc = 0x2AE1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1DCu;
    // 0x2ae1e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE1DCu, 0x2AE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1E4u;
label_2ae1e4:
    // 0x2ae1e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ae1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae1e8:
    // 0x2ae1e8: 0x52000036  beql        $s0, $zero, . + 4 + (0x36 << 2)
label_2ae1ec:
    if (ctx->pc == 0x2AE1ECu) {
        ctx->pc = 0x2AE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1E8u;
        // 0x2ae1ec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE1F0u;
        goto label_2ae1f0;
    }
    ctx->pc = 0x2AE1E8u;
    {
        const bool branch_taken_0x2ae1e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae1e8) {
            ctx->pc = 0x2AE1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE1E8u;
            // 0x2ae1ec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE2C4u;
            goto label_2ae2c4;
        }
    }
    ctx->pc = 0x2AE1F0u;
label_2ae1f0:
    // 0x2ae1f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ae1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2ae1f4:
    // 0x2ae1f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ae1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ae1f8:
    // 0x2ae1f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ae1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ae1fc:
    // 0x2ae1fc: 0x40f809  jalr        $v0
label_2ae200:
    if (ctx->pc == 0x2AE200u) {
        ctx->pc = 0x2AE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1FCu;
        // 0x2ae200: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE204u;
        goto label_2ae204;
    }
    ctx->pc = 0x2AE1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AE204u);
        ctx->pc = 0x2AE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE1FCu;
        // 0x2ae200: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE1FCu, 0x2AE204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE204u;
label_2ae204:
    // 0x2ae204: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ae204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae208:
    // 0x2ae208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ae208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ae20c:
    // 0x2ae20c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ae20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae210:
    // 0x2ae210: 0x240707d0  addiu       $a3, $zero, 0x7D0
    ctx->pc = 0x2ae210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2ae214:
    // 0x2ae214: 0xc0bfabe  jal         func_2FEAF8
label_2ae218:
    if (ctx->pc == 0x2AE218u) {
        ctx->pc = 0x2AE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE214u;
        // 0x2ae218: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE21Cu;
        goto label_2ae21c;
    }
    ctx->pc = 0x2AE214u;
    SET_GPR_U32(ctx, 31, 0x2AE21Cu);
    ctx->pc = 0x2AE218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE214u;
    // 0x2ae218: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEAF8u, 0x2AE214u, 0x2AE21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE21Cu;
label_2ae21c:
    // 0x2ae21c: 0x10000029  b           . + 4 + (0x29 << 2)
label_2ae220:
    if (ctx->pc == 0x2AE220u) {
        ctx->pc = 0x2AE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE21Cu;
        // 0x2ae220: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE224u;
        goto label_2ae224;
    }
    ctx->pc = 0x2AE21Cu;
    {
        const bool branch_taken_0x2ae21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE21Cu;
        // 0x2ae220: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae21c) {
            ctx->pc = 0x2AE2C4u;
            goto label_2ae2c4;
        }
    }
    ctx->pc = 0x2AE224u;
label_2ae224:
    // 0x2ae224: 0xc08bfa0  jal         func_22FE80
label_2ae228:
    if (ctx->pc == 0x2AE228u) {
        ctx->pc = 0x2AE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE224u;
        // 0x2ae228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE22Cu;
        goto label_2ae22c;
    }
    ctx->pc = 0x2AE224u;
    SET_GPR_U32(ctx, 31, 0x2AE22Cu);
    ctx->pc = 0x2AE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE224u;
    // 0x2ae228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2AE224u, 0x2AE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE22Cu;
label_2ae22c:
    // 0x2ae22c: 0xc0a367c  jal         func_28D9F0
label_2ae230:
    if (ctx->pc == 0x2AE230u) {
        ctx->pc = 0x2AE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE22Cu;
        // 0x2ae230: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE234u;
        goto label_2ae234;
    }
    ctx->pc = 0x2AE22Cu;
    SET_GPR_U32(ctx, 31, 0x2AE234u);
    ctx->pc = 0x2AE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE22Cu;
    // 0x2ae230: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE22Cu, 0x2AE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE234u;
label_2ae234:
    // 0x2ae234: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ae234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ae238:
    // 0x2ae238: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_2ae23c:
    if (ctx->pc == 0x2AE23Cu) {
        ctx->pc = 0x2AE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE238u;
        // 0x2ae23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE240u;
        goto label_2ae240;
    }
    ctx->pc = 0x2AE238u;
    {
        const bool branch_taken_0x2ae238 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE238u;
        // 0x2ae23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae238) {
            ctx->pc = 0x2AE260u;
            goto label_2ae260;
        }
    }
    ctx->pc = 0x2AE240u;
label_2ae240:
    // 0x2ae240: 0xc0884f6  jal         func_2213D8
label_2ae244:
    if (ctx->pc == 0x2AE244u) {
        ctx->pc = 0x2AE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE240u;
        // 0x2ae244: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE248u;
        goto label_2ae248;
    }
    ctx->pc = 0x2AE240u;
    SET_GPR_U32(ctx, 31, 0x2AE248u);
    ctx->pc = 0x2AE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE240u;
    // 0x2ae244: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2AE240u, 0x2AE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE248u;
label_2ae248:
    // 0x2ae248: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ae248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae24c:
    // 0x2ae24c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ae24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ae250:
    // 0x2ae250: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ae250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ae254:
    // 0x2ae254: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ae254u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2ae258:
    // 0x2ae258: 0xc0bf800  jal         func_2FE000
label_2ae25c:
    if (ctx->pc == 0x2AE25Cu) {
        ctx->pc = 0x2AE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE258u;
        // 0x2ae25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE260u;
        goto label_2ae260;
    }
    ctx->pc = 0x2AE258u;
    SET_GPR_U32(ctx, 31, 0x2AE260u);
    ctx->pc = 0x2AE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE258u;
    // 0x2ae25c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2AE258u, 0x2AE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE260u;
label_2ae260:
    // 0x2ae260: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ae260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae264:
    // 0x2ae264: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ae264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ae268:
    // 0x2ae268: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ae268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ae26c:
    // 0x2ae26c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ae270:
    if (ctx->pc == 0x2AE270u) {
        ctx->pc = 0x2AE274u;
        goto label_2ae274;
    }
    ctx->pc = 0x2AE26Cu;
    {
        const bool branch_taken_0x2ae26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae26c) {
            ctx->pc = 0x2AE2A4u;
            goto label_2ae2a4;
        }
    }
    ctx->pc = 0x2AE274u;
label_2ae274:
    // 0x2ae274: 0xc0a367c  jal         func_28D9F0
label_2ae278:
    if (ctx->pc == 0x2AE278u) {
        ctx->pc = 0x2AE27Cu;
        goto label_2ae27c;
    }
    ctx->pc = 0x2AE274u;
    SET_GPR_U32(ctx, 31, 0x2AE27Cu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE274u, 0x2AE27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE27Cu;
label_2ae27c:
    // 0x2ae27c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2ae280:
    if (ctx->pc == 0x2AE280u) {
        ctx->pc = 0x2AE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE27Cu;
        // 0x2ae280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE284u;
        goto label_2ae284;
    }
    ctx->pc = 0x2AE27Cu;
    {
        const bool branch_taken_0x2ae27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE27Cu;
        // 0x2ae280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae27c) {
            ctx->pc = 0x2AE2C0u;
            goto label_2ae2c0;
        }
    }
    ctx->pc = 0x2AE284u;
label_2ae284:
    // 0x2ae284: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ae284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae288:
    // 0x2ae288: 0x2406025b  addiu       $a2, $zero, 0x25B
    ctx->pc = 0x2ae288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 603));
label_2ae28c:
    // 0x2ae28c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae290:
    // 0x2ae290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ae290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae294:
    // 0x2ae294: 0xc0be7d2  jal         func_2F9F48
label_2ae298:
    if (ctx->pc == 0x2AE298u) {
        ctx->pc = 0x2AE298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE294u;
        // 0x2ae298: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE29Cu;
        goto label_2ae29c;
    }
    ctx->pc = 0x2AE294u;
    SET_GPR_U32(ctx, 31, 0x2AE29Cu);
    ctx->pc = 0x2AE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE294u;
    // 0x2ae298: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F48u, 0x2AE294u, 0x2AE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE29Cu;
label_2ae29c:
    // 0x2ae29c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2ae2a0:
    if (ctx->pc == 0x2AE2A0u) {
        ctx->pc = 0x2AE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE29Cu;
        // 0x2ae2a0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE2A4u;
        goto label_2ae2a4;
    }
    ctx->pc = 0x2AE29Cu;
    {
        const bool branch_taken_0x2ae29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE29Cu;
        // 0x2ae2a0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae29c) {
            ctx->pc = 0x2AE2C4u;
            goto label_2ae2c4;
        }
    }
    ctx->pc = 0x2AE2A4u;
label_2ae2a4:
    // 0x2ae2a4: 0xc0a367c  jal         func_28D9F0
label_2ae2a8:
    if (ctx->pc == 0x2AE2A8u) {
        ctx->pc = 0x2AE2ACu;
        goto label_2ae2ac;
    }
    ctx->pc = 0x2AE2A4u;
    SET_GPR_U32(ctx, 31, 0x2AE2ACu);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2AE2A4u, 0x2AE2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2ACu;
label_2ae2ac:
    // 0x2ae2ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ae2b0:
    if (ctx->pc == 0x2AE2B0u) {
        ctx->pc = 0x2AE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2ACu;
        // 0x2ae2b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE2B4u;
        goto label_2ae2b4;
    }
    ctx->pc = 0x2AE2ACu;
    {
        const bool branch_taken_0x2ae2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2ACu;
        // 0x2ae2b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae2ac) {
            ctx->pc = 0x2AE2C0u;
            goto label_2ae2c0;
        }
    }
    ctx->pc = 0x2AE2B4u;
label_2ae2b4:
    // 0x2ae2b4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2ae2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ae2b8:
    // 0x2ae2b8: 0xc0bebdc  jal         func_2FAF70
label_2ae2bc:
    if (ctx->pc == 0x2AE2BCu) {
        ctx->pc = 0x2AE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2B8u;
        // 0x2ae2bc: 0x24060bb8  addiu       $a2, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE2C0u;
        goto label_2ae2c0;
    }
    ctx->pc = 0x2AE2B8u;
    SET_GPR_U32(ctx, 31, 0x2AE2C0u);
    ctx->pc = 0x2AE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE2B8u;
    // 0x2ae2bc: 0x24060bb8  addiu       $a2, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAF70u, 0x2AE2B8u, 0x2AE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2C0u;
label_2ae2c0:
    // 0x2ae2c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ae2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ae2c4:
    // 0x2ae2c4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ae2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ae2c8:
    // 0x2ae2c8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ae2c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ae2cc:
    // 0x2ae2cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ae2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ae2d0:
    // 0x2ae2d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ae2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ae2d4:
    // 0x2ae2d4: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2ae2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ae2d8:
    // 0x2ae2d8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ae2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ae2dc:
    // 0x2ae2dc: 0x3e00008  jr          $ra
label_2ae2e0:
    if (ctx->pc == 0x2AE2E0u) {
        ctx->pc = 0x2AE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2DCu;
        // 0x2ae2e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AE2E4u;
        goto label_2ae2e4;
    }
    ctx->pc = 0x2AE2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE2DCu;
        // 0x2ae2e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE2E4u;
label_2ae2e4:
    // 0x2ae2e4: 0x0  nop
    ctx->pc = 0x2ae2e4u;
    // NOP
    ctx->pc = 0x2ae2e8u;
}
