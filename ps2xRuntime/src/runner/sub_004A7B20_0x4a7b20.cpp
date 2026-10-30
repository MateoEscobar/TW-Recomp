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

// Function: sub_004A7B20
// Address: 0x4a7b20 - 0x4a7ea0
void sub_004A7B20_0x4a7b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7B20_0x4a7b20");
#endif

    switch (ctx->pc) {
        case 0x4a7b50u: goto label_4a7b50;
        case 0x4a7b70u: goto label_4a7b70;
        case 0x4a7ba8u: goto label_4a7ba8;
        case 0x4a7bc4u: goto label_4a7bc4;
        case 0x4a7c50u: goto label_4a7c50;
        case 0x4a7cb0u: goto label_4a7cb0;
        case 0x4a7cd8u: goto label_4a7cd8;
        case 0x4a7d0cu: goto label_4a7d0c;
        case 0x4a7d58u: goto label_4a7d58;
        case 0x4a7dd0u: goto label_4a7dd0;
        case 0x4a7ddcu: goto label_4a7ddc;
        case 0x4a7de4u: goto label_4a7de4;
        case 0x4a7e10u: goto label_4a7e10;
        default: break;
    }

    ctx->pc = 0x4a7b20u;

    // 0x4a7b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a7b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4a7b24: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a7b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4a7b28: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a7b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4a7b2c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a7b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7b30: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a7b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4a7b34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a7b34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7b38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4a7b3c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4a7b3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4a7b40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a7b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a7b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a7b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a7b48: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x4a7b48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4a7b4c: 0x8e8b0008  lw          $t3, 0x8($s4)
    ctx->pc = 0x4a7b4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4a7b50:
    // 0x4a7b50: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4a7b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a7b54: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4a7b54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7b58: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x4a7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x4a7b5c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x4A7B5Cu;
    {
        const bool branch_taken_0x4a7b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B5Cu;
        // 0x4a7b60: 0x24780020  addiu       $t8, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7b5c) {
            ctx->pc = 0x4A7C3Cu;
            goto label_4a7c3c;
        }
    }
    ctx->pc = 0x4A7B64u;
    // 0x4a7b64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a7b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7b68: 0x240d0024  addiu       $t5, $zero, 0x24
    ctx->pc = 0x4a7b68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a7b6c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x4a7b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a7b70:
    // 0x4a7b70: 0x8f020004  lw          $v0, 0x4($t8)
    ctx->pc = 0x4a7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x4a7b74: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x4a7b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4a7b78: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4a7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a7b7c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x4A7B7Cu;
    {
        const bool branch_taken_0x4a7b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B7Cu;
        // 0x4a7b80: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7b7c) {
            ctx->pc = 0x4A7C28u;
            goto label_4a7c28;
        }
    }
    ctx->pc = 0x4A7B84u;
    // 0x4a7b84: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x4a7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x4a7b88: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x4a7b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a7b8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7b90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A7B90u;
    {
        const bool branch_taken_0x4a7b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B90u;
        // 0x4a7b94: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7b90) {
            ctx->pc = 0x4A7BC0u;
            goto label_4a7bc0;
        }
    }
    ctx->pc = 0x4A7B98u;
    // 0x4a7b98: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x4a7b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a7b9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A7B9Cu;
    {
        const bool branch_taken_0x4a7b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7B9Cu;
        // 0x4a7ba0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7b9c) {
            ctx->pc = 0x4A7BC0u;
            goto label_4a7bc0;
        }
    }
    ctx->pc = 0x4A7BA4u;
    // 0x4a7ba4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4a7ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a7ba8:
    // 0x4a7ba8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a7ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7bac: 0x10470009  beq         $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A7BACu;
    {
        const bool branch_taken_0x4a7bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x4A7BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BACu;
        // 0x4a7bb0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7bac) {
            ctx->pc = 0x4A7BD4u;
            goto label_4a7bd4;
        }
    }
    ctx->pc = 0x4A7BB4u;
    // 0x4a7bb4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x4a7bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a7bb8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A7BB8u;
    {
        const bool branch_taken_0x4a7bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BB8u;
        // 0x4a7bbc: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7bb8) {
            ctx->pc = 0x4A7BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7ba8;
        }
    }
    ctx->pc = 0x4A7BC0u;
