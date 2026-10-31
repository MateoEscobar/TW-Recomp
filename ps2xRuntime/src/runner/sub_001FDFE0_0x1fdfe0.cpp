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

// Function: sub_001FDFE0
// Address: 0x1fdfe0 - 0x1fe038
void sub_001FDFE0_0x1fdfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDFE0_0x1fdfe0");
#endif

    switch (ctx->pc) {
        case 0x1fe010u: goto label_1fe010;
        case 0x1fe018u: goto label_1fe018;
        case 0x1fe02cu: goto label_1fe02c;
        default: break;
    }

    ctx->pc = 0x1fdfe0u;

    // 0x1fdfe0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1fdfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1fdfe4: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDFE4u;
    {
        const bool branch_taken_0x1fdfe4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFE4u;
        // 0x1fdfe8: 0xffbf0100  sd          $ra, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdfe4) {
            ctx->pc = 0x1FDFFCu;
            goto label_1fdffc;
        }
    }
    ctx->pc = 0x1FDFECu;
    // 0x1fdfec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fdfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1fdff0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fdff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdff4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FDFF4u;
    {
        const bool branch_taken_0x1fdff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFF4u;
        // 0x1fdff8: 0x8c44f4f0  lw          $a0, -0xB10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdff4) {
            ctx->pc = 0x1FE024u;
            goto label_1fe024;
        }
    }
    ctx->pc = 0x1FDFFCu;
label_1fdffc:
    // 0x1fdffc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fdffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe000: 0xa3a000ff  sb          $zero, 0xFF($sp)
    ctx->pc = 0x1fe000u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fe004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe008: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1FE008u;
    SET_GPR_U32(ctx, 31, 0x1FE010u);
    ctx->pc = 0x1FE00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE008u;
    // 0x1fe00c: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1FE008u, 0x1FE010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE010u;
label_1fe010:
    // 0x1fe010: 0xc10d79c  jal         func_435E70
    ctx->pc = 0x1FE010u;
    SET_GPR_U32(ctx, 31, 0x1FE018u);
    ctx->pc = 0x1FE014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE010u;
    // 0x1fe014: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435E70u, 0x1FE010u, 0x1FE018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE018u;
label_1fe018:
    // 0x1fe018: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fe018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1fe01c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fe01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe020: 0x8c64f4f0  lw          $a0, -0xB10($v1)
    ctx->pc = 0x1fe020u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50F4F0u));
label_1fe024:
    // 0x1fe024: 0xc0e1b42  jal         func_386D08
    ctx->pc = 0x1FE024u;
    SET_GPR_U32(ctx, 31, 0x1FE02Cu);
    ctx->pc = 0x386D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386D08u, 0x1FE024u, 0x1FE02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE02Cu;
label_1fe02c:
    // 0x1fe02c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1fe02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1fe030: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE030u;
        // 0x1fe034: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE038u;
}
