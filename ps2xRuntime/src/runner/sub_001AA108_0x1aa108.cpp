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

// Function: sub_001AA108
// Address: 0x1aa108 - 0x1aa238
void sub_001AA108_0x1aa108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA108_0x1aa108");
#endif

    switch (ctx->pc) {
        case 0x1aa108u: goto label_1aa108;
        case 0x1aa10cu: goto label_1aa10c;
        case 0x1aa110u: goto label_1aa110;
        case 0x1aa114u: goto label_1aa114;
        case 0x1aa118u: goto label_1aa118;
        case 0x1aa11cu: goto label_1aa11c;
        case 0x1aa120u: goto label_1aa120;
        case 0x1aa124u: goto label_1aa124;
        case 0x1aa128u: goto label_1aa128;
        case 0x1aa12cu: goto label_1aa12c;
        case 0x1aa130u: goto label_1aa130;
        case 0x1aa134u: goto label_1aa134;
        case 0x1aa138u: goto label_1aa138;
        case 0x1aa13cu: goto label_1aa13c;
        case 0x1aa140u: goto label_1aa140;
        case 0x1aa144u: goto label_1aa144;
        case 0x1aa148u: goto label_1aa148;
        case 0x1aa14cu: goto label_1aa14c;
        case 0x1aa150u: goto label_1aa150;
        case 0x1aa154u: goto label_1aa154;
        case 0x1aa158u: goto label_1aa158;
        case 0x1aa15cu: goto label_1aa15c;
        case 0x1aa160u: goto label_1aa160;
        case 0x1aa164u: goto label_1aa164;
        case 0x1aa168u: goto label_1aa168;
        case 0x1aa16cu: goto label_1aa16c;
        case 0x1aa170u: goto label_1aa170;
        case 0x1aa174u: goto label_1aa174;
        case 0x1aa178u: goto label_1aa178;
        case 0x1aa17cu: goto label_1aa17c;
        case 0x1aa180u: goto label_1aa180;
        case 0x1aa184u: goto label_1aa184;
        case 0x1aa188u: goto label_1aa188;
        case 0x1aa18cu: goto label_1aa18c;
        case 0x1aa190u: goto label_1aa190;
        case 0x1aa194u: goto label_1aa194;
        case 0x1aa198u: goto label_1aa198;
        case 0x1aa19cu: goto label_1aa19c;
        case 0x1aa1a0u: goto label_1aa1a0;
        case 0x1aa1a4u: goto label_1aa1a4;
        case 0x1aa1a8u: goto label_1aa1a8;
        case 0x1aa1acu: goto label_1aa1ac;
        case 0x1aa1b0u: goto label_1aa1b0;
        case 0x1aa1b4u: goto label_1aa1b4;
        case 0x1aa1b8u: goto label_1aa1b8;
        case 0x1aa1bcu: goto label_1aa1bc;
        case 0x1aa1c0u: goto label_1aa1c0;
        case 0x1aa1c4u: goto label_1aa1c4;
        case 0x1aa1c8u: goto label_1aa1c8;
        case 0x1aa1ccu: goto label_1aa1cc;
        case 0x1aa1d0u: goto label_1aa1d0;
        case 0x1aa1d4u: goto label_1aa1d4;
        case 0x1aa1d8u: goto label_1aa1d8;
        case 0x1aa1dcu: goto label_1aa1dc;
        case 0x1aa1e0u: goto label_1aa1e0;
        case 0x1aa1e4u: goto label_1aa1e4;
        case 0x1aa1e8u: goto label_1aa1e8;
        case 0x1aa1ecu: goto label_1aa1ec;
        case 0x1aa1f0u: goto label_1aa1f0;
        case 0x1aa1f4u: goto label_1aa1f4;
        case 0x1aa1f8u: goto label_1aa1f8;
        case 0x1aa1fcu: goto label_1aa1fc;
        case 0x1aa200u: goto label_1aa200;
        case 0x1aa204u: goto label_1aa204;
        case 0x1aa208u: goto label_1aa208;
        case 0x1aa20cu: goto label_1aa20c;
        case 0x1aa210u: goto label_1aa210;
        case 0x1aa214u: goto label_1aa214;
        case 0x1aa218u: goto label_1aa218;
        case 0x1aa21cu: goto label_1aa21c;
        case 0x1aa220u: goto label_1aa220;
        case 0x1aa224u: goto label_1aa224;
        case 0x1aa228u: goto label_1aa228;
        case 0x1aa22cu: goto label_1aa22c;
        case 0x1aa230u: goto label_1aa230;
        case 0x1aa234u: goto label_1aa234;
        default: break;
    }

    ctx->pc = 0x1aa108u;

