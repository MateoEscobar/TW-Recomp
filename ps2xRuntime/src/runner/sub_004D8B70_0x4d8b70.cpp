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

// Function: sub_004D8B70
// Address: 0x4d8b70 - 0x4d90f0
void sub_004D8B70_0x4d8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8B70_0x4d8b70");
#endif

    switch (ctx->pc) {
        case 0x4d8bb4u: goto label_4d8bb4;
        case 0x4d8bc8u: goto label_4d8bc8;
        case 0x4d8c98u: goto label_4d8c98;
        case 0x4d8de0u: goto label_4d8de0;
        case 0x4d8f20u: goto label_4d8f20;
        case 0x4d8f34u: goto label_4d8f34;
        case 0x4d8f48u: goto label_4d8f48;
        case 0x4d9028u: goto label_4d9028;
        case 0x4d9034u: goto label_4d9034;
        case 0x4d9040u: goto label_4d9040;
        case 0x4d908cu: goto label_4d908c;
        case 0x4d90b8u: goto label_4d90b8;
        default: break;
    }

    ctx->pc = 0x4d8b70u;

    // 0x4d8b70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4d8b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4d8b74: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4d8b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4d8b78: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4d8b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4d8b7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d8b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8b80: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x4d8b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x4d8b84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4d8b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8b88: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4d8b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4d8b8c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4d8b8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8b90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4d8b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4d8b94: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4d8b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4d8b98: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4d8b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4d8b9c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4d8b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4d8ba0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4d8ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4d8ba4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8BA4u;
    {
        const bool branch_taken_0x4d8ba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8BA4u;
        // 0x4d8ba8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8ba4) {
            ctx->pc = 0x4D8BBCu;
            goto label_4d8bbc;
        }
    }
    ctx->pc = 0x4D8BACu;
    // 0x4d8bac: 0xc10e314  jal         func_438C50
    ctx->pc = 0x4D8BACu;
    SET_GPR_U32(ctx, 31, 0x4D8BB4u);
    ctx->pc = 0x4D8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8BACu;
    // 0x4d8bb0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x438C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x438C50u, 0x4D8BACu, 0x4D8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8BB4u;
label_4d8bb4:
    // 0x4d8bb4: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x4D8BB4u;
    {
        const bool branch_taken_0x4d8bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8BB4u;
        // 0x4d8bb8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8bb4) {
            ctx->pc = 0x4D90C0u;
            goto label_4d90c0;
        }
    }
    ctx->pc = 0x4D8BBCu;
label_4d8bbc:
    // 0x4d8bbc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d8bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8bc0: 0xc10cfce  jal         func_433F38
    ctx->pc = 0x4D8BC0u;
    SET_GPR_U32(ctx, 31, 0x4D8BC8u);
    ctx->pc = 0x4D8BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8BC0u;
    // 0x4d8bc4: 0x2611fff8  addiu       $s1, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F38u, 0x4D8BC0u, 0x4D8BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8BC8u;
label_4d8bc8:
    // 0x4d8bc8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x4d8bc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8bcc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4d8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4d8bd0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d8bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8bd4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x4d8bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x4d8bd8: 0x26450013  addiu       $a1, $s2, 0x13
    ctx->pc = 0x4d8bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x4d8bdc: 0x43b824  and         $s7, $v0, $v1
    ctx->pc = 0x4d8bdcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d8be0: 0x2ca4001f  sltiu       $a0, $a1, 0x1F
    ctx->pc = 0x4d8be0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x4d8be4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8BE4u;
    {
        const bool branch_taken_0x4d8be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8BE4u;
        // 0x4d8be8: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8be4) {
            ctx->pc = 0x4D8BFCu;
            goto label_4d8bfc;
        }
    }
    ctx->pc = 0x4D8BECu;
    // 0x4d8bec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d8becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8bf0: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x4d8bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x4d8bf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D8BF4u;
    {
        const bool branch_taken_0x4d8bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8BF4u;
        // 0x4d8bf8: 0xa2b024  and         $s6, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8bf4) {
            ctx->pc = 0x4D8C00u;
            goto label_4d8c00;
        }
    }
    ctx->pc = 0x4D8BFCu;
