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

// Function: sub_0037B038
// Address: 0x37b038 - 0x37b090
void sub_0037B038_0x37b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B038_0x37b038");
#endif

    switch (ctx->pc) {
        case 0x37b058u: goto label_37b058;
        case 0x37b060u: goto label_37b060;
        case 0x37b068u: goto label_37b068;
        case 0x37b070u: goto label_37b070;
        case 0x37b07cu: goto label_37b07c;
        default: break;
    }

    ctx->pc = 0x37b038u;

    // 0x37b038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37b038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b03c: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b03cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b040: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b044: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b050: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B050u;
    SET_GPR_U32(ctx, 31, 0x37B058u);
    ctx->pc = 0x37B054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B050u;
    // 0x37b054: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B050u, 0x37B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B058u;
label_37b058:
    // 0x37b058: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B058u;
    SET_GPR_U32(ctx, 31, 0x37B060u);
    ctx->pc = 0x37B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B058u;
    // 0x37b05c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B058u, 0x37B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B060u;
label_37b060:
    // 0x37b060: 0xc107c00  jal         func_41F000
    ctx->pc = 0x37B060u;
    SET_GPR_U32(ctx, 31, 0x37B068u);
    ctx->pc = 0x37B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B060u;
    // 0x37b064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F000u, 0x37B060u, 0x37B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B068u;
label_37b068:
    // 0x37b068: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37B068u;
    SET_GPR_U32(ctx, 31, 0x37B070u);
    ctx->pc = 0x37B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B068u;
    // 0x37b06c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37B068u, 0x37B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B070u;
label_37b070:
    // 0x37b070: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37b070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b074: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37B074u;
    SET_GPR_U32(ctx, 31, 0x37B07Cu);
    ctx->pc = 0x37B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B074u;
    // 0x37b078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37B074u, 0x37B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B07Cu;
label_37b07c:
    // 0x37b07c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b088: 0x3e00008  jr          $ra
    ctx->pc = 0x37B088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B088u;
        // 0x37b08c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B090u;
}
