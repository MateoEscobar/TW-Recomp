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

// Function: sub_002FB000
// Address: 0x2fb000 - 0x2fb050
void sub_002FB000_0x2fb000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB000_0x2fb000");
#endif

    switch (ctx->pc) {
        case 0x2fb01cu: goto label_2fb01c;
        case 0x2fb028u: goto label_2fb028;
        case 0x2fb030u: goto label_2fb030;
        case 0x2fb03cu: goto label_2fb03c;
        default: break;
    }

    ctx->pc = 0x2fb000u;

    // 0x2fb000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb008: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fb008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fb00c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fb010: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2fb010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2fb014: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FB014u;
    SET_GPR_U32(ctx, 31, 0x2FB01Cu);
    ctx->pc = 0x2FB018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB014u;
    // 0x2fb018: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FB014u, 0x2FB01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB01Cu;
label_2fb01c:
    // 0x2fb01c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fb01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb020: 0xc089c20  jal         func_227080
    ctx->pc = 0x2FB020u;
    SET_GPR_U32(ctx, 31, 0x2FB028u);
    ctx->pc = 0x2FB024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB020u;
    // 0x2fb024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x2FB020u, 0x2FB028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB028u;
label_2fb028:
    // 0x2fb028: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FB028u;
    SET_GPR_U32(ctx, 31, 0x2FB030u);
    ctx->pc = 0x2FB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB028u;
    // 0x2fb02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FB028u, 0x2FB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB030u;
label_2fb030:
    // 0x2fb030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb034: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2FB034u;
    SET_GPR_U32(ctx, 31, 0x2FB03Cu);
    ctx->pc = 0x2FB038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB034u;
    // 0x2fb038: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2FB034u, 0x2FB03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB03Cu;
label_2fb03c:
    // 0x2fb03c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fb03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb048: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB048u;
        // 0x2fb04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB050u;
}
