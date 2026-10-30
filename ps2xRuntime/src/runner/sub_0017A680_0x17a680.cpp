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

// Function: sub_0017A680
// Address: 0x17a680 - 0x17a738
void sub_0017A680_0x17a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A680_0x17a680");
#endif

    switch (ctx->pc) {
        case 0x17a6d8u: goto label_17a6d8;
        case 0x17a6f4u: goto label_17a6f4;
        default: break;
    }

    ctx->pc = 0x17a680u;

    // 0x17a680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x17a684: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17a684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17a688: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x17a688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x17a68c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x17a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x17a690: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x17a690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x17a694: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17a694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a698: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17a69c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x17a69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x17a6a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a6a4: 0xc441ccc4  lwc1        $f1, -0x333C($v0)
    ctx->pc = 0x17a6a4u;
    { uint32_t bits = FAST_READ32(0x50CCC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17a6a8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x17a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17a6ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17a6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17a6b0: 0x0  nop
    ctx->pc = 0x17a6b0u;
    // NOP
    // 0x17a6b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17A6B4u;
    {
        const bool branch_taken_0x17a6b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6B4u;
        // 0x17a6b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6b4) {
            ctx->pc = 0x17A6C4u;
            goto label_17a6c4;
        }
    }
    ctx->pc = 0x17A6BCu;
    // 0x17a6bc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17A6BCu;
    {
        const bool branch_taken_0x17a6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6BCu;
        // 0x17a6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6bc) {
            ctx->pc = 0x17A714u;
            goto label_17a714;
        }
    }
    ctx->pc = 0x17A6C4u;
label_17a6c4:
    // 0x17a6c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17a6c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17A6C8u;
    {
        const bool branch_taken_0x17a6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6C8u;
        // 0x17a6cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6c8) {
            ctx->pc = 0x17A710u;
            goto label_17a710;
        }
    }
    ctx->pc = 0x17A6D0u;
    // 0x17a6d0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x17a6d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a6d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17a6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a6d8:
    // 0x17a6d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a6dc: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x17a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17a6e0: 0x9083006f  lbu         $v1, 0x6F($a0)
    ctx->pc = 0x17a6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 111)));
    // 0x17a6e4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A6E4u;
    {
        const bool branch_taken_0x17a6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a6e4) {
            ctx->pc = 0x17A6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A6E4u;
            // 0x17a6e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A700u;
            goto label_17a700;
        }
    }
    ctx->pc = 0x17A6ECu;
    // 0x17a6ec: 0xc05eade  jal         func_17AB78
    ctx->pc = 0x17A6ECu;
    SET_GPR_U32(ctx, 31, 0x17A6F4u);
    ctx->pc = 0x17A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6ECu;
    // 0x17a6f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB78u, 0x17A6ECu, 0x17A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A6F4u;
label_17a6f4:
    // 0x17a6f4: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x17A6F4u;
    {
        const bool branch_taken_0x17a6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x17A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6F4u;
        // 0x17a6f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6f4) {
            ctx->pc = 0x17A714u;
            goto label_17a714;
        }
    }
    ctx->pc = 0x17A6FCu;
    // 0x17a6fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17a700:
    // 0x17a700: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a704: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x17a704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a708: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17A708u;
    {
        const bool branch_taken_0x17a708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A708u;
        // 0x17a70c: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a708) {
            ctx->pc = 0x17A6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a6d8;
        }
    }
    ctx->pc = 0x17A710u;
label_17a710:
    // 0x17a710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a714:
    // 0x17a714: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17a714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a718: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x17a718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a71c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17a71cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a720: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x17a720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a724: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x17a724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a72c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A72Cu;
        // 0x17a730: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A734u;
    // 0x17a734: 0x0  nop
    ctx->pc = 0x17a734u;
    // NOP
    ctx->pc = 0x17a738u;
}
