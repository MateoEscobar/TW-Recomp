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

// Function: sub_0015B040
// Address: 0x15b040 - 0x15b0b0
void sub_0015B040_0x15b040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B040_0x15b040");
#endif

    switch (ctx->pc) {
        case 0x15b040u: goto label_15b040;
        case 0x15b044u: goto label_15b044;
        case 0x15b048u: goto label_15b048;
        case 0x15b04cu: goto label_15b04c;
        case 0x15b050u: goto label_15b050;
        case 0x15b054u: goto label_15b054;
        case 0x15b058u: goto label_15b058;
        case 0x15b05cu: goto label_15b05c;
        case 0x15b060u: goto label_15b060;
        case 0x15b064u: goto label_15b064;
        case 0x15b068u: goto label_15b068;
        case 0x15b06cu: goto label_15b06c;
        case 0x15b070u: goto label_15b070;
        case 0x15b074u: goto label_15b074;
        case 0x15b078u: goto label_15b078;
        case 0x15b07cu: goto label_15b07c;
        case 0x15b080u: goto label_15b080;
        case 0x15b084u: goto label_15b084;
        case 0x15b088u: goto label_15b088;
        case 0x15b08cu: goto label_15b08c;
        case 0x15b090u: goto label_15b090;
        case 0x15b094u: goto label_15b094;
        case 0x15b098u: goto label_15b098;
        case 0x15b09cu: goto label_15b09c;
        case 0x15b0a0u: goto label_15b0a0;
        case 0x15b0a4u: goto label_15b0a4;
        case 0x15b0a8u: goto label_15b0a8;
        case 0x15b0acu: goto label_15b0ac;
        default: break;
    }

    ctx->pc = 0x15b040u;

label_15b040:
    // 0x15b040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b044:
    // 0x15b044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15b048:
    // 0x15b048: 0xc067b9c  jal         func_19EE70
label_15b04c:
    if (ctx->pc == 0x15B04Cu) {
        ctx->pc = 0x15B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B048u;
        // 0x15b04c: 0x240400b6  addiu       $a0, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B050u;
        goto label_15b050;
    }
    ctx->pc = 0x15B048u;
    SET_GPR_U32(ctx, 31, 0x15B050u);
    ctx->pc = 0x15B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B048u;
    // 0x15b04c: 0x240400b6  addiu       $a0, $zero, 0xB6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B048u, 0x15B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B050u;
label_15b050:
    // 0x15b050: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b054:
    // 0x15b054: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15b054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_15b058:
    // 0x15b058: 0x8c655024  lw          $a1, 0x5024($v1)
    ctx->pc = 0x15b058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20516)));
label_15b05c:
    // 0x15b05c: 0xac82c730  sw          $v0, -0x38D0($a0)
    ctx->pc = 0x15b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952752), GPR_U32(ctx, 2));
label_15b060:
    // 0x15b060: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15b060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b064:
    // 0x15b064: 0x84640118  lh          $a0, 0x118($v1)
    ctx->pc = 0x15b064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_15b068:
    // 0x15b068: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x15b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_15b06c:
    // 0x15b06c: 0x40f809  jalr        $v0
label_15b070:
    if (ctx->pc == 0x15B070u) {
        ctx->pc = 0x15B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B06Cu;
        // 0x15b070: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B074u;
        goto label_15b074;
    }
    ctx->pc = 0x15B06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B074u);
        ctx->pc = 0x15B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B06Cu;
        // 0x15b070: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B06Cu, 0x15B074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B074u;
label_15b074:
    // 0x15b074: 0xc067b9c  jal         func_19EE70
label_15b078:
    if (ctx->pc == 0x15B078u) {
        ctx->pc = 0x15B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B074u;
        // 0x15b078: 0x240400ae  addiu       $a0, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B07Cu;
        goto label_15b07c;
    }
    ctx->pc = 0x15B074u;
    SET_GPR_U32(ctx, 31, 0x15B07Cu);
    ctx->pc = 0x15B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B074u;
    // 0x15b078: 0x240400ae  addiu       $a0, $zero, 0xAE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B074u, 0x15B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B07Cu;
label_15b07c:
    // 0x15b07c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15b080:
    // 0x15b080: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15b080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b084:
    // 0x15b084: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15b088:
    // 0x15b088: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x15b088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_15b08c:
    // 0x15b08c: 0xc071bf2  jal         func_1C6FC8
label_15b090:
    if (ctx->pc == 0x15B090u) {
        ctx->pc = 0x15B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B08Cu;
        // 0x15b090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B094u;
        goto label_15b094;
    }
    ctx->pc = 0x15B08Cu;
    SET_GPR_U32(ctx, 31, 0x15B094u);
    ctx->pc = 0x15B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B08Cu;
    // 0x15b090: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FC8u, 0x15B08Cu, 0x15B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B094u;
label_15b094:
    // 0x15b094: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15b094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15b098:
    // 0x15b098: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b09c:
    // 0x15b09c: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x15b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
label_15b0a0:
    // 0x15b0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b0a4:
    // 0x15b0a4: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15b0a8:
    // 0x15b0a8: 0x3e00008  jr          $ra
label_15b0ac:
    if (ctx->pc == 0x15B0ACu) {
        ctx->pc = 0x15B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0A8u;
        // 0x15b0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B0B0u;
        goto label_fallthrough_0x15b0a8;
    }
    ctx->pc = 0x15B0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0A8u;
        // 0x15b0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b0a8:
    ctx->pc = 0x15B0B0u;
}
