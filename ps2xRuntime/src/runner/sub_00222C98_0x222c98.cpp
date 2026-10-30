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

// Function: sub_00222C98
// Address: 0x222c98 - 0x222e40
void sub_00222C98_0x222c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222C98_0x222c98");
#endif

    switch (ctx->pc) {
        case 0x222cacu: goto label_222cac;
        default: break;
    }

    ctx->pc = 0x222c98u;

    // 0x222c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222c9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x222c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222ca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222ca4: 0xc088ade  jal         func_222B78
    ctx->pc = 0x222CA4u;
    SET_GPR_U32(ctx, 31, 0x222CACu);
    ctx->pc = 0x222CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CA4u;
    // 0x222ca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x222CA4u, 0x222CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CACu;
label_222cac:
    // 0x222cac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x222cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222cb4: 0x90a2003a  lbu         $v0, 0x3A($a1)
    ctx->pc = 0x222cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x222cb8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x222CB8u;
    {
        const bool branch_taken_0x222cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x222CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CB8u;
        // 0x222cbc: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cb8) {
            ctx->pc = 0x222CCCu;
            goto label_222ccc;
        }
    }
    ctx->pc = 0x222CC0u;
    // 0x222cc0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x222cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x222cc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x222CC4u;
    {
        const bool branch_taken_0x222cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CC4u;
        // 0x222cc8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cc4) {
            ctx->pc = 0x222CD4u;
            goto label_222cd4;
        }
    }
    ctx->pc = 0x222CCCu;
label_222ccc:
    // 0x222ccc: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x222cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x222cd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x222cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_222cd4:
    // 0x222cd4: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x222cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x222cd8: 0x90a3003b  lbu         $v1, 0x3B($a1)
    ctx->pc = 0x222cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 59)));
    // 0x222cdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222ce0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222CE0u;
    {
        const bool branch_taken_0x222ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CE0u;
        // 0x222ce4: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ce0) {
            ctx->pc = 0x222CF8u;
            goto label_222cf8;
        }
    }
    ctx->pc = 0x222CE8u;
    // 0x222ce8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x222ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x222cec: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x222cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x222cf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x222CF0u;
    {
        const bool branch_taken_0x222cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CF0u;
        // 0x222cf4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cf0) {
            ctx->pc = 0x222D0Cu;
            goto label_222d0c;
        }
    }
    ctx->pc = 0x222CF8u;
label_222cf8:
    // 0x222cf8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x222cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x222cfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x222cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x222d00: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x222d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x222d04: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x222d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x222d08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x222d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_222d0c:
    // 0x222d0c: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x222d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x222d10: 0x90a3003c  lbu         $v1, 0x3C($a1)
    ctx->pc = 0x222d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x222d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222d18: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222D18u;
    {
        const bool branch_taken_0x222d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D18u;
        // 0x222d1c: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d18) {
            ctx->pc = 0x222D30u;
            goto label_222d30;
        }
    }
    ctx->pc = 0x222D20u;
    // 0x222d20: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x222d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x222d24: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x222d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x222d28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x222D28u;
    {
        const bool branch_taken_0x222d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D28u;
        // 0x222d2c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d28) {
            ctx->pc = 0x222D44u;
            goto label_222d44;
        }
    }
    ctx->pc = 0x222D30u;
label_222d30:
    // 0x222d30: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x222d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x222d34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x222d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x222d38: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x222d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x222d3c: 0x3463007f  ori         $v1, $v1, 0x7F
    ctx->pc = 0x222d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)127);
    // 0x222d40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x222d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_222d44:
    // 0x222d44: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x222d44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x222d48: 0x90a3003d  lbu         $v1, 0x3D($a1)
    ctx->pc = 0x222d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
    // 0x222d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222d50: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222D50u;
    {
        const bool branch_taken_0x222d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D50u;
        // 0x222d54: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d50) {
            ctx->pc = 0x222D68u;
            goto label_222d68;
        }
    }
    ctx->pc = 0x222D58u;
    // 0x222d58: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x222d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x222d5c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x222d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x222d60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x222D60u;
    {
        const bool branch_taken_0x222d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D60u;
        // 0x222d64: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d60) {
            ctx->pc = 0x222D7Cu;
            goto label_222d7c;
        }
    }
    ctx->pc = 0x222D68u;
