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

// Function: sub_0040B058
// Address: 0x40b058 - 0x40b0c8
void sub_0040B058_0x40b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B058_0x40b058");
#endif

    switch (ctx->pc) {
        case 0x40b07cu: goto label_40b07c;
        case 0x40b090u: goto label_40b090;
        case 0x40b09cu: goto label_40b09c;
        case 0x40b0a8u: goto label_40b0a8;
        case 0x40b0b4u: goto label_40b0b4;
        default: break;
    }

    ctx->pc = 0x40b058u;

    // 0x40b058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40b05c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40b05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b060: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40b060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40b064: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x40b064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40b068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b070: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x40b070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40b074: 0xc102bbc  jal         func_40AEF0
    ctx->pc = 0x40B074u;
    SET_GPR_U32(ctx, 31, 0x40B07Cu);
    ctx->pc = 0x40B078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B074u;
    // 0x40b078: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40AEF0u, 0x40B074u, 0x40B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B07Cu;
label_40b07c:
    // 0x40b07c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x40B07Cu;
    {
        const bool branch_taken_0x40b07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40b07c) {
            ctx->pc = 0x40B080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40B07Cu;
            // 0x40b080: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40B0B8u;
            goto label_40b0b8;
        }
    }
    ctx->pc = 0x40B084u;
    // 0x40b084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b088: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B088u;
    SET_GPR_U32(ctx, 31, 0x40B090u);
    ctx->pc = 0x40B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B088u;
    // 0x40b08c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B088u, 0x40B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B090u;
label_40b090:
    // 0x40b090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b094: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B094u;
    SET_GPR_U32(ctx, 31, 0x40B09Cu);
    ctx->pc = 0x40B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B094u;
    // 0x40b098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B094u, 0x40B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B09Cu;
label_40b09c:
    // 0x40b09c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b0a0: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B0A0u;
    SET_GPR_U32(ctx, 31, 0x40B0A8u);
    ctx->pc = 0x40B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B0A0u;
    // 0x40b0a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B0A0u, 0x40B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B0A8u;
label_40b0a8:
    // 0x40b0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b0ac: 0xc0c8fc4  jal         func_323F10
    ctx->pc = 0x40B0ACu;
    SET_GPR_U32(ctx, 31, 0x40B0B4u);
    ctx->pc = 0x40B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B0ACu;
    // 0x40b0b0: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F10u, 0x40B0ACu, 0x40B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B0B4u;
label_40b0b4:
    // 0x40b0b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40b0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40b0b8:
    // 0x40b0b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40b0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x40B0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B0C0u;
        // 0x40b0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B0C8u;
}
