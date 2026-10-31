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

// Function: sub_003AE180
// Address: 0x3ae180 - 0x3ae2a8
void sub_003AE180_0x3ae180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE180_0x3ae180");
#endif

    switch (ctx->pc) {
        case 0x3ae180u: goto label_3ae180;
        case 0x3ae184u: goto label_3ae184;
        case 0x3ae188u: goto label_3ae188;
        case 0x3ae18cu: goto label_3ae18c;
        case 0x3ae190u: goto label_3ae190;
        case 0x3ae194u: goto label_3ae194;
        case 0x3ae198u: goto label_3ae198;
        case 0x3ae19cu: goto label_3ae19c;
        case 0x3ae1a0u: goto label_3ae1a0;
        case 0x3ae1a4u: goto label_3ae1a4;
        case 0x3ae1a8u: goto label_3ae1a8;
        case 0x3ae1acu: goto label_3ae1ac;
        case 0x3ae1b0u: goto label_3ae1b0;
        case 0x3ae1b4u: goto label_3ae1b4;
        case 0x3ae1b8u: goto label_3ae1b8;
        case 0x3ae1bcu: goto label_3ae1bc;
        case 0x3ae1c0u: goto label_3ae1c0;
        case 0x3ae1c4u: goto label_3ae1c4;
        case 0x3ae1c8u: goto label_3ae1c8;
        case 0x3ae1ccu: goto label_3ae1cc;
        case 0x3ae1d0u: goto label_3ae1d0;
        case 0x3ae1d4u: goto label_3ae1d4;
        case 0x3ae1d8u: goto label_3ae1d8;
        case 0x3ae1dcu: goto label_3ae1dc;
        case 0x3ae1e0u: goto label_3ae1e0;
        case 0x3ae1e4u: goto label_3ae1e4;
        case 0x3ae1e8u: goto label_3ae1e8;
        case 0x3ae1ecu: goto label_3ae1ec;
        case 0x3ae1f0u: goto label_3ae1f0;
        case 0x3ae1f4u: goto label_3ae1f4;
        case 0x3ae1f8u: goto label_3ae1f8;
        case 0x3ae1fcu: goto label_3ae1fc;
        case 0x3ae200u: goto label_3ae200;
        case 0x3ae204u: goto label_3ae204;
        case 0x3ae208u: goto label_3ae208;
        case 0x3ae20cu: goto label_3ae20c;
        case 0x3ae210u: goto label_3ae210;
        case 0x3ae214u: goto label_3ae214;
        case 0x3ae218u: goto label_3ae218;
        case 0x3ae21cu: goto label_3ae21c;
        case 0x3ae220u: goto label_3ae220;
        case 0x3ae224u: goto label_3ae224;
        case 0x3ae228u: goto label_3ae228;
        case 0x3ae22cu: goto label_3ae22c;
        case 0x3ae230u: goto label_3ae230;
        case 0x3ae234u: goto label_3ae234;
        case 0x3ae238u: goto label_3ae238;
        case 0x3ae23cu: goto label_3ae23c;
        case 0x3ae240u: goto label_3ae240;
        case 0x3ae244u: goto label_3ae244;
        case 0x3ae248u: goto label_3ae248;
        case 0x3ae24cu: goto label_3ae24c;
        case 0x3ae250u: goto label_3ae250;
        case 0x3ae254u: goto label_3ae254;
        case 0x3ae258u: goto label_3ae258;
        case 0x3ae25cu: goto label_3ae25c;
        case 0x3ae260u: goto label_3ae260;
        case 0x3ae264u: goto label_3ae264;
        case 0x3ae268u: goto label_3ae268;
        case 0x3ae26cu: goto label_3ae26c;
        case 0x3ae270u: goto label_3ae270;
        case 0x3ae274u: goto label_3ae274;
        case 0x3ae278u: goto label_3ae278;
        case 0x3ae27cu: goto label_3ae27c;
        case 0x3ae280u: goto label_3ae280;
        case 0x3ae284u: goto label_3ae284;
        case 0x3ae288u: goto label_3ae288;
        case 0x3ae28cu: goto label_3ae28c;
        case 0x3ae290u: goto label_3ae290;
        case 0x3ae294u: goto label_3ae294;
        case 0x3ae298u: goto label_3ae298;
        case 0x3ae29cu: goto label_3ae29c;
        case 0x3ae2a0u: goto label_3ae2a0;
        case 0x3ae2a4u: goto label_3ae2a4;
        default: break;
    }

    ctx->pc = 0x3ae180u;

