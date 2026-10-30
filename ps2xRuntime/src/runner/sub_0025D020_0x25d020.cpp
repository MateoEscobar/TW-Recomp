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

// Function: sub_0025D020
// Address: 0x25d020 - 0x25d2d0
void sub_0025D020_0x25d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D020_0x25d020");
#endif

    switch (ctx->pc) {
        case 0x25d020u: goto label_25d020;
        case 0x25d024u: goto label_25d024;
        case 0x25d028u: goto label_25d028;
        case 0x25d02cu: goto label_25d02c;
        case 0x25d030u: goto label_25d030;
        case 0x25d034u: goto label_25d034;
        case 0x25d038u: goto label_25d038;
        case 0x25d03cu: goto label_25d03c;
        case 0x25d040u: goto label_25d040;
        case 0x25d044u: goto label_25d044;
        case 0x25d048u: goto label_25d048;
        case 0x25d04cu: goto label_25d04c;
        case 0x25d050u: goto label_25d050;
        case 0x25d054u: goto label_25d054;
        case 0x25d058u: goto label_25d058;
        case 0x25d05cu: goto label_25d05c;
        case 0x25d060u: goto label_25d060;
        case 0x25d064u: goto label_25d064;
        case 0x25d068u: goto label_25d068;
        case 0x25d06cu: goto label_25d06c;
        case 0x25d070u: goto label_25d070;
        case 0x25d074u: goto label_25d074;
        case 0x25d078u: goto label_25d078;
        case 0x25d07cu: goto label_25d07c;
        case 0x25d080u: goto label_25d080;
        case 0x25d084u: goto label_25d084;
        case 0x25d088u: goto label_25d088;
        case 0x25d08cu: goto label_25d08c;
        case 0x25d090u: goto label_25d090;
        case 0x25d094u: goto label_25d094;
        case 0x25d098u: goto label_25d098;
        case 0x25d09cu: goto label_25d09c;
        case 0x25d0a0u: goto label_25d0a0;
        case 0x25d0a4u: goto label_25d0a4;
        case 0x25d0a8u: goto label_25d0a8;
        case 0x25d0acu: goto label_25d0ac;
        case 0x25d0b0u: goto label_25d0b0;
        case 0x25d0b4u: goto label_25d0b4;
        case 0x25d0b8u: goto label_25d0b8;
        case 0x25d0bcu: goto label_25d0bc;
        case 0x25d0c0u: goto label_25d0c0;
        case 0x25d0c4u: goto label_25d0c4;
        case 0x25d0c8u: goto label_25d0c8;
        case 0x25d0ccu: goto label_25d0cc;
        case 0x25d0d0u: goto label_25d0d0;
        case 0x25d0d4u: goto label_25d0d4;
        case 0x25d0d8u: goto label_25d0d8;
        case 0x25d0dcu: goto label_25d0dc;
        case 0x25d0e0u: goto label_25d0e0;
        case 0x25d0e4u: goto label_25d0e4;
        case 0x25d0e8u: goto label_25d0e8;
        case 0x25d0ecu: goto label_25d0ec;
        case 0x25d0f0u: goto label_25d0f0;
        case 0x25d0f4u: goto label_25d0f4;
        case 0x25d0f8u: goto label_25d0f8;
        case 0x25d0fcu: goto label_25d0fc;
        case 0x25d100u: goto label_25d100;
        case 0x25d104u: goto label_25d104;
        case 0x25d108u: goto label_25d108;
        case 0x25d10cu: goto label_25d10c;
        case 0x25d110u: goto label_25d110;
        case 0x25d114u: goto label_25d114;
        case 0x25d118u: goto label_25d118;
        case 0x25d11cu: goto label_25d11c;
        case 0x25d120u: goto label_25d120;
        case 0x25d124u: goto label_25d124;
        case 0x25d128u: goto label_25d128;
        case 0x25d12cu: goto label_25d12c;
        case 0x25d130u: goto label_25d130;
        case 0x25d134u: goto label_25d134;
        case 0x25d138u: goto label_25d138;
        case 0x25d13cu: goto label_25d13c;
        case 0x25d140u: goto label_25d140;
        case 0x25d144u: goto label_25d144;
        case 0x25d148u: goto label_25d148;
        case 0x25d14cu: goto label_25d14c;
        case 0x25d150u: goto label_25d150;
        case 0x25d154u: goto label_25d154;
        case 0x25d158u: goto label_25d158;
        case 0x25d15cu: goto label_25d15c;
        case 0x25d160u: goto label_25d160;
        case 0x25d164u: goto label_25d164;
        case 0x25d168u: goto label_25d168;
        case 0x25d16cu: goto label_25d16c;
        case 0x25d170u: goto label_25d170;
        case 0x25d174u: goto label_25d174;
        case 0x25d178u: goto label_25d178;
        case 0x25d17cu: goto label_25d17c;
        case 0x25d180u: goto label_25d180;
        case 0x25d184u: goto label_25d184;
        case 0x25d188u: goto label_25d188;
        case 0x25d18cu: goto label_25d18c;
        case 0x25d190u: goto label_25d190;
        case 0x25d194u: goto label_25d194;
        case 0x25d198u: goto label_25d198;
        case 0x25d19cu: goto label_25d19c;
        case 0x25d1a0u: goto label_25d1a0;
        case 0x25d1a4u: goto label_25d1a4;
        case 0x25d1a8u: goto label_25d1a8;
        case 0x25d1acu: goto label_25d1ac;
        case 0x25d1b0u: goto label_25d1b0;
        case 0x25d1b4u: goto label_25d1b4;
        case 0x25d1b8u: goto label_25d1b8;
        case 0x25d1bcu: goto label_25d1bc;
        case 0x25d1c0u: goto label_25d1c0;
        case 0x25d1c4u: goto label_25d1c4;
        case 0x25d1c8u: goto label_25d1c8;
        case 0x25d1ccu: goto label_25d1cc;
        case 0x25d1d0u: goto label_25d1d0;
        case 0x25d1d4u: goto label_25d1d4;
        case 0x25d1d8u: goto label_25d1d8;
        case 0x25d1dcu: goto label_25d1dc;
        case 0x25d1e0u: goto label_25d1e0;
        case 0x25d1e4u: goto label_25d1e4;
        case 0x25d1e8u: goto label_25d1e8;
        case 0x25d1ecu: goto label_25d1ec;
        case 0x25d1f0u: goto label_25d1f0;
        case 0x25d1f4u: goto label_25d1f4;
        case 0x25d1f8u: goto label_25d1f8;
        case 0x25d1fcu: goto label_25d1fc;
        case 0x25d200u: goto label_25d200;
        case 0x25d204u: goto label_25d204;
        case 0x25d208u: goto label_25d208;
        case 0x25d20cu: goto label_25d20c;
        case 0x25d210u: goto label_25d210;
        case 0x25d214u: goto label_25d214;
        case 0x25d218u: goto label_25d218;
        case 0x25d21cu: goto label_25d21c;
        case 0x25d220u: goto label_25d220;
        case 0x25d224u: goto label_25d224;
        case 0x25d228u: goto label_25d228;
        case 0x25d22cu: goto label_25d22c;
        case 0x25d230u: goto label_25d230;
        case 0x25d234u: goto label_25d234;
        case 0x25d238u: goto label_25d238;
        case 0x25d23cu: goto label_25d23c;
        case 0x25d240u: goto label_25d240;
        case 0x25d244u: goto label_25d244;
        case 0x25d248u: goto label_25d248;
        case 0x25d24cu: goto label_25d24c;
        case 0x25d250u: goto label_25d250;
        case 0x25d254u: goto label_25d254;
        case 0x25d258u: goto label_25d258;
        case 0x25d25cu: goto label_25d25c;
        case 0x25d260u: goto label_25d260;
        case 0x25d264u: goto label_25d264;
        case 0x25d268u: goto label_25d268;
        case 0x25d26cu: goto label_25d26c;
        case 0x25d270u: goto label_25d270;
        case 0x25d274u: goto label_25d274;
        case 0x25d278u: goto label_25d278;
        case 0x25d27cu: goto label_25d27c;
        case 0x25d280u: goto label_25d280;
        case 0x25d284u: goto label_25d284;
        case 0x25d288u: goto label_25d288;
        case 0x25d28cu: goto label_25d28c;
        case 0x25d290u: goto label_25d290;
        case 0x25d294u: goto label_25d294;
        case 0x25d298u: goto label_25d298;
        case 0x25d29cu: goto label_25d29c;
        case 0x25d2a0u: goto label_25d2a0;
        case 0x25d2a4u: goto label_25d2a4;
        case 0x25d2a8u: goto label_25d2a8;
        case 0x25d2acu: goto label_25d2ac;
        case 0x25d2b0u: goto label_25d2b0;
        case 0x25d2b4u: goto label_25d2b4;
        case 0x25d2b8u: goto label_25d2b8;
        case 0x25d2bcu: goto label_25d2bc;
        case 0x25d2c0u: goto label_25d2c0;
        case 0x25d2c4u: goto label_25d2c4;
        case 0x25d2c8u: goto label_25d2c8;
        case 0x25d2ccu: goto label_25d2cc;
        default: break;
    }

    ctx->pc = 0x25d020u;

