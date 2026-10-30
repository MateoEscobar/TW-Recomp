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

// Function: sub_003AC148
// Address: 0x3ac148 - 0x3ac2d0
void sub_003AC148_0x3ac148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC148_0x3ac148");
#endif

    switch (ctx->pc) {
        case 0x3ac148u: goto label_3ac148;
        case 0x3ac14cu: goto label_3ac14c;
        case 0x3ac150u: goto label_3ac150;
        case 0x3ac154u: goto label_3ac154;
        case 0x3ac158u: goto label_3ac158;
        case 0x3ac15cu: goto label_3ac15c;
        case 0x3ac160u: goto label_3ac160;
        case 0x3ac164u: goto label_3ac164;
        case 0x3ac168u: goto label_3ac168;
        case 0x3ac16cu: goto label_3ac16c;
        case 0x3ac170u: goto label_3ac170;
        case 0x3ac174u: goto label_3ac174;
        case 0x3ac178u: goto label_3ac178;
        case 0x3ac17cu: goto label_3ac17c;
        case 0x3ac180u: goto label_3ac180;
        case 0x3ac184u: goto label_3ac184;
        case 0x3ac188u: goto label_3ac188;
        case 0x3ac18cu: goto label_3ac18c;
        case 0x3ac190u: goto label_3ac190;
        case 0x3ac194u: goto label_3ac194;
        case 0x3ac198u: goto label_3ac198;
        case 0x3ac19cu: goto label_3ac19c;
        case 0x3ac1a0u: goto label_3ac1a0;
        case 0x3ac1a4u: goto label_3ac1a4;
        case 0x3ac1a8u: goto label_3ac1a8;
        case 0x3ac1acu: goto label_3ac1ac;
        case 0x3ac1b0u: goto label_3ac1b0;
        case 0x3ac1b4u: goto label_3ac1b4;
        case 0x3ac1b8u: goto label_3ac1b8;
        case 0x3ac1bcu: goto label_3ac1bc;
        case 0x3ac1c0u: goto label_3ac1c0;
        case 0x3ac1c4u: goto label_3ac1c4;
        case 0x3ac1c8u: goto label_3ac1c8;
        case 0x3ac1ccu: goto label_3ac1cc;
        case 0x3ac1d0u: goto label_3ac1d0;
        case 0x3ac1d4u: goto label_3ac1d4;
        case 0x3ac1d8u: goto label_3ac1d8;
        case 0x3ac1dcu: goto label_3ac1dc;
        case 0x3ac1e0u: goto label_3ac1e0;
        case 0x3ac1e4u: goto label_3ac1e4;
        case 0x3ac1e8u: goto label_3ac1e8;
        case 0x3ac1ecu: goto label_3ac1ec;
        case 0x3ac1f0u: goto label_3ac1f0;
        case 0x3ac1f4u: goto label_3ac1f4;
        case 0x3ac1f8u: goto label_3ac1f8;
        case 0x3ac1fcu: goto label_3ac1fc;
        case 0x3ac200u: goto label_3ac200;
        case 0x3ac204u: goto label_3ac204;
        case 0x3ac208u: goto label_3ac208;
        case 0x3ac20cu: goto label_3ac20c;
        case 0x3ac210u: goto label_3ac210;
        case 0x3ac214u: goto label_3ac214;
        case 0x3ac218u: goto label_3ac218;
        case 0x3ac21cu: goto label_3ac21c;
        case 0x3ac220u: goto label_3ac220;
        case 0x3ac224u: goto label_3ac224;
        case 0x3ac228u: goto label_3ac228;
        case 0x3ac22cu: goto label_3ac22c;
        case 0x3ac230u: goto label_3ac230;
        case 0x3ac234u: goto label_3ac234;
        case 0x3ac238u: goto label_3ac238;
        case 0x3ac23cu: goto label_3ac23c;
        case 0x3ac240u: goto label_3ac240;
        case 0x3ac244u: goto label_3ac244;
        case 0x3ac248u: goto label_3ac248;
        case 0x3ac24cu: goto label_3ac24c;
        case 0x3ac250u: goto label_3ac250;
        case 0x3ac254u: goto label_3ac254;
        case 0x3ac258u: goto label_3ac258;
        case 0x3ac25cu: goto label_3ac25c;
        case 0x3ac260u: goto label_3ac260;
        case 0x3ac264u: goto label_3ac264;
        case 0x3ac268u: goto label_3ac268;
        case 0x3ac26cu: goto label_3ac26c;
        case 0x3ac270u: goto label_3ac270;
        case 0x3ac274u: goto label_3ac274;
        case 0x3ac278u: goto label_3ac278;
        case 0x3ac27cu: goto label_3ac27c;
        case 0x3ac280u: goto label_3ac280;
        case 0x3ac284u: goto label_3ac284;
        case 0x3ac288u: goto label_3ac288;
        case 0x3ac28cu: goto label_3ac28c;
        case 0x3ac290u: goto label_3ac290;
        case 0x3ac294u: goto label_3ac294;
        case 0x3ac298u: goto label_3ac298;
        case 0x3ac29cu: goto label_3ac29c;
        case 0x3ac2a0u: goto label_3ac2a0;
        case 0x3ac2a4u: goto label_3ac2a4;
        case 0x3ac2a8u: goto label_3ac2a8;
        case 0x3ac2acu: goto label_3ac2ac;
        case 0x3ac2b0u: goto label_3ac2b0;
        case 0x3ac2b4u: goto label_3ac2b4;
        case 0x3ac2b8u: goto label_3ac2b8;
        case 0x3ac2bcu: goto label_3ac2bc;
        case 0x3ac2c0u: goto label_3ac2c0;
        case 0x3ac2c4u: goto label_3ac2c4;
        case 0x3ac2c8u: goto label_3ac2c8;
        case 0x3ac2ccu: goto label_3ac2cc;
        default: break;
    }

    ctx->pc = 0x3ac148u;

