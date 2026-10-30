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

// Function: sub_001859A0
// Address: 0x1859a0 - 0x185ab0
void sub_001859A0_0x1859a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001859A0_0x1859a0");
#endif

    switch (ctx->pc) {
        case 0x1859d8u: goto label_1859d8;
        case 0x1859ecu: goto label_1859ec;
        case 0x185a20u: goto label_185a20;
        case 0x185a58u: goto label_185a58;
        default: break;
    }

    ctx->pc = 0x1859a0u;

    // 0x1859a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1859a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1859a4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1859a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1859a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1859a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1859ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1859acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1859b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1859b4: 0x26030c64  addiu       $v1, $s0, 0xC64
    ctx->pc = 0x1859b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3172));
    // 0x1859b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1859b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1859bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1859c0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1859c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1859c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1859c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1859c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1859c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1859cc: 0x10820032  beq         $a0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1859CCu;
    {
        const bool branch_taken_0x1859cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1859D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859CCu;
        // 0x1859d0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859cc) {
            ctx->pc = 0x185A98u;
            goto label_185a98;
        }
    }
    ctx->pc = 0x1859D4u;
    // 0x1859d4: 0x0  nop
    ctx->pc = 0x1859d4u;
    // NOP
label_1859d8:
    // 0x1859d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1859d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1859dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1859dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1859e0: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1859e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1859e4: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x1859E4u;
    SET_GPR_U32(ctx, 31, 0x1859ECu);
    ctx->pc = 0x1859E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1859E4u;
    // 0x1859e8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1859E4u, 0x1859ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1859ECu;
label_1859ec:
    // 0x1859ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1859ECu;
    {
        const bool branch_taken_0x1859ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1859F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859ECu;
        // 0x1859f0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859ec) {
            ctx->pc = 0x1859FCu;
            goto label_1859fc;
        }
    }
    ctx->pc = 0x1859F4u;
    // 0x1859f4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1859F4u;
    {
        const bool branch_taken_0x1859f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1859F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1859F4u;
        // 0x1859f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1859f4) {
            ctx->pc = 0x185A9Cu;
            goto label_185a9c;
        }
    }
    ctx->pc = 0x1859FCu;
label_1859fc:
    // 0x1859fc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1859fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x185a00: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x185a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x185a04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x185A04u;
    {
        const bool branch_taken_0x185a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A04u;
        // 0x185a08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a04) {
            ctx->pc = 0x185A40u;
            goto label_185a40;
        }
    }
    ctx->pc = 0x185A0Cu;
    // 0x185a0c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x185a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x185a10: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x185a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x185a14: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x185A14u;
    {
        const bool branch_taken_0x185a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A14u;
        // 0x185a18: 0x26060c64  addiu       $a2, $s0, 0xC64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a14) {
            ctx->pc = 0x185A80u;
            goto label_185a80;
        }
    }
    ctx->pc = 0x185A1Cu;
    // 0x185a1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x185a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_185a20:
    // 0x185a20: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x185a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x185a24: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x185a24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x185a28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x185a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x185a2c: 0x0  nop
    ctx->pc = 0x185a2cu;
    // NOP
    // 0x185a30: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x185A30u;
    {
        const bool branch_taken_0x185a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x185a30) {
            ctx->pc = 0x185A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185A30u;
            // 0x185a34: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185a20;
        }
    }
    ctx->pc = 0x185A38u;
    // 0x185a38: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x185A38u;
    {
        const bool branch_taken_0x185a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A38u;
        // 0x185a3c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a38) {
            ctx->pc = 0x185A84u;
            goto label_185a84;
        }
    }
    ctx->pc = 0x185A40u;
label_185a40:
    // 0x185a40: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x185a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x185a44: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x185a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x185a48: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x185A48u;
    {
        const bool branch_taken_0x185a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x185A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A48u;
        // 0x185a4c: 0x26060c64  addiu       $a2, $s0, 0xC64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a48) {
            ctx->pc = 0x185A70u;
            goto label_185a70;
        }
    }
    ctx->pc = 0x185A50u;
    // 0x185a50: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x185a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x185a54: 0x0  nop
    ctx->pc = 0x185a54u;
    // NOP
label_185a58:
    // 0x185a58: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x185a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x185a5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x185a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185a60: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x185a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x185a64: 0x0  nop
    ctx->pc = 0x185a64u;
    // NOP
    // 0x185a68: 0x5062fffb  beql        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x185A68u;
    {
        const bool branch_taken_0x185a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x185a68) {
            ctx->pc = 0x185A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185A68u;
            // 0x185a6c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185a58;
        }
    }
    ctx->pc = 0x185A70u;
label_185a70:
    // 0x185a70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x185a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185a74: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x185a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x185a78: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x185A78u;
    {
        const bool branch_taken_0x185a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x185a78) {
            ctx->pc = 0x185A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185A78u;
            // 0x185a7c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185A80u;
            goto label_185a80;
        }
    }
    ctx->pc = 0x185A80u;
label_185a80:
    // 0x185a80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x185a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_185a84:
    // 0x185a84: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x185a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185a88: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x185a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x185a8c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x185a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x185a90: 0x1483ffd1  bne         $a0, $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x185A90u;
    {
        const bool branch_taken_0x185a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x185A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185A90u;
        // 0x185a94: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185a90) {
            ctx->pc = 0x1859D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1859d8;
        }
    }
    ctx->pc = 0x185A98u;
label_185a98:
    // 0x185a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185a9c:
    // 0x185a9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x185a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x185aa0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x185aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185aa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x185aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x185AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185AA8u;
        // 0x185aac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185AB0u;
}