label_4a7bc0:
    // 0x4a7bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a7bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7bc4:
    // 0x4a7bc4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7BC4u;
    {
        const bool branch_taken_0x4a7bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7bc4) {
            ctx->pc = 0x4A7BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7BC4u;
            // 0x4a7bc8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7BDCu;
            goto label_4a7bdc;
        }
    }
    ctx->pc = 0x4A7BCCu;
    // 0x4a7bcc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4A7BCCu;
    {
        const bool branch_taken_0x4a7bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7bcc) {
            ctx->pc = 0x4A7C14u;
            goto label_4a7c14;
        }
    }
    ctx->pc = 0x4A7BD4u;
label_4a7bd4:
    // 0x4a7bd4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A7BD4u;
    {
        const bool branch_taken_0x4a7bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7BD4u;
        // 0x4a7bd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7bd4) {
            ctx->pc = 0x4A7BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7bc4;
        }
    }
    ctx->pc = 0x4A7BDCu;
label_4a7bdc:
    // 0x4a7bdc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x4a7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a7be0: 0x4d1818  mult        $v1, $v0, $t5
    ctx->pc = 0x4a7be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a7be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a7be8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a7be8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a7bec: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x4a7becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a7bf0: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x4a7bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x4a7bf4: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x4a7bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
    // 0x4a7bf8: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x4a7bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x4a7bfc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4a7bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4a7c00: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4a7c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4a7c04: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4a7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x4a7c08: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4a7c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x4a7c0c: 0xac50001c  sw          $s0, 0x1C($v0)
    ctx->pc = 0x4a7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 16));
    // 0x4a7c10: 0xac4b0020  sw          $t3, 0x20($v0)
    ctx->pc = 0x4a7c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 11));
label_4a7c14:
    // 0x4a7c14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7C14u;
    {
        const bool branch_taken_0x4a7c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7c14) {
            ctx->pc = 0x4A7C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7C14u;
            // 0x4a7c18: 0x8f020000  lw          $v0, 0x0($t8) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7C2Cu;
            goto label_4a7c2c;
        }
    }
    ctx->pc = 0x4A7C1Cu;
    // 0x4a7c1c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x4A7C1Cu;
    {
        const bool branch_taken_0x4a7c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C1Cu;
        // 0x4a7c20: 0xafaa0000  sw          $t2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c1c) {
            ctx->pc = 0x4A7DC8u;
            goto label_4a7dc8;
        }
    }
    ctx->pc = 0x4A7C24u;
    // 0x4a7c24: 0x0  nop
    ctx->pc = 0x4a7c24u;
    // NOP
label_4a7c28:
    // 0x4a7c28: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x4a7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
label_4a7c2c:
    // 0x4a7c2c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4a7c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4a7c30: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x4a7c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a7c34: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x4A7C34u;
    {
        const bool branch_taken_0x4a7c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C34u;
        // 0x4a7c38: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c34) {
            ctx->pc = 0x4A7B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7b70;
        }
    }
    ctx->pc = 0x4A7C3Cu;
label_4a7c3c:
    // 0x4a7c3c: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x4a7c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4a7c40: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x4A7C40u;
    {
        const bool branch_taken_0x4a7c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C40u;
        // 0x4a7c44: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c40) {
            ctx->pc = 0x4A7E70u;
            goto label_4a7e70;
        }
    }
    ctx->pc = 0x4A7C48u;
    // 0x4a7c48: 0x8d630008  lw          $v1, 0x8($t3)
    ctx->pc = 0x4a7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4a7c4c: 0x0  nop
    ctx->pc = 0x4a7c4cu;
    // NOP