label_4d8bfc:
    // 0x4d8bfc: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x4d8bfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4d8c00:
    // 0x4d8c00: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x4d8c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x4d8c04: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x4D8C04u;
    {
        const bool branch_taken_0x4d8c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8C04u;
        // 0x4d8c08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8c04) {
            ctx->pc = 0x4D9048u;
            goto label_4d9048;
        }
    }
    ctx->pc = 0x4D8C0Cu;
    // 0x4d8c0c: 0x2b33021  addu        $a2, $s5, $s3
    ctx->pc = 0x4d8c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x4d8c10: 0x24456d90  addiu       $a1, $v0, 0x6D90
    ctx->pc = 0x4d8c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28048));
    // 0x4d8c14: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x4d8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4d8c18: 0x50c4000b  beql        $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4D8C18u;
    {
        const bool branch_taken_0x4d8c18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x4d8c18) {
            ctx->pc = 0x4D8C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8C18u;
            // 0x4d8c1c: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8C48u;
            goto label_4d8c48;
        }
    }
    ctx->pc = 0x4D8C20u;
    // 0x4d8c20: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4d8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4d8c24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8c28: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x4d8c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x4d8c2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d8c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d8c30: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4d8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4d8c34: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4d8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4d8c38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4d8c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d8c3c: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x4D8C3Cu;
    {
        const bool branch_taken_0x4d8c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8c3c) {
            ctx->pc = 0x4D8C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8C3Cu;
            // 0x4d8c40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8CC8u;
            goto label_4d8cc8;
        }
    }
    ctx->pc = 0x4D8C44u;
    // 0x4d8c44: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4d8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4d8c48:
    // 0x4d8c48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8c4c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x4d8c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x4d8c50: 0x14c40013  bne         $a2, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4D8C50u;
    {
        const bool branch_taken_0x4d8c50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x4D8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8C50u;
        // 0x4d8c54: 0x623824  and         $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8c50) {
            ctx->pc = 0x4D8CA0u;
            goto label_4d8ca0;
        }
    }
    ctx->pc = 0x4D8C58u;
    // 0x4d8c58: 0xf31821  addu        $v1, $a3, $s3
    ctx->pc = 0x4d8c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x4d8c5c: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x4d8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x4d8c60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4d8c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4d8c64: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x4D8C64u;
    {
        const bool branch_taken_0x4d8c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8c64) {
            ctx->pc = 0x4D8C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8C64u;
            // 0x4d8c68: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8CD0u;
            goto label_4d8cd0;
        }
    }
    ctx->pc = 0x4D8C6Cu;
    // 0x4d8c6c: 0x761023  subu        $v0, $v1, $s6
    ctx->pc = 0x4d8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x4d8c70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d8c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8c74: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x4d8c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x4d8c78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4d8c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4d8c7c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x4d8c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x4d8c80: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4d8c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x4d8c84: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4d8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x4d8c88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d8c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d8c8c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4d8c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4d8c90: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x4D8C90u;
    SET_GPR_U32(ctx, 31, 0x4D8C98u);
    ctx->pc = 0x4D8C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8C90u;
    // 0x4d8c94: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x4D8C90u, 0x4D8C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8C98u;
label_4d8c98:
    // 0x4d8c98: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x4D8C98u;
    {
        const bool branch_taken_0x4d8c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8C98u;
        // 0x4d8c9c: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8c98) {
            ctx->pc = 0x4D90BCu;
            goto label_4d90bc;
        }
    }
    ctx->pc = 0x4D8CA0u;
label_4d8ca0:
    // 0x4d8ca0: 0xf31821  addu        $v1, $a3, $s3
    ctx->pc = 0x4d8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x4d8ca4: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x4d8ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x4d8ca8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D8CA8u;
    {
        const bool branch_taken_0x4d8ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8ca8) {
            ctx->pc = 0x4D8CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8CA8u;
            // 0x4d8cac: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8CD0u;
            goto label_4d8cd0;
        }
    }
    ctx->pc = 0x4D8CB0u;
    // 0x4d8cb0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x4d8cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4d8cb4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x4d8cb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8cb8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4d8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4d8cbc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x4d8cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x4d8cc0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x4D8CC0u;
    {
        const bool branch_taken_0x4d8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8CC0u;
        // 0x4d8cc4: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8cc0) {
            ctx->pc = 0x4D9048u;
            goto label_4d9048;
        }
    }
    ctx->pc = 0x4D8CC8u;
