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

// Function: sub_0016D758
// Address: 0x16d758 - 0x16d798
void sub_0016D758_0x16d758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D758_0x16d758");
#endif

    switch (ctx->pc) {
        case 0x16d758u: goto label_16d758;
        case 0x16d75cu: goto label_16d75c;
        case 0x16d760u: goto label_16d760;
        case 0x16d764u: goto label_16d764;
        case 0x16d768u: goto label_16d768;
        case 0x16d76cu: goto label_16d76c;
        case 0x16d770u: goto label_16d770;
        case 0x16d774u: goto label_16d774;
        case 0x16d778u: goto label_16d778;
        case 0x16d77cu: goto label_16d77c;
        case 0x16d780u: goto label_16d780;
        case 0x16d784u: goto label_16d784;
        case 0x16d788u: goto label_16d788;
        case 0x16d78cu: goto label_16d78c;
        case 0x16d790u: goto label_16d790;
        case 0x16d794u: goto label_16d794;
        default: break;
    }

    ctx->pc = 0x16d758u;

label_16d758:
    // 0x16d758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16d75c:
    // 0x16d75c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16d760:
    // 0x16d760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16d764:
    // 0x16d764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16d768:
    // 0x16d768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16d76c:
    // 0x16d76c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x16d76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_16d770:
    // 0x16d770: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x16d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16d774:
    // 0x16d774: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x16d774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_16d778:
    // 0x16d778: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x16d778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_16d77c:
    // 0x16d77c: 0x40f809  jalr        $v0
label_16d780:
    if (ctx->pc == 0x16D780u) {
        ctx->pc = 0x16D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D77Cu;
        // 0x16d780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D784u;
        goto label_16d784;
    }
    ctx->pc = 0x16D77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D784u);
        ctx->pc = 0x16D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D77Cu;
        // 0x16d780: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D77Cu, 0x16D784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16D784u;
label_16d784:
    // 0x16d784: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x16d784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_16d788:
    // 0x16d788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16d78c:
    // 0x16d78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d790:
    // 0x16d790: 0x3e00008  jr          $ra
label_16d794:
    if (ctx->pc == 0x16D794u) {
        ctx->pc = 0x16D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D790u;
        // 0x16d794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16D798u;
        goto label_fallthrough_0x16d790;
    }
    ctx->pc = 0x16D790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D790u;
        // 0x16d794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16d790:
    ctx->pc = 0x16D798u;
}
