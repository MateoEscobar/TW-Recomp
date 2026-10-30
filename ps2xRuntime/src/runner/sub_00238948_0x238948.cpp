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

// Function: sub_00238948
// Address: 0x238948 - 0x2389e8
void sub_00238948_0x238948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238948_0x238948");
#endif

    switch (ctx->pc) {
        case 0x238968u: goto label_238968;
        case 0x238970u: goto label_238970;
        case 0x23899cu: goto label_23899c;
        case 0x2389acu: goto label_2389ac;
        case 0x2389c4u: goto label_2389c4;
        case 0x2389d0u: goto label_2389d0;
        default: break;
    }

    ctx->pc = 0x238948u;

    // 0x238948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23894c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x238950: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238954: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x238954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238958: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x238958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23895c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23895cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238960: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238960u;
    SET_GPR_U32(ctx, 31, 0x238968u);
    ctx->pc = 0x238964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238960u;
    // 0x238964: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238960u, 0x238968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238968u;
label_238968:
    // 0x238968: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238968u;
    SET_GPR_U32(ctx, 31, 0x238970u);
    ctx->pc = 0x23896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238968u;
    // 0x23896c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238968u, 0x238970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238970u;
label_238970:
    // 0x238970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238974: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x238974u;
    {
        const bool branch_taken_0x238974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x238974) {
            ctx->pc = 0x238978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238974u;
            // 0x238978: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2389D4u;
            goto label_2389d4;
        }
    }
    ctx->pc = 0x23897Cu;
    // 0x23897c: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x23897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x238980: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x238980u;
    {
        const bool branch_taken_0x238980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238980) {
            ctx->pc = 0x238984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238980u;
            // 0x238984: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2389D4u;
            goto label_2389d4;
        }
    }
    ctx->pc = 0x238988u;
    // 0x238988: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x238988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x23898c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x23898Cu;
    {
        const bool branch_taken_0x23898c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23898c) {
            ctx->pc = 0x238990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23898Cu;
            // 0x238990: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2389D4u;
            goto label_2389d4;
        }
    }
    ctx->pc = 0x238994u;
    // 0x238994: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x238994u;
    SET_GPR_U32(ctx, 31, 0x23899Cu);
    ctx->pc = 0x238998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238994u;
    // 0x238998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x238994u, 0x23899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23899Cu;
label_23899c:
    // 0x23899c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x23899Cu;
    {
        const bool branch_taken_0x23899c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23899c) {
            ctx->pc = 0x2389A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23899Cu;
            // 0x2389a0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2389D4u;
            goto label_2389d4;
        }
    }
    ctx->pc = 0x2389A4u;
    // 0x2389a4: 0xc089f86  jal         func_227E18
    ctx->pc = 0x2389A4u;
    SET_GPR_U32(ctx, 31, 0x2389ACu);
    ctx->pc = 0x2389A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389A4u;
    // 0x2389a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x2389A4u, 0x2389ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389ACu;
label_2389ac:
    // 0x2389ac: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2389ACu;
    {
        const bool branch_taken_0x2389ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2389ac) {
            ctx->pc = 0x2389B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2389ACu;
            // 0x2389b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2389D4u;
            goto label_2389d4;
        }
    }
    ctx->pc = 0x2389B4u;
    // 0x2389b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2389b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2389b8: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x2389b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x2389bc: 0xc08e1d2  jal         func_238748
    ctx->pc = 0x2389BCu;
    SET_GPR_U32(ctx, 31, 0x2389C4u);
    ctx->pc = 0x2389C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389BCu;
    // 0x2389c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x2389BCu, 0x2389C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389C4u;
label_2389c4:
    // 0x2389c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2389c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2389c8: 0xc0899aa  jal         func_2266A8
    ctx->pc = 0x2389C8u;
    SET_GPR_U32(ctx, 31, 0x2389D0u);
    ctx->pc = 0x2389CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389C8u;
    // 0x2389cc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x2389C8u, 0x2389D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389D0u;
label_2389d0:
    // 0x2389d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2389d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2389d4:
    // 0x2389d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2389d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2389d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2389d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2389dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2389DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2389E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389DCu;
        // 0x2389e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2389DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2389E4u;
    // 0x2389e4: 0x0  nop
    ctx->pc = 0x2389e4u;
    // NOP
    ctx->pc = 0x2389e8u;
}
