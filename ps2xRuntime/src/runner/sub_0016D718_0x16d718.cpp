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

// Function: sub_0016D718
// Address: 0x16d718 - 0x16d758
void sub_0016D718_0x16d718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D718_0x16d718");
#endif

    switch (ctx->pc) {
        case 0x16d718u: goto label_16d718;
        case 0x16d71cu: goto label_16d71c;
        case 0x16d720u: goto label_16d720;
        case 0x16d724u: goto label_16d724;
        case 0x16d728u: goto label_16d728;
        case 0x16d72cu: goto label_16d72c;
        case 0x16d730u: goto label_16d730;
        case 0x16d734u: goto label_16d734;
        case 0x16d738u: goto label_16d738;
        case 0x16d73cu: goto label_16d73c;
        case 0x16d740u: goto label_16d740;
        case 0x16d744u: goto label_16d744;
        case 0x16d748u: goto label_16d748;
        case 0x16d74cu: goto label_16d74c;
        case 0x16d750u: goto label_16d750;
        case 0x16d754u: goto label_16d754;
        default: break;
    }

    ctx->pc = 0x16d718u;

label_16d718:
    // 0x16d718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16d71c:
    // 0x16d71c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16d720:
    // 0x16d720: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16d724:
    // 0x16d724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16d728:
    // 0x16d728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d72c:
    // 0x16d72c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x16d72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_16d730:
    // 0x16d730: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16d730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16d734:
    // 0x16d734: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x16d734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_16d738:
    // 0x16d738: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x16d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_16d73c:
    // 0x16d73c: 0x40f809  jalr        $v0
label_16d740:
    if (ctx->pc == 0x16D740u) {
        ctx->pc = 0x16D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D73Cu;
        // 0x16d740: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D744u;
        goto label_16d744;
    }
    ctx->pc = 0x16D73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D744u);
        ctx->pc = 0x16D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D73Cu;
        // 0x16d740: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D73Cu, 0x16D744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D744u;
label_16d744:
    // 0x16d744: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x16d744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_16d748:
    // 0x16d748: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d74c:
    // 0x16d74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d750:
    // 0x16d750: 0x3e00008  jr          $ra
label_16d754:
    if (ctx->pc == 0x16D754u) {
        ctx->pc = 0x16D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D750u;
        // 0x16d754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D758u;
        goto label_fallthrough_0x16d750;
    }
    ctx->pc = 0x16D750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D750u;
        // 0x16d754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16d750:
    ctx->pc = 0x16D758u;
}