label_4d8cc8:
    // 0x4d8cc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4d8cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8ccc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4d8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4d8cd0:
    // 0x4d8cd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d8cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d8cd4: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x4D8CD4u;
    {
        const bool branch_taken_0x4d8cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8CD4u;
        // 0x4d8cd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8cd4) {
            ctx->pc = 0x4D8F2Cu;
            goto label_4d8f2c;
        }
    }
    ctx->pc = 0x4D8CDCu;
    // 0x4d8cdc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4d8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d8ce0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8ce4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x4d8ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x4d8ce8: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x4d8ce8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4d8cec: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4d8cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4d8cf0: 0x10c00055  beqz        $a2, . + 4 + (0x55 << 2)
    ctx->pc = 0x4D8CF0u;
    {
        const bool branch_taken_0x4d8cf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8CF0u;
        // 0x4d8cf4: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8cf0) {
            ctx->pc = 0x4D8E48u;
            goto label_4d8e48;
        }
    }
    ctx->pc = 0x4D8CF8u;
    // 0x4d8cf8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4d8cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4d8cfc: 0x24626d90  addiu       $v0, $v1, 0x6D90
    ctx->pc = 0x4d8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28048));
    // 0x4d8d00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4d8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x516D98u));
    // 0x4d8d04: 0x14c30043  bne         $a2, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x4D8D04u;
    {
        const bool branch_taken_0x4d8d04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x4D8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8D04u;
        // 0x4d8d08: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8d04) {
            ctx->pc = 0x4D8E14u;
            goto label_4d8e14;
        }
    }
    ctx->pc = 0x4D8D0Cu;
    // 0x4d8d0c: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x4d8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4d8d10: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x4d8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x4d8d14: 0x73b821  addu        $s7, $v1, $s3
    ctx->pc = 0x4d8d14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4d8d18: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x4d8d18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4d8d1c: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x4D8D1Cu;
    {
        const bool branch_taken_0x4d8d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8D1Cu;
        // 0x4d8d20: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8d1c) {
            ctx->pc = 0x4D8E48u;
            goto label_4d8e48;
        }
    }
    ctx->pc = 0x4D8D24u;
    // 0x4d8d24: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x4d8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4d8d28: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x4d8d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4d8d2c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x4d8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x4d8d30: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x4d8d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x4d8d34: 0x2666fffc  addiu       $a2, $s3, -0x4
    ctx->pc = 0x4d8d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x4d8d38: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x4d8d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x4d8d3c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4D8D3Cu;
    {
        const bool branch_taken_0x4d8d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8D3Cu;
        // 0x4d8d40: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8d3c) {
            ctx->pc = 0x4D8DD4u;
            goto label_4d8dd4;
        }
    }
    ctx->pc = 0x4D8D44u;
    // 0x4d8d44: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4d8d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8d48: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x4d8d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x4d8d4c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4D8D4Cu;
    {
        const bool branch_taken_0x4d8d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8D4Cu;
        // 0x4d8d50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8d4c) {
            ctx->pc = 0x4D8DB0u;
            goto label_4d8db0;
        }
    }
    ctx->pc = 0x4D8D54u;
    // 0x4d8d54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4d8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d8d58: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x4d8d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4d8d5c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4d8d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d8d60: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x4d8d60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x4d8d64: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4d8d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x4d8d68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4d8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4d8d6c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D8D6Cu;
    {
        const bool branch_taken_0x4d8d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8D6Cu;
        // 0x4d8d70: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8d6c) {
            ctx->pc = 0x4D8DB0u;
            goto label_4d8db0;
        }
    }
    ctx->pc = 0x4D8D74u;
    // 0x4d8d74: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4d8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4d8d78: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x4d8d78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x4d8d7c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4d8d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4d8d80: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x4d8d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4d8d84: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4d8d84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x4d8d88: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4d8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4d8d8c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D8D8Cu;
    {
        const bool branch_taken_0x4d8d8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8D8Cu;
        // 0x4d8d90: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8d8c) {
            ctx->pc = 0x4D8DB0u;
            goto label_4d8db0;
        }
    }
    ctx->pc = 0x4D8D94u;
    // 0x4d8d94: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4d8d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4d8d98: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x4d8d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4d8d9c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x4d8d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4d8da0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x4d8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x4d8da4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4d8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4d8da8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x4d8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x4d8dac: 0x0  nop
    ctx->pc = 0x4d8dacu;
    // NOP