label_3ae180:
    // 0x3ae180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3ae180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3ae184:
    // 0x3ae184: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3ae184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3ae188:
    // 0x3ae188: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3ae188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3ae18c:
    // 0x3ae18c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae190:
    // 0x3ae190: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3ae190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3ae194:
    // 0x3ae194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ae194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ae198:
    // 0x3ae198: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ae198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3ae19c:
    // 0x3ae19c: 0x3c127a00  lui         $s2, 0x7A00
    ctx->pc = 0x3ae19cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31232 << 16));
label_3ae1a0:
    // 0x3ae1a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ae1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3ae1a4:
    // 0x3ae1a4: 0x36521580  ori         $s2, $s2, 0x1580
    ctx->pc = 0x3ae1a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)5504);
label_3ae1a8:
    // 0x3ae1a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ae1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae1ac:
    // 0x3ae1ac: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ae1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ae1b0:
    // 0x3ae1b0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ae1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ae1b4:
    // 0x3ae1b4: 0x40f809  jalr        $v0
label_3ae1b8:
    if (ctx->pc == 0x3AE1B8u) {
        ctx->pc = 0x3AE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1B4u;
        // 0x3ae1b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE1BCu;
        goto label_3ae1bc;
    }
    ctx->pc = 0x3AE1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE1BCu);
        ctx->pc = 0x3AE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1B4u;
        // 0x3ae1b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE1B4u, 0x3AE1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE1BCu;
label_3ae1bc:
    // 0x3ae1bc: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3ae1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3ae1c0:
    // 0x3ae1c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ae1c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae1c4:
    // 0x3ae1c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ae1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ae1c8:
    // 0x3ae1c8: 0xc0ea12a  jal         func_3A84A8
label_3ae1cc:
    if (ctx->pc == 0x3AE1CCu) {
        ctx->pc = 0x3AE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1C8u;
        // 0x3ae1cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE1D0u;
        goto label_3ae1d0;
    }
    ctx->pc = 0x3AE1C8u;
    SET_GPR_U32(ctx, 31, 0x3AE1D0u);
    ctx->pc = 0x3AE1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1C8u;
    // 0x3ae1cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AE1C8u, 0x3AE1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1D0u;
label_3ae1d0:
    // 0x3ae1d0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ae1d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ae1d4:
    // 0x3ae1d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ae1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ae1d8:
    // 0x3ae1d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ae1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ae1dc:
    // 0x3ae1dc: 0xc0ea12a  jal         func_3A84A8
label_3ae1e0:
    if (ctx->pc == 0x3AE1E0u) {
        ctx->pc = 0x3AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1DCu;
        // 0x3ae1e0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE1E4u;
        goto label_3ae1e4;
    }
    ctx->pc = 0x3AE1DCu;
    SET_GPR_U32(ctx, 31, 0x3AE1E4u);
    ctx->pc = 0x3AE1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1DCu;
    // 0x3ae1e0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AE1DCu, 0x3AE1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1E4u;
label_3ae1e4:
    // 0x3ae1e4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ae1e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ae1e8:
    // 0x3ae1e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ae1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ae1ec:
    // 0x3ae1ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ae1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ae1f0:
    // 0x3ae1f0: 0xc0ea12a  jal         func_3A84A8
label_3ae1f4:
    if (ctx->pc == 0x3AE1F4u) {
        ctx->pc = 0x3AE1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE1F0u;
        // 0x3ae1f4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE1F8u;
        goto label_3ae1f8;
    }
    ctx->pc = 0x3AE1F0u;
    SET_GPR_U32(ctx, 31, 0x3AE1F8u);
    ctx->pc = 0x3AE1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1F0u;
    // 0x3ae1f4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AE1F0u, 0x3AE1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1F8u;
label_3ae1f8:
    // 0x3ae1f8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3ae1f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ae1fc:
    // 0x3ae1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ae200:
    // 0x3ae200: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3ae200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ae204:
    // 0x3ae204: 0xc0e858c  jal         func_3A1630
