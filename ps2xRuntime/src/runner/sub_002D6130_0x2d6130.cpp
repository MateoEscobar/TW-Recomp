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

// Function: sub_002D6130
// Address: 0x2d6130 - 0x2d6228
void sub_002D6130_0x2d6130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6130_0x2d6130");
#endif

    switch (ctx->pc) {
        case 0x2d6188u: goto label_2d6188;
        case 0x2d6190u: goto label_2d6190;
        case 0x2d61b8u: goto label_2d61b8;
        case 0x2d61c4u: goto label_2d61c4;
        case 0x2d6200u: goto label_2d6200;
        default: break;
    }

    ctx->pc = 0x2d6130u;

    // 0x2d6130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d6130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d6134: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d6134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d6138: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d6138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d613c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d613cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6140: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d6140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d6144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6148: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d6148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d614c: 0x92420033  lbu         $v0, 0x33($s2)
    ctx->pc = 0x2d614cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x2d6150: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D6150u;
    {
        const bool branch_taken_0x2d6150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6150u;
        // 0x2d6154: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6150) {
            ctx->pc = 0x2D620Cu;
            goto label_2d620c;
        }
    }
    ctx->pc = 0x2D6158u;
    // 0x2d6158: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d6158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d615c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2d615cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2d6160: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2d6160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d6164: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d6164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6168: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d6168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d616c: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x2d616cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x2d6170: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d6170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d6174: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d6174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d6178: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d6178u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d617c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D617Cu;
    {
        const bool branch_taken_0x2d617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D617Cu;
        // 0x2d6180: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d617c) {
            ctx->pc = 0x2D61F8u;
            goto label_2d61f8;
        }
    }
    ctx->pc = 0x2D6184u;
    // 0x2d6184: 0x0  nop
    ctx->pc = 0x2d6184u;
    // NOP
label_2d6188:
    // 0x2d6188: 0xc105774  jal         func_415DD0
    ctx->pc = 0x2D6188u;
    SET_GPR_U32(ctx, 31, 0x2D6190u);
    ctx->pc = 0x2D618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6188u;
    // 0x2d618c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x2D6188u, 0x2D6190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6190u;
label_2d6190:
    // 0x2d6190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d6190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6194: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2d6194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2d6198: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D6198u;
    {
        const bool branch_taken_0x2d6198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6198) {
            ctx->pc = 0x2D619Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6198u;
            // 0x2d619c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D61F8u;
            goto label_2d61f8;
        }
    }
    ctx->pc = 0x2D61A0u;
    // 0x2d61a0: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x2d61a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2d61a4: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2d61a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x2d61a8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D61A8u;
    {
        const bool branch_taken_0x2d61a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d61a8) {
            ctx->pc = 0x2D61ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D61A8u;
            // 0x2d61ac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D61F8u;
            goto label_2d61f8;
        }
    }
    ctx->pc = 0x2D61B0u;
    // 0x2d61b0: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2D61B0u;
    SET_GPR_U32(ctx, 31, 0x2D61B8u);
    ctx->pc = 0x2D61B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D61B0u;
    // 0x2d61b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D61B0u, 0x2D61B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D61B8u;
label_2d61b8:
    // 0x2d61b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d61b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d61bc: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2D61BCu;
    SET_GPR_U32(ctx, 31, 0x2D61C4u);
    ctx->pc = 0x2D61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D61BCu;
    // 0x2d61c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D61BCu, 0x2D61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D61C4u;
label_2d61c4:
    // 0x2d61c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2d61c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2d61c8: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x2d61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d61cc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2d61ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d61d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d61d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d61d4: 0x0  nop
    ctx->pc = 0x2d61d4u;
    // NOP
    // 0x2d61d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2D61D8u;
    {
        const bool branch_taken_0x2d61d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61D8u;
        // 0x2d61dc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61d8) {
            ctx->pc = 0x2D61F8u;
            goto label_2d61f8;
        }
    }
    ctx->pc = 0x2D61E0u;
    // 0x2d61e0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2d61e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d61e4: 0x0  nop
    ctx->pc = 0x2d61e4u;
    // NOP
    // 0x2d61e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D61E8u;
    {
        const bool branch_taken_0x2d61e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d61e8) {
            ctx->pc = 0x2D61F8u;
            goto label_2d61f8;
        }
    }
    ctx->pc = 0x2D61F0u;
    // 0x2d61f0: 0xae500020  sw          $s0, 0x20($s2)
    ctx->pc = 0x2d61f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 16));
    // 0x2d61f4: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2d61f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_2d61f8:
    // 0x2d61f8: 0xc10574c  jal         func_415D30
    ctx->pc = 0x2D61F8u;
    SET_GPR_U32(ctx, 31, 0x2D6200u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x2D61F8u, 0x2D6200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6200u;
label_2d6200:
    // 0x2d6200: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d6200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d6204: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2D6204u;
    {
        const bool branch_taken_0x2d6204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6204) {
            ctx->pc = 0x2D6188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6188;
        }
    }
    ctx->pc = 0x2D620Cu;
label_2d620c:
    // 0x2d620c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d620cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6210: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d6210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6214: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d6214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d6218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d621c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d621cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6220: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6220u;
        // 0x2d6224: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6228u;
}