label_4d8db0:
    // 0x4d8db0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8db4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4d8db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4d8db8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d8dbc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4d8dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d8dc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8dc4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d8dc8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4d8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4d8dcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8DCCu;
    {
        const bool branch_taken_0x4d8dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8DCCu;
        // 0x4d8dd0: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8dcc) {
            ctx->pc = 0x4D8DE0u;
            goto label_4d8de0;
        }
    }
    ctx->pc = 0x4D8DD4u;
label_4d8dd4:
    // 0x4d8dd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d8dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8dd8: 0xc10c190  jal         func_430640
    ctx->pc = 0x4D8DD8u;
    SET_GPR_U32(ctx, 31, 0x4D8DE0u);
    ctx->pc = 0x4D8DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8DD8u;
    // 0x4d8ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4D8DD8u, 0x4D8DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8DE0u;
label_4d8de0:
    // 0x4d8de0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4d8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x4d8de4: 0x2962821  addu        $a1, $s4, $s6
    ctx->pc = 0x4d8de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x4d8de8: 0x24626d90  addiu       $v0, $v1, 0x6D90
    ctx->pc = 0x4d8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28048));
    // 0x4d8dec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d8decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8df0: 0x2f61823  subu        $v1, $s7, $s6
    ctx->pc = 0x4d8df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x4d8df4: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x4d8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x4d8df8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4d8df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4d8dfc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x4d8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x4d8e00: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4d8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4d8e04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d8e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d8e08: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4d8e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4d8e0c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x4D8E0Cu;
    {
        const bool branch_taken_0x4d8e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8E0Cu;
        // 0x4d8e10: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e0c) {
            ctx->pc = 0x4D9038u;
            goto label_4d9038;
        }
    }
    ctx->pc = 0x4D8E14u;
label_4d8e14:
    // 0x4d8e14: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x4d8e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4d8e18: 0xf6182b  sltu        $v1, $a3, $s6
    ctx->pc = 0x4d8e18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x4d8e1c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4D8E1Cu;
    {
        const bool branch_taken_0x4d8e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8E1Cu;
        // 0x4d8e20: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e1c) {
            ctx->pc = 0x4D8E48u;
            goto label_4d8e48;
        }
    }
    ctx->pc = 0x4D8E24u;
    // 0x4d8e24: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x4d8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4d8e28: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4d8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x4d8e2c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4d8e2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8e30: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x4d8e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x4d8e34: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x4d8e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x4d8e38: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x4d8e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x4d8e3c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x4d8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4d8e40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4D8E40u;
    {
        const bool branch_taken_0x4d8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8E40u;
        // 0x4d8e44: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e40) {
            ctx->pc = 0x4D8E70u;
            goto label_4d8e70;
        }
    }
    ctx->pc = 0x4D8E48u;
