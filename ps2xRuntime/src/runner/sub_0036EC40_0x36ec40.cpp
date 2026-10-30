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

// Function: sub_0036EC40
// Address: 0x36ec40 - 0x36ec98
void sub_0036EC40_0x36ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EC40_0x36ec40");
#endif

    switch (ctx->pc) {
        case 0x36ec60u: goto label_36ec60;
        case 0x36ec74u: goto label_36ec74;
        case 0x36ec80u: goto label_36ec80;
        default: break;
    }

    ctx->pc = 0x36ec40u;

    // 0x36ec40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36ec44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ec48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36ec4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ec4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36ec50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36ec54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ec58: 0xc102488  jal         func_409220
    ctx->pc = 0x36EC58u;
    SET_GPR_U32(ctx, 31, 0x36EC60u);
    ctx->pc = 0x36EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC58u;
    // 0x36ec5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36EC58u, 0x36EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC60u;
label_36ec60:
    // 0x36ec60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36ec60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ec64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ec68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec6c: 0xc102488  jal         func_409220
    ctx->pc = 0x36EC6Cu;
    SET_GPR_U32(ctx, 31, 0x36EC74u);
    ctx->pc = 0x36EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC6Cu;
    // 0x36ec70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36EC6Cu, 0x36EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC74u;
label_36ec74:
    // 0x36ec74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36ec74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec78: 0xc055460  jal         func_155180
    ctx->pc = 0x36EC78u;
    SET_GPR_U32(ctx, 31, 0x36EC80u);
    ctx->pc = 0x36EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EC78u;
    // 0x36ec7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155180u, 0x36EC78u, 0x36EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EC80u;
label_36ec80:
    // 0x36ec80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36ec80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ec84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ec84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ec88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36ec88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ec8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ec8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ec90: 0x3e00008  jr          $ra
    ctx->pc = 0x36EC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EC90u;
        // 0x36ec94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EC98u;
}
