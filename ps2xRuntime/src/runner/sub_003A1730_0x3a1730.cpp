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

// Function: sub_003A1730
// Address: 0x3a1730 - 0x3a1790
void sub_003A1730_0x3a1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1730_0x3a1730");
#endif

    switch (ctx->pc) {
        case 0x3a1780u: goto label_3a1780;
        default: break;
    }

    ctx->pc = 0x3a1730u;

    // 0x3a1730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a1730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a1734: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a1734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a173c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a173cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a1740: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x3a1740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x3a1744: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x3a1744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x3a1748: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x3a1748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x3a174c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A174Cu;
    {
        const bool branch_taken_0x3a174c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A174Cu;
        // 0x3a1750: 0x7cc30030  sq          $v1, 0x30($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a174c) {
            ctx->pc = 0x3A1780u;
            goto label_3a1780;
        }
    }
    ctx->pc = 0x3A1754u;
    // 0x3a1754: 0xdcc20050  ld          $v0, 0x50($a2)
    ctx->pc = 0x3a1754u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x3a1758: 0x34038010  ori         $v1, $zero, 0x8010
    ctx->pc = 0x3a1758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x3a175c: 0x31abc  dsll32      $v1, $v1, 10
    ctx->pc = 0x3a175cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 10));
    // 0x3a1760: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a1760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a1764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1764u;
    {
        const bool branch_taken_0x3a1764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1764u;
        // 0x3a1768: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1764) {
            ctx->pc = 0x3A1780u;
            goto label_3a1780;
        }
    }
    ctx->pc = 0x3A176Cu;
    // 0x3a176c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a176cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a1770: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3a1770u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a1774: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3a1774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1778: 0xc0e8ce6  jal         func_3A3398
    ctx->pc = 0x3A1778u;
    SET_GPR_U32(ctx, 31, 0x3A1780u);
    ctx->pc = 0x3A177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1778u;
    // 0x3a177c: 0xacc30054  sw          $v1, 0x54($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3398u, 0x3A1778u, 0x3A1780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1780u;
label_3a1780:
    // 0x3a1780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a1780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1784: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1784u;
        // 0x3a1788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A178Cu;
    // 0x3a178c: 0x0  nop
    ctx->pc = 0x3a178cu;
    // NOP
    ctx->pc = 0x3a1790u;
}