label_4d8e48:
    // 0x4d8e48: 0x12800037  beqz        $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x4D8E48u;
    {
        const bool branch_taken_0x4d8e48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8E48u;
        // 0x4d8e4c: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e48) {
            ctx->pc = 0x4D8F28u;
            goto label_4d8f28;
        }
    }
    ctx->pc = 0x4D8E50u;
    // 0x4d8e50: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x4d8e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x4d8e54: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4D8E54u;
    {
        const bool branch_taken_0x4d8e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8E54u;
        // 0x4d8e58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e54) {
            ctx->pc = 0x4D8F2Cu;
            goto label_4d8f2c;
        }
    }
    ctx->pc = 0x4D8E5Cu;
    // 0x4d8e5c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x4d8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x4d8e60: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x4d8e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8e64: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x4d8e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4d8e68: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x4d8e68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8e6c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x4d8e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_4d8e70:
    // 0x4d8e70: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x4d8e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x4d8e74: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x4d8e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x4d8e78: 0x2666fffc  addiu       $a2, $s3, -0x4
    ctx->pc = 0x4d8e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x4d8e7c: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x4d8e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x4d8e80: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4D8E80u;
    {
        const bool branch_taken_0x4d8e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8E80u;
        // 0x4d8e84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e80) {
            ctx->pc = 0x4D8F14u;
            goto label_4d8f14;
        }
    }
    ctx->pc = 0x4D8E88u;
    // 0x4d8e88: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x4d8e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x4d8e8c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4D8E8Cu;
    {
        const bool branch_taken_0x4d8e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8E8Cu;
        // 0x4d8e90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8e8c) {
            ctx->pc = 0x4D8EF0u;
            goto label_4d8ef0;
        }
    }
    ctx->pc = 0x4D8E94u;
    // 0x4d8e94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4d8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d8e98: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x4d8e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4d8e9c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4d8e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4d8ea0: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x4d8ea0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x4d8ea4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4d8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x4d8ea8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4d8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4d8eac: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D8EACu;
    {
        const bool branch_taken_0x4d8eac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8EACu;
        // 0x4d8eb0: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8eac) {
            ctx->pc = 0x4D8EF0u;
            goto label_4d8ef0;
        }
    }
    ctx->pc = 0x4D8EB4u;
    // 0x4d8eb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4d8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4d8eb8: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x4d8eb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x4d8ebc: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4d8ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4d8ec0: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x4d8ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4d8ec4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x4d8ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x4d8ec8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4d8ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4d8ecc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D8ECCu;
    {
        const bool branch_taken_0x4d8ecc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8ECCu;
        // 0x4d8ed0: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8ecc) {
            ctx->pc = 0x4D8EF0u;
            goto label_4d8ef0;
        }
    }
    ctx->pc = 0x4D8ED4u;
    // 0x4d8ed4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4d8ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4d8ed8: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x4d8ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4d8edc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x4d8edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x4d8ee0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x4d8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x4d8ee4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4d8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4d8ee8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x4d8ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x4d8eec: 0x0  nop
    ctx->pc = 0x4d8eecu;
    // NOP
label_4d8ef0:
    // 0x4d8ef0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8ef4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4d8ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4d8ef8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d8ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d8efc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4d8efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d8f00: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8f04: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d8f04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d8f08: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4d8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4d8f0c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x4D8F0Cu;
    {
        const bool branch_taken_0x4d8f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8F0Cu;
        // 0x4d8f10: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f0c) {
            ctx->pc = 0x4D9048u;
            goto label_4d9048;
        }
    }
    ctx->pc = 0x4D8F14u;
label_4d8f14:
    // 0x4d8f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d8f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8f18: 0xc10c190  jal         func_430640
    ctx->pc = 0x4D8F18u;
    SET_GPR_U32(ctx, 31, 0x4D8F20u);
    ctx->pc = 0x4D8F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8F18u;
    // 0x4d8f1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4D8F18u, 0x4D8F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8F20u;
label_4d8f20:
    // 0x4d8f20: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x4D8F20u;
    {
        const bool branch_taken_0x4d8f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8F20u;
        // 0x4d8f24: 0x2f62023  subu        $a0, $s7, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f20) {
            ctx->pc = 0x4D904Cu;
            goto label_4d904c;
        }
    }
    ctx->pc = 0x4D8F28u;
label_4d8f28:
    // 0x4d8f28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d8f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d8f2c:
    // 0x4d8f2c: 0xc10e314  jal         func_438C50
    ctx->pc = 0x4D8F2Cu;
    SET_GPR_U32(ctx, 31, 0x4D8F34u);
    ctx->pc = 0x4D8F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8F2Cu;
    // 0x4d8f30: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x438C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x438C50u, 0x4D8F2Cu, 0x4D8F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8F34u;
