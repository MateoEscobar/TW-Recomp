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

// Function: sub_0035DC90
// Address: 0x35dc90 - 0x35dd80
void sub_0035DC90_0x35dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DC90_0x35dc90");
#endif

    switch (ctx->pc) {
        case 0x35dcc4u: goto label_35dcc4;
        case 0x35dcccu: goto label_35dccc;
        case 0x35dce0u: goto label_35dce0;
        case 0x35dce8u: goto label_35dce8;
        case 0x35dcfcu: goto label_35dcfc;
        case 0x35dd04u: goto label_35dd04;
        case 0x35dd18u: goto label_35dd18;
        case 0x35dd20u: goto label_35dd20;
        case 0x35dd34u: goto label_35dd34;
        case 0x35dd3cu: goto label_35dd3c;
        case 0x35dd54u: goto label_35dd54;
        default: break;
    }

    ctx->pc = 0x35dc90u;

    // 0x35dc90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35dc94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dc98: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x35dc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x35dc9c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x35dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x35dca0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35dca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35dca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dca8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x35dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x35dcac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35dcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35dcb0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x35dcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x35dcb4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x35dcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x35dcb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35dcbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DCBCu;
    SET_GPR_U32(ctx, 31, 0x35DCC4u);
    ctx->pc = 0x35DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCBCu;
    // 0x35dcc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DCBCu, 0x35DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCC4u;
label_35dcc4:
    // 0x35dcc4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35DCC4u;
    SET_GPR_U32(ctx, 31, 0x35DCCCu);
    ctx->pc = 0x35DCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCC4u;
    // 0x35dcc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35DCC4u, 0x35DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCCCu;
label_35dccc:
    // 0x35dccc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35dcccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dcd0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35dcd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dcd4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35dcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35dcd8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DCD8u;
    SET_GPR_U32(ctx, 31, 0x35DCE0u);
    ctx->pc = 0x35DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCD8u;
    // 0x35dcdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DCD8u, 0x35DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCE0u;
label_35dce0:
    // 0x35dce0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35DCE0u;
    SET_GPR_U32(ctx, 31, 0x35DCE8u);
    ctx->pc = 0x35DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCE0u;
    // 0x35dce4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35DCE0u, 0x35DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCE8u;
label_35dce8:
    // 0x35dce8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35dce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dcec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35dcecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dcf0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35dcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35dcf4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DCF4u;
    SET_GPR_U32(ctx, 31, 0x35DCFCu);
    ctx->pc = 0x35DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCF4u;
    // 0x35dcf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DCF4u, 0x35DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCFCu;
label_35dcfc:
    // 0x35dcfc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35DCFCu;
    SET_GPR_U32(ctx, 31, 0x35DD04u);
    ctx->pc = 0x35DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCFCu;
    // 0x35dd00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35DCFCu, 0x35DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD04u;
label_35dd04:
    // 0x35dd04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35dd04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35dd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35dd10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DD10u;
    SET_GPR_U32(ctx, 31, 0x35DD18u);
    ctx->pc = 0x35DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD10u;
    // 0x35dd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DD10u, 0x35DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD18u;
label_35dd18:
    // 0x35dd18: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35DD18u;
    SET_GPR_U32(ctx, 31, 0x35DD20u);
    ctx->pc = 0x35DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD18u;
    // 0x35dd1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35DD18u, 0x35DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD20u;
label_35dd20:
    // 0x35dd20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35dd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35dd24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd2c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DD2Cu;
    SET_GPR_U32(ctx, 31, 0x35DD34u);
    ctx->pc = 0x35DD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD2Cu;
    // 0x35dd30: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DD2Cu, 0x35DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD34u;
label_35dd34:
    // 0x35dd34: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35DD34u;
    SET_GPR_U32(ctx, 31, 0x35DD3Cu);
    ctx->pc = 0x35DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD34u;
    // 0x35dd38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35DD34u, 0x35DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD3Cu;
label_35dd3c:
    // 0x35dd3c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x35dd3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35dd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35dd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35dd48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd4c: 0xc08e996  jal         func_23A658
    ctx->pc = 0x35DD4Cu;
    SET_GPR_U32(ctx, 31, 0x35DD54u);
    ctx->pc = 0x35DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DD4Cu;
    // 0x35dd50: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A658u, 0x35DD4Cu, 0x35DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DD54u;
label_35dd54:
    // 0x35dd54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x35dd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35dd58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35dd58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x35dd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35dd60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x35dd60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35dd64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35dd64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35dd68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x35dd68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35dd6c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x35dd6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35dd70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35dd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dd74: 0x3e00008  jr          $ra
    ctx->pc = 0x35DD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD74u;
        // 0x35dd78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DD7Cu;
    // 0x35dd7c: 0x0  nop
    ctx->pc = 0x35dd7cu;
    // NOP
    ctx->pc = 0x35dd80u;
}
