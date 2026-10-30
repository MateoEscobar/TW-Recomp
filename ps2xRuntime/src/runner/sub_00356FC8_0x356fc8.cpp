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

// Function: sub_00356FC8
// Address: 0x356fc8 - 0x357028
void sub_00356FC8_0x356fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356FC8_0x356fc8");
#endif

    switch (ctx->pc) {
        case 0x356fe4u: goto label_356fe4;
        case 0x356ff0u: goto label_356ff0;
        case 0x357008u: goto label_357008;
        case 0x357014u: goto label_357014;
        default: break;
    }

    ctx->pc = 0x356fc8u;

    // 0x356fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x356fcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x356fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x356fd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x356fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356fd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x356fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356fdc: 0xc0e401a  jal         func_390068
    ctx->pc = 0x356FDCu;
    SET_GPR_U32(ctx, 31, 0x356FE4u);
    ctx->pc = 0x356FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FDCu;
    // 0x356fe0: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390068u, 0x356FDCu, 0x356FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FE4u;
label_356fe4:
    // 0x356fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x356fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356fe8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x356FE8u;
    SET_GPR_U32(ctx, 31, 0x356FF0u);
    ctx->pc = 0x356FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FE8u;
    // 0x356fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x356FE8u, 0x356FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FF0u;
label_356ff0:
    // 0x356ff0: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x356FF0u;
    {
        const bool branch_taken_0x356ff0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x356ff0) {
            ctx->pc = 0x356FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356FF0u;
            // 0x356ff4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35700Cu;
            goto label_35700c;
        }
    }
    ctx->pc = 0x356FF8u;
    // 0x356ff8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x356ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x356ffc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x356ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x357000: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x357000u;
    SET_GPR_U32(ctx, 31, 0x357008u);
    ctx->pc = 0x357004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357000u;
    // 0x357004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x357000u, 0x357008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357008u;
label_357008:
    // 0x357008: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x357008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_35700c:
    // 0x35700c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x35700Cu;
    SET_GPR_U32(ctx, 31, 0x357014u);
    ctx->pc = 0x357010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35700Cu;
    // 0x357010: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x35700Cu, 0x357014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357014u;
label_357014:
    // 0x357014: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x357014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35701c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35701cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357020: 0x3e00008  jr          $ra
    ctx->pc = 0x357020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357020u;
        // 0x357024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357028u;
}