label_4d8f34:
    // 0x4d8f34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4d8f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8f38: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D8F38u;
    {
        const bool branch_taken_0x4d8f38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8f38) {
            ctx->pc = 0x4D8F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8F38u;
            // 0x4d8f3c: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8F50u;
            goto label_4d8f50;
        }
    }
    ctx->pc = 0x4D8F40u;
    // 0x4d8f40: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x4D8F40u;
    SET_GPR_U32(ctx, 31, 0x4D8F48u);
    ctx->pc = 0x4D8F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8F40u;
    // 0x4d8f44: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x4D8F40u, 0x4D8F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8F48u;
label_4d8f48:
    // 0x4d8f48: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x4D8F48u;
    {
        const bool branch_taken_0x4d8f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8F48u;
        // 0x4d8f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f48) {
            ctx->pc = 0x4D90BCu;
            goto label_4d90bc;
        }
    }
    ctx->pc = 0x4D8F50u;
label_4d8f50:
    // 0x4d8f50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8f54: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4d8f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4d8f58: 0x2651fff8  addiu       $s1, $s2, -0x8
    ctx->pc = 0x4d8f58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x4d8f5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8f60: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x4d8f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x4d8f64: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D8F64u;
    {
        const bool branch_taken_0x4d8f64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x4D8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8F64u;
        // 0x4d8f68: 0x2666fffc  addiu       $a2, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f64) {
            ctx->pc = 0x4D8F88u;
            goto label_4d8f88;
        }
    }
    ctx->pc = 0x4D8F6Cu;
    // 0x4d8f6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4d8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4d8f70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d8f74: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x4d8f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x4d8f78: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x4d8f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8f7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d8f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d8f80: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4D8F80u;
    {
        const bool branch_taken_0x4d8f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8F80u;
        // 0x4d8f84: 0x263b821  addu        $s7, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f80) {
            ctx->pc = 0x4D9048u;
            goto label_4d9048;
        }
    }
    ctx->pc = 0x4D8F88u;
label_4d8f88:
    // 0x4d8f88: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x4d8f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x4d8f8c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4D8F8Cu;
    {
        const bool branch_taken_0x4d8f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8F8Cu;
        // 0x4d8f90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f8c) {
            ctx->pc = 0x4D901Cu;
            goto label_4d901c;
        }
    }
    ctx->pc = 0x4D8F94u;
    // 0x4d8f94: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x4d8f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x4d8f98: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4D8F98u;
    {
        const bool branch_taken_0x4d8f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8F98u;
        // 0x4d8f9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8f98) {
            ctx->pc = 0x4D8FF8u;
            goto label_4d8ff8;
        }
    }
    ctx->pc = 0x4D8FA0u;
    // 0x4d8fa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4d8fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4d8fa4: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x4d8fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4d8fa8: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x4d8fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4d8fac: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x4d8facu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x4d8fb0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4d8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4d8fb4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4d8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4d8fb8: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D8FB8u;
    {
        const bool branch_taken_0x4d8fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8FB8u;
        // 0x4d8fbc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8fb8) {
            ctx->pc = 0x4D8FF8u;
            goto label_4d8ff8;
        }
    }
    ctx->pc = 0x4D8FC0u;
    // 0x4d8fc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4d8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4d8fc4: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x4d8fc4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x4d8fc8: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4d8fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4d8fcc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x4d8fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4d8fd0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x4d8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x4d8fd4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4d8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4d8fd8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D8FD8u;
    {
        const bool branch_taken_0x4d8fd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8FD8u;
        // 0x4d8fdc: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8fd8) {
            ctx->pc = 0x4D8FF8u;
            goto label_4d8ff8;
        }
    }
    ctx->pc = 0x4D8FE0u;
    // 0x4d8fe0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4d8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4d8fe4: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x4d8fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4d8fe8: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x4d8fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x4d8fec: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x4d8fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x4d8ff0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4d8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4d8ff4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x4d8ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_4d8ff8:
    // 0x4d8ff8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d8ffc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4d8ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4d9000: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d9000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d9004: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4d9004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d9008: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4d9008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d900c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d900cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d9010: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4d9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4d9014: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4D9014u;
    {
        const bool branch_taken_0x4d9014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9014u;
        // 0x4d9018: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9014) {
            ctx->pc = 0x4D9028u;
            goto label_4d9028;
        }
    }
    ctx->pc = 0x4D901Cu;
