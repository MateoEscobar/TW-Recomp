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

// Function: sub_00488B88
// Address: 0x488b88 - 0x488c58
void sub_00488B88_0x488b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488B88_0x488b88");
#endif

    switch (ctx->pc) {
        case 0x488b88u: goto label_488b88;
        case 0x488b8cu: goto label_488b8c;
        case 0x488b90u: goto label_488b90;
        case 0x488b94u: goto label_488b94;
        case 0x488b98u: goto label_488b98;
        case 0x488b9cu: goto label_488b9c;
        case 0x488ba0u: goto label_488ba0;
        case 0x488ba4u: goto label_488ba4;
        case 0x488ba8u: goto label_488ba8;
        case 0x488bacu: goto label_488bac;
        case 0x488bb0u: goto label_488bb0;
        case 0x488bb4u: goto label_488bb4;
        case 0x488bb8u: goto label_488bb8;
        case 0x488bbcu: goto label_488bbc;
        case 0x488bc0u: goto label_488bc0;
        case 0x488bc4u: goto label_488bc4;
        case 0x488bc8u: goto label_488bc8;
        case 0x488bccu: goto label_488bcc;
        case 0x488bd0u: goto label_488bd0;
        case 0x488bd4u: goto label_488bd4;
        case 0x488bd8u: goto label_488bd8;
        case 0x488bdcu: goto label_488bdc;
        case 0x488be0u: goto label_488be0;
        case 0x488be4u: goto label_488be4;
        case 0x488be8u: goto label_488be8;
        case 0x488becu: goto label_488bec;
        case 0x488bf0u: goto label_488bf0;
        case 0x488bf4u: goto label_488bf4;
        case 0x488bf8u: goto label_488bf8;
        case 0x488bfcu: goto label_488bfc;
        case 0x488c00u: goto label_488c00;
        case 0x488c04u: goto label_488c04;
        case 0x488c08u: goto label_488c08;
        case 0x488c0cu: goto label_488c0c;
        case 0x488c10u: goto label_488c10;
        case 0x488c14u: goto label_488c14;
        case 0x488c18u: goto label_488c18;
        case 0x488c1cu: goto label_488c1c;
        case 0x488c20u: goto label_488c20;
        case 0x488c24u: goto label_488c24;
        case 0x488c28u: goto label_488c28;
        case 0x488c2cu: goto label_488c2c;
        case 0x488c30u: goto label_488c30;
        case 0x488c34u: goto label_488c34;
        case 0x488c38u: goto label_488c38;
        case 0x488c3cu: goto label_488c3c;
        case 0x488c40u: goto label_488c40;
        case 0x488c44u: goto label_488c44;
        case 0x488c48u: goto label_488c48;
        case 0x488c4cu: goto label_488c4c;
        case 0x488c50u: goto label_488c50;
        case 0x488c54u: goto label_488c54;
        default: break;
    }

    ctx->pc = 0x488b88u;

label_488b88:
    // 0x488b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x488b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_488b8c:
    // 0x488b8c: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488b90:
    // 0x488b90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_488b94:
    // 0x488b94: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x488b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_488b98:
    // 0x488b98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x488b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_488b9c:
    // 0x488b9c: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x488b9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_488ba0:
    // 0x488ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_488ba4:
    // 0x488ba4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x488ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_488ba8:
    // 0x488ba8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x488ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_488bac:
    // 0x488bac: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x488bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_488bb0:
    // 0x488bb0: 0x34a50016  ori         $a1, $a1, 0x16
    ctx->pc = 0x488bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22);
label_488bb4:
    // 0x488bb4: 0x40f809  jalr        $v0
label_488bb8:
    if (ctx->pc == 0x488BB8u) {
        ctx->pc = 0x488BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488BB4u;
        // 0x488bb8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488BBCu;
        goto label_488bbc;
    }
    ctx->pc = 0x488BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488BBCu);
        ctx->pc = 0x488BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488BB4u;
        // 0x488bb8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488BB4u, 0x488BBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488BBCu;
label_488bbc:
    // 0x488bbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x488bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488bc0:
    // 0x488bc0: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_488bc4:
    if (ctx->pc == 0x488BC4u) {
        ctx->pc = 0x488BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488BC0u;
        // 0x488bc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488BC8u;
        goto label_488bc8;
    }
    ctx->pc = 0x488BC0u;
    {
        const bool branch_taken_0x488bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x488BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488BC0u;
        // 0x488bc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488bc0) {
            ctx->pc = 0x488C3Cu;
            goto label_488c3c;
        }
    }
    ctx->pc = 0x488BC8u;
label_488bc8:
    // 0x488bc8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x488bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_488bcc:
    // 0x488bcc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x488bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_488bd0:
    // 0x488bd0: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x488bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_488bd4:
    // 0x488bd4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x488bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_488bd8:
    // 0x488bd8: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x488bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_488bdc:
    // 0x488bdc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x488bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_488be0:
    // 0x488be0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x488be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_488be4:
    // 0x488be4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x488be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_488be8:
    // 0x488be8: 0x2484ec20  addiu       $a0, $a0, -0x13E0
    ctx->pc = 0x488be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962208));
label_488bec:
    // 0x488bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488bf0:
    // 0x488bf0: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x488bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488bf4:
    // 0x488bf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488bf8:
    // 0x488bf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x488bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_488bfc:
    // 0x488bfc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x488bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_488c00:
    // 0x488c00: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x488c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488c04:
    // 0x488c04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488c08:
    // 0x488c08: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x488c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_488c0c:
    // 0x488c0c: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488c10:
    // 0x488c10: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x488c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_488c14:
    // 0x488c14: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x488c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_488c18:
    // 0x488c18: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x488c18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_488c1c:
    // 0x488c1c: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x488c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488c20:
    // 0x488c20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488c24:
    // 0x488c24: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x488c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_488c28:
    // 0x488c28: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x488c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
label_488c2c:
    // 0x488c2c: 0xc11ff8e  jal         func_47FE38
label_488c30:
    if (ctx->pc == 0x488C30u) {
        ctx->pc = 0x488C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C2Cu;
        // 0x488c30: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488C34u;
        goto label_488c34;
    }
    ctx->pc = 0x488C2Cu;
    SET_GPR_U32(ctx, 31, 0x488C34u);
    ctx->pc = 0x488C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488C2Cu;
    // 0x488c30: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x488C2Cu, 0x488C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488C34u;
label_488c34:
    // 0x488c34: 0x10000002  b           . + 4 + (0x2 << 2)
label_488c38:
    if (ctx->pc == 0x488C38u) {
        ctx->pc = 0x488C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C34u;
        // 0x488c38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488C3Cu;
        goto label_488c3c;
    }
    ctx->pc = 0x488C34u;
    {
        const bool branch_taken_0x488c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C34u;
        // 0x488c38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488c34) {
            ctx->pc = 0x488C40u;
            goto label_488c40;
        }
    }
    ctx->pc = 0x488C3Cu;
label_488c3c:
    // 0x488c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x488c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488c40:
    // 0x488c40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x488c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488c44:
    // 0x488c44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488c48:
    // 0x488c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_488c4c:
    // 0x488c4c: 0x3e00008  jr          $ra
label_488c50:
    if (ctx->pc == 0x488C50u) {
        ctx->pc = 0x488C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C4Cu;
        // 0x488c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488C54u;
        goto label_488c54;
    }
    ctx->pc = 0x488C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C4Cu;
        // 0x488c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488C54u;
label_488c54:
    // 0x488c54: 0x0  nop
    ctx->pc = 0x488c54u;
    // NOP
    ctx->pc = 0x488c58u;
}