label_25d020:
    // 0x25d020: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_25d024:
    // 0x25d024: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x25d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_25d028:
    // 0x25d028: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x25d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_25d02c:
    // 0x25d02c: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25d02cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25d030:
    // 0x25d030: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x25d030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_25d034:
    // 0x25d034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d038:
    // 0x25d038: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x25d038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_25d03c:
    // 0x25d03c: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25d03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25d040:
    // 0x25d040: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25d044:
    // 0x25d044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d048:
    // 0x25d048: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x25d048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_25d04c:
    // 0x25d04c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25d04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25d050:
    // 0x25d050: 0xc041532  jal         func_1054C8
label_25d054:
    if (ctx->pc == 0x25D054u) {
        ctx->pc = 0x25D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D050u;
        // 0x25d054: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D058u;
        goto label_25d058;
    }
    ctx->pc = 0x25D050u;
    SET_GPR_U32(ctx, 31, 0x25D058u);
    ctx->pc = 0x25D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D050u;
    // 0x25d054: 0x8e3300d8  lw          $s3, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25D050u, 0x25D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D058u;
label_25d058:
    // 0x25d058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d05c:
    // 0x25d05c: 0xc041532  jal         func_1054C8
label_25d060:
    if (ctx->pc == 0x25D060u) {
        ctx->pc = 0x25D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D05Cu;
        // 0x25d060: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D064u;
        goto label_25d064;
    }
    ctx->pc = 0x25D05Cu;
    SET_GPR_U32(ctx, 31, 0x25D064u);
    ctx->pc = 0x25D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D05Cu;
    // 0x25d060: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25D05Cu, 0x25D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D064u;
