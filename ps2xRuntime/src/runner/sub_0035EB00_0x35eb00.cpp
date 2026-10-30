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

// Function: sub_0035EB00
// Address: 0x35eb00 - 0x35eb78
void sub_0035EB00_0x35eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EB00_0x35eb00");
#endif

    switch (ctx->pc) {
        case 0x35eb28u: goto label_35eb28;
        case 0x35eb30u: goto label_35eb30;
        case 0x35eb44u: goto label_35eb44;
        case 0x35eb4cu: goto label_35eb4c;
        case 0x35eb58u: goto label_35eb58;
        default: break;
    }

    ctx->pc = 0x35eb00u;

    // 0x35eb00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35eb04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35eb08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35eb0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35eb10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35eb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eb14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35eb14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eb18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35eb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35eb1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35eb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35eb20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EB20u;
    SET_GPR_U32(ctx, 31, 0x35EB28u);
    ctx->pc = 0x35EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB20u;
    // 0x35eb24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EB20u, 0x35EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB28u;
label_35eb28:
    // 0x35eb28: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EB28u;
    SET_GPR_U32(ctx, 31, 0x35EB30u);
    ctx->pc = 0x35EB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB28u;
    // 0x35eb2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EB28u, 0x35EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB30u;
label_35eb30:
    // 0x35eb30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35eb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eb34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35eb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eb38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eb3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35EB3Cu;
    SET_GPR_U32(ctx, 31, 0x35EB44u);
    ctx->pc = 0x35EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB3Cu;
    // 0x35eb40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35EB3Cu, 0x35EB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB44u;
label_35eb44:
    // 0x35eb44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35EB44u;
    SET_GPR_U32(ctx, 31, 0x35EB4Cu);
    ctx->pc = 0x35EB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB44u;
    // 0x35eb48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35EB44u, 0x35EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB4Cu;
label_35eb4c:
    // 0x35eb4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35eb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eb50: 0xc08eae0  jal         func_23AB80
    ctx->pc = 0x35EB50u;
    SET_GPR_U32(ctx, 31, 0x35EB58u);
    ctx->pc = 0x35EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EB50u;
    // 0x35eb54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB80u, 0x35EB50u, 0x35EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EB58u;
label_35eb58:
    // 0x35eb58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35eb58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35eb5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35eb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35eb60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35eb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35eb64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35eb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35eb68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35eb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35eb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x35EB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB6Cu;
        // 0x35eb70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EB74u;
    // 0x35eb74: 0x0  nop
    ctx->pc = 0x35eb74u;
    // NOP
    ctx->pc = 0x35eb78u;
}
