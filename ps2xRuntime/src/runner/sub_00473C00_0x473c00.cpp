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

// Function: sub_00473C00
// Address: 0x473c00 - 0x473c88
void sub_00473C00_0x473c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473C00_0x473c00");
#endif

    switch (ctx->pc) {
        case 0x473c00u: goto label_473c00;
        case 0x473c04u: goto label_473c04;
        case 0x473c08u: goto label_473c08;
        case 0x473c0cu: goto label_473c0c;
        case 0x473c10u: goto label_473c10;
        case 0x473c14u: goto label_473c14;
        case 0x473c18u: goto label_473c18;
        case 0x473c1cu: goto label_473c1c;
        case 0x473c20u: goto label_473c20;
        case 0x473c24u: goto label_473c24;
        case 0x473c28u: goto label_473c28;
        case 0x473c2cu: goto label_473c2c;
        case 0x473c30u: goto label_473c30;
        case 0x473c34u: goto label_473c34;
        case 0x473c38u: goto label_473c38;
        case 0x473c3cu: goto label_473c3c;
        case 0x473c40u: goto label_473c40;
        case 0x473c44u: goto label_473c44;
        case 0x473c48u: goto label_473c48;
        case 0x473c4cu: goto label_473c4c;
        case 0x473c50u: goto label_473c50;
        case 0x473c54u: goto label_473c54;
        case 0x473c58u: goto label_473c58;
        case 0x473c5cu: goto label_473c5c;
        case 0x473c60u: goto label_473c60;
        case 0x473c64u: goto label_473c64;
        case 0x473c68u: goto label_473c68;
        case 0x473c6cu: goto label_473c6c;
        case 0x473c70u: goto label_473c70;
        case 0x473c74u: goto label_473c74;
        case 0x473c78u: goto label_473c78;
        case 0x473c7cu: goto label_473c7c;
        case 0x473c80u: goto label_473c80;
        case 0x473c84u: goto label_473c84;
        default: break;
    }

    ctx->pc = 0x473c00u;

label_473c00:
    // 0x473c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x473c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_473c04:
    // 0x473c04: 0x8f828518  lw          $v0, -0x7AE8($gp)
    ctx->pc = 0x473c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
label_473c08:
    // 0x473c08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x473c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_473c0c:
    // 0x473c0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x473c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_473c10:
    // 0x473c10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x473c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_473c14:
    // 0x473c14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x473c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_473c18:
    // 0x473c18: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x473c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_473c1c:
    // 0x473c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_473c20:
    // 0x473c20: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x473c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_473c24:
    // 0x473c24: 0x40f809  jalr        $v0
label_473c28:
    if (ctx->pc == 0x473C28u) {
        ctx->pc = 0x473C2Cu;
        goto label_473c2c;
    }
    ctx->pc = 0x473C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473C2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473C24u, 0x473C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473C2Cu;
label_473c2c:
    // 0x473c2c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_473c30:
    if (ctx->pc == 0x473C30u) {
        ctx->pc = 0x473C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473C2Cu;
        // 0x473c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473C34u;
        goto label_473c34;
    }
    ctx->pc = 0x473C2Cu;
    {
        const bool branch_taken_0x473c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473c2c) {
            ctx->pc = 0x473C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x473C2Cu;
            // 0x473c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x473C6Cu;
            goto label_473c6c;
        }
    }
    ctx->pc = 0x473C34u;
label_473c34:
    // 0x473c34: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x473c34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_473c38:
    // 0x473c38: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_473c3c:
    if (ctx->pc == 0x473C3Cu) {
        ctx->pc = 0x473C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473C38u;
        // 0x473c3c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473C40u;
        goto label_473c40;
    }
    ctx->pc = 0x473C38u;
    {
        const bool branch_taken_0x473c38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x473C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473C38u;
        // 0x473c3c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473c38) {
            ctx->pc = 0x473C68u;
            goto label_473c68;
        }
    }
    ctx->pc = 0x473C40u;
label_473c40:
    // 0x473c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x473c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_473c44:
    // 0x473c44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x473c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_473c48:
    // 0x473c48: 0xc11c97c  jal         func_4725F0
label_473c4c:
    if (ctx->pc == 0x473C4Cu) {
        ctx->pc = 0x473C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473C48u;
        // 0x473c4c: 0x8c50adb8  lw          $s0, -0x5248($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473C50u;
        goto label_473c50;
    }
    ctx->pc = 0x473C48u;
    SET_GPR_U32(ctx, 31, 0x473C50u);
    ctx->pc = 0x473C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473C48u;
    // 0x473c4c: 0x8c50adb8  lw          $s0, -0x5248($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4725F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4725F0u, 0x473C48u, 0x473C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473C50u;
label_473c50:
    // 0x473c50: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x473c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_473c54:
    // 0x473c54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x473c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473c58:
    // 0x473c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x473c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473c5c:
    // 0x473c5c: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x473c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_473c60:
    // 0x473c60: 0x200f809  jalr        $s0
label_473c64:
    if (ctx->pc == 0x473C64u) {
        ctx->pc = 0x473C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473C60u;
        // 0x473c64: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x473C68u;
        goto label_473c68;
    }
    ctx->pc = 0x473C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x473C68u);
        ctx->pc = 0x473C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473C60u;
        // 0x473c64: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473C60u, 0x473C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473C68u;
label_473c68:
    // 0x473c68: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x473c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_473c6c:
    // 0x473c6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x473c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_473c70:
    // 0x473c70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x473c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_473c74:
    // 0x473c74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x473c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_473c78:
    // 0x473c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_473c7c:
    // 0x473c7c: 0x3e00008  jr          $ra
label_473c80:
    if (ctx->pc == 0x473C80u) {
        ctx->pc = 0x473C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473C7Cu;
        // 0x473c80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473C84u;
        goto label_473c84;
    }
    ctx->pc = 0x473C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473C7Cu;
        // 0x473c80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473C84u;
label_473c84:
    // 0x473c84: 0x0  nop
    ctx->pc = 0x473c84u;
    // NOP
    ctx->pc = 0x473c88u;
}
