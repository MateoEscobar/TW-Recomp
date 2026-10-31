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

// Function: sub_0042BCF0
// Address: 0x42bcf0 - 0x42bd58
void sub_0042BCF0_0x42bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042BCF0_0x42bcf0");
#endif

    switch (ctx->pc) {
        case 0x42bd10u: goto label_42bd10;
        case 0x42bd20u: goto label_42bd20;
        case 0x42bd3cu: goto label_42bd3c;
        case 0x42bd44u: goto label_42bd44;
        default: break;
    }

    ctx->pc = 0x42bcf0u;

    // 0x42bcf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x42bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x42bcf4: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x42bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x42bcf8: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x42bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x42bcfc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x42bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x42bd00: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x42bd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x42bd04: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x42bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x42bd08: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42BD08u;
    SET_GPR_U32(ctx, 31, 0x42BD10u);
    ctx->pc = 0x42BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BD08u;
    // 0x42bd0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42BD08u, 0x42BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BD10u;
label_42bd10:
    // 0x42bd10: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x42bd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x42bd14: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x42bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x42bd18: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42BD18u;
    SET_GPR_U32(ctx, 31, 0x42BD20u);
    ctx->pc = 0x42BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BD18u;
    // 0x42bd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42BD18u, 0x42BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BD20u;
label_42bd20:
    // 0x42bd20: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x42bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x42bd24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42bd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42bd28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x42bd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42bd2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42bd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42bd30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x42bd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x42bd34: 0xc10ae96  jal         func_42BA58
    ctx->pc = 0x42BD34u;
    SET_GPR_U32(ctx, 31, 0x42BD3Cu);
    ctx->pc = 0x42BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BD34u;
    // 0x42bd38: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BA58u, 0x42BD34u, 0x42BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BD3Cu;
label_42bd3c:
    // 0x42bd3c: 0xc10ae22  jal         func_42B888
    ctx->pc = 0x42BD3Cu;
    SET_GPR_U32(ctx, 31, 0x42BD44u);
    ctx->pc = 0x42BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BD3Cu;
    // 0x42bd40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B888u, 0x42BD3Cu, 0x42BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BD44u;
label_42bd44:
    // 0x42bd44: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x42bd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x42bd48: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x42bd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x42bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x42BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BD4Cu;
        // 0x42bd50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BD54u;
    // 0x42bd54: 0x0  nop
    ctx->pc = 0x42bd54u;
    // NOP
    ctx->pc = 0x42bd58u;
}