label_3ae208:
    if (ctx->pc == 0x3AE208u) {
        ctx->pc = 0x3AE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE204u;
        // 0x3ae208: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE20Cu;
        goto label_3ae20c;
    }
    ctx->pc = 0x3AE204u;
    SET_GPR_U32(ctx, 31, 0x3AE20Cu);
    ctx->pc = 0x3AE208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE204u;
    // 0x3ae208: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AE204u, 0x3AE20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE20Cu;
label_3ae20c:
    // 0x3ae20c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3ae20cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ae210:
    // 0x3ae210: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3ae210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ae214:
    // 0x3ae214: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3ae214u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ae218:
    // 0x3ae218: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3ae218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_3ae21c:
    // 0x3ae21c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ae21cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ae220:
    // 0x3ae220: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ae220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ae224:
    // 0x3ae224: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x3ae224u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_3ae228:
    // 0x3ae228: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x3ae228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_3ae22c:
    // 0x3ae22c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ae22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ae230:
    // 0x3ae230: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3ae230u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3ae234:
    // 0x3ae234: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3ae234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3ae238:
    // 0x3ae238: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3ae238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3ae23c:
    // 0x3ae23c: 0x60f809  jalr        $v1
label_3ae240:
    if (ctx->pc == 0x3AE240u) {
        ctx->pc = 0x3AE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE23Cu;
        // 0x3ae240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE244u;
        goto label_3ae244;
    }
    ctx->pc = 0x3AE23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AE244u);
        ctx->pc = 0x3AE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE23Cu;
        // 0x3ae240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE23Cu, 0x3AE244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE244u;
label_3ae244:
    // 0x3ae244: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ae244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ae248:
    // 0x3ae248: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ae248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3ae24c:
    // 0x3ae24c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3ae24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3ae250:
    // 0x3ae250: 0x3442002e  ori         $v0, $v0, 0x2E
    ctx->pc = 0x3ae250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46);
label_3ae254:
    // 0x3ae254: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3ae254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3ae258:
    // 0x3ae258: 0xc1073cc  jal         func_41CF30
label_3ae25c:
    if (ctx->pc == 0x3AE25Cu) {
        ctx->pc = 0x3AE25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE258u;
        // 0x3ae25c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE260u;
        goto label_3ae260;
    }
    ctx->pc = 0x3AE258u;
    SET_GPR_U32(ctx, 31, 0x3AE260u);
    ctx->pc = 0x3AE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE258u;
    // 0x3ae25c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3AE258u, 0x3AE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE260u;
label_3ae260:
    // 0x3ae260: 0x3c0455c9  lui         $a0, 0x55C9
    ctx->pc = 0x3ae260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21961 << 16));
label_3ae264:
    // 0x3ae264: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3ae264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3ae268:
    // 0x3ae268: 0x3484ff80  ori         $a0, $a0, 0xFF80
    ctx->pc = 0x3ae268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65408);
label_3ae26c:
    // 0x3ae26c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3ae26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3ae270:
    // 0x3ae270: 0x82900b  movn        $s2, $a0, $v0
    ctx->pc = 0x3ae270u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_3ae274:
    // 0x3ae274: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3ae274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3ae278:
    // 0x3ae278: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x3ae278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_3ae27c:
    // 0x3ae27c: 0xae1200b4  sw          $s2, 0xB4($s0)
    ctx->pc = 0x3ae27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 18));
label_3ae280:
    // 0x3ae280: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3ae280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3ae284:
    // 0x3ae284: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x3ae284u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ae288:
    // 0x3ae288: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3ae288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ae28c:
    // 0x3ae28c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3ae28cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ae290:
    // 0x3ae290: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3ae290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ae294:
    // 0x3ae294: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ae294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ae298:
    // 0x3ae298: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ae298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ae29c:
    // 0x3ae29c: 0x3e00008  jr          $ra
label_3ae2a0:
    if (ctx->pc == 0x3AE2A0u) {
        ctx->pc = 0x3AE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE29Cu;
        // 0x3ae2a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE2A4u;
        goto label_3ae2a4;
    }
    ctx->pc = 0x3AE29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE29Cu;
        // 0x3ae2a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE2A4u;
label_3ae2a4:
    // 0x3ae2a4: 0x0  nop
    ctx->pc = 0x3ae2a4u;
    // NOP
    ctx->pc = 0x3ae2a8u;
}