label_4a7c50:
    // 0x4a7c50: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x4a7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x4a7c54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a7c58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7c5c: 0x1050007f  beq         $v0, $s0, . + 4 + (0x7F << 2)
    ctx->pc = 0x4A7C5Cu;
    {
        const bool branch_taken_0x4a7c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4A7C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C5Cu;
        // 0x4a7c60: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c5c) {
            ctx->pc = 0x4A7E5Cu;
            goto label_4a7e5c;
        }
    }
    ctx->pc = 0x4A7C64u;
    // 0x4a7c64: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x4a7c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x4a7c68: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x4a7c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4a7c6c: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x4a7c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4a7c70: 0x1831818  mult        $v1, $t4, $v1
    ctx->pc = 0x4a7c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a7c74: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4a7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a7c78: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x4a7c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x4a7c7c: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x4a7c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4a7c80: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x4a7c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x4a7c84: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4a7c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a7c88: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4a7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a7c8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a7c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7c90: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x4A7C90u;
    {
        const bool branch_taken_0x4a7c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7C90u;
        // 0x4a7c94: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7c90) {
            ctx->pc = 0x4A7E5Cu;
            goto label_4a7e5c;
        }
    }
    ctx->pc = 0x4A7C98u;
    // 0x4a7c98: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x4a7c98u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7c9c: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x4a7c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a7ca0: 0x1998804  sllv        $s1, $t9, $t4
    ctx->pc = 0x4a7ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 12) & 0x1F));
    // 0x4a7ca4: 0x24130024  addiu       $s3, $zero, 0x24
    ctx->pc = 0x4a7ca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a7ca8: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x4a7ca8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x4a7cac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a7cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7cb0:
    // 0x4a7cb0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x4a7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x4a7cb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a7cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7cb8: 0x8f090000  lw          $t1, 0x0($t8)
    ctx->pc = 0x4a7cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4a7cbc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4a7cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a7cc0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x4a7cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a7cc4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4a7cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4a7cc8: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x4A7CC8u;
    {
        const bool branch_taken_0x4a7cc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7CC8u;
        // 0x4a7ccc: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7cc8) {
            ctx->pc = 0x4A7CF4u;
            goto label_4a7cf4;
        }
    }
    ctx->pc = 0x4A7CD0u;
    // 0x4a7cd0: 0x8f030004  lw          $v1, 0x4($t8)
    ctx->pc = 0x4a7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x4a7cd4: 0x0  nop
    ctx->pc = 0x4a7cd4u;
    // NOP
label_4a7cd8:
    // 0x4a7cd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a7cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a7cdc: 0x104a0007  beq         $v0, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A7CDCu;
    {
        const bool branch_taken_0x4a7cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x4A7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7CDCu;
        // 0x4a7ce0: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7cdc) {
            ctx->pc = 0x4A7CFCu;
            goto label_4a7cfc;
        }
    }
    ctx->pc = 0x4A7CE4u;
    // 0x4a7ce4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4a7ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4a7ce8: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x4a7ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a7cec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A7CECu;
    {
        const bool branch_taken_0x4a7cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7CECu;
        // 0x4a7cf0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7cec) {
            ctx->pc = 0x4A7CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7cd8;
        }
    }
    ctx->pc = 0x4A7CF4u;
label_4a7cf4:
    // 0x4a7cf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7cf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a7cfc:
    // 0x4a7cfc: 0x544d0005  bnel        $v0, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7CFCu;
    {
        const bool branch_taken_0x4a7cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 13));
        if (branch_taken_0x4a7cfc) {
            ctx->pc = 0x4A7D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7CFCu;
            // 0x4a7d00: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7D14u;
            goto label_4a7d14;
        }
    }
    ctx->pc = 0x4A7D04u;
    // 0x4a7d04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A7D04u;
    {
        const bool branch_taken_0x4a7d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D04u;
        // 0x4a7d08: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7d04) {
            ctx->pc = 0x4A7D20u;
            goto label_4a7d20;
        }
    }
    ctx->pc = 0x4A7D0Cu;
label_4a7d0c:
    // 0x4a7d0c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4A7D0Cu;
    {
        const bool branch_taken_0x4a7d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D0Cu;
        // 0x4a7d10: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7d0c) {
            ctx->pc = 0x4A7D74u;
            goto label_4a7d74;
        }
    }
    ctx->pc = 0x4A7D14u;
