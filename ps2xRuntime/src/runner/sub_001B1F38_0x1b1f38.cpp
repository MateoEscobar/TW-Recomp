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

// Function: sub_001B1F38
// Address: 0x1b1f38 - 0x1b2030
void sub_001B1F38_0x1b1f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1F38_0x1b1f38");
#endif

    switch (ctx->pc) {
        case 0x1b1f6cu: goto label_1b1f6c;
        case 0x1b1fa0u: goto label_1b1fa0;
        case 0x1b1facu: goto label_1b1fac;
        case 0x1b1fc0u: goto label_1b1fc0;
        case 0x1b1fc8u: goto label_1b1fc8;
        case 0x1b1fd0u: goto label_1b1fd0;
        case 0x1b1fdcu: goto label_1b1fdc;
        case 0x1b1fecu: goto label_1b1fec;
        case 0x1b1ffcu: goto label_1b1ffc;
        default: break;
    }

    ctx->pc = 0x1b1f38u;

    // 0x1b1f38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b1f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b1f3c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b1f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b1f40: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b1f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b1f44: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1b1f44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1b1f48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f4c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b1f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b1f50: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1b1f50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1b1f54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b1f58: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1b1f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1b1f5c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1b1f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1b1f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1f64: 0xc107444  jal         func_41D110
    ctx->pc = 0x1B1F64u;
    SET_GPR_U32(ctx, 31, 0x1B1F6Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1B1F64u, 0x1B1F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F6Cu;
label_1b1f6c:
    // 0x1b1f6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1F6Cu;
    {
        const bool branch_taken_0x1b1f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F6Cu;
        // 0x1b1f70: 0x8e02489c  lw          $v0, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f6c) {
            ctx->pc = 0x1B1F84u;
            goto label_1b1f84;
        }
    }
    ctx->pc = 0x1B1F74u;
    // 0x1b1f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b1f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1f78: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x1b1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x1b1f7c: 0x50640023  beql        $v1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B1F7Cu;
    {
        const bool branch_taken_0x1b1f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b1f7c) {
            ctx->pc = 0x1B1F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1F7Cu;
            // 0x1b1f80: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B200Cu;
            goto label_1b200c;
        }
    }
    ctx->pc = 0x1B1F84u;
label_1b1f84:
    // 0x1b1f84: 0x265315b0  addiu       $s3, $s2, 0x15B0
    ctx->pc = 0x1b1f84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 5552));
    // 0x1b1f88: 0x265415d0  addiu       $s4, $s2, 0x15D0
    ctx->pc = 0x1b1f88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 5584));
    // 0x1b1f8c: 0x26553f10  addiu       $s5, $s2, 0x3F10
    ctx->pc = 0x1b1f8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16144));
    // 0x1b1f90: 0x26500008  addiu       $s0, $s2, 0x8
    ctx->pc = 0x1b1f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1b1f94: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1f98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b1f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1f9c: 0x0  nop
    ctx->pc = 0x1b1f9cu;
    // NOP
label_1b1fa0:
    // 0x1b1fa0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b1fa4: 0xc0837fa  jal         func_20DFE8
    ctx->pc = 0x1B1FA4u;
    SET_GPR_U32(ctx, 31, 0x1B1FACu);
    ctx->pc = 0x1B1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FA4u;
    // 0x1b1fa8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DFE8u, 0x1B1FA4u, 0x1B1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FACu;
label_1b1fac:
    // 0x1b1fac: 0x0  nop
    ctx->pc = 0x1b1facu;
    // NOP
    // 0x1b1fb0: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B1FB0u;
    {
        const bool branch_taken_0x1b1fb0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b1fb0) {
            ctx->pc = 0x1B1FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1FB0u;
            // 0x1b1fb4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1fa0;
        }
    }
    ctx->pc = 0x1B1FB8u;
    // 0x1b1fb8: 0xc06a3ce  jal         func_1A8F38
    ctx->pc = 0x1B1FB8u;
    SET_GPR_U32(ctx, 31, 0x1B1FC0u);
    ctx->pc = 0x1B1FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FB8u;
    // 0x1b1fbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F38u, 0x1B1FB8u, 0x1B1FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FC0u;
label_1b1fc0:
    // 0x1b1fc0: 0xc0710ba  jal         func_1C42E8
    ctx->pc = 0x1B1FC0u;
    SET_GPR_U32(ctx, 31, 0x1B1FC8u);
    ctx->pc = 0x1B1FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FC0u;
    // 0x1b1fc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42E8u, 0x1B1FC0u, 0x1B1FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FC8u;
label_1b1fc8:
    // 0x1b1fc8: 0xc0710ba  jal         func_1C42E8
    ctx->pc = 0x1B1FC8u;
    SET_GPR_U32(ctx, 31, 0x1B1FD0u);
    ctx->pc = 0x1B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FC8u;
    // 0x1b1fcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42E8u, 0x1B1FC8u, 0x1B1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FD0u;
label_1b1fd0:
    // 0x1b1fd0: 0x34048960  ori         $a0, $zero, 0x8960
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35168);
    // 0x1b1fd4: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1B1FD4u;
    SET_GPR_U32(ctx, 31, 0x1B1FDCu);
    ctx->pc = 0x1B1FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FD4u;
    // 0x1b1fd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1B1FD4u, 0x1B1FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FDCu;
label_1b1fdc:
    // 0x1b1fdc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b1fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1b1fe0: 0x348477d0  ori         $a0, $a0, 0x77D0
    ctx->pc = 0x1b1fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30672);
    // 0x1b1fe4: 0xc06a9b0  jal         func_1AA6C0
    ctx->pc = 0x1B1FE4u;
    SET_GPR_U32(ctx, 31, 0x1B1FECu);
    ctx->pc = 0x1B1FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FE4u;
    // 0x1b1fe8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA6C0u, 0x1B1FE4u, 0x1B1FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FECu;
label_1b1fec:
    // 0x1b1fec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1b1ff0: 0x34848280  ori         $a0, $a0, 0x8280
    ctx->pc = 0x1b1ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33408);
    // 0x1b1ff4: 0xc06a9b0  jal         func_1AA6C0
    ctx->pc = 0x1B1FF4u;
    SET_GPR_U32(ctx, 31, 0x1B1FFCu);
    ctx->pc = 0x1B1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FF4u;
    // 0x1b1ff8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA6C0u, 0x1B1FF4u, 0x1B1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FFCu;
label_1b1ffc:
    // 0x1b1ffc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1b1ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1b2000: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b2000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b2004: 0xac4077a0  sw          $zero, 0x77A0($v0)
    ctx->pc = 0x1b2004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30624), GPR_U32(ctx, 0));
    // 0x1b2008: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b2008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b200c:
    // 0x1b200c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b200cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2010: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b2010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2014: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b2014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2018: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1b2018u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b201c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1b201cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2024: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2024u;
        // 0x1b2028: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B202Cu;
    // 0x1b202c: 0x0  nop
    ctx->pc = 0x1b202cu;
    // NOP
    ctx->pc = 0x1b2030u;
}
