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

// Function: sub_00373D58
// Address: 0x373d58 - 0x373dd0
void sub_00373D58_0x373d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373D58_0x373d58");
#endif

    switch (ctx->pc) {
        case 0x373d80u: goto label_373d80;
        case 0x373d88u: goto label_373d88;
        case 0x373d9cu: goto label_373d9c;
        case 0x373da4u: goto label_373da4;
        case 0x373db0u: goto label_373db0;
        default: break;
    }

    ctx->pc = 0x373d58u;

    // 0x373d58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373d5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373d60: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373d64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373d68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373d78: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373D78u;
    SET_GPR_U32(ctx, 31, 0x373D80u);
    ctx->pc = 0x373D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D78u;
    // 0x373d7c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373D78u, 0x373D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D80u;
label_373d80:
    // 0x373d80: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373D80u;
    SET_GPR_U32(ctx, 31, 0x373D88u);
    ctx->pc = 0x373D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D80u;
    // 0x373d84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373D80u, 0x373D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D88u;
label_373d88:
    // 0x373d88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x373d8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d94: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373D94u;
    SET_GPR_U32(ctx, 31, 0x373D9Cu);
    ctx->pc = 0x373D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D94u;
    // 0x373d98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373D94u, 0x373D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D9Cu;
label_373d9c:
    // 0x373d9c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373D9Cu;
    SET_GPR_U32(ctx, 31, 0x373DA4u);
    ctx->pc = 0x373DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D9Cu;
    // 0x373da0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373D9Cu, 0x373DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DA4u;
label_373da4:
    // 0x373da4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373da8: 0xc05ab84  jal         func_16AE10
    ctx->pc = 0x373DA8u;
    SET_GPR_U32(ctx, 31, 0x373DB0u);
    ctx->pc = 0x373DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373DA8u;
    // 0x373dac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AE10u, 0x373DA8u, 0x373DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373DB0u;
label_373db0:
    // 0x373db0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373db4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373db8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373dbc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x373DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373DC4u;
        // 0x373dc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373DCCu;
    // 0x373dcc: 0x0  nop
    ctx->pc = 0x373dccu;
    // NOP
    ctx->pc = 0x373dd0u;
}
