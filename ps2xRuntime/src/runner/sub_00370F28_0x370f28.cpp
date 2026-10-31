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

// Function: sub_00370F28
// Address: 0x370f28 - 0x370fa0
void sub_00370F28_0x370f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370F28_0x370f28");
#endif

    switch (ctx->pc) {
        case 0x370f50u: goto label_370f50;
        case 0x370f58u: goto label_370f58;
        case 0x370f6cu: goto label_370f6c;
        case 0x370f74u: goto label_370f74;
        case 0x370f80u: goto label_370f80;
        default: break;
    }

    ctx->pc = 0x370f28u;

    // 0x370f28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x370f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x370f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370f30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x370f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x370f34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x370f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370f38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x370f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x370f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x370f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370f48: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370F48u;
    SET_GPR_U32(ctx, 31, 0x370F50u);
    ctx->pc = 0x370F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F48u;
    // 0x370f4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370F48u, 0x370F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F50u;
label_370f50:
    // 0x370f50: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370F50u;
    SET_GPR_U32(ctx, 31, 0x370F58u);
    ctx->pc = 0x370F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F50u;
    // 0x370f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370F50u, 0x370F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F58u;
label_370f58:
    // 0x370f58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x370f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f64: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370F64u;
    SET_GPR_U32(ctx, 31, 0x370F6Cu);
    ctx->pc = 0x370F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F64u;
    // 0x370f68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370F64u, 0x370F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F6Cu;
label_370f6c:
    // 0x370f6c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370F6Cu;
    SET_GPR_U32(ctx, 31, 0x370F74u);
    ctx->pc = 0x370F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F6Cu;
    // 0x370f70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370F6Cu, 0x370F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F74u;
label_370f74:
    // 0x370f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x370f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f78: 0xc044cd0  jal         func_113340
    ctx->pc = 0x370F78u;
    SET_GPR_U32(ctx, 31, 0x370F80u);
    ctx->pc = 0x370F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F78u;
    // 0x370f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113340u, 0x370F78u, 0x370F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370F80u;
label_370f80:
    // 0x370f80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x370f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370f84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370f88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x370f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370f8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x370f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370f94: 0x3e00008  jr          $ra
    ctx->pc = 0x370F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F94u;
        // 0x370f98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370F9Cu;
    // 0x370f9c: 0x0  nop
    ctx->pc = 0x370f9cu;
    // NOP
    ctx->pc = 0x370fa0u;
}