label_3ac148:
    // 0x3ac148: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3ac148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3ac14c:
    // 0x3ac14c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3ac14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3ac150:
    // 0x3ac150: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3ac150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3ac154:
    // 0x3ac154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ac154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac158:
    // 0x3ac158: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3ac158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3ac15c:
    // 0x3ac15c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ac15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac160:
    // 0x3ac160: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3ac160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3ac164:
    // 0x3ac164: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3ac164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3ac168:
    // 0x3ac168: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x3ac168u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
label_3ac16c:
    // 0x3ac16c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3ac16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3ac170:
    // 0x3ac170: 0x36730032  ori         $s3, $s3, 0x32
    ctx->pc = 0x3ac170u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)50);
label_3ac174:
    // 0x3ac174: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ac174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ac178:
    // 0x3ac178: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ac178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac17c:
    // 0x3ac17c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ac17cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ac180:
    // 0x3ac180: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ac180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ac184:
    // 0x3ac184: 0x40f809  jalr        $v0
label_3ac188:
    if (ctx->pc == 0x3AC188u) {
        ctx->pc = 0x3AC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC184u;
        // 0x3ac188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC18Cu;
        goto label_3ac18c;
    }
    ctx->pc = 0x3AC184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC18Cu);
        ctx->pc = 0x3AC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC184u;
        // 0x3ac188: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC184u, 0x3AC18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC18Cu;
label_3ac18c:
    // 0x3ac18c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ac18cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac190:
    // 0x3ac190: 0xc0ea146  jal         func_3A8518
label_3ac194:
    if (ctx->pc == 0x3AC194u) {
        ctx->pc = 0x3AC194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC190u;
        // 0x3ac194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC198u;
        goto label_3ac198;
    }
    ctx->pc = 0x3AC190u;
    SET_GPR_U32(ctx, 31, 0x3AC198u);
    ctx->pc = 0x3AC194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC190u;
    // 0x3ac194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AC190u, 0x3AC198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC198u;
label_3ac198:
    // 0x3ac198: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ac198u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac19c:
    // 0x3ac19c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ac19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ac1a0:
    // 0x3ac1a0: 0xc0ea12a  jal         func_3A84A8