label_1aa108:
    // 0x1aa108: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1aa108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1aa10c:
    // 0x1aa10c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1aa10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1aa110:
    // 0x1aa110: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1aa110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1aa114:
    // 0x1aa114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa118:
    // 0x1aa118: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1aa118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1aa11c:
    // 0x1aa11c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1aa11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1aa120:
    // 0x1aa120: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aa120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1aa124:
    // 0x1aa124: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1aa124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1aa128:
    // 0x1aa128: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1aa128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1aa12c:
    // 0x1aa12c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1aa12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1aa130:
    // 0x1aa130: 0x40f809  jalr        $v0
label_1aa134:
    if (ctx->pc == 0x1AA134u) {
        ctx->pc = 0x1AA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA130u;
        // 0x1aa134: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA138u;
        goto label_1aa138;
    }
    ctx->pc = 0x1AA130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA138u);
        ctx->pc = 0x1AA134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA130u;
        // 0x1aa134: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA130u, 0x1AA138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA138u;
label_1aa138:
    // 0x1aa138: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_1aa13c:
    if (ctx->pc == 0x1AA13Cu) {
        ctx->pc = 0x1AA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA138u;
        // 0x1aa13c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA140u;
        goto label_1aa140;
    }
    ctx->pc = 0x1AA138u;
    {
        const bool branch_taken_0x1aa138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA138u;
        // 0x1aa13c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa138) {
            ctx->pc = 0x1AA21Cu;
            goto label_1aa21c;
        }
    }
    ctx->pc = 0x1AA140u;
label_1aa140:
    // 0x1aa140: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1aa140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1aa144:
    // 0x1aa144: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1aa144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1aa148:
    // 0x1aa148: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1aa148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1aa14c:
    // 0x1aa14c: 0x40f809  jalr        $v0
label_1aa150:
    if (ctx->pc == 0x1AA150u) {
        ctx->pc = 0x1AA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA14Cu;
        // 0x1aa150: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA154u;
        goto label_1aa154;
    }
    ctx->pc = 0x1AA14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA154u);
        ctx->pc = 0x1AA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA14Cu;
        // 0x1aa150: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA14Cu, 0x1AA154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA154u;
label_1aa154:
    // 0x1aa154: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_1aa158:
    if (ctx->pc == 0x1AA158u) {
        ctx->pc = 0x1AA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA154u;
        // 0x1aa158: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA15Cu;
        goto label_1aa15c;
    }
    ctx->pc = 0x1AA154u;
    {
        const bool branch_taken_0x1aa154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA154u;
        // 0x1aa158: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa154) {
            ctx->pc = 0x1AA218u;
            goto label_1aa218;
        }
    }
    ctx->pc = 0x1AA15Cu;
label_1aa15c:
    // 0x1aa15c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x1aa15cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_1aa160:
    // 0x1aa160: 0x26300048  addiu       $s0, $s1, 0x48
    ctx->pc = 0x1aa160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_1aa164:
    // 0x1aa164: 0x0  nop
    ctx->pc = 0x1aa164u;
    // NOP
label_1aa168:
    // 0x1aa168: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1aa168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa16c:
    // 0x1aa16c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1aa16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1aa170:
    // 0x1aa170: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1aa170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1aa174:
    // 0x1aa174: 0x84450018  lh          $a1, 0x18($v0)
    ctx->pc = 0x1aa174u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1aa178:
    // 0x1aa178: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1aa178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1aa17c:
    // 0x1aa17c: 0x60f809  jalr        $v1
label_1aa180:
    if (ctx->pc == 0x1AA180u) {
        ctx->pc = 0x1AA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA17Cu;
        // 0x1aa180: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA184u;
        goto label_1aa184;
    }
    ctx->pc = 0x1AA17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA184u);
        ctx->pc = 0x1AA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA17Cu;
        // 0x1aa180: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA17Cu, 0x1AA184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA184u;
label_1aa184:
    // 0x1aa184: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1aa184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa188:
    // 0x1aa188: 0xc6220174  lwc1        $f2, 0x174($s1)
    ctx->pc = 0x1aa188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aa18c:
    // 0x1aa18c: 0x78a200b0  lq          $v0, 0xB0($a1)
    ctx->pc = 0x1aa18cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 176)));
label_1aa190:
    // 0x1aa190: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1aa190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa194:
    // 0x1aa194: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1aa194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1aa198:
    // 0x1aa198: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1aa198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa19c:
    // 0x1aa19c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1aa19cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1aa1a0:
    // 0x1aa1a0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1aa1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa1a4:
    // 0x1aa1a4: 0x0  nop
    ctx->pc = 0x1aa1a4u;
    // NOP
label_1aa1a8:
    // 0x1aa1a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1aa1ac:
    if (ctx->pc == 0x1AA1ACu) {
        ctx->pc = 0x1AA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1A8u;
        // 0x1aa1ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1B0u;
        goto label_1aa1b0;
    }
    ctx->pc = 0x1AA1A8u;
    {
        const bool branch_taken_0x1aa1a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1A8u;
        // 0x1aa1ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1a8) {
            ctx->pc = 0x1AA1B4u;
            goto label_1aa1b4;
        }
    }
    ctx->pc = 0x1AA1B0u;