label_222d68:
    // 0x222d68: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x222d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x222d6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x222d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x222d70: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x222d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x222d74: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x222d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x222d78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x222d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_222d7c:
    // 0x222d7c: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x222d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x222d80: 0x80a3003e  lb          $v1, 0x3E($a1)
    ctx->pc = 0x222d80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 62)));
    // 0x222d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222d88: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x222D88u;
    {
        const bool branch_taken_0x222d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222d88) {
            ctx->pc = 0x222D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222D88u;
            // 0x222d8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222DA8u;
            goto label_222da8;
        }
    }
    ctx->pc = 0x222D90u;
    // 0x222d90: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x222d90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x222d94: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x222d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x222d98: 0x3c04ffbf  lui         $a0, 0xFFBF
    ctx->pc = 0x222d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65471 << 16));
    // 0x222d9c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x222d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x222da0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x222DA0u;
    {
        const bool branch_taken_0x222da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DA0u;
        // 0x222da4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222da0) {
            ctx->pc = 0x222DD8u;
            goto label_222dd8;
        }
    }
    ctx->pc = 0x222DA8u;
label_222da8:
    // 0x222da8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222DA8u;
    {
        const bool branch_taken_0x222da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DA8u;
        // 0x222dac: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222da8) {
            ctx->pc = 0x222DC4u;
            goto label_222dc4;
        }
    }
    ctx->pc = 0x222DB0u;
    // 0x222db0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x222db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x222db4: 0x3c04ffdf  lui         $a0, 0xFFDF
    ctx->pc = 0x222db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65503 << 16));
    // 0x222db8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x222db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x222dbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x222DBCu;
    {
        const bool branch_taken_0x222dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DBCu;
        // 0x222dc0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222dbc) {
            ctx->pc = 0x222DD8u;
            goto label_222dd8;
        }
    }
    ctx->pc = 0x222DC4u;
label_222dc4:
    // 0x222dc4: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x222dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x222dc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x222dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x222dcc: 0x3c04ffbf  lui         $a0, 0xFFBF
    ctx->pc = 0x222dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65471 << 16));
    // 0x222dd0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x222dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x222dd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x222dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_222dd8:
    // 0x222dd8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x222dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x222ddc: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x222ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x222de0: 0x80a3003f  lb          $v1, 0x3F($a1)
    ctx->pc = 0x222de0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 63)));
    // 0x222de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222de8: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222DE8u;
    {
        const bool branch_taken_0x222de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222de8) {
            ctx->pc = 0x222DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222DE8u;
            // 0x222dec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222E04u;
            goto label_222e04;
        }
    }
    ctx->pc = 0x222DF0u;
    // 0x222df0: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x222df0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x222df4: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x222df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x222df8: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x222df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x222dfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x222DFCu;
    {
        const bool branch_taken_0x222dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DFCu;
        // 0x222e00: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222dfc) {
            ctx->pc = 0x222E28u;
            goto label_222e28;
        }
    }
    ctx->pc = 0x222E04u;
label_222e04:
    // 0x222e04: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222E04u;
    {
        const bool branch_taken_0x222e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E04u;
        // 0x222e08: 0xde0200e0  ld          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e04) {
            ctx->pc = 0x222E1Cu;
            goto label_222e1c;
        }
    }
    ctx->pc = 0x222E0Cu;
    // 0x222e0c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x222e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x222e10: 0x2404fbff  addiu       $a0, $zero, -0x401
    ctx->pc = 0x222e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x222e14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x222E14u;
    {
        const bool branch_taken_0x222e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E14u;
        // 0x222e18: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e14) {
            ctx->pc = 0x222E28u;
            goto label_222e28;
        }
    }
    ctx->pc = 0x222E1Cu;
label_222e1c:
    // 0x222e1c: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x222e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x222e20: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x222e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x222e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x222e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_222e28:
    // 0x222e28: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x222e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x222e2c: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x222e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x222e30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x222e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222e38: 0x3e00008  jr          $ra
    ctx->pc = 0x222E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E38u;
        // 0x222e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222E40u;
}
