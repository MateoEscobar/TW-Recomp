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

// Function: sub_00240850
// Address: 0x240850 - 0x240888
void sub_00240850_0x240850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240850_0x240850");
#endif

    switch (ctx->pc) {
        case 0x240874u: goto label_240874;
        default: break;
    }

    ctx->pc = 0x240850u;

    // 0x240850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x240854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x240858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24085c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24085cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240860: 0x8e050664  lw          $a1, 0x664($s0)
    ctx->pc = 0x240860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x240864: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240864u;
    {
        const bool branch_taken_0x240864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x240868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240864u;
        // 0x240868: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240864) {
            ctx->pc = 0x240874u;
            goto label_240874;
        }
    }
    ctx->pc = 0x24086Cu;
    // 0x24086c: 0xc105f7e  jal         func_417DF8
    ctx->pc = 0x24086Cu;
    SET_GPR_U32(ctx, 31, 0x240874u);
    ctx->pc = 0x240870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24086Cu;
    // 0x240870: 0x8c44719c  lw          $a0, 0x719C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417DF8u, 0x24086Cu, 0x240874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240874u;
label_240874:
    // 0x240874: 0xae000664  sw          $zero, 0x664($s0)
    ctx->pc = 0x240874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1636), GPR_U32(ctx, 0));
    // 0x240878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x240878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24087c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24087cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240880: 0x3e00008  jr          $ra
    ctx->pc = 0x240880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240880u;
        // 0x240884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240888u;
}
