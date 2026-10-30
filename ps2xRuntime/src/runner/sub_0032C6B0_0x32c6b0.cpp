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

// Function: sub_0032C6B0
// Address: 0x32c6b0 - 0x32c758
void sub_0032C6B0_0x32c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C6B0_0x32c6b0");
#endif

    switch (ctx->pc) {
        case 0x32c6f8u: goto label_32c6f8;
        case 0x32c720u: goto label_32c720;
        case 0x32c734u: goto label_32c734;
        default: break;
    }

    ctx->pc = 0x32c6b0u;

    // 0x32c6b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32c6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32c6b4: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x32c6b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x32c6b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x32c6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x32c6bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x32c6c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32c6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x32c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32c6c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32c6c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x32c6d0: 0x2078821  addu        $s1, $s0, $a3
    ctx->pc = 0x32c6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x32c6d4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x32c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x32c6d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32c6d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c6e0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x32c6e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6e4: 0x20a502b  sltu        $t2, $s0, $t2
    ctx->pc = 0x32c6e4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x32c6e8: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C6E8u;
    {
        const bool branch_taken_0x32c6e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6E8u;
        // 0x32c6ec: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6e8) {
            ctx->pc = 0x32C6F8u;
            goto label_32c6f8;
        }
    }
    ctx->pc = 0x32C6F0u;
    // 0x32c6f0: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x32C6F0u;
    SET_GPR_U32(ctx, 31, 0x32C6F8u);
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x32C6F0u, 0x32C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6F8u;
label_32c6f8:
    // 0x32c6f8: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x32c6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
    // 0x32c6fc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x32c6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32c700: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32C700u;
    {
        const bool branch_taken_0x32c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C700u;
        // 0x32c704: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c700) {
            ctx->pc = 0x32C734u;
            goto label_32c734;
        }
    }
    ctx->pc = 0x32C708u;
    // 0x32c708: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C708u;
    {
        const bool branch_taken_0x32c708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C708u;
        // 0x32c70c: 0x2e220004  sltiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c708) {
            ctx->pc = 0x32C718u;
            goto label_32c718;
        }
    }
    ctx->pc = 0x32C710u;
    // 0x32c710: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32C710u;
    {
        const bool branch_taken_0x32c710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C710u;
        // 0x32c714: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c710) {
            ctx->pc = 0x32C734u;
            goto label_32c734;
        }
    }
    ctx->pc = 0x32C718u;
label_32c718:
    // 0x32c718: 0xc0cb218  jal         func_32C860
    ctx->pc = 0x32C718u;
    SET_GPR_U32(ctx, 31, 0x32C720u);
    ctx->pc = 0x32C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C718u;
    // 0x32c71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C860u, 0x32C718u, 0x32C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C720u;
label_32c720:
    // 0x32c720: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x32c720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32c724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c728: 0x3012  mflo        $a2
    ctx->pc = 0x32c728u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x32c72c: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32C72Cu;
    SET_GPR_U32(ctx, 31, 0x32C734u);
    ctx->pc = 0x32C730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C72Cu;
    // 0x32c730: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32C72Cu, 0x32C734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C734u;
label_32c734:
    // 0x32c734: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x32c734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32c738: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x32c738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32c73c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x32c73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c740: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x32c740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c744: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x32c744u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c74c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C74Cu;
        // 0x32c750: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C754u;
    // 0x32c754: 0x0  nop
    ctx->pc = 0x32c754u;
    // NOP
    ctx->pc = 0x32c758u;
}