label_25d064:
    // 0x25d064: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25d064u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d068:
    // 0x25d068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d06c:
    // 0x25d06c: 0xc089998  jal         func_226660
label_25d070:
    if (ctx->pc == 0x25D070u) {
        ctx->pc = 0x25D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D06Cu;
        // 0x25d070: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D074u;
        goto label_25d074;
    }
    ctx->pc = 0x25D06Cu;
    SET_GPR_U32(ctx, 31, 0x25D074u);
    ctx->pc = 0x25D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D06Cu;
    // 0x25d070: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25D06Cu, 0x25D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D074u;
label_25d074:
    // 0x25d074: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_25d078:
    if (ctx->pc == 0x25D078u) {
        ctx->pc = 0x25D07Cu;
        goto label_25d07c;
    }
    ctx->pc = 0x25D074u;
    {
        const bool branch_taken_0x25d074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d074) {
            ctx->pc = 0x25D09Cu;
            goto label_25d09c;
        }
    }
    ctx->pc = 0x25D07Cu;
label_25d07c:
    // 0x25d07c: 0xc088ed2  jal         func_223B48
label_25d080:
    if (ctx->pc == 0x25D080u) {
        ctx->pc = 0x25D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D07Cu;
        // 0x25d080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D084u;
        goto label_25d084;
    }
    ctx->pc = 0x25D07Cu;
    SET_GPR_U32(ctx, 31, 0x25D084u);
    ctx->pc = 0x25D080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D07Cu;
    // 0x25d080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x25D07Cu, 0x25D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D084u;
label_25d084:
    // 0x25d084: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_25d088:
    if (ctx->pc == 0x25D088u) {
        ctx->pc = 0x25D08Cu;
        goto label_25d08c;
    }
    ctx->pc = 0x25D084u;
    {
        const bool branch_taken_0x25d084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d084) {
            ctx->pc = 0x25D09Cu;
            goto label_25d09c;
        }
    }
    ctx->pc = 0x25D08Cu;
label_25d08c:
    // 0x25d08c: 0xc089f98  jal         func_227E60
label_25d090:
    if (ctx->pc == 0x25D090u) {
        ctx->pc = 0x25D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D08Cu;
        // 0x25d090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D094u;
        goto label_25d094;
    }
    ctx->pc = 0x25D08Cu;
    SET_GPR_U32(ctx, 31, 0x25D094u);
    ctx->pc = 0x25D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D08Cu;
    // 0x25d090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x25D08Cu, 0x25D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D094u;
