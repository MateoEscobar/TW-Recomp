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

// Function: sub_00367FE8
// Address: 0x367fe8 - 0x368078
void sub_00367FE8_0x367fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367FE8_0x367fe8");
#endif

    switch (ctx->pc) {
        case 0x36800cu: goto label_36800c;
        case 0x368014u: goto label_368014;
        case 0x368028u: goto label_368028;
        case 0x36803cu: goto label_36803c;
        case 0x36804cu: goto label_36804c;
        case 0x368058u: goto label_368058;
        default: break;
    }

    ctx->pc = 0x367fe8u;

    // 0x367fe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x367fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x367fec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367ff0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x367ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x367ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x367ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x367ffc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x367ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x368000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x368000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368004: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368004u;
    SET_GPR_U32(ctx, 31, 0x36800Cu);
    ctx->pc = 0x368008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368004u;
    // 0x368008: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368004u, 0x36800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36800Cu;
label_36800c:
    // 0x36800c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36800Cu;
    SET_GPR_U32(ctx, 31, 0x368014u);
    ctx->pc = 0x368010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36800Cu;
    // 0x368010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36800Cu, 0x368014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368014u;
label_368014:
    // 0x368014: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x368014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x368018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36801c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368020: 0xc102488  jal         func_409220
    ctx->pc = 0x368020u;
    SET_GPR_U32(ctx, 31, 0x368028u);
    ctx->pc = 0x368024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368020u;
    // 0x368024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x368020u, 0x368028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368028u;
label_368028:
    // 0x368028: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x368028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36802c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36802cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368030: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x368030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x368034: 0xc1024c6  jal         func_409318
    ctx->pc = 0x368034u;
    SET_GPR_U32(ctx, 31, 0x36803Cu);
    ctx->pc = 0x368038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368034u;
    // 0x368038: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x368034u, 0x36803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36803Cu;
label_36803c:
    // 0x36803c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x368040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368044: 0xc0d5300  jal         func_354C00
    ctx->pc = 0x368044u;
    SET_GPR_U32(ctx, 31, 0x36804Cu);
    ctx->pc = 0x368048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368044u;
    // 0x368048: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x354C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354C00u, 0x368044u, 0x36804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36804Cu;
label_36804c:
    // 0x36804c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36804cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368050: 0xc102562  jal         func_409588
    ctx->pc = 0x368050u;
    SET_GPR_U32(ctx, 31, 0x368058u);
    ctx->pc = 0x368054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368050u;
    // 0x368054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x368050u, 0x368058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368058u;
label_368058:
    // 0x368058: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x368058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36805c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368060: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x368060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368064: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x368064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36806c: 0x3e00008  jr          $ra
    ctx->pc = 0x36806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36806Cu;
        // 0x368070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368074u;
    // 0x368074: 0x0  nop
    ctx->pc = 0x368074u;
    // NOP
    ctx->pc = 0x368078u;
}