label_4a7d14:
    // 0x4a7d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4a7d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a7d1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a7d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a7d20:
    // 0x4a7d20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a7d24: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x4A7D24u;
    {
        const bool branch_taken_0x4a7d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a7d24) {
            ctx->pc = 0x4A7D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7D24u;
            // 0x4a7d28: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7E44u;
            goto label_4a7e44;
        }
    }
    ctx->pc = 0x4A7D2Cu;
    // 0x4a7d2c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x4A7D2Cu;
    {
        const bool branch_taken_0x4a7d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D2Cu;
        // 0x4a7d30: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7d2c) {
            ctx->pc = 0x4A7DECu;
            goto label_4a7dec;
        }
    }
    ctx->pc = 0x4A7D34u;
    // 0x4a7d34: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x4a7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x4a7d38: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x4a7d38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a7d3c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7d40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4A7D40u;
    {
        const bool branch_taken_0x4a7d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D40u;
        // 0x4a7d44: 0x8c8a0000  lw          $t2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7d40) {
            ctx->pc = 0x4A7D70u;
            goto label_4a7d70;
        }
    }
    ctx->pc = 0x4A7D48u;
    // 0x4a7d48: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x4a7d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x4a7d4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A7D4Cu;
    {
        const bool branch_taken_0x4a7d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D4Cu;
        // 0x4a7d50: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7d4c) {
            ctx->pc = 0x4A7D70u;
            goto label_4a7d70;
        }
    }
    ctx->pc = 0x4A7D54u;
    // 0x4a7d54: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4a7d54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d58:
    // 0x4a7d58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7d5c: 0x104affeb  beq         $v0, $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4A7D5Cu;
    {
        const bool branch_taken_0x4a7d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x4A7D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D5Cu;
        // 0x4a7d60: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7d5c) {
            ctx->pc = 0x4A7D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7d0c;
        }
    }
    ctx->pc = 0x4A7D64u;
    // 0x4a7d64: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x4a7d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4a7d68: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A7D68u;
    {
        const bool branch_taken_0x4a7d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D68u;
        // 0x4a7d6c: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7d68) {
            ctx->pc = 0x4A7D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7d58;
        }
    }
    ctx->pc = 0x4A7D70u;
label_4a7d70:
    // 0x4a7d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a7d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d74:
    // 0x4a7d74: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A7D74u;
    {
        const bool branch_taken_0x4a7d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D74u;
        // 0x4a7d78: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7d74) {
            ctx->pc = 0x4A7DBCu;
            goto label_4a7dbc;
        }
    }
    ctx->pc = 0x4A7D7Cu;
    // 0x4a7d7c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7d80: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x4a7d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x4a7d84: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x4a7d84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4a7d88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a7d8c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a7d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a7d90: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x4a7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4a7d94: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x4a7d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x4a7d98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a7d98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7d9c: 0xac4e0008  sw          $t6, 0x8($v0)
    ctx->pc = 0x4a7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 14));
    // 0x4a7da0: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x4a7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x4a7da4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4a7da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4a7da8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x4a7da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x4a7dac: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x4a7dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x4a7db0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4a7db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x4a7db4: 0xac4d001c  sw          $t5, 0x1C($v0)
    ctx->pc = 0x4a7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 13));
    // 0x4a7db8: 0xac4b0020  sw          $t3, 0x20($v0)
    ctx->pc = 0x4a7db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 11));
label_4a7dbc:
    // 0x4a7dbc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4A7DBCu;
    {
        const bool branch_taken_0x4a7dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7dbc) {
            ctx->pc = 0x4A7E2Cu;
            goto label_4a7e2c;
        }
    }
    ctx->pc = 0x4A7DC4u;
    // 0x4a7dc4: 0xafb90000  sw          $t9, 0x0($sp)
    ctx->pc = 0x4a7dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 25));
label_4a7dc8:
    // 0x4a7dc8: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A7DC8u;
    SET_GPR_U32(ctx, 31, 0x4A7DD0u);
    ctx->pc = 0x4A7DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7DC8u;
    // 0x4a7dcc: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A7DC8u, 0x4A7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7DD0u;
label_4a7dd0:
    // 0x4a7dd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a7dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7dd4: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A7DD4u;
    SET_GPR_U32(ctx, 31, 0x4A7DDCu);
    ctx->pc = 0x4A7DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7DD4u;
    // 0x4a7dd8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A7DD4u, 0x4A7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7DDCu;
label_4a7ddc:
    // 0x4a7ddc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4A7DDCu;
    {
        const bool branch_taken_0x4a7ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DDCu;
        // 0x4a7de0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7ddc) {
            ctx->pc = 0x4A7E80u;
            goto label_4a7e80;
        }
    }
    ctx->pc = 0x4A7DE4u;
label_4a7de4:
    // 0x4a7de4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4A7DE4u;
    {
        const bool branch_taken_0x4a7de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DE4u;
        // 0x4a7de8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7de4) {
            ctx->pc = 0x4A7E2Cu;
            goto label_4a7e2c;
        }
    }
    ctx->pc = 0x4A7DECu;
