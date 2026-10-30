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

// Function: sub_004AE958
// Address: 0x4ae958 - 0x4ae978
void sub_004AE958_0x4ae958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE958_0x4ae958");
#endif

    switch (ctx->pc) {
        case 0x4ae96cu: goto label_4ae96c;
        default: break;
    }

    ctx->pc = 0x4ae958u;

    // 0x4ae958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae95c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x4ae95cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x4ae960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae964: 0xc12bc50  jal         func_4AF140
    ctx->pc = 0x4AE964u;
    SET_GPR_U32(ctx, 31, 0x4AE96Cu);
    ctx->pc = 0x4AE968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE964u;
    // 0x4ae968: 0x73e03  sra         $a3, $a3, 24 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF140u, 0x4AE964u, 0x4AE96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE96Cu;
label_4ae96c:
    // 0x4ae96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae970: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE970u;
        // 0x4ae974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE978u;
}
