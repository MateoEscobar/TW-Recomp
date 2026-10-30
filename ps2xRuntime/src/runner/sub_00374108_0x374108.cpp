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

// Function: sub_00374108
// Address: 0x374108 - 0x374178
void sub_00374108_0x374108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374108_0x374108");
#endif

    switch (ctx->pc) {
        case 0x374128u: goto label_374128;
        case 0x374130u: goto label_374130;
        case 0x374144u: goto label_374144;
        case 0x374150u: goto label_374150;
        case 0x37415cu: goto label_37415c;
        default: break;
    }

    ctx->pc = 0x374108u;

    // 0x374108: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37410c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37410cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374110: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x374110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x374114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37411c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374120: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374120u;
    SET_GPR_U32(ctx, 31, 0x374128u);
    ctx->pc = 0x374124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374120u;
    // 0x374124: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374120u, 0x374128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374128u;
label_374128:
    // 0x374128: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374128u;
    SET_GPR_U32(ctx, 31, 0x374130u);
    ctx->pc = 0x37412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374128u;
    // 0x37412c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374128u, 0x374130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374130u;
label_374130:
    // 0x374130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374134: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x374134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x374138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37413c: 0xc102488  jal         func_409220
    ctx->pc = 0x37413Cu;
    SET_GPR_U32(ctx, 31, 0x374144u);
    ctx->pc = 0x374140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37413Cu;
    // 0x374140: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x37413Cu, 0x374144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374144u;
label_374144:
    // 0x374144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374148: 0xc05ad86  jal         func_16B618
    ctx->pc = 0x374148u;
    SET_GPR_U32(ctx, 31, 0x374150u);
    ctx->pc = 0x37414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374148u;
    // 0x37414c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B618u, 0x374148u, 0x374150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374150u;
label_374150:
    // 0x374150: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x374150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374154: 0xc102562  jal         func_409588
    ctx->pc = 0x374154u;
    SET_GPR_U32(ctx, 31, 0x37415Cu);
    ctx->pc = 0x374158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374154u;
    // 0x374158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x374154u, 0x37415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37415Cu;
label_37415c:
    // 0x37415c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37415cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x374160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374164: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x374164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37416c: 0x3e00008  jr          $ra
    ctx->pc = 0x37416Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37416Cu;
        // 0x374170: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37416Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374174u;
    // 0x374174: 0x0  nop
    ctx->pc = 0x374174u;
    // NOP
    ctx->pc = 0x374178u;
}
