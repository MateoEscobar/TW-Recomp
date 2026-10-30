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

// Function: sub_004379D8
// Address: 0x4379d8 - 0x437ae0
void sub_004379D8_0x4379d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004379D8_0x4379d8");
#endif

    switch (ctx->pc) {
        case 0x437a28u: goto label_437a28;
        case 0x437a38u: goto label_437a38;
        case 0x437a60u: goto label_437a60;
        case 0x437a98u: goto label_437a98;
        default: break;
    }

    ctx->pc = 0x4379d8u;

    // 0x4379d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4379d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4379dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4379dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4379e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4379e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4379e4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4379e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4379e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4379e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4379ec: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4379ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x4379f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4379f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4379f4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4379f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4379f8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4379f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4379fc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4379fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x437a00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x437a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x437a04: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x437a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x437a08: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x437A08u;
    {
        const bool branch_taken_0x437a08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x437A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437A08u;
        // 0x437a0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437a08) {
            ctx->pc = 0x437A40u;
            goto label_437a40;
        }
    }
    ctx->pc = 0x437A10u;
    // 0x437a10: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x437a10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x437a14: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x437a14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x437a18: 0x2631f400  addiu       $s1, $s1, -0xC00
    ctx->pc = 0x437a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964224));
    // 0x437a1c: 0x8e066d88  lw          $a2, 0x6D88($s0)
    ctx->pc = 0x437a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x516D88u));
    // 0x437a20: 0xc10f59a  jal         func_43D668
    ctx->pc = 0x437A20u;
    SET_GPR_U32(ctx, 31, 0x437A28u);
    ctx->pc = 0x437A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437A20u;
    // 0x437a24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D668u, 0x437A20u, 0x437A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437A28u;
label_437a28:
    // 0x437a28: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x437a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x437a2c: 0xae006d88  sw          $zero, 0x6D88($s0)
    ctx->pc = 0x437a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28040), GPR_U32(ctx, 0));
    // 0x437a30: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x437A30u;
    {
        const bool branch_taken_0x437a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437A30u;
        // 0x437a34: 0xac716d8c  sw          $s1, 0x6D8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28044), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437a30) {
            ctx->pc = 0x437AB8u;
            goto label_437ab8;
        }
    }
    ctx->pc = 0x437A38u;
label_437a38:
    // 0x437a38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x437A38u;
    {
        const bool branch_taken_0x437a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437A38u;
        // 0x437a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437a38) {
            ctx->pc = 0x437AB8u;
            goto label_437ab8;
        }
    }
    ctx->pc = 0x437A40u;
label_437a40:
    // 0x437a40: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x437A40u;
    {
        const bool branch_taken_0x437a40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x437A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437A40u;
        // 0x437a44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437a40) {
            ctx->pc = 0x437AB4u;
            goto label_437ab4;
        }
    }
    ctx->pc = 0x437A48u;
    // 0x437a48: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x437a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x437a4c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x437a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x437a50: 0x2455f400  addiu       $s5, $v0, -0xC00
    ctx->pc = 0x437a50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964224));
    // 0x437a54: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x437a54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x437a58: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x437a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x437a5c: 0x0  nop
    ctx->pc = 0x437a5cu;
    // NOP
label_437a60:
    // 0x437a60: 0x8e246d8c  lw          $a0, 0x6D8C($s1)
    ctx->pc = 0x437a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28044)));
    // 0x437a64: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x437a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x437a68: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x437a68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x437a6c: 0x8e426d88  lw          $v0, 0x6D88($s2)
    ctx->pc = 0x437a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28040)));
    // 0x437a70: 0x8e236d8c  lw          $v1, 0x6D8C($s1)
    ctx->pc = 0x437a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28044)));
    // 0x437a74: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x437a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x437a78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x437a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x437a7c: 0xae466d88  sw          $a2, 0x6D88($s2)
    ctx->pc = 0x437a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28040), GPR_U32(ctx, 6));
    // 0x437a80: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x437a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x437a84: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x437A84u;
    {
        const bool branch_taken_0x437a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437A84u;
        // 0x437a88: 0xae236d8c  sw          $v1, 0x6D8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28044), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437a84) {
            ctx->pc = 0x437AA4u;
            goto label_437aa4;
        }
    }
    ctx->pc = 0x437A8Cu;
    // 0x437a8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x437a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x437a90: 0xc10f59a  jal         func_43D668
    ctx->pc = 0x437A90u;
    SET_GPR_U32(ctx, 31, 0x437A98u);
    ctx->pc = 0x437A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x437A90u;
    // 0x437a94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D668u, 0x437A90u, 0x437A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x437A98u;
label_437a98:
    // 0x437a98: 0xae356d8c  sw          $s5, 0x6D8C($s1)
    ctx->pc = 0x437a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28044), GPR_U32(ctx, 21));
    // 0x437a9c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x437A9Cu;
    {
        const bool branch_taken_0x437a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437A9Cu;
        // 0x437aa0: 0xae406d88  sw          $zero, 0x6D88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28040), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437a9c) {
            ctx->pc = 0x437A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437a38;
        }
    }
    ctx->pc = 0x437AA4u;
label_437aa4:
    // 0x437aa4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x437aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x437aa8: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x437aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x437aac: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x437AACu;
    {
        const bool branch_taken_0x437aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x437AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437AACu;
        // 0x437ab0: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437aac) {
            ctx->pc = 0x437A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_437a60;
        }
    }
    ctx->pc = 0x437AB4u;
label_437ab4:
    // 0x437ab4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x437ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_437ab8:
    // 0x437ab8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x437ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x437abc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x437abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x437ac0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x437ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x437ac4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x437ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x437ac8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x437ac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x437acc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x437accu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x437ad0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x437ad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x437ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x437ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x437ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x437AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x437ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x437AD8u;
        // 0x437adc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x437AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x437AE0u;
}