label_1aa1b0:
    // 0x1aa1b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1aa1b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa1b4:
    // 0x1aa1b4: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_1aa1b8:
    if (ctx->pc == 0x1AA1B8u) {
        ctx->pc = 0x1AA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1B4u;
        // 0x1aa1b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1BCu;
        goto label_1aa1bc;
    }
    ctx->pc = 0x1AA1B4u;
    {
        const bool branch_taken_0x1aa1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa1b4) {
            ctx->pc = 0x1AA1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA1B4u;
            // 0x1aa1b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA20Cu;
            goto label_1aa20c;
        }
    }
    ctx->pc = 0x1AA1BCu;
label_1aa1bc:
    // 0x1aa1bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1aa1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1aa1c0:
    // 0x1aa1c0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1aa1c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1aa1c4:
    // 0x1aa1c4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1aa1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1aa1c8:
    // 0x1aa1c8: 0x40f809  jalr        $v0
label_1aa1cc:
    if (ctx->pc == 0x1AA1CCu) {
        ctx->pc = 0x1AA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1C8u;
        // 0x1aa1cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1D0u;
        goto label_1aa1d0;
    }
    ctx->pc = 0x1AA1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA1D0u);
        ctx->pc = 0x1AA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1C8u;
        // 0x1aa1cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA1C8u, 0x1AA1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA1D0u;
label_1aa1d0:
    // 0x1aa1d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1aa1d4:
    if (ctx->pc == 0x1AA1D4u) {
        ctx->pc = 0x1AA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1D0u;
        // 0x1aa1d4: 0x2665d310  addiu       $a1, $s3, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1D8u;
        goto label_1aa1d8;
    }
    ctx->pc = 0x1AA1D0u;
    {
        const bool branch_taken_0x1aa1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1D0u;
        // 0x1aa1d4: 0x2665d310  addiu       $a1, $s3, -0x2CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1d0) {
            ctx->pc = 0x1AA208u;
            goto label_1aa208;
        }
    }
    ctx->pc = 0x1AA1D8u;
label_1aa1d8:
    // 0x1aa1d8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1aa1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa1dc:
    // 0x1aa1dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1aa1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1aa1e0:
    // 0x1aa1e0: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1aa1e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1aa1e4:
    // 0x1aa1e4: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1aa1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1aa1e8:
    // 0x1aa1e8: 0x60f809  jalr        $v1
label_1aa1ec:
    if (ctx->pc == 0x1AA1ECu) {
        ctx->pc = 0x1AA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1E8u;
        // 0x1aa1ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1F0u;
        goto label_1aa1f0;
    }
    ctx->pc = 0x1AA1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA1F0u);
        ctx->pc = 0x1AA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1E8u;
        // 0x1aa1ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA1E8u, 0x1AA1F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA1F0u;
label_1aa1f0:
    // 0x1aa1f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1aa1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa1f4:
    // 0x1aa1f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1aa1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1aa1f8:
    // 0x1aa1f8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1aa1f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1aa1fc:
    // 0x1aa1fc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1aa1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1aa200:
    // 0x1aa200: 0x60f809  jalr        $v1
label_1aa204:
    if (ctx->pc == 0x1AA204u) {
        ctx->pc = 0x1AA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA200u;
        // 0x1aa204: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA208u;
        goto label_1aa208;
    }
    ctx->pc = 0x1AA200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA208u);
        ctx->pc = 0x1AA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA200u;
        // 0x1aa204: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA200u, 0x1AA208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA208u;
label_1aa208:
    // 0x1aa208: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aa208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1aa20c:
    // 0x1aa20c: 0x2e420046  sltiu       $v0, $s2, 0x46
    ctx->pc = 0x1aa20cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
label_1aa210:
    // 0x1aa210: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1aa214:
    if (ctx->pc == 0x1AA214u) {
        ctx->pc = 0x1AA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA210u;
        // 0x1aa214: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA218u;
        goto label_1aa218;
    }
    ctx->pc = 0x1AA210u;
    {
        const bool branch_taken_0x1aa210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA210u;
        // 0x1aa214: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa210) {
            ctx->pc = 0x1AA168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa168;
        }
    }
    ctx->pc = 0x1AA218u;
label_1aa218:
    // 0x1aa218: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1aa218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aa21c:
    // 0x1aa21c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1aa21cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa220:
    // 0x1aa220: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1aa220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa224:
    // 0x1aa224: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1aa224u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa228:
    // 0x1aa228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aa228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa22c:
    // 0x1aa22c: 0x3e00008  jr          $ra
label_1aa230:
    if (ctx->pc == 0x1AA230u) {
        ctx->pc = 0x1AA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA22Cu;
        // 0x1aa230: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA234u;
        goto label_1aa234;
    }
    ctx->pc = 0x1AA22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA22Cu;
        // 0x1aa230: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA234u;
label_1aa234:
    // 0x1aa234: 0x0  nop
    ctx->pc = 0x1aa234u;
    // NOP
    ctx->pc = 0x1aa238u;
}
