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

// Function: sub_00366BD8
// Address: 0x366bd8 - 0x366c80
void sub_00366BD8_0x366bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366BD8_0x366bd8");
#endif

    switch (ctx->pc) {
        case 0x366bfcu: goto label_366bfc;
        case 0x366c04u: goto label_366c04;
        case 0x366c24u: goto label_366c24;
        case 0x366c2cu: goto label_366c2c;
        case 0x366c4cu: goto label_366c4c;
        case 0x366c54u: goto label_366c54;
        case 0x366c64u: goto label_366c64;
        default: break;
    }

    ctx->pc = 0x366bd8u;

    // 0x366bd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x366bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x366bdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x366bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366be0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x366be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x366be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366be8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x366be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x366bec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x366becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x366bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x366bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x366bf4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366BF4u;
    SET_GPR_U32(ctx, 31, 0x366BFCu);
    ctx->pc = 0x366BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366BF4u;
    // 0x366bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366BF4u, 0x366BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366BFCu;
label_366bfc:
    // 0x366bfc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x366BFCu;
    SET_GPR_U32(ctx, 31, 0x366C04u);
    ctx->pc = 0x366C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366BFCu;
    // 0x366c00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x366BFCu, 0x366C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C04u;
label_366c04:
    // 0x366c04: 0x34068172  ori         $a2, $zero, 0x8172
    ctx->pc = 0x366c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33138);
    // 0x366c08: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x366c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x366c0c: 0x34c6c800  ori         $a2, $a2, 0xC800
    ctx->pc = 0x366c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51200);
    // 0x366c10: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x366c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x366c14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x366c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x366c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366c1c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366C1Cu;
    SET_GPR_U32(ctx, 31, 0x366C24u);
    ctx->pc = 0x366C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C1Cu;
    // 0x366c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366C1Cu, 0x366C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C24u;
label_366c24:
    // 0x366c24: 0xc10b108  jal         func_42C420
    ctx->pc = 0x366C24u;
    SET_GPR_U32(ctx, 31, 0x366C2Cu);
    ctx->pc = 0x366C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C24u;
    // 0x366c28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x366C24u, 0x366C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C2Cu;
label_366c2c:
    // 0x366c2c: 0x3406812e  ori         $a2, $zero, 0x812E
    ctx->pc = 0x366c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33070);
    // 0x366c30: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x366c30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x366c34: 0x34c6e000  ori         $a2, $a2, 0xE000
    ctx->pc = 0x366c34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57344);
    // 0x366c38: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x366c38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x366c3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x366c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c44: 0xc102472  jal         func_4091C8
    ctx->pc = 0x366C44u;
    SET_GPR_U32(ctx, 31, 0x366C4Cu);
    ctx->pc = 0x366C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C44u;
    // 0x366c48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x366C44u, 0x366C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C4Cu;
label_366c4c:
    // 0x366c4c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x366C4Cu;
    SET_GPR_U32(ctx, 31, 0x366C54u);
    ctx->pc = 0x366C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C4Cu;
    // 0x366c50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x366C4Cu, 0x366C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C54u;
label_366c54:
    // 0x366c54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x366c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x366c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c5c: 0xc0476aa  jal         func_11DAA8
    ctx->pc = 0x366C5Cu;
    SET_GPR_U32(ctx, 31, 0x366C64u);
    ctx->pc = 0x366C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366C5Cu;
    // 0x366c60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DAA8u, 0x366C5Cu, 0x366C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366C64u;
label_366c64:
    // 0x366c64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x366c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x366c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366c6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x366c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366c70: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x366c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x366c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366c78: 0x3e00008  jr          $ra
    ctx->pc = 0x366C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366C78u;
        // 0x366c7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366C80u;
}