label_3ac1a4:
    if (ctx->pc == 0x3AC1A4u) {
        ctx->pc = 0x3AC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1A0u;
        // 0x3ac1a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC1A8u;
        goto label_3ac1a8;
    }
    ctx->pc = 0x3AC1A0u;
    SET_GPR_U32(ctx, 31, 0x3AC1A8u);
    ctx->pc = 0x3AC1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC1A0u;
    // 0x3ac1a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AC1A0u, 0x3AC1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC1A8u;
label_3ac1a8:
    // 0x3ac1a8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ac1a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac1ac:
    // 0x3ac1ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ac1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ac1b0:
    // 0x3ac1b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ac1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ac1b4:
    // 0x3ac1b4: 0xc0ea12a  jal         func_3A84A8
label_3ac1b8:
    if (ctx->pc == 0x3AC1B8u) {
        ctx->pc = 0x3AC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1B4u;
        // 0x3ac1b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC1BCu;
        goto label_3ac1bc;
    }
    ctx->pc = 0x3AC1B4u;
    SET_GPR_U32(ctx, 31, 0x3AC1BCu);
    ctx->pc = 0x3AC1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC1B4u;
    // 0x3ac1b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AC1B4u, 0x3AC1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC1BCu;
label_3ac1bc:
    // 0x3ac1bc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ac1bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac1c0:
    // 0x3ac1c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ac1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac1c4:
    // 0x3ac1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac1c8:
    // 0x3ac1c8: 0xc0e858c  jal         func_3A1630
label_3ac1cc:
    if (ctx->pc == 0x3AC1CCu) {
        ctx->pc = 0x3AC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1C8u;
        // 0x3ac1cc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC1D0u;
        goto label_3ac1d0;
    }
    ctx->pc = 0x3AC1C8u;
    SET_GPR_U32(ctx, 31, 0x3AC1D0u);
    ctx->pc = 0x3AC1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC1C8u;
    // 0x3ac1cc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AC1C8u, 0x3AC1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC1D0u;
label_3ac1d0:
    // 0x3ac1d0: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x3ac1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_3ac1d4:
    // 0x3ac1d4: 0x3c021080  lui         $v0, 0x1080
    ctx->pc = 0x3ac1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4224 << 16));
label_3ac1d8:
    // 0x3ac1d8: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3ac1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3ac1dc:
    // 0x3ac1dc: 0x3c013c3c  lui         $at, 0x3C3C
    ctx->pc = 0x3ac1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15420 << 16));
label_3ac1e0:
    // 0x3ac1e0: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x3ac1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
label_3ac1e4:
    // 0x3ac1e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ac1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ac1e8:
    // 0x3ac1e8: 0x3c013c96  lui         $at, 0x3C96
    ctx->pc = 0x3ac1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15510 << 16));
label_3ac1ec:
    // 0x3ac1ec: 0x3421bb99  ori         $at, $at, 0xBB99
    ctx->pc = 0x3ac1ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48025);
label_3ac1f0:
    // 0x3ac1f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ac1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ac1f4:
    // 0x3ac1f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac1f8:
    // 0x3ac1f8: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3ac1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3ac1fc:
    // 0x3ac1fc: 0xc0cd518  jal         func_335460
label_3ac200:
    if (ctx->pc == 0x3AC200u) {
        ctx->pc = 0x3AC200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC1FCu;
        // 0x3ac200: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC204u;
        goto label_3ac204;
    }
    ctx->pc = 0x3AC1FCu;
    SET_GPR_U32(ctx, 31, 0x3AC204u);
    ctx->pc = 0x3AC200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC1FCu;
    // 0x3ac200: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AC1FCu, 0x3AC204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC204u;
label_3ac204:
    // 0x3ac204: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3ac204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3ac208:
    // 0x3ac208: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3ac208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3ac20c:
    // 0x3ac20c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ac20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ac210:
    // 0x3ac210: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ac210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ac214:
    // 0x3ac214: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ac214u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac218:
    // 0x3ac218: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3ac218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_3ac21c:
    // 0x3ac21c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ac21cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3ac220:
    // 0x3ac220: 0xae1300c4  sw          $s3, 0xC4($s0)
    ctx->pc = 0x3ac220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 19));