label_25d094:
    // 0x25d094: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_25d098:
    if (ctx->pc == 0x25D098u) {
        ctx->pc = 0x25D09Cu;
        goto label_25d09c;
    }
    ctx->pc = 0x25D094u;
    {
        const bool branch_taken_0x25d094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d094) {
            ctx->pc = 0x25D0F4u;
            goto label_25d0f4;
        }
    }
    ctx->pc = 0x25D09Cu;
label_25d09c:
    // 0x25d09c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x25d09cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_25d0a0:
    // 0x25d0a0: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x25d0a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_25d0a4:
    // 0x25d0a4: 0xc089974  jal         func_2265D0
label_25d0a8:
    if (ctx->pc == 0x25D0A8u) {
        ctx->pc = 0x25D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0A4u;
        // 0x25d0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0ACu;
        goto label_25d0ac;
    }
    ctx->pc = 0x25D0A4u;
    SET_GPR_U32(ctx, 31, 0x25D0ACu);
    ctx->pc = 0x25D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0A4u;
    // 0x25d0a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x25D0A4u, 0x25D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0ACu;
label_25d0ac:
    // 0x25d0ac: 0xc089a76  jal         func_2269D8
label_25d0b0:
    if (ctx->pc == 0x25D0B0u) {
        ctx->pc = 0x25D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0ACu;
        // 0x25d0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0B4u;
        goto label_25d0b4;
    }
    ctx->pc = 0x25D0ACu;
    SET_GPR_U32(ctx, 31, 0x25D0B4u);
    ctx->pc = 0x25D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0ACu;
    // 0x25d0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x25D0ACu, 0x25D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0B4u;
label_25d0b4:
    // 0x25d0b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d0b8:
    // 0x25d0b8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_25d0bc:
    if (ctx->pc == 0x25D0BCu) {
        ctx->pc = 0x25D0C0u;
        goto label_25d0c0;
    }
    ctx->pc = 0x25D0B8u;
    {
        const bool branch_taken_0x25d0b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d0b8) {
            ctx->pc = 0x25D0F4u;
            goto label_25d0f4;
        }
    }
    ctx->pc = 0x25D0C0u;
label_25d0c0:
    // 0x25d0c0: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x25d0c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_25d0c4:
    // 0x25d0c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x25d0c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_25d0c8:
    // 0x25d0c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_25d0cc:
    if (ctx->pc == 0x25D0CCu) {
        ctx->pc = 0x25D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0C8u;
        // 0x25d0cc: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0D0u;
        goto label_25d0d0;
    }
    ctx->pc = 0x25D0C8u;
    {
        const bool branch_taken_0x25d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0C8u;
        // 0x25d0cc: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d0c8) {
            ctx->pc = 0x25D0F4u;
            goto label_25d0f4;
        }
    }
    ctx->pc = 0x25D0D0u;
label_25d0d0:
    // 0x25d0d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d0d4:
    // 0x25d0d4: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x25d0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_25d0d8:
    // 0x25d0d8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x25d0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_25d0dc:
    // 0x25d0dc: 0xc13b662  jal         func_4ED988
label_25d0e0:
    if (ctx->pc == 0x25D0E0u) {
        ctx->pc = 0x25D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0DCu;
        // 0x25d0e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0E4u;
        goto label_25d0e4;
    }
    ctx->pc = 0x25D0DCu;
    SET_GPR_U32(ctx, 31, 0x25D0E4u);
    ctx->pc = 0x25D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0DCu;
    // 0x25d0e0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED988u, 0x25D0DCu, 0x25D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0E4u;
label_25d0e4:
    // 0x25d0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d0e8:
    // 0x25d0e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25d0e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d0ec:
    // 0x25d0ec: 0xc09933e  jal         func_264CF8
label_25d0f0:
    if (ctx->pc == 0x25D0F0u) {
        ctx->pc = 0x25D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0ECu;
        // 0x25d0f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D0F4u;
        goto label_25d0f4;
    }
    ctx->pc = 0x25D0ECu;
    SET_GPR_U32(ctx, 31, 0x25D0F4u);
    ctx->pc = 0x25D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0ECu;
    // 0x25d0f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264CF8u, 0x25D0ECu, 0x25D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0F4u;
