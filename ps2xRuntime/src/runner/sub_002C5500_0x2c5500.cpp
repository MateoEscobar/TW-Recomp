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

// Function: sub_002C5500
// Address: 0x2c5500 - 0x2c5548
void sub_002C5500_0x2c5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5500_0x2c5500");
#endif

    switch (ctx->pc) {
        case 0x2c5500u: goto label_2c5500;
        case 0x2c5504u: goto label_2c5504;
        case 0x2c5508u: goto label_2c5508;
        case 0x2c550cu: goto label_2c550c;
        case 0x2c5510u: goto label_2c5510;
        case 0x2c5514u: goto label_2c5514;
        case 0x2c5518u: goto label_2c5518;
        case 0x2c551cu: goto label_2c551c;
        case 0x2c5520u: goto label_2c5520;
        case 0x2c5524u: goto label_2c5524;
        case 0x2c5528u: goto label_2c5528;
        case 0x2c552cu: goto label_2c552c;
        case 0x2c5530u: goto label_2c5530;
        case 0x2c5534u: goto label_2c5534;
        case 0x2c5538u: goto label_2c5538;
        case 0x2c553cu: goto label_2c553c;
        case 0x2c5540u: goto label_2c5540;
        case 0x2c5544u: goto label_2c5544;
        default: break;
    }

    ctx->pc = 0x2c5500u;

label_2c5500:
    // 0x2c5500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c5504:
    // 0x2c5504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c5508:
    // 0x2c5508: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c5508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c550c:
    // 0x2c550c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c550cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c5510:
    // 0x2c5510: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c5510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c5514:
    // 0x2c5514: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c5514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c5518:
    // 0x2c5518: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c5518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c551c:
    // 0x2c551c: 0x40f809  jalr        $v0
label_2c5520:
    if (ctx->pc == 0x2C5520u) {
        ctx->pc = 0x2C5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C551Cu;
        // 0x2c5520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5524u;
        goto label_2c5524;
    }
    ctx->pc = 0x2C551Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5524u);
        ctx->pc = 0x2C5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C551Cu;
        // 0x2c5520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C551Cu, 0x2C5524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5524u;
label_2c5524:
    // 0x2c5524: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2c5524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2c5528:
    // 0x2c5528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c552c:
    // 0x2c552c: 0x24c650d8  addiu       $a2, $a2, 0x50D8
    ctx->pc = 0x2c552cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20696));
label_2c5530:
    // 0x2c5530: 0xc08e1a4  jal         func_238690
label_2c5534:
    if (ctx->pc == 0x2C5534u) {
        ctx->pc = 0x2C5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5530u;
        // 0x2c5534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5538u;
        goto label_2c5538;
    }
    ctx->pc = 0x2C5530u;
    SET_GPR_U32(ctx, 31, 0x2C5538u);
    ctx->pc = 0x2C5534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5530u;
    // 0x2c5534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C5530u, 0x2C5538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5538u;
label_2c5538:
    // 0x2c5538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c553c:
    // 0x2c553c: 0x3e00008  jr          $ra
label_2c5540:
    if (ctx->pc == 0x2C5540u) {
        ctx->pc = 0x2C5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C553Cu;
        // 0x2c5540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5544u;
        goto label_2c5544;
    }
    ctx->pc = 0x2C553Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C553Cu;
        // 0x2c5540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C553Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5544u;
label_2c5544:
    // 0x2c5544: 0x0  nop
    ctx->pc = 0x2c5544u;
    // NOP
    ctx->pc = 0x2c5548u;
}
