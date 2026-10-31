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

// Function: sub_001D8050
// Address: 0x1d8050 - 0x1d80a8
void sub_001D8050_0x1d8050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8050_0x1d8050");
#endif

    switch (ctx->pc) {
        case 0x1d8078u: goto label_1d8078;
        case 0x1d8098u: goto label_1d8098;
        default: break;
    }

    ctx->pc = 0x1d8050u;

    // 0x1d8050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8054: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1d8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x1d8058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d8058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d805c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8060: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8060u;
    {
        const bool branch_taken_0x1d8060 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8060u;
        // 0x1d8064: 0xac430840  sw          $v1, 0x840($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8060) {
            ctx->pc = 0x1D8080u;
            goto label_1d8080;
        }
    }
    ctx->pc = 0x1D8068u;
    // 0x1d8068: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d806c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d806cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8070: 0xc1062b2  jal         func_418AC8
    ctx->pc = 0x1D8070u;
    SET_GPR_U32(ctx, 31, 0x1D8078u);
    ctx->pc = 0x1D8074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8070u;
    // 0x1d8074: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AC8u, 0x1D8070u, 0x1D8078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8078u;
label_1d8078:
    // 0x1d8078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8078u;
    {
        const bool branch_taken_0x1d8078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8078u;
        // 0x1d807c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8078) {
            ctx->pc = 0x1D809Cu;
            goto label_1d809c;
        }
    }
    ctx->pc = 0x1D8080u;
label_1d8080:
    // 0x1d8080: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8080u;
    {
        const bool branch_taken_0x1d8080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8080u;
        // 0x1d8084: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8080) {
            ctx->pc = 0x1D809Cu;
            goto label_1d809c;
        }
    }
    ctx->pc = 0x1D8088u;
    // 0x1d8088: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d8088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d808c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d808cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8090: 0xc1062b2  jal         func_418AC8
    ctx->pc = 0x1D8090u;
    SET_GPR_U32(ctx, 31, 0x1D8098u);
    ctx->pc = 0x1D8094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8090u;
    // 0x1d8094: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418AC8u, 0x1D8090u, 0x1D8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8098u;
label_1d8098:
    // 0x1d8098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d809c:
    // 0x1d809c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D809Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D809Cu;
        // 0x1d80a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D809Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D80A4u;
    // 0x1d80a4: 0x0  nop
    ctx->pc = 0x1d80a4u;
    // NOP
    ctx->pc = 0x1d80a8u;
}