label_25d0f4:
    // 0x25d0f4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x25d0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_25d0f8:
    // 0x25d0f8: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x25d0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_25d0fc:
    // 0x25d0fc: 0xc08997c  jal         func_2265F0
label_25d100:
    if (ctx->pc == 0x25D100u) {
        ctx->pc = 0x25D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0FCu;
        // 0x25d100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D104u;
        goto label_25d104;
    }
    ctx->pc = 0x25D0FCu;
    SET_GPR_U32(ctx, 31, 0x25D104u);
    ctx->pc = 0x25D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0FCu;
    // 0x25d100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25D0FCu, 0x25D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D104u;
label_25d104:
    // 0x25d104: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_25d108:
    if (ctx->pc == 0x25D108u) {
        ctx->pc = 0x25D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D104u;
        // 0x25d108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D10Cu;
        goto label_25d10c;
    }
    ctx->pc = 0x25D104u;
    {
        const bool branch_taken_0x25d104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D104u;
        // 0x25d108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d104) {
            ctx->pc = 0x25D1D4u;
            goto label_25d1d4;
        }
    }
    ctx->pc = 0x25D10Cu;
label_25d10c:
    // 0x25d10c: 0xa22003be  sb          $zero, 0x3BE($s1)
    ctx->pc = 0x25d10cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 958), (uint8_t)GPR_U32(ctx, 0));
label_25d110:
    // 0x25d110: 0xc0899ae  jal         func_2266B8
label_25d114:
    if (ctx->pc == 0x25D114u) {
        ctx->pc = 0x25D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D110u;
        // 0x25d114: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D118u;
        goto label_25d118;
    }
    ctx->pc = 0x25D110u;
    SET_GPR_U32(ctx, 31, 0x25D118u);
    ctx->pc = 0x25D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D110u;
    // 0x25d114: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25D110u, 0x25D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D118u;
label_25d118:
    // 0x25d118: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_25d11c:
    // 0x25d11c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25d11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d120:
    // 0x25d120: 0xc040698  jal         func_101A60
label_25d124:
    if (ctx->pc == 0x25D124u) {
        ctx->pc = 0x25D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D120u;
        // 0x25d124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D128u;
        goto label_25d128;
    }
    ctx->pc = 0x25D120u;
    SET_GPR_U32(ctx, 31, 0x25D128u);
    ctx->pc = 0x25D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D120u;
    // 0x25d124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x25D120u, 0x25D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D128u;
label_25d128:
    // 0x25d128: 0xc05d462  jal         func_175188
label_25d12c:
    if (ctx->pc == 0x25D12Cu) {
        ctx->pc = 0x25D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D128u;
        // 0x25d12c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D130u;
        goto label_25d130;
    }
    ctx->pc = 0x25D128u;
    SET_GPR_U32(ctx, 31, 0x25D130u);
    ctx->pc = 0x25D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D128u;
    // 0x25d12c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175188u, 0x25D128u, 0x25D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D130u;
label_25d130:
    // 0x25d130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d134:
    // 0x25d134: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25d134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25d138:
    // 0x25d138: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x25d138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_25d13c:
    // 0x25d13c: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x25d13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_25d140:
    // 0x25d140: 0x60f809  jalr        $v1
label_25d144:
    if (ctx->pc == 0x25D144u) {
        ctx->pc = 0x25D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D140u;
        // 0x25d144: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D148u;
        goto label_25d148;
    }
    ctx->pc = 0x25D140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25D148u);
        ctx->pc = 0x25D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D140u;
        // 0x25d144: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D140u, 0x25D148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D148u;
label_25d148:
    // 0x25d148: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25d148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25d14c:
    // 0x25d14c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25d14cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25d150:
    // 0x25d150: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x25d150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_25d154:
    // 0x25d154: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x25d154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_25d158:
    // 0x25d158: 0x60f809  jalr        $v1
label_25d15c:
    if (ctx->pc == 0x25D15Cu) {
        ctx->pc = 0x25D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D158u;
        // 0x25d15c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D160u;
        goto label_25d160;
    }
    ctx->pc = 0x25D158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25D160u);
        ctx->pc = 0x25D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D158u;
        // 0x25d15c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D158u, 0x25D160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D160u;
label_25d160:
    // 0x25d160: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x25d160u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_25d164:
    // 0x25d164: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25d164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_25d168:
    // 0x25d168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25d168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25d16c:
    // 0x25d16c: 0x0  nop
    ctx->pc = 0x25d16cu;
    // NOP
