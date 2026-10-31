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

// Function: sub_00361EA0
// Address: 0x361ea0 - 0x361fa0
void sub_00361EA0_0x361ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361EA0_0x361ea0");
#endif

    switch (ctx->pc) {
        case 0x361ed0u: goto label_361ed0;
        case 0x361ed8u: goto label_361ed8;
        case 0x361ee4u: goto label_361ee4;
        case 0x361efcu: goto label_361efc;
        case 0x361f14u: goto label_361f14;
        case 0x361f1cu: goto label_361f1c;
        case 0x361f30u: goto label_361f30;
        case 0x361f38u: goto label_361f38;
        case 0x361f50u: goto label_361f50;
        case 0x361f58u: goto label_361f58;
        case 0x361f74u: goto label_361f74;
        default: break;
    }

    ctx->pc = 0x361ea0u;

    // 0x361ea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x361ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x361ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361ea8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x361ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x361eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x361eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361eb0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x361eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x361eb4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x361eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x361eb8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x361eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x361ebc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x361ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x361ec0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x361ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x361ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x361ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361ec8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361EC8u;
    SET_GPR_U32(ctx, 31, 0x361ED0u);
    ctx->pc = 0x361ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361EC8u;
    // 0x361ecc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361EC8u, 0x361ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361ED0u;
label_361ed0:
    // 0x361ed0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361ED0u;
    SET_GPR_U32(ctx, 31, 0x361ED8u);
    ctx->pc = 0x361ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361ED0u;
    // 0x361ed4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361ED0u, 0x361ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361ED8u;
label_361ed8:
    // 0x361ed8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x361ed8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361edc: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x361EDCu;
    SET_GPR_U32(ctx, 31, 0x361EE4u);
    ctx->pc = 0x361EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361EDCu;
    // 0x361ee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x361EDCu, 0x361EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361EE4u;
label_361ee4:
    // 0x361ee4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x361ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x361ee8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x361EE8u;
    {
        const bool branch_taken_0x361ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361EE8u;
        // 0x361eec: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361ee8) {
            ctx->pc = 0x361F00u;
            goto label_361f00;
        }
    }
    ctx->pc = 0x361EF0u;
    // 0x361ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x361ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ef4: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x361EF4u;
    SET_GPR_U32(ctx, 31, 0x361EFCu);
    ctx->pc = 0x361EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361EF4u;
    // 0x361ef8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x361EF4u, 0x361EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361EFCu;
label_361efc:
    // 0x361efc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_361f00:
    // 0x361f00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x361f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361f08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f0c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361F0Cu;
    SET_GPR_U32(ctx, 31, 0x361F14u);
    ctx->pc = 0x361F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F0Cu;
    // 0x361f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361F0Cu, 0x361F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F14u;
label_361f14:
    // 0x361f14: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361F14u;
    SET_GPR_U32(ctx, 31, 0x361F1Cu);
    ctx->pc = 0x361F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F14u;
    // 0x361f18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361F14u, 0x361F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F1Cu;
label_361f1c:
    // 0x361f1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x361f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x361f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x361f28: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361F28u;
    SET_GPR_U32(ctx, 31, 0x361F30u);
    ctx->pc = 0x361F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F28u;
    // 0x361f2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361F28u, 0x361F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F30u;
label_361f30:
    // 0x361f30: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361F30u;
    SET_GPR_U32(ctx, 31, 0x361F38u);
    ctx->pc = 0x361F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F30u;
    // 0x361f34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361F30u, 0x361F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F38u;
label_361f38:
    // 0x361f38: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x361f38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x361f3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f40: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x361f40u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x361f44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x361f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f48: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361F48u;
    SET_GPR_U32(ctx, 31, 0x361F50u);
    ctx->pc = 0x361F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F48u;
    // 0x361f4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361F48u, 0x361F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F50u;
label_361f50:
    // 0x361f50: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361F50u;
    SET_GPR_U32(ctx, 31, 0x361F58u);
    ctx->pc = 0x361F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F50u;
    // 0x361f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361F50u, 0x361F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F58u;
label_361f58:
    // 0x361f58: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x361f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x361f5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x361f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x361f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x361f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x361f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f6c: 0xc0b0418  jal         func_2C1060
    ctx->pc = 0x361F6Cu;
    SET_GPR_U32(ctx, 31, 0x361F74u);
    ctx->pc = 0x361F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F6Cu;
    // 0x361f70: 0x24403  sra         $t0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1060u, 0x361F6Cu, 0x361F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F74u;
label_361f74:
    // 0x361f74: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x361f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x361f78: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x361f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f7c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x361f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x361f80: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x361f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361f84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x361f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361f88: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x361f88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361f8c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x361f8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x361f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361f94: 0x3e00008  jr          $ra
    ctx->pc = 0x361F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F94u;
        // 0x361f98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361F9Cu;
    // 0x361f9c: 0x0  nop
    ctx->pc = 0x361f9cu;
    // NOP
    ctx->pc = 0x361fa0u;
}
