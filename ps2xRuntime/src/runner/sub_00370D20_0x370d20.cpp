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

// Function: sub_00370D20
// Address: 0x370d20 - 0x370d98
void sub_00370D20_0x370d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370D20_0x370d20");
#endif

    switch (ctx->pc) {
        case 0x370d48u: goto label_370d48;
        case 0x370d50u: goto label_370d50;
        case 0x370d64u: goto label_370d64;
        case 0x370d6cu: goto label_370d6c;
        case 0x370d78u: goto label_370d78;
        default: break;
    }

    ctx->pc = 0x370d20u;

    // 0x370d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x370d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x370d24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370d28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x370d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x370d2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x370d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x370d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x370d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x370d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x370d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x370d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370d40: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370D40u;
    SET_GPR_U32(ctx, 31, 0x370D48u);
    ctx->pc = 0x370D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D40u;
    // 0x370d44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370D40u, 0x370D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D48u;
label_370d48:
    // 0x370d48: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370D48u;
    SET_GPR_U32(ctx, 31, 0x370D50u);
    ctx->pc = 0x370D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D48u;
    // 0x370d4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370D48u, 0x370D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D50u;
label_370d50:
    // 0x370d50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x370d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d5c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370D5Cu;
    SET_GPR_U32(ctx, 31, 0x370D64u);
    ctx->pc = 0x370D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D5Cu;
    // 0x370d60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370D5Cu, 0x370D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D64u;
label_370d64:
    // 0x370d64: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370D64u;
    SET_GPR_U32(ctx, 31, 0x370D6Cu);
    ctx->pc = 0x370D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D64u;
    // 0x370d68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370D64u, 0x370D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D6Cu;
label_370d6c:
    // 0x370d6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x370d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d70: 0xc06cfd6  jal         func_1B3F58
    ctx->pc = 0x370D70u;
    SET_GPR_U32(ctx, 31, 0x370D78u);
    ctx->pc = 0x370D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D70u;
    // 0x370d74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F58u, 0x370D70u, 0x370D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370D78u;
label_370d78:
    // 0x370d78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x370d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370d7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370d80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x370d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370d84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x370d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x370D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D8Cu;
        // 0x370d90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370D94u;
    // 0x370d94: 0x0  nop
    ctx->pc = 0x370d94u;
    // NOP
    ctx->pc = 0x370d98u;
}