label_25d170:
    // 0x25d170: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x25d170u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_25d174:
    // 0x25d174: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x25d174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25d178:
    // 0x25d178: 0x0  nop
    ctx->pc = 0x25d178u;
    // NOP
label_25d17c:
    // 0x25d17c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_25d180:
    if (ctx->pc == 0x25D180u) {
        ctx->pc = 0x25D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D17Cu;
        // 0x25d180: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D184u;
        goto label_25d184;
    }
    ctx->pc = 0x25D17Cu;
    {
        const bool branch_taken_0x25d17c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d17c) {
            ctx->pc = 0x25D180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D17Cu;
            // 0x25d180: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D184u;
            goto label_25d184;
        }
    }
    ctx->pc = 0x25D184u;
label_25d184:
    // 0x25d184: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25d184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_25d188:
    // 0x25d188: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_25d18c:
    if (ctx->pc == 0x25D18Cu) {
        ctx->pc = 0x25D190u;
        goto label_25d190;
    }
    ctx->pc = 0x25D188u;
    {
        const bool branch_taken_0x25d188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d188) {
            ctx->pc = 0x25D1ACu;
            goto label_25d1ac;
        }
    }
    ctx->pc = 0x25D190u;
label_25d190:
    // 0x25d190: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
label_25d194:
    if (ctx->pc == 0x25D194u) {
        ctx->pc = 0x25D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D190u;
        // 0x25d194: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D198u;
        goto label_25d198;
    }
    ctx->pc = 0x25D190u;
    {
        const bool branch_taken_0x25d190 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D190u;
        // 0x25d194: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d190) {
            ctx->pc = 0x25D200u;
            goto label_25d200;
        }
    }
    ctx->pc = 0x25D198u;
label_25d198:
    // 0x25d198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d19c:
    // 0x25d19c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25d19cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25d1a0:
    // 0x25d1a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25d1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d1a4:
    // 0x25d1a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_25d1a8:
    if (ctx->pc == 0x25D1A8u) {
        ctx->pc = 0x25D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1A4u;
        // 0x25d1a8: 0x240601a9  addiu       $a2, $zero, 0x1A9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D1ACu;
        goto label_25d1ac;
    }
    ctx->pc = 0x25D1A4u;
    {
        const bool branch_taken_0x25d1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1A4u;
        // 0x25d1a8: 0x240601a9  addiu       $a2, $zero, 0x1A9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 425));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d1a4) {
            ctx->pc = 0x25D1C4u;
            goto label_25d1c4;
        }
    }
    ctx->pc = 0x25D1ACu;
label_25d1ac:
    // 0x25d1ac: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_25d1b0:
    if (ctx->pc == 0x25D1B0u) {
        ctx->pc = 0x25D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1ACu;
        // 0x25d1b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D1B4u;
        goto label_25d1b4;
    }
    ctx->pc = 0x25D1ACu;
    {
        const bool branch_taken_0x25d1ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1ACu;
        // 0x25d1b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d1ac) {
            ctx->pc = 0x25D200u;
            goto label_25d200;
        }
    }
    ctx->pc = 0x25D1B4u;
label_25d1b4:
    // 0x25d1b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d1b8:
    // 0x25d1b8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25d1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25d1bc:
    // 0x25d1bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25d1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d1c0:
    // 0x25d1c0: 0x240601a6  addiu       $a2, $zero, 0x1A6
    ctx->pc = 0x25d1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
label_25d1c4:
    // 0x25d1c4: 0xc04159e  jal         func_105678
label_25d1c8:
    if (ctx->pc == 0x25D1C8u) {
        ctx->pc = 0x25D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1C4u;
        // 0x25d1c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D1CCu;
        goto label_25d1cc;
    }
    ctx->pc = 0x25D1C4u;
    SET_GPR_U32(ctx, 31, 0x25D1CCu);
    ctx->pc = 0x25D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1C4u;
    // 0x25d1c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25D1C4u, 0x25D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D1CCu;
label_25d1cc:
    // 0x25d1cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_25d1d0:
    if (ctx->pc == 0x25D1D0u) {
        ctx->pc = 0x25D1D4u;
        goto label_25d1d4;
    }
    ctx->pc = 0x25D1CCu;
    {
        const bool branch_taken_0x25d1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d1cc) {
            ctx->pc = 0x25D200u;
            goto label_25d200;
        }
    }
    ctx->pc = 0x25D1D4u;
