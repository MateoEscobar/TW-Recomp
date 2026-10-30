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

// Function: sub_001AA5C0
// Address: 0x1aa5c0 - 0x1aa630
void sub_001AA5C0_0x1aa5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA5C0_0x1aa5c0");
#endif

    switch (ctx->pc) {
        case 0x1aa5f4u: goto label_1aa5f4;
        case 0x1aa60cu: goto label_1aa60c;
        default: break;
    }

    ctx->pc = 0x1aa5c0u;

    // 0x1aa5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa5c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aa5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aa5cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa5d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5d4: 0xae020a94  sw          $v0, 0xA94($s0)
    ctx->pc = 0x1aa5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2708), GPR_U32(ctx, 2));
    // 0x1aa5d8: 0x26040450  addiu       $a0, $s0, 0x450
    ctx->pc = 0x1aa5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    // 0x1aa5dc: 0xae000a98  sw          $zero, 0xA98($s0)
    ctx->pc = 0x1aa5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2712), GPR_U32(ctx, 0));
    // 0x1aa5e0: 0x8c820434  lw          $v0, 0x434($a0)
    ctx->pc = 0x1aa5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1076)));
    // 0x1aa5e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA5E4u;
    {
        const bool branch_taken_0x1aa5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5e4) {
            ctx->pc = 0x1AA5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA5E4u;
            // 0x1aa5e8: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA5F8u;
            goto label_1aa5f8;
        }
    }
    ctx->pc = 0x1AA5ECu;
    // 0x1aa5ec: 0xc079cb0  jal         func_1E72C0
    ctx->pc = 0x1AA5ECu;
    SET_GPR_U32(ctx, 31, 0x1AA5F4u);
    ctx->pc = 0x1E72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E72C0u, 0x1AA5ECu, 0x1AA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA5F4u;
label_1aa5f4:
    // 0x1aa5f4: 0x26040890  addiu       $a0, $s0, 0x890
    ctx->pc = 0x1aa5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_1aa5f8:
    // 0x1aa5f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1aa5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1aa5fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA5FCu;
    {
        const bool branch_taken_0x1aa5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5fc) {
            ctx->pc = 0x1AA600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA5FCu;
            // 0x1aa600: 0xae000370  sw          $zero, 0x370($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA610u;
            goto label_1aa610;
        }
    }
    ctx->pc = 0x1AA604u;
    // 0x1aa604: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1AA604u;
    SET_GPR_U32(ctx, 31, 0x1AA60Cu);
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1AA604u, 0x1AA60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA60Cu;
label_1aa60c:
    // 0x1aa60c: 0xae000370  sw          $zero, 0x370($s0)
    ctx->pc = 0x1aa60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
label_1aa610:
    // 0x1aa610: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1aa610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1aa614: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1aa614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1aa618: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1aa618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x1aa61c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aa61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa624: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA624u;
        // 0x1aa628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA62Cu;
    // 0x1aa62c: 0x0  nop
    ctx->pc = 0x1aa62cu;
    // NOP
    ctx->pc = 0x1aa630u;
}
