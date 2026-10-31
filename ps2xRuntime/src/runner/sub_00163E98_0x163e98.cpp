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

// Function: sub_00163E98
// Address: 0x163e98 - 0x163ed8
void sub_00163E98_0x163e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163E98_0x163e98");
#endif

    switch (ctx->pc) {
        case 0x163e98u: goto label_163e98;
        case 0x163e9cu: goto label_163e9c;
        case 0x163ea0u: goto label_163ea0;
        case 0x163ea4u: goto label_163ea4;
        case 0x163ea8u: goto label_163ea8;
        case 0x163eacu: goto label_163eac;
        case 0x163eb0u: goto label_163eb0;
        case 0x163eb4u: goto label_163eb4;
        case 0x163eb8u: goto label_163eb8;
        case 0x163ebcu: goto label_163ebc;
        case 0x163ec0u: goto label_163ec0;
        case 0x163ec4u: goto label_163ec4;
        case 0x163ec8u: goto label_163ec8;
        case 0x163eccu: goto label_163ecc;
        case 0x163ed0u: goto label_163ed0;
        case 0x163ed4u: goto label_163ed4;
        default: break;
    }

    ctx->pc = 0x163e98u;

label_163e98:
    // 0x163e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_163e9c:
    // 0x163e9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x163e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_163ea0:
    // 0x163ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_163ea4:
    // 0x163ea4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x163ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_163ea8:
    // 0x163ea8: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x163ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_163eac:
    // 0x163eac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x163eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_163eb0:
    // 0x163eb0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x163eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_163eb4:
    // 0x163eb4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x163eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_163eb8:
    // 0x163eb8: 0x40f809  jalr        $v0
label_163ebc:
    if (ctx->pc == 0x163EBCu) {
        ctx->pc = 0x163EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EB8u;
        // 0x163ebc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163EC0u;
        goto label_163ec0;
    }
    ctx->pc = 0x163EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x163EC0u);
        ctx->pc = 0x163EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EB8u;
        // 0x163ebc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163EB8u, 0x163EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x163EC0u;
label_163ec0:
    // 0x163ec0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x163ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_163ec4:
    // 0x163ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163ec8:
    // 0x163ec8: 0xac62ca98  sw          $v0, -0x3568($v1)
    ctx->pc = 0x163ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953624), GPR_U32(ctx, 2));
label_163ecc:
    // 0x163ecc: 0x3e00008  jr          $ra
label_163ed0:
    if (ctx->pc == 0x163ED0u) {
        ctx->pc = 0x163ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163ECCu;
        // 0x163ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x163ED4u;
        goto label_163ed4;
    }
    ctx->pc = 0x163ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163ECCu;
        // 0x163ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163ED4u;
label_163ed4:
    // 0x163ed4: 0x0  nop
    ctx->pc = 0x163ed4u;
    // NOP
    ctx->pc = 0x163ed8u;
}