label_25d1d4:
    // 0x25d1d4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25d1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25d1d8:
    // 0x25d1d8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25d1d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25d1dc:
    // 0x25d1dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25d1dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25d1e0:
    // 0x25d1e0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_25d1e4:
    if (ctx->pc == 0x25D1E4u) {
        ctx->pc = 0x25D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1E0u;
        // 0x25d1e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D1E8u;
        goto label_25d1e8;
    }
    ctx->pc = 0x25D1E0u;
    {
        const bool branch_taken_0x25d1e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1E0u;
        // 0x25d1e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d1e0) {
            ctx->pc = 0x25D200u;
            goto label_25d200;
        }
    }
    ctx->pc = 0x25D1E8u;
label_25d1e8:
    // 0x25d1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25d1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d1ec:
    // 0x25d1ec: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25d1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25d1f0:
    // 0x25d1f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25d1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d1f4:
    // 0x25d1f4: 0x240601ac  addiu       $a2, $zero, 0x1AC
    ctx->pc = 0x25d1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
label_25d1f8:
    // 0x25d1f8: 0xc04159e  jal         func_105678
label_25d1fc:
    if (ctx->pc == 0x25D1FCu) {
        ctx->pc = 0x25D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D1F8u;
        // 0x25d1fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D200u;
        goto label_25d200;
    }
    ctx->pc = 0x25D1F8u;
    SET_GPR_U32(ctx, 31, 0x25D200u);
    ctx->pc = 0x25D1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D1F8u;
    // 0x25d1fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25D1F8u, 0x25D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D200u;
label_25d200:
    // 0x25d200: 0xc05d484  jal         func_175210
label_25d204:
    if (ctx->pc == 0x25D204u) {
        ctx->pc = 0x25D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D200u;
        // 0x25d204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D208u;
        goto label_25d208;
    }
    ctx->pc = 0x25D200u;
    SET_GPR_U32(ctx, 31, 0x25D208u);
    ctx->pc = 0x25D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D200u;
    // 0x25d204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25D200u, 0x25D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D208u;
label_25d208:
    // 0x25d208: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25d20c:
    // 0x25d20c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25d20cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25d210:
    // 0x25d210: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25d210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25d214:
    // 0x25d214: 0xa0f809  jalr        $a1
label_25d218:
    if (ctx->pc == 0x25D218u) {
        ctx->pc = 0x25D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D214u;
        // 0x25d218: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D21Cu;
        goto label_25d21c;
    }
    ctx->pc = 0x25D214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25D21Cu);
        ctx->pc = 0x25D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D214u;
        // 0x25d218: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D214u, 0x25D21Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D21Cu;
label_25d21c:
    // 0x25d21c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25d220:
    // 0x25d220: 0xc05d53a  jal         func_1754E8
label_25d224:
    if (ctx->pc == 0x25D224u) {
        ctx->pc = 0x25D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D220u;
        // 0x25d224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D228u;
        goto label_25d228;
    }
    ctx->pc = 0x25D220u;
    SET_GPR_U32(ctx, 31, 0x25D228u);
    ctx->pc = 0x25D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D220u;
    // 0x25d224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25D220u, 0x25D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D228u;
label_25d228:
    // 0x25d228: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_25d22c:
    if (ctx->pc == 0x25D22Cu) {
        ctx->pc = 0x25D230u;
        goto label_25d230;
    }
    ctx->pc = 0x25D228u;
    {
        const bool branch_taken_0x25d228 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d228) {
            ctx->pc = 0x25D260u;
            goto label_25d260;
        }
    }
    ctx->pc = 0x25D230u;
label_25d230:
    // 0x25d230: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25d230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25d234:
    // 0x25d234: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x25d234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25d238:
    // 0x25d238: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25d238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25d23c:
    // 0x25d23c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25d240:
    // 0x25d240: 0x40f809  jalr        $v0
label_25d244:
    if (ctx->pc == 0x25D244u) {
        ctx->pc = 0x25D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D240u;
        // 0x25d244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D248u;
        goto label_25d248;
    }
    ctx->pc = 0x25D240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D248u);
        ctx->pc = 0x25D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D240u;
        // 0x25d244: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D240u, 0x25D248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D248u;
label_25d248:
    // 0x25d248: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d24c:
    // 0x25d24c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25d24cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25d250:
    // 0x25d250: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x25d250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d254:
    // 0x25d254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25d258:
    // 0x25d258: 0xc041b20  jal         func_106C80