label_4d901c:
    // 0x4d901c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9020: 0xc10c190  jal         func_430640
    ctx->pc = 0x4D9020u;
    SET_GPR_U32(ctx, 31, 0x4D9028u);
    ctx->pc = 0x4D9024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9020u;
    // 0x4d9024: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4D9020u, 0x4D9028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9028u;
label_4d9028:
    // 0x4d9028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d9028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d902c: 0xc10e4e0  jal         func_439380
    ctx->pc = 0x4D902Cu;
    SET_GPR_U32(ctx, 31, 0x4D9034u);
    ctx->pc = 0x4D9030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D902Cu;
    // 0x4d9030: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439380u, 0x4D902Cu, 0x4D9034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9034u;
label_4d9034:
    // 0x4d9034: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d9034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4d9038:
    // 0x4d9038: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x4D9038u;
    SET_GPR_U32(ctx, 31, 0x4D9040u);
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x4D9038u, 0x4D9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D9040u;
label_4d9040:
    // 0x4d9040: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x4D9040u;
    {
        const bool branch_taken_0x4d9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9040u;
        // 0x4d9044: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9040) {
            ctx->pc = 0x4D90BCu;
            goto label_4d90bc;
        }
    }
    ctx->pc = 0x4D9048u;
label_4d9048:
    // 0x4d9048: 0x2f62023  subu        $a0, $s7, $s6
    ctx->pc = 0x4d9048u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
label_4d904c:
    // 0x4d904c: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x4d904cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4d9050: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D9050u;
    {
        const bool branch_taken_0x4d9050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D9050u;
        // 0x4d9054: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d9050) {
            ctx->pc = 0x4D9094u;
            goto label_4d9094;
        }
    }
    ctx->pc = 0x4D9058u;
    // 0x4d9058: 0x2361821  addu        $v1, $s1, $s6
    ctx->pc = 0x4d9058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x4d905c: 0x34870001  ori         $a3, $a0, 0x1
    ctx->pc = 0x4d905cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x4d9060: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x4d9060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d9064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d9064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d9068: 0x24650008  addiu       $a1, $v1, 0x8
    ctx->pc = 0x4d9068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x4d906c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4d906cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4d9070: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d9070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d9074: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4d9074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x4d9078: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x4d9078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x4d907c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4d907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4d9080: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4d9080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4d9084: 0xc10e4e0  jal         func_439380
    ctx->pc = 0x4D9084u;
    SET_GPR_U32(ctx, 31, 0x4D908Cu);
    ctx->pc = 0x4D9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D9084u;
    // 0x4d9088: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439380u, 0x4D9084u, 0x4D908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D908Cu;
label_4d908c:
    // 0x4d908c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4D908Cu;
    {
        const bool branch_taken_0x4d908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d908c) {
            ctx->pc = 0x4D90B0u;
            goto label_4d90b0;
        }
    }
    ctx->pc = 0x4D9094u;
label_4d9094:
    // 0x4d9094: 0x2372021  addu        $a0, $s1, $s7
    ctx->pc = 0x4d9094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x4d9098: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d9098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4d909c: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x4d909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x4d90a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x4d90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x4d90a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4d90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4d90a8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4d90a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4d90ac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4d90acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_4d90b0:
    // 0x4d90b0: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x4D90B0u;
    SET_GPR_U32(ctx, 31, 0x4D90B8u);
    ctx->pc = 0x4D90B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D90B0u;
    // 0x4d90b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x4D90B0u, 0x4D90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D90B8u;
label_4d90b8:
    // 0x4d90b8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x4d90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_4d90bc:
    // 0x4d90bc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4d90bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4d90c0:
    // 0x4d90c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4d90c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4d90c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4d90c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d90c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4d90c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4d90cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4d90ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d90d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4d90d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d90d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4d90d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d90d8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4d90d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d90dc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x4d90dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d90e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d90e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d90e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D90E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D90E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D90E4u;
        // 0x4d90e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D90E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D90ECu;
    // 0x4d90ec: 0x0  nop
    ctx->pc = 0x4d90ecu;
    // NOP
    ctx->pc = 0x4d90f0u;
}
