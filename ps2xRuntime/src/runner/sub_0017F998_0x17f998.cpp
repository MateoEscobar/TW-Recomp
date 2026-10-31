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

// Function: sub_0017F998
// Address: 0x17f998 - 0x17f9e8
void sub_0017F998_0x17f998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F998_0x17f998");
#endif

    switch (ctx->pc) {
        case 0x17f998u: goto label_17f998;
        case 0x17f99cu: goto label_17f99c;
        case 0x17f9a0u: goto label_17f9a0;
        case 0x17f9a4u: goto label_17f9a4;
        case 0x17f9a8u: goto label_17f9a8;
        case 0x17f9acu: goto label_17f9ac;
        case 0x17f9b0u: goto label_17f9b0;
        case 0x17f9b4u: goto label_17f9b4;
        case 0x17f9b8u: goto label_17f9b8;
        case 0x17f9bcu: goto label_17f9bc;
        case 0x17f9c0u: goto label_17f9c0;
        case 0x17f9c4u: goto label_17f9c4;
        case 0x17f9c8u: goto label_17f9c8;
        case 0x17f9ccu: goto label_17f9cc;
        case 0x17f9d0u: goto label_17f9d0;
        case 0x17f9d4u: goto label_17f9d4;
        case 0x17f9d8u: goto label_17f9d8;
        case 0x17f9dcu: goto label_17f9dc;
        case 0x17f9e0u: goto label_17f9e0;
        case 0x17f9e4u: goto label_17f9e4;
        default: break;
    }

    ctx->pc = 0x17f998u;

label_17f998:
    // 0x17f998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17f99c:
    // 0x17f99c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_17f9a0:
    // 0x17f9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17f9a4:
    // 0x17f9a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f9a8:
    // 0x17f9a8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x17f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_17f9ac:
    // 0x17f9ac: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
label_17f9b0:
    if (ctx->pc == 0x17F9B0u) {
        ctx->pc = 0x17F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9ACu;
        // 0x17f9b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F9B4u;
        goto label_17f9b4;
    }
    ctx->pc = 0x17F9ACu;
    {
        const bool branch_taken_0x17f9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x17F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9ACu;
        // 0x17f9b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9ac) {
            ctx->pc = 0x17F9D4u;
            goto label_17f9d4;
        }
    }
    ctx->pc = 0x17F9B4u;
label_17f9b4:
    // 0x17f9b4: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x17f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
label_17f9b8:
    // 0x17f9b8: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x17f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_17f9bc:
    // 0x17f9bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f9c0:
    // 0x17f9c0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x17f9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_17f9c4:
    // 0x17f9c4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x17f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_17f9c8:
    // 0x17f9c8: 0x40f809  jalr        $v0
label_17f9cc:
    if (ctx->pc == 0x17F9CCu) {
        ctx->pc = 0x17F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9C8u;
        // 0x17f9cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F9D0u;
        goto label_17f9d0;
    }
    ctx->pc = 0x17F9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F9D0u);
        ctx->pc = 0x17F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9C8u;
        // 0x17f9cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F9C8u, 0x17F9D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F9D0u;
label_17f9d0:
    // 0x17f9d0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x17f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_17f9d4:
    // 0x17f9d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17f9d8:
    // 0x17f9d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f9dc:
    // 0x17f9dc: 0x3e00008  jr          $ra
label_17f9e0:
    if (ctx->pc == 0x17F9E0u) {
        ctx->pc = 0x17F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9DCu;
        // 0x17f9e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F9E4u;
        goto label_17f9e4;
    }
    ctx->pc = 0x17F9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9DCu;
        // 0x17f9e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F9DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F9E4u;
label_17f9e4:
    // 0x17f9e4: 0x0  nop
    ctx->pc = 0x17f9e4u;
    // NOP
    ctx->pc = 0x17f9e8u;
}
