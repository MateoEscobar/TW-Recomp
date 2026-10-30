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

// Function: sub_0019EF38
// Address: 0x19ef38 - 0x19ef80
void sub_0019EF38_0x19ef38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EF38_0x19ef38");
#endif

    switch (ctx->pc) {
        case 0x19ef4cu: goto label_19ef4c;
        case 0x19ef60u: goto label_19ef60;
        default: break;
    }

    ctx->pc = 0x19ef38u;

    // 0x19ef38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ef38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ef3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19ef3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19ef40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ef40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ef44: 0xc079ba6  jal         func_1E6E98
    ctx->pc = 0x19EF44u;
    SET_GPR_U32(ctx, 31, 0x19EF4Cu);
    ctx->pc = 0x19EF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF44u;
    // 0x19ef48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E98u, 0x19EF44u, 0x19EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF4Cu;
label_19ef4c:
    // 0x19ef4c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x19ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x19ef50: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x19ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x19ef54: 0x24639270  addiu       $v1, $v1, -0x6D90
    ctx->pc = 0x19ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939248));
    // 0x19ef58: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x19EF58u;
    SET_GPR_U32(ctx, 31, 0x19EF60u);
    ctx->pc = 0x19EF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF58u;
    // 0x19ef5c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x19EF58u, 0x19EF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EF60u;
label_19ef60:
    // 0x19ef60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ef60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef64: 0xae00045c  sw          $zero, 0x45C($s0)
    ctx->pc = 0x19ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1116), GPR_U32(ctx, 0));
    // 0x19ef68: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x19ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x19ef6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19ef6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ef70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ef70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ef74: 0x3e00008  jr          $ra
    ctx->pc = 0x19EF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EF74u;
        // 0x19ef78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EF7Cu;
    // 0x19ef7c: 0x0  nop
    ctx->pc = 0x19ef7cu;
    // NOP
    ctx->pc = 0x19ef80u;
}
