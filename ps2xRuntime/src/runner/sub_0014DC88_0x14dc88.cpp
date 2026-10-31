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

// Function: sub_0014DC88
// Address: 0x14dc88 - 0x14dcf8
void sub_0014DC88_0x14dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DC88_0x14dc88");
#endif

    switch (ctx->pc) {
        case 0x14dcb4u: goto label_14dcb4;
        case 0x14dcc0u: goto label_14dcc0;
        default: break;
    }

    ctx->pc = 0x14dc88u;

    // 0x14dc88: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14dc8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14dc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14dc90: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x14dc90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x14dc94: 0x84a3c238  lh          $v1, -0x3DC8($a1)
    ctx->pc = 0x14dc94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294951480)));
    // 0x14dc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14dc9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dca0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14DCA0u;
    {
        const bool branch_taken_0x14dca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCA0u;
        // 0x14dca4: 0x43403  sra         $a2, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dca0) {
            ctx->pc = 0x14DCC8u;
            goto label_14dcc8;
        }
    }
    ctx->pc = 0x14DCA8u;
    // 0x14dca8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14dcac: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DCACu;
    SET_GPR_U32(ctx, 31, 0x14DCB4u);
    ctx->pc = 0x14DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCACu;
    // 0x14dcb0: 0x2484b960  addiu       $a0, $a0, -0x46A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DCACu, 0x14DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCB4u;
label_14dcb4:
    // 0x14dcb4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14dcb8: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14DCB8u;
    SET_GPR_U32(ctx, 31, 0x14DCC0u);
    ctx->pc = 0x14DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DCB8u;
    // 0x14dcbc: 0x2484b978  addiu       $a0, $a0, -0x4688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14DCB8u, 0x14DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DCC0u;
label_14dcc0:
    // 0x14dcc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14DCC0u;
    {
        const bool branch_taken_0x14dcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCC0u;
        // 0x14dcc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dcc0) {
            ctx->pc = 0x14DCF0u;
            goto label_14dcf0;
        }
    }
    ctx->pc = 0x14DCC8u;
label_14dcc8:
    // 0x14dcc8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14dccc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x14dcd0: 0x8ca4c4f8  lw          $a0, -0x3B08($a1)
    ctx->pc = 0x14dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50C4F8u));
    // 0x14dcd4: 0x24631dc0  addiu       $v1, $v1, 0x1DC0
    ctx->pc = 0x14dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7616));
    // 0x14dcd8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x14dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14dcdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14dce0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14dce4: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x14dce4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x14dce8: 0xaca4c4f8  sw          $a0, -0x3B08($a1)
    ctx->pc = 0x14dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952184), GPR_U32(ctx, 4));
    // 0x14dcec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14dcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14dcf0:
    // 0x14dcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x14DCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DCF0u;
        // 0x14dcf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DCF8u;
}
