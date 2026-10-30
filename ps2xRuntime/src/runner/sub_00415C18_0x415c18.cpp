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

// Function: sub_00415C18
// Address: 0x415c18 - 0x415c48
void sub_00415C18_0x415c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415C18_0x415c18");
#endif

    switch (ctx->pc) {
        case 0x415c3cu: goto label_415c3c;
        default: break;
    }

    ctx->pc = 0x415c18u;

    // 0x415c18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x415c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x415c1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x415c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x415c20: 0x8c48bd30  lw          $t0, -0x42D0($v0)
    ctx->pc = 0x415c20u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x415c24: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x415c24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x415c28: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x415c28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x415c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x415c30: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x415c30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x415c34: 0xc1056da  jal         func_415B68
    ctx->pc = 0x415C34u;
    SET_GPR_U32(ctx, 31, 0x415C3Cu);
    ctx->pc = 0x415C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415C34u;
    // 0x415c38: 0x73c03  sra         $a3, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415B68u, 0x415C34u, 0x415C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415C3Cu;
label_415c3c:
    // 0x415c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415c40: 0x3e00008  jr          $ra
    ctx->pc = 0x415C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C40u;
        // 0x415c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415C48u;
}
