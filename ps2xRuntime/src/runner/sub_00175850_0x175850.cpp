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

// Function: sub_00175850
// Address: 0x175850 - 0x175888
void sub_00175850_0x175850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175850_0x175850");
#endif

    switch (ctx->pc) {
        case 0x175864u: goto label_175864;
        default: break;
    }

    ctx->pc = 0x175850u;

    // 0x175850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17585c: 0xc05d610  jal         func_175840
    ctx->pc = 0x17585Cu;
    SET_GPR_U32(ctx, 31, 0x175864u);
    ctx->pc = 0x175860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17585Cu;
    // 0x175860: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x17585Cu, 0x175864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175864u;
label_175864:
    // 0x175864: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x175864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x175868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17586c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17586cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x175870: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x175870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x175874: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x175874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x175878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17587c: 0x3e00008  jr          $ra
    ctx->pc = 0x17587Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17587Cu;
        // 0x175880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17587Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175884u;
    // 0x175884: 0x0  nop
    ctx->pc = 0x175884u;
    // NOP
    ctx->pc = 0x175888u;
}
