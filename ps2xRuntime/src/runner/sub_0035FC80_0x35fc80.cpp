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

// Function: sub_0035FC80
// Address: 0x35fc80 - 0x35fd18
void sub_0035FC80_0x35fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FC80_0x35fc80");
#endif

    switch (ctx->pc) {
        case 0x35fca8u: goto label_35fca8;
        case 0x35fcb0u: goto label_35fcb0;
        case 0x35fcc4u: goto label_35fcc4;
        case 0x35fcccu: goto label_35fccc;
        case 0x35fce4u: goto label_35fce4;
        case 0x35fcecu: goto label_35fcec;
        case 0x35fcfcu: goto label_35fcfc;
        default: break;
    }

    ctx->pc = 0x35fc80u;

    // 0x35fc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35fc84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fc88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35fc8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35fc90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35fc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35fc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35fc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35fc9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fca0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FCA0u;
    SET_GPR_U32(ctx, 31, 0x35FCA8u);
    ctx->pc = 0x35FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCA0u;
    // 0x35fca4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FCA0u, 0x35FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCA8u;
label_35fca8:
    // 0x35fca8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FCA8u;
    SET_GPR_U32(ctx, 31, 0x35FCB0u);
    ctx->pc = 0x35FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCA8u;
    // 0x35fcac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FCA8u, 0x35FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCB0u;
label_35fcb0:
    // 0x35fcb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35fcb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fcb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35fcb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fcb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35fcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fcbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FCBCu;
    SET_GPR_U32(ctx, 31, 0x35FCC4u);
    ctx->pc = 0x35FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCBCu;
    // 0x35fcc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FCBCu, 0x35FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCC4u;
label_35fcc4:
    // 0x35fcc4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35FCC4u;
    SET_GPR_U32(ctx, 31, 0x35FCCCu);
    ctx->pc = 0x35FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCC4u;
    // 0x35fcc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35FCC4u, 0x35FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCCCu;
label_35fccc:
    // 0x35fccc: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x35fcccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x35fcd0: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x35fcd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x35fcd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35fcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35fcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fcdc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FCDCu;
    SET_GPR_U32(ctx, 31, 0x35FCE4u);
    ctx->pc = 0x35FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCDCu;
    // 0x35fce0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FCDCu, 0x35FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCE4u;
label_35fce4:
    // 0x35fce4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35FCE4u;
    SET_GPR_U32(ctx, 31, 0x35FCECu);
    ctx->pc = 0x35FCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCE4u;
    // 0x35fce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35FCE4u, 0x35FCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCECu;
label_35fcec:
    // 0x35fcec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35fcecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fcf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35fcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fcf4: 0xc0a4a98  jal         func_292A60
    ctx->pc = 0x35FCF4u;
    SET_GPR_U32(ctx, 31, 0x35FCFCu);
    ctx->pc = 0x35FCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FCF4u;
    // 0x35fcf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292A60u, 0x35FCF4u, 0x35FCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FCFCu;
label_35fcfc:
    // 0x35fcfc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35fcfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35fd00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fd04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35fd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fd08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35fd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fd0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fd10: 0x3e00008  jr          $ra
    ctx->pc = 0x35FD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FD10u;
        // 0x35fd14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FD18u;
}
