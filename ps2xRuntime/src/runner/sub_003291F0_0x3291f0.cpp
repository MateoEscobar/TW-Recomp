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

// Function: sub_003291F0
// Address: 0x3291f0 - 0x329238
void sub_003291F0_0x3291f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003291F0_0x3291f0");
#endif

    switch (ctx->pc) {
        case 0x329214u: goto label_329214;
        case 0x329228u: goto label_329228;
        default: break;
    }

    ctx->pc = 0x3291f0u;

    // 0x3291f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3291f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3291f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3291f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3291f8: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3291f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3291fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3291FCu;
    {
        const bool branch_taken_0x3291fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3291fc) {
            ctx->pc = 0x329200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3291FCu;
            // 0x329200: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329214u;
            goto label_329214;
        }
    }
    ctx->pc = 0x329204u;
    // 0x329204: 0xac4500e4  sw          $a1, 0xE4($v0)
    ctx->pc = 0x329204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 5));
    // 0x329208: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x329208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32920c: 0xc10c242  jal         func_430908
    ctx->pc = 0x32920Cu;
    SET_GPR_U32(ctx, 31, 0x329214u);
    ctx->pc = 0x329210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32920Cu;
    // 0x329210: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430908u, 0x32920Cu, 0x329214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329214u;
label_329214:
    // 0x329214: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x329214u;
    {
        const bool branch_taken_0x329214 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x329218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329214u;
        // 0x329218: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329214) {
            ctx->pc = 0x32922Cu;
            goto label_32922c;
        }
    }
    ctx->pc = 0x32921Cu;
    // 0x32921c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32921cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x329220: 0xc0ca444  jal         func_329110
    ctx->pc = 0x329220u;
    SET_GPR_U32(ctx, 31, 0x329228u);
    ctx->pc = 0x329224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329220u;
    // 0x329224: 0x24a553d0  addiu       $a1, $a1, 0x53D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329110u, 0x329220u, 0x329228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329228u;
label_329228:
    // 0x329228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32922c:
    // 0x32922c: 0x3e00008  jr          $ra
    ctx->pc = 0x32922Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32922Cu;
        // 0x329230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32922Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329234u;
    // 0x329234: 0x0  nop
    ctx->pc = 0x329234u;
    // NOP
    ctx->pc = 0x329238u;
}