label_4a7dec:
    // 0x4a7dec: 0x8d62001c  lw          $v0, 0x1C($t3)
    ctx->pc = 0x4a7decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x4a7df0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4a7df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4a7df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7df8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4A7DF8u;
    {
        const bool branch_taken_0x4a7df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DF8u;
        // 0x4a7dfc: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7df8) {
            ctx->pc = 0x4A7E28u;
            goto label_4a7e28;
        }
    }
    ctx->pc = 0x4A7E00u;
    // 0x4a7e00: 0x8c49000c  lw          $t1, 0xC($v0)
    ctx->pc = 0x4a7e00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4a7e04: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A7E04u;
    {
        const bool branch_taken_0x4a7e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E04u;
        // 0x4a7e08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e04) {
            ctx->pc = 0x4A7E28u;
            goto label_4a7e28;
        }
    }
    ctx->pc = 0x4A7E0Cu;
    // 0x4a7e0c: 0x0  nop
    ctx->pc = 0x4a7e0cu;
    // NOP
label_4a7e10:
    // 0x4a7e10: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a7e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a7e14: 0x1044fff3  beq         $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x4A7E14u;
    {
        const bool branch_taken_0x4a7e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4A7E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E14u;
        // 0x4a7e18: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e14) {
            ctx->pc = 0x4A7DE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7de4;
        }
    }
    ctx->pc = 0x4A7E1Cu;
    // 0x4a7e1c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4a7e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a7e20: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A7E20u;
    {
        const bool branch_taken_0x4a7e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E20u;
        // 0x4a7e24: 0x25290024  addiu       $t1, $t1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e20) {
            ctx->pc = 0x4A7E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7e10;
        }
    }
    ctx->pc = 0x4A7E28u;
label_4a7e28:
    // 0x4a7e28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a7e28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7e2c:
    // 0x4a7e2c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7E2Cu;
    {
        const bool branch_taken_0x4a7e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7e2c) {
            ctx->pc = 0x4A7E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7E2Cu;
            // 0x4a7e30: 0x8ca4001c  lw          $a0, 0x1C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7E44u;
            goto label_4a7e44;
        }
    }
    ctx->pc = 0x4A7E34u;
    // 0x4a7e34: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4a7e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4a7e38: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4a7e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4a7e3c: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x4a7e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x4a7e40: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x4a7e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_4a7e44:
    // 0x4a7e44: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x4a7e44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x4a7e48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a7e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a7e4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a7e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a7e50: 0x1e2102b  sltu        $v0, $t7, $v0
    ctx->pc = 0x4a7e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a7e54: 0x1440ff96  bnez        $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x4A7E54u;
    {
        const bool branch_taken_0x4a7e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E54u;
        // 0x4a7e58: 0x24e70024  addiu       $a3, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e54) {
            ctx->pc = 0x4A7CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7cb0;
        }
    }
    ctx->pc = 0x4A7E5Cu;
label_4a7e5c:
    // 0x4a7e5c: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x4a7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x4a7e60: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x4a7e60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x4a7e64: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x4a7e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a7e68: 0x5440ff79  bnel        $v0, $zero, . + 4 + (-0x87 << 2)
    ctx->pc = 0x4A7E68u;
    {
        const bool branch_taken_0x4a7e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7e68) {
            ctx->pc = 0x4A7E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7E68u;
            // 0x4a7e6c: 0x8d630008  lw          $v1, 0x8($t3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7c50;
        }
    }
    ctx->pc = 0x4A7E70u;
label_4a7e70:
    // 0x4a7e70: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4a7e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4a7e74: 0x1640ff36  bnez        $s2, . + 4 + (-0xCA << 2)
    ctx->pc = 0x4A7E74u;
    {
        const bool branch_taken_0x4a7e74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E74u;
        // 0x4a7e78: 0x256b0028  addiu       $t3, $t3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e74) {
            ctx->pc = 0x4A7B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a7b50;
        }
    }
    ctx->pc = 0x4A7E7Cu;
    // 0x4a7e7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a7e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7e80:
    // 0x4a7e80: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a7e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a7e84: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a7e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a7e88: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a7e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a7e8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a7e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a7e90: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a7e90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a7e94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a7e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a7e98: 0x3e00008  jr          $ra
    ctx->pc = 0x4A7E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E98u;
        // 0x4a7e9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A7EA0u;
}
