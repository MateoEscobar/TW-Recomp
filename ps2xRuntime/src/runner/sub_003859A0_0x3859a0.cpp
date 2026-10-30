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

// Function: sub_003859A0
// Address: 0x3859a0 - 0x3859f0
void sub_003859A0_0x3859a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003859A0_0x3859a0");
#endif

    switch (ctx->pc) {
        case 0x3859a0u: goto label_3859a0;
        case 0x3859a4u: goto label_3859a4;
        case 0x3859a8u: goto label_3859a8;
        case 0x3859acu: goto label_3859ac;
        case 0x3859b0u: goto label_3859b0;
        case 0x3859b4u: goto label_3859b4;
        case 0x3859b8u: goto label_3859b8;
        case 0x3859bcu: goto label_3859bc;
        case 0x3859c0u: goto label_3859c0;
        case 0x3859c4u: goto label_3859c4;
        case 0x3859c8u: goto label_3859c8;
        case 0x3859ccu: goto label_3859cc;
        case 0x3859d0u: goto label_3859d0;
        case 0x3859d4u: goto label_3859d4;
        case 0x3859d8u: goto label_3859d8;
        case 0x3859dcu: goto label_3859dc;
        case 0x3859e0u: goto label_3859e0;
        case 0x3859e4u: goto label_3859e4;
        case 0x3859e8u: goto label_3859e8;
        case 0x3859ecu: goto label_3859ec;
        default: break;
    }

    ctx->pc = 0x3859a0u;

label_3859a0:
    // 0x3859a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3859a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3859a4:
    // 0x3859a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3859a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3859a8:
    // 0x3859a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3859a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3859ac:
    // 0x3859ac: 0xc0e4060  jal         func_390180
label_3859b0:
    if (ctx->pc == 0x3859B0u) {
        ctx->pc = 0x3859B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859ACu;
        // 0x3859b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3859B4u;
        goto label_3859b4;
    }
    ctx->pc = 0x3859ACu;
    SET_GPR_U32(ctx, 31, 0x3859B4u);
    ctx->pc = 0x3859B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3859ACu;
    // 0x3859b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3859ACu, 0x3859B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3859B4u;
label_3859b4:
    // 0x3859b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3859b8:
    if (ctx->pc == 0x3859B8u) {
        ctx->pc = 0x3859B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859B4u;
        // 0x3859b8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3859BCu;
        goto label_3859bc;
    }
    ctx->pc = 0x3859B4u;
    {
        const bool branch_taken_0x3859b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3859B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859B4u;
        // 0x3859b8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859b4) {
            ctx->pc = 0x3859C4u;
            goto label_3859c4;
        }
    }
    ctx->pc = 0x3859BCu;
label_3859bc:
    // 0x3859bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3859c0:
    if (ctx->pc == 0x3859C0u) {
        ctx->pc = 0x3859C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859BCu;
        // 0x3859c0: 0x2442de50  addiu       $v0, $v0, -0x21B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3859C4u;
        goto label_3859c4;
    }
    ctx->pc = 0x3859BCu;
    {
        const bool branch_taken_0x3859bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3859C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859BCu;
        // 0x3859c0: 0x2442de50  addiu       $v0, $v0, -0x21B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3859bc) {
            ctx->pc = 0x3859E0u;
            goto label_3859e0;
        }
    }
    ctx->pc = 0x3859C4u;
label_3859c4:
    // 0x3859c4: 0xc0e4060  jal         func_390180
label_3859c8:
    if (ctx->pc == 0x3859C8u) {
        ctx->pc = 0x3859C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859C4u;
        // 0x3859c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3859CCu;
        goto label_3859cc;
    }
    ctx->pc = 0x3859C4u;
    SET_GPR_U32(ctx, 31, 0x3859CCu);
    ctx->pc = 0x3859C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3859C4u;
    // 0x3859c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3859C4u, 0x3859CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3859CCu;
label_3859cc:
    // 0x3859cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3859ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3859d0:
    // 0x3859d0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3859d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3859d4:
    // 0x3859d4: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x3859d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3859d8:
    // 0x3859d8: 0xa0f809  jalr        $a1
label_3859dc:
    if (ctx->pc == 0x3859DCu) {
        ctx->pc = 0x3859DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859D8u;
        // 0x3859dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3859E0u;
        goto label_3859e0;
    }
    ctx->pc = 0x3859D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3859E0u);
        ctx->pc = 0x3859DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859D8u;
        // 0x3859dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3859D8u, 0x3859E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3859E0u;
label_3859e0:
    // 0x3859e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3859e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3859e4:
    // 0x3859e4: 0x3e00008  jr          $ra
label_3859e8:
    if (ctx->pc == 0x3859E8u) {
        ctx->pc = 0x3859E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859E4u;
        // 0x3859e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3859ECu;
        goto label_3859ec;
    }
    ctx->pc = 0x3859E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3859E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3859E4u;
        // 0x3859e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3859E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3859ECu;
label_3859ec:
    // 0x3859ec: 0x0  nop
    ctx->pc = 0x3859ecu;
    // NOP
    ctx->pc = 0x3859f0u;
}