label_3ac224:
    // 0x3ac224: 0xae1400b4  sw          $s4, 0xB4($s0)
    ctx->pc = 0x3ac224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 20));
label_3ac228:
    // 0x3ac228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac22c:
    // 0x3ac22c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3ac22cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3ac230:
    // 0x3ac230: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3ac230u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac234:
    // 0x3ac234: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3ac234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_3ac238:
    // 0x3ac238: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3ac238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3ac23c:
    // 0x3ac23c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3ac23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3ac240:
    // 0x3ac240: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ac240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ac244:
    // 0x3ac244: 0x86220070  lh          $v0, 0x70($s1)
    ctx->pc = 0x3ac244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3ac248:
    // 0x3ac248: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3ac248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3ac24c:
    // 0x3ac24c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ac24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ac250:
    // 0x3ac250: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3ac250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3ac254:
    // 0x3ac254: 0xc0cd518  jal         func_335460
label_3ac258:
    if (ctx->pc == 0x3AC258u) {
        ctx->pc = 0x3AC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC254u;
        // 0x3ac258: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC25Cu;
        goto label_3ac25c;
    }
    ctx->pc = 0x3AC254u;
    SET_GPR_U32(ctx, 31, 0x3AC25Cu);
    ctx->pc = 0x3AC258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC254u;
    // 0x3ac258: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AC254u, 0x3AC25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC25Cu;
label_3ac25c:
    // 0x3ac25c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3ac25cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3ac260:
    // 0x3ac260: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3ac260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ac264:
    // 0x3ac264: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ac264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac268:
    // 0x3ac268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac26c:
    // 0x3ac26c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ac26cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ac270:
    // 0x3ac270: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3ac270u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ac274:
    // 0x3ac274: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3ac274u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ac278:
    // 0x3ac278: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3ac278u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ac27c:
    // 0x3ac27c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ac27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ac280:
    // 0x3ac280: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3ac280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3ac284:
    // 0x3ac284: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3ac284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3ac288:
    // 0x3ac288: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ac288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ac28c:
    // 0x3ac28c: 0x60f809  jalr        $v1
label_3ac290:
    if (ctx->pc == 0x3AC290u) {
        ctx->pc = 0x3AC294u;
        goto label_3ac294;
    }
    ctx->pc = 0x3AC28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AC294u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC28Cu, 0x3AC294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC294u;
label_3ac294:
    // 0x3ac294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac298:
    // 0x3ac298: 0xc0cd4ee  jal         func_3353B8
label_3ac29c:
    if (ctx->pc == 0x3AC29Cu) {
        ctx->pc = 0x3AC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC298u;
        // 0x3ac29c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC2A0u;
        goto label_3ac2a0;
    }
    ctx->pc = 0x3AC298u;
    SET_GPR_U32(ctx, 31, 0x3AC2A0u);
    ctx->pc = 0x3AC29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC298u;
    // 0x3ac29c: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AC298u, 0x3AC2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC2A0u;
label_3ac2a0:
    // 0x3ac2a0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x3ac2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3ac2a4:
    // 0x3ac2a4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3ac2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_3ac2a8:
    // 0x3ac2a8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3ac2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3ac2ac:
    // 0x3ac2ac: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3ac2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ac2b0:
    // 0x3ac2b0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3ac2b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ac2b4:
    // 0x3ac2b4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3ac2b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3ac2b8:
    // 0x3ac2b8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3ac2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ac2bc:
    // 0x3ac2bc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3ac2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ac2c0:
    // 0x3ac2c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ac2c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ac2c4:
    // 0x3ac2c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ac2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3ac2c8:
    // 0x3ac2c8: 0x3e00008  jr          $ra
label_3ac2cc:
    if (ctx->pc == 0x3AC2CCu) {
        ctx->pc = 0x3AC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC2C8u;
        // 0x3ac2cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC2D0u;
        goto label_fallthrough_0x3ac2c8;
    }
    ctx->pc = 0x3AC2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC2C8u;
        // 0x3ac2cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ac2c8:
    ctx->pc = 0x3AC2D0u;
}
