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

// Function: sub_0027A120
// Address: 0x27a120 - 0x27a1e8
void sub_0027A120_0x27a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A120_0x27a120");
#endif

    switch (ctx->pc) {
        case 0x27a120u: goto label_27a120;
        case 0x27a124u: goto label_27a124;
        case 0x27a128u: goto label_27a128;
        case 0x27a12cu: goto label_27a12c;
        case 0x27a130u: goto label_27a130;
        case 0x27a134u: goto label_27a134;
        case 0x27a138u: goto label_27a138;
        case 0x27a13cu: goto label_27a13c;
        case 0x27a140u: goto label_27a140;
        case 0x27a144u: goto label_27a144;
        case 0x27a148u: goto label_27a148;
        case 0x27a14cu: goto label_27a14c;
        case 0x27a150u: goto label_27a150;
        case 0x27a154u: goto label_27a154;
        case 0x27a158u: goto label_27a158;
        case 0x27a15cu: goto label_27a15c;
        case 0x27a160u: goto label_27a160;
        case 0x27a164u: goto label_27a164;
        case 0x27a168u: goto label_27a168;
        case 0x27a16cu: goto label_27a16c;
        case 0x27a170u: goto label_27a170;
        case 0x27a174u: goto label_27a174;
        case 0x27a178u: goto label_27a178;
        case 0x27a17cu: goto label_27a17c;
        case 0x27a180u: goto label_27a180;
        case 0x27a184u: goto label_27a184;
        case 0x27a188u: goto label_27a188;
        case 0x27a18cu: goto label_27a18c;
        case 0x27a190u: goto label_27a190;
        case 0x27a194u: goto label_27a194;
        case 0x27a198u: goto label_27a198;
        case 0x27a19cu: goto label_27a19c;
        case 0x27a1a0u: goto label_27a1a0;
        case 0x27a1a4u: goto label_27a1a4;
        case 0x27a1a8u: goto label_27a1a8;
        case 0x27a1acu: goto label_27a1ac;
        case 0x27a1b0u: goto label_27a1b0;
        case 0x27a1b4u: goto label_27a1b4;
        case 0x27a1b8u: goto label_27a1b8;
        case 0x27a1bcu: goto label_27a1bc;
        case 0x27a1c0u: goto label_27a1c0;
        case 0x27a1c4u: goto label_27a1c4;
        case 0x27a1c8u: goto label_27a1c8;
        case 0x27a1ccu: goto label_27a1cc;
        case 0x27a1d0u: goto label_27a1d0;
        case 0x27a1d4u: goto label_27a1d4;
        case 0x27a1d8u: goto label_27a1d8;
        case 0x27a1dcu: goto label_27a1dc;
        case 0x27a1e0u: goto label_27a1e0;
        case 0x27a1e4u: goto label_27a1e4;
        default: break;
    }

    ctx->pc = 0x27a120u;

label_27a120:
    // 0x27a120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27a120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_27a124:
    // 0x27a124: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27a124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27a128:
    // 0x27a128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27a12c:
    // 0x27a12c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27a130:
    // 0x27a130: 0xc08a61a  jal         func_229868
label_27a134:
    if (ctx->pc == 0x27A134u) {
        ctx->pc = 0x27A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A130u;
        // 0x27a134: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A138u;
        goto label_27a138;
    }
    ctx->pc = 0x27A130u;
    SET_GPR_U32(ctx, 31, 0x27A138u);
    ctx->pc = 0x27A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A130u;
    // 0x27a134: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x27A130u, 0x27A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A138u;
label_27a138:
    // 0x27a138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a13c:
    // 0x27a13c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_27a140:
    if (ctx->pc == 0x27A140u) {
        ctx->pc = 0x27A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A13Cu;
        // 0x27a140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A144u;
        goto label_27a144;
    }
    ctx->pc = 0x27A13Cu;
    {
        const bool branch_taken_0x27a13c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A13Cu;
        // 0x27a140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a13c) {
            ctx->pc = 0x27A1D0u;
            goto label_27a1d0;
        }
    }
    ctx->pc = 0x27A144u;
label_27a144:
    // 0x27a144: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_27a148:
    if (ctx->pc == 0x27A148u) {
        ctx->pc = 0x27A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A144u;
        // 0x27a148: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A14Cu;
        goto label_27a14c;
    }
    ctx->pc = 0x27A144u;
    {
        const bool branch_taken_0x27a144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a144) {
            ctx->pc = 0x27A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A144u;
            // 0x27a148: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A1D4u;
            goto label_27a1d4;
        }
    }
    ctx->pc = 0x27A14Cu;
label_27a14c:
    // 0x27a14c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27a150:
    // 0x27a150: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x27a150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_27a154:
    // 0x27a154: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x27a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27a158:
    // 0x27a158: 0x40f809  jalr        $v0
label_27a15c:
    if (ctx->pc == 0x27A15Cu) {
        ctx->pc = 0x27A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A158u;
        // 0x27a15c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A160u;
        goto label_27a160;
    }
    ctx->pc = 0x27A158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27A160u);
        ctx->pc = 0x27A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A158u;
        // 0x27a15c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A158u, 0x27A160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A160u;
label_27a160:
    // 0x27a160: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_27a164:
    if (ctx->pc == 0x27A164u) {
        ctx->pc = 0x27A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A160u;
        // 0x27a164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A168u;
        goto label_27a168;
    }
    ctx->pc = 0x27A160u;
    {
        const bool branch_taken_0x27a160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A160u;
        // 0x27a164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a160) {
            ctx->pc = 0x27A1C0u;
            goto label_27a1c0;
        }
    }
    ctx->pc = 0x27A168u;