label_25d25c:
    if (ctx->pc == 0x25D25Cu) {
        ctx->pc = 0x25D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D258u;
        // 0x25d25c: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D260u;
        goto label_25d260;
    }
    ctx->pc = 0x25D258u;
    SET_GPR_U32(ctx, 31, 0x25D260u);
    ctx->pc = 0x25D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D258u;
    // 0x25d25c: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25D258u, 0x25D260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D260u;
label_25d260:
    // 0x25d260: 0xc05d484  jal         func_175210
label_25d264:
    if (ctx->pc == 0x25D264u) {
        ctx->pc = 0x25D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D260u;
        // 0x25d264: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D268u;
        goto label_25d268;
    }
    ctx->pc = 0x25D260u;
    SET_GPR_U32(ctx, 31, 0x25D268u);
    ctx->pc = 0x25D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D260u;
    // 0x25d264: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25D260u, 0x25D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D268u;
label_25d268:
    // 0x25d268: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25d268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25d26c:
    // 0x25d26c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25d26cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25d270:
    // 0x25d270: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25d270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25d274:
    // 0x25d274: 0xa0f809  jalr        $a1
label_25d278:
    if (ctx->pc == 0x25D278u) {
        ctx->pc = 0x25D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D274u;
        // 0x25d278: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D27Cu;
        goto label_25d27c;
    }
    ctx->pc = 0x25D274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25D27Cu);
        ctx->pc = 0x25D278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D274u;
        // 0x25d278: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D274u, 0x25D27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D27Cu;
label_25d27c:
    // 0x25d27c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d280:
    // 0x25d280: 0xc087016  jal         func_21C058
label_25d284:
    if (ctx->pc == 0x25D284u) {
        ctx->pc = 0x25D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D280u;
        // 0x25d284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D288u;
        goto label_25d288;
    }
    ctx->pc = 0x25D280u;
    SET_GPR_U32(ctx, 31, 0x25D288u);
    ctx->pc = 0x25D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D280u;
    // 0x25d284: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25D280u, 0x25D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D288u;
label_25d288:
    // 0x25d288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d28c:
    // 0x25d28c: 0xc089990  jal         func_226640
label_25d290:
    if (ctx->pc == 0x25D290u) {
        ctx->pc = 0x25D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D28Cu;
        // 0x25d290: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D294u;
        goto label_25d294;
    }
    ctx->pc = 0x25D28Cu;
    SET_GPR_U32(ctx, 31, 0x25D294u);
    ctx->pc = 0x25D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D28Cu;
    // 0x25d290: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25D28Cu, 0x25D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D294u;
label_25d294:
    // 0x25d294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25d298:
    // 0x25d298: 0xc05d4f6  jal         func_1753D8
label_25d29c:
    if (ctx->pc == 0x25D29Cu) {
        ctx->pc = 0x25D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D298u;
        // 0x25d29c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D2A0u;
        goto label_25d2a0;
    }
    ctx->pc = 0x25D298u;
    SET_GPR_U32(ctx, 31, 0x25D2A0u);
    ctx->pc = 0x25D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D298u;
    // 0x25d29c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25D298u, 0x25D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2A0u;
label_25d2a0:
    // 0x25d2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d2a4:
    // 0x25d2a4: 0xc089990  jal         func_226640
label_25d2a8:
    if (ctx->pc == 0x25D2A8u) {
        ctx->pc = 0x25D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2A4u;
        // 0x25d2a8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D2ACu;
        goto label_25d2ac;
    }
    ctx->pc = 0x25D2A4u;
    SET_GPR_U32(ctx, 31, 0x25D2ACu);
    ctx->pc = 0x25D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2A4u;
    // 0x25d2a8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25D2A4u, 0x25D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2ACu;
label_25d2ac:
    // 0x25d2ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x25d2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25d2b0:
    // 0x25d2b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x25d2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25d2b4:
    // 0x25d2b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x25d2b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25d2b8:
    // 0x25d2b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25d2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25d2bc:
    // 0x25d2bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x25d2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d2c0:
    // 0x25d2c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25d2c4:
    // 0x25d2c4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x25d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25d2c8:
    // 0x25d2c8: 0x3e00008  jr          $ra
label_25d2cc:
    if (ctx->pc == 0x25D2CCu) {
        ctx->pc = 0x25D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2C8u;
        // 0x25d2cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D2D0u;
        goto label_fallthrough_0x25d2c8;
    }
    ctx->pc = 0x25D2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2C8u;
        // 0x25d2cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25d2c8:
    ctx->pc = 0x25D2D0u;
}
