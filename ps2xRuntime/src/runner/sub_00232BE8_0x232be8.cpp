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

// Function: sub_00232BE8
// Address: 0x232be8 - 0x232c60
void sub_00232BE8_0x232be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232BE8_0x232be8");
#endif

    switch (ctx->pc) {
        case 0x232c08u: goto label_232c08;
        case 0x232c14u: goto label_232c14;
        case 0x232c24u: goto label_232c24;
        case 0x232c30u: goto label_232c30;
        case 0x232c3cu: goto label_232c3c;
        case 0x232c48u: goto label_232c48;
        default: break;
    }

    ctx->pc = 0x232be8u;

    // 0x232be8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x232bec: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x232becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x232bf0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x232bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x232bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x232bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232bf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x232bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x232bfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x232c00: 0xc0e409a  jal         func_390268
    ctx->pc = 0x232C00u;
    SET_GPR_U32(ctx, 31, 0x232C08u);
    ctx->pc = 0x232C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C00u;
    // 0x232c04: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x232C00u, 0x232C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C08u;
label_232c08:
    // 0x232c08: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x232c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x232c0c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x232C0Cu;
    SET_GPR_U32(ctx, 31, 0x232C14u);
    ctx->pc = 0x232C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C0Cu;
    // 0x232c10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x232C0Cu, 0x232C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C14u;
label_232c14:
    // 0x232c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c1c: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x232C1Cu;
    SET_GPR_U32(ctx, 31, 0x232C24u);
    ctx->pc = 0x232C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C1Cu;
    // 0x232c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x232C1Cu, 0x232C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C24u;
label_232c24:
    // 0x232c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c28: 0xc0a0152  jal         func_280548
    ctx->pc = 0x232C28u;
    SET_GPR_U32(ctx, 31, 0x232C30u);
    ctx->pc = 0x232C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C28u;
    // 0x232c2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x232C28u, 0x232C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C30u;
label_232c30:
    // 0x232c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c34: 0xc089974  jal         func_2265D0
    ctx->pc = 0x232C34u;
    SET_GPR_U32(ctx, 31, 0x232C3Cu);
    ctx->pc = 0x232C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C34u;
    // 0x232c38: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x232C34u, 0x232C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C3Cu;
label_232c3c:
    // 0x232c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c40: 0xc089974  jal         func_2265D0
    ctx->pc = 0x232C40u;
    SET_GPR_U32(ctx, 31, 0x232C48u);
    ctx->pc = 0x232C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C40u;
    // 0x232c44: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x232C40u, 0x232C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C48u;
label_232c48:
    // 0x232c48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x232c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232c4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x232c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232c50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232c54: 0x3e00008  jr          $ra
    ctx->pc = 0x232C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C54u;
        // 0x232c58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232C5Cu;
    // 0x232c5c: 0x0  nop
    ctx->pc = 0x232c5cu;
    // NOP
    ctx->pc = 0x232c60u;
}
