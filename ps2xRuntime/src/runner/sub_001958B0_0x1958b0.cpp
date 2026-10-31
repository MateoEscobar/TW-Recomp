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

// Function: sub_001958B0
// Address: 0x1958b0 - 0x1958f8
void sub_001958B0_0x1958b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001958B0_0x1958b0");
#endif

    switch (ctx->pc) {
        case 0x1958b0u: goto label_1958b0;
        case 0x1958b4u: goto label_1958b4;
        case 0x1958b8u: goto label_1958b8;
        case 0x1958bcu: goto label_1958bc;
        case 0x1958c0u: goto label_1958c0;
        case 0x1958c4u: goto label_1958c4;
        case 0x1958c8u: goto label_1958c8;
        case 0x1958ccu: goto label_1958cc;
        case 0x1958d0u: goto label_1958d0;
        case 0x1958d4u: goto label_1958d4;
        case 0x1958d8u: goto label_1958d8;
        case 0x1958dcu: goto label_1958dc;
        case 0x1958e0u: goto label_1958e0;
        case 0x1958e4u: goto label_1958e4;
        case 0x1958e8u: goto label_1958e8;
        case 0x1958ecu: goto label_1958ec;
        case 0x1958f0u: goto label_1958f0;
        case 0x1958f4u: goto label_1958f4;
        default: break;
    }

    ctx->pc = 0x1958b0u;

label_1958b0:
    // 0x1958b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1958b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1958b4:
    // 0x1958b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1958b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1958b8:
    // 0x1958b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1958bc:
    // 0x1958bc: 0x84650060  lh          $a1, 0x60($v1)
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1958c0:
    // 0x1958c0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1958c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1958c4:
    // 0x1958c4: 0x40f809  jalr        $v0
label_1958c8:
    if (ctx->pc == 0x1958C8u) {
        ctx->pc = 0x1958C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958C4u;
        // 0x1958c8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958CCu;
        goto label_1958cc;
    }
    ctx->pc = 0x1958C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1958CCu);
        ctx->pc = 0x1958C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958C4u;
        // 0x1958c8: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1958C4u, 0x1958CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1958CCu;
label_1958cc:
    // 0x1958cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1958ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1958d0:
    // 0x1958d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1958d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1958d4:
    // 0x1958d4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1958d8:
    // 0x1958d8: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x1958d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1958dc:
    // 0x1958dc: 0xc0f809  jalr        $a2
label_1958e0:
    if (ctx->pc == 0x1958E0u) {
        ctx->pc = 0x1958E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958DCu;
        // 0x1958e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958E4u;
        goto label_1958e4;
    }
    ctx->pc = 0x1958DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1958E4u);
        ctx->pc = 0x1958E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958DCu;
        // 0x1958e0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1958DCu, 0x1958E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1958E4u;
label_1958e4:
    // 0x1958e4: 0xc05123c  jal         func_1448F0
label_1958e8:
    if (ctx->pc == 0x1958E8u) {
        ctx->pc = 0x1958ECu;
        goto label_1958ec;
    }
    ctx->pc = 0x1958E4u;
    SET_GPR_U32(ctx, 31, 0x1958ECu);
    ctx->pc = 0x1448F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1448F0u, 0x1958E4u, 0x1958ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958ECu;
label_1958ec:
    // 0x1958ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1958ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1958f0:
    // 0x1958f0: 0x3e00008  jr          $ra
label_1958f4:
    if (ctx->pc == 0x1958F4u) {
        ctx->pc = 0x1958F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F0u;
        // 0x1958f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958F8u;
        goto label_fallthrough_0x1958f0;
    }
    ctx->pc = 0x1958F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1958F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F0u;
        // 0x1958f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1958F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1958f0:
    ctx->pc = 0x1958F8u;
}
