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

// Function: sub_00391CE8
// Address: 0x391ce8 - 0x391d20
void sub_00391CE8_0x391ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391CE8_0x391ce8");
#endif

    switch (ctx->pc) {
        case 0x391d0cu: goto label_391d0c;
        default: break;
    }

    ctx->pc = 0x391ce8u;

    // 0x391ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x391ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x391cec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x391cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x391cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x391cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x391cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x391cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391cf8: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x391cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x391cfc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x391CFCu;
    {
        const bool branch_taken_0x391cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x391D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391CFCu;
        // 0x391d00: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391cfc) {
            ctx->pc = 0x391D0Cu;
            goto label_391d0c;
        }
    }
    ctx->pc = 0x391D04u;
    // 0x391d04: 0xc105f7e  jal         func_417DF8
    ctx->pc = 0x391D04u;
    SET_GPR_U32(ctx, 31, 0x391D0Cu);
    ctx->pc = 0x391D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391D04u;
    // 0x391d08: 0x8c44719c  lw          $a0, 0x719C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417DF8u, 0x391D04u, 0x391D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391D0Cu;
label_391d0c:
    // 0x391d0c: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x391d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x391d10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x391d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x391d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391d18: 0x3e00008  jr          $ra
    ctx->pc = 0x391D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391D18u;
        // 0x391d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391D20u;
}
