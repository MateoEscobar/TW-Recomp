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

// Function: sub_0036DA48
// Address: 0x36da48 - 0x36daf0
void sub_0036DA48_0x36da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DA48_0x36da48");
#endif

    switch (ctx->pc) {
        case 0x36da74u: goto label_36da74;
        case 0x36da7cu: goto label_36da7c;
        case 0x36da94u: goto label_36da94;
        case 0x36da9cu: goto label_36da9c;
        case 0x36dab4u: goto label_36dab4;
        case 0x36dabcu: goto label_36dabc;
        case 0x36dad0u: goto label_36dad0;
        default: break;
    }

    ctx->pc = 0x36da48u;

    // 0x36da48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36da48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36da4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36da4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36da50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36da50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36da54: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x36da54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x36da58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36da58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36da5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x36da60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36da64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36da64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36da68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36da68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36da6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DA6Cu;
    SET_GPR_U32(ctx, 31, 0x36DA74u);
    ctx->pc = 0x36DA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA6Cu;
    // 0x36da70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DA6Cu, 0x36DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA74u;
label_36da74:
    // 0x36da74: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36DA74u;
    SET_GPR_U32(ctx, 31, 0x36DA7Cu);
    ctx->pc = 0x36DA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA74u;
    // 0x36da78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36DA74u, 0x36DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA7Cu;
label_36da7c:
    // 0x36da7c: 0x29400  sll         $s2, $v0, 16
    ctx->pc = 0x36da7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36da80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36da80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36da88: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x36da88u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x36da8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DA8Cu;
    SET_GPR_U32(ctx, 31, 0x36DA94u);
    ctx->pc = 0x36DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA8Cu;
    // 0x36da90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DA8Cu, 0x36DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA94u;
label_36da94:
    // 0x36da94: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36DA94u;
    SET_GPR_U32(ctx, 31, 0x36DA9Cu);
    ctx->pc = 0x36DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA94u;
    // 0x36da98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36DA94u, 0x36DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA9Cu;
label_36da9c:
    // 0x36da9c: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x36da9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36daa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36daa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36daa4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x36daa4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x36daa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36daa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36daac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DAACu;
    SET_GPR_U32(ctx, 31, 0x36DAB4u);
    ctx->pc = 0x36DAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DAACu;
    // 0x36dab0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DAACu, 0x36DAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DAB4u;
label_36dab4:
    // 0x36dab4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36DAB4u;
    SET_GPR_U32(ctx, 31, 0x36DABCu);
    ctx->pc = 0x36DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DAB4u;
    // 0x36dab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36DAB4u, 0x36DABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DABCu;
label_36dabc:
    // 0x36dabc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x36dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36dac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36dac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36dac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dac8: 0xc08e938  jal         func_23A4E0
    ctx->pc = 0x36DAC8u;
    SET_GPR_U32(ctx, 31, 0x36DAD0u);
    ctx->pc = 0x36DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DAC8u;
    // 0x36dacc: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4E0u, 0x36DAC8u, 0x36DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DAD0u;
label_36dad0:
    // 0x36dad0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36dad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36dad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36dad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dad8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36dad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36dadc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36dadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dae0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36dae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dae8: 0x3e00008  jr          $ra
    ctx->pc = 0x36DAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DAE8u;
        // 0x36daec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DAF0u;
}