label_27a168:
    // 0x27a168: 0xc09e42a  jal         func_2790A8
label_27a16c:
    if (ctx->pc == 0x27A16Cu) {
        ctx->pc = 0x27A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A168u;
        // 0x27a16c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A170u;
        goto label_27a170;
    }
    ctx->pc = 0x27A168u;
    SET_GPR_U32(ctx, 31, 0x27A170u);
    ctx->pc = 0x27A16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A168u;
    // 0x27a16c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2790A8u, 0x27A168u, 0x27A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A170u;
label_27a170:
    // 0x27a170: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a174:
    // 0x27a174: 0xc441096c  lwc1        $f1, 0x96C($v0)
    ctx->pc = 0x27a174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a178:
    // 0x27a178: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27a178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a17c:
    // 0x27a17c: 0x0  nop
    ctx->pc = 0x27a17cu;
    // NOP
label_27a180:
    // 0x27a180: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_27a184:
    if (ctx->pc == 0x27A184u) {
        ctx->pc = 0x27A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A180u;
        // 0x27a184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A188u;
        goto label_27a188;
    }
    ctx->pc = 0x27A180u;
    {
        const bool branch_taken_0x27a180 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A180u;
        // 0x27a184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a180) {
            ctx->pc = 0x27A1D0u;
            goto label_27a1d0;
        }
    }
    ctx->pc = 0x27A188u;
label_27a188:
    // 0x27a188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a18c:
    // 0x27a18c: 0xc08a684  jal         func_229A10
label_27a190:
    if (ctx->pc == 0x27A190u) {
        ctx->pc = 0x27A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A18Cu;
        // 0x27a190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A194u;
        goto label_27a194;
    }
    ctx->pc = 0x27A18Cu;
    SET_GPR_U32(ctx, 31, 0x27A194u);
    ctx->pc = 0x27A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A18Cu;
    // 0x27a190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x27A18Cu, 0x27A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A194u;
label_27a194:
    // 0x27a194: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27a194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_27a198:
    // 0x27a198: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x27a198u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_27a19c:
    // 0x27a19c: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x27a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a1a0:
    // 0x27a1a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27a1a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a1a4:
    // 0x27a1a4: 0x0  nop
    ctx->pc = 0x27a1a4u;
    // NOP
label_27a1a8:
    // 0x27a1a8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_27a1ac:
    if (ctx->pc == 0x27A1ACu) {
        ctx->pc = 0x27A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1A8u;
        // 0x27a1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A1B0u;
        goto label_27a1b0;
    }
    ctx->pc = 0x27A1A8u;
    {
        const bool branch_taken_0x27a1a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1A8u;
        // 0x27a1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1a8) {
            ctx->pc = 0x27A1D0u;
            goto label_27a1d0;
        }
    }
    ctx->pc = 0x27A1B0u;
label_27a1b0:
    // 0x27a1b0: 0xc0e57ce  jal         func_395F38
label_27a1b4:
    if (ctx->pc == 0x27A1B4u) {
        ctx->pc = 0x27A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1B0u;
        // 0x27a1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A1B8u;
        goto label_27a1b8;
    }
    ctx->pc = 0x27A1B0u;
    SET_GPR_U32(ctx, 31, 0x27A1B8u);
    ctx->pc = 0x27A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A1B0u;
    // 0x27a1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x27A1B0u, 0x27A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A1B8u;
label_27a1b8:
    // 0x27a1b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27a1bc:
    if (ctx->pc == 0x27A1BCu) {
        ctx->pc = 0x27A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1B8u;
        // 0x27a1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A1C0u;
        goto label_27a1c0;
    }
    ctx->pc = 0x27A1B8u;
    {
        const bool branch_taken_0x27a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1B8u;
        // 0x27a1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1b8) {
            ctx->pc = 0x27A1C8u;
            goto label_27a1c8;
        }
    }
    ctx->pc = 0x27A1C0u;
label_27a1c0:
    // 0x27a1c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_27a1c4:
    if (ctx->pc == 0x27A1C4u) {
        ctx->pc = 0x27A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1C0u;
        // 0x27a1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A1C8u;
        goto label_27a1c8;
    }
    ctx->pc = 0x27A1C0u;
    {
        const bool branch_taken_0x27a1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1C0u;
        // 0x27a1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1c0) {
            ctx->pc = 0x27A1D0u;
            goto label_27a1d0;
        }
    }
    ctx->pc = 0x27A1C8u;
label_27a1c8:
    // 0x27a1c8: 0xc0e59c4  jal         func_396710
label_27a1cc:
    if (ctx->pc == 0x27A1CCu) {
        ctx->pc = 0x27A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1C8u;
        // 0x27a1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A1D0u;
        goto label_27a1d0;
    }
    ctx->pc = 0x27A1C8u;
    SET_GPR_U32(ctx, 31, 0x27A1D0u);
    ctx->pc = 0x27A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A1C8u;
    // 0x27a1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396710u, 0x27A1C8u, 0x27A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A1D0u;
label_27a1d0:
    // 0x27a1d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27a1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27a1d4:
    // 0x27a1d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27a1d8:
    // 0x27a1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27a1dc:
    // 0x27a1dc: 0x3e00008  jr          $ra
label_27a1e0:
    if (ctx->pc == 0x27A1E0u) {
        ctx->pc = 0x27A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1DCu;
        // 0x27a1e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A1E4u;
        goto label_27a1e4;
    }
    ctx->pc = 0x27A1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1DCu;
        // 0x27a1e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A1E4u;
label_27a1e4:
    // 0x27a1e4: 0x0  nop
    ctx->pc = 0x27a1e4u;
    // NOP
    ctx->pc = 0x27a1e8u;
}
