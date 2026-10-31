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

// Function: sub_00236698
// Address: 0x236698 - 0x2366d8
void sub_00236698_0x236698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236698_0x236698");
#endif

    switch (ctx->pc) {
        case 0x236698u: goto label_236698;
        case 0x23669cu: goto label_23669c;
        case 0x2366a0u: goto label_2366a0;
        case 0x2366a4u: goto label_2366a4;
        case 0x2366a8u: goto label_2366a8;
        case 0x2366acu: goto label_2366ac;
        case 0x2366b0u: goto label_2366b0;
        case 0x2366b4u: goto label_2366b4;
        case 0x2366b8u: goto label_2366b8;
        case 0x2366bcu: goto label_2366bc;
        case 0x2366c0u: goto label_2366c0;
        case 0x2366c4u: goto label_2366c4;
        case 0x2366c8u: goto label_2366c8;
        case 0x2366ccu: goto label_2366cc;
        case 0x2366d0u: goto label_2366d0;
        case 0x2366d4u: goto label_2366d4;
        default: break;
    }

    ctx->pc = 0x236698u;

label_236698:
    // 0x236698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23669c:
    // 0x23669c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2366a0:
    // 0x2366a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2366a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2366a4:
    // 0x2366a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2366a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2366a8:
    // 0x2366a8: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x2366a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2366ac:
    // 0x2366ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2366acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2366b0:
    // 0x2366b0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2366b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2366b4:
    // 0x2366b4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2366b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2366b8:
    // 0x2366b8: 0x40f809  jalr        $v0
label_2366bc:
    if (ctx->pc == 0x2366BCu) {
        ctx->pc = 0x2366BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366B8u;
        // 0x2366bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366C0u;
        goto label_2366c0;
    }
    ctx->pc = 0x2366B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2366C0u);
        ctx->pc = 0x2366BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366B8u;
        // 0x2366bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2366B8u, 0x2366C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2366C0u;
label_2366c0:
    // 0x2366c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2366c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2366c4:
    // 0x2366c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2366c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2366c8:
    // 0x2366c8: 0xac62028c  sw          $v0, 0x28C($v1)
    ctx->pc = 0x2366c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 652), GPR_U32(ctx, 2));
label_2366cc:
    // 0x2366cc: 0x3e00008  jr          $ra
label_2366d0:
    if (ctx->pc == 0x2366D0u) {
        ctx->pc = 0x2366D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366CCu;
        // 0x2366d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366D4u;
        goto label_2366d4;
    }
    ctx->pc = 0x2366CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2366D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366CCu;
        // 0x2366d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2366CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2366D4u;
label_2366d4:
    // 0x2366d4: 0x0  nop
    ctx->pc = 0x2366d4u;
    // NOP
    ctx->pc = 0x2366d8u;
}
