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

// Function: sub_004DED90
// Address: 0x4ded90 - 0x4dedd8
void sub_004DED90_0x4ded90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DED90_0x4ded90");
#endif

    switch (ctx->pc) {
        case 0x4ded90u: goto label_4ded90;
        case 0x4ded94u: goto label_4ded94;
        case 0x4ded98u: goto label_4ded98;
        case 0x4ded9cu: goto label_4ded9c;
        case 0x4deda0u: goto label_4deda0;
        case 0x4deda4u: goto label_4deda4;
        case 0x4deda8u: goto label_4deda8;
        case 0x4dedacu: goto label_4dedac;
        case 0x4dedb0u: goto label_4dedb0;
        case 0x4dedb4u: goto label_4dedb4;
        case 0x4dedb8u: goto label_4dedb8;
        case 0x4dedbcu: goto label_4dedbc;
        case 0x4dedc0u: goto label_4dedc0;
        case 0x4dedc4u: goto label_4dedc4;
        case 0x4dedc8u: goto label_4dedc8;
        case 0x4dedccu: goto label_4dedcc;
        case 0x4dedd0u: goto label_4dedd0;
        case 0x4dedd4u: goto label_4dedd4;
        default: break;
    }

    ctx->pc = 0x4ded90u;

label_4ded90:
    // 0x4ded90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ded90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ded94:
    // 0x4ded94: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4ded94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ded98:
    // 0x4ded98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ded98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ded9c:
    // 0x4ded9c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4deda0:
    if (ctx->pc == 0x4DEDA0u) {
        ctx->pc = 0x4DEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DED9Cu;
        // 0x4deda0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEDA4u;
        goto label_4deda4;
    }
    ctx->pc = 0x4DED9Cu;
    {
        const bool branch_taken_0x4ded9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DED9Cu;
        // 0x4deda0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ded9c) {
            ctx->pc = 0x4DEDC8u;
            goto label_4dedc8;
        }
    }
    ctx->pc = 0x4DEDA4u;
label_4deda4:
    // 0x4deda4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4deda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4deda8:
    // 0x4deda8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4deda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dedac:
    // 0x4dedac: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4dedacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4dedb0:
    // 0x4dedb0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4dedb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4dedb4:
    // 0x4dedb4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4dedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4dedb8:
    // 0x4dedb8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4dedb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4dedbc:
    // 0x4dedbc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4dedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4dedc0:
    // 0x4dedc0: 0x60f809  jalr        $v1
label_4dedc4:
    if (ctx->pc == 0x4DEDC4u) {
        ctx->pc = 0x4DEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEDC0u;
        // 0x4dedc4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEDC8u;
        goto label_4dedc8;
    }
    ctx->pc = 0x4DEDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DEDC8u);
        ctx->pc = 0x4DEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEDC0u;
        // 0x4dedc4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEDC0u, 0x4DEDC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DEDC8u;
label_4dedc8:
    // 0x4dedc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dedc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dedcc:
    // 0x4dedcc: 0x3e00008  jr          $ra
label_4dedd0:
    if (ctx->pc == 0x4DEDD0u) {
        ctx->pc = 0x4DEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEDCCu;
        // 0x4dedd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DEDD4u;
        goto label_4dedd4;
    }
    ctx->pc = 0x4DEDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DEDCCu;
        // 0x4dedd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DEDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DEDD4u;
label_4dedd4:
    // 0x4dedd4: 0x0  nop
    ctx->pc = 0x4dedd4u;
    // NOP
    ctx->pc = 0x4dedd8u;
}
