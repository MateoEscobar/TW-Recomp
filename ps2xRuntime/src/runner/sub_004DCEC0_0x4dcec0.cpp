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

// Function: sub_004DCEC0
// Address: 0x4dcec0 - 0x4dcf00
void sub_004DCEC0_0x4dcec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCEC0_0x4dcec0");
#endif

    switch (ctx->pc) {
        case 0x4dcec0u: goto label_4dcec0;
        case 0x4dcec4u: goto label_4dcec4;
        case 0x4dcec8u: goto label_4dcec8;
        case 0x4dceccu: goto label_4dcecc;
        case 0x4dced0u: goto label_4dced0;
        case 0x4dced4u: goto label_4dced4;
        case 0x4dced8u: goto label_4dced8;
        case 0x4dcedcu: goto label_4dcedc;
        case 0x4dcee0u: goto label_4dcee0;
        case 0x4dcee4u: goto label_4dcee4;
        case 0x4dcee8u: goto label_4dcee8;
        case 0x4dceecu: goto label_4dceec;
        case 0x4dcef0u: goto label_4dcef0;
        case 0x4dcef4u: goto label_4dcef4;
        case 0x4dcef8u: goto label_4dcef8;
        case 0x4dcefcu: goto label_4dcefc;
        default: break;
    }

    ctx->pc = 0x4dcec0u;

label_4dcec0:
    // 0x4dcec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dcec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dcec4:
    // 0x4dcec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dcec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dcec8:
    // 0x4dcec8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4dcec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4dcecc:
    // 0x4dcecc: 0x84660040  lh          $a2, 0x40($v1)
    ctx->pc = 0x4dceccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4dced0:
    // 0x4dced0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4dced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4dced4:
    // 0x4dced4: 0x40f809  jalr        $v0
label_4dced8:
    if (ctx->pc == 0x4DCED8u) {
        ctx->pc = 0x4DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCED4u;
        // 0x4dced8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCEDCu;
        goto label_4dcedc;
    }
    ctx->pc = 0x4DCED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DCEDCu);
        ctx->pc = 0x4DCED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCED4u;
        // 0x4dced8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCED4u, 0x4DCEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DCEDCu;
label_4dcedc:
    // 0x4dcedc: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x4dcedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_4dcee0:
    // 0x4dcee0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x4dcee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_4dcee4:
    // 0x4dcee4: 0xc10acae  jal         func_42B2B8
label_4dcee8:
    if (ctx->pc == 0x4DCEE8u) {
        ctx->pc = 0x4DCEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCEE4u;
        // 0x4dcee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCEECu;
        goto label_4dceec;
    }
    ctx->pc = 0x4DCEE4u;
    SET_GPR_U32(ctx, 31, 0x4DCEECu);
    ctx->pc = 0x4DCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DCEE4u;
    // 0x4dcee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x4DCEE4u, 0x4DCEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DCEECu;
label_4dceec:
    // 0x4dceec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dceecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dcef0:
    // 0x4dcef0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4dcef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4dcef4:
    // 0x4dcef4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4dcef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4dcef8:
    // 0x4dcef8: 0x3e00008  jr          $ra
label_4dcefc:
    if (ctx->pc == 0x4DCEFCu) {
        ctx->pc = 0x4DCEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCEF8u;
        // 0x4dcefc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DCF00u;
        goto label_fallthrough_0x4dcef8;
    }
    ctx->pc = 0x4DCEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DCEF8u;
        // 0x4dcefc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DCEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dcef8:
    ctx->pc = 0x4DCF00u;
}
