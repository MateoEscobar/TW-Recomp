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

// Function: sub_0043B5A0
// Address: 0x43b5a0 - 0x43b730
void sub_0043B5A0_0x43b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B5A0_0x43b5a0");
#endif

    switch (ctx->pc) {
        case 0x43b5d0u: goto label_43b5d0;
        case 0x43b5e4u: goto label_43b5e4;
        case 0x43b61cu: goto label_43b61c;
        case 0x43b650u: goto label_43b650;
        case 0x43b6a8u: goto label_43b6a8;
        case 0x43b6f0u: goto label_43b6f0;
        default: break;
    }

    ctx->pc = 0x43b5a0u;

    // 0x43b5a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x43b5a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x43b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x43b5a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x43b5ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x43b5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b5b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x43b5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x43b5b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x43b5b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b5b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43b5b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b5bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x43b5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x43b5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43b5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43b5c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43b5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b5c8: 0xc10ed4e  jal         func_43B538
    ctx->pc = 0x43B5C8u;
    SET_GPR_U32(ctx, 31, 0x43B5D0u);
    ctx->pc = 0x43B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B5C8u;
    // 0x43b5cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B538u, 0x43B5C8u, 0x43B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B5D0u;
label_43b5d0:
    // 0x43b5d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43b5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b5d4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x43B5D4u;
    {
        const bool branch_taken_0x43b5d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B5D4u;
        // 0x43b5d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b5d4) {
            ctx->pc = 0x43B5F8u;
            goto label_43b5f8;
        }
    }
    ctx->pc = 0x43B5DCu;
    // 0x43b5dc: 0xc10eb0e  jal         func_43AC38
    ctx->pc = 0x43B5DCu;
    SET_GPR_U32(ctx, 31, 0x43B5E4u);
    ctx->pc = 0x43B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B5DCu;
    // 0x43b5e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AC38u, 0x43B5DCu, 0x43B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B5E4u;
label_43b5e4:
    // 0x43b5e4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x43b5e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43b5ec: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x43b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x43b5f0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x43B5F0u;
    {
        const bool branch_taken_0x43b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B5F0u;
        // 0x43b5f4: 0xad620010  sw          $v0, 0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b5f0) {
            ctx->pc = 0x43B70Cu;
            goto label_43b70c;
        }
    }
    ctx->pc = 0x43B5F8u;
label_43b5f8:
    // 0x43b5f8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43B5F8u;
    {
        const bool branch_taken_0x43b5f8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x43B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B5F8u;
        // 0x43b5fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b5f8) {
            ctx->pc = 0x43B610u;
            goto label_43b610;
        }
    }
    ctx->pc = 0x43B600u;
    // 0x43b600: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x43b600u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b604: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x43b604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43b608: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x43b608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b60c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x43b60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_43b610:
    // 0x43b610: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x43b610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x43b614: 0xc10eb0e  jal         func_43AC38
    ctx->pc = 0x43B614u;
    SET_GPR_U32(ctx, 31, 0x43B61Cu);
    ctx->pc = 0x43B618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B614u;
    // 0x43b618: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AC38u, 0x43B614u, 0x43B61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B61Cu;
label_43b61c:
    // 0x43b61c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x43b61cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b620: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x43b620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x43b624: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x43b624u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x43b628: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x43b628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x43b62c: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x43b62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x43b630: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x43b630u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b634: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x43b634u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x43b638: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x43b638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x43b63c: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x43b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x43b640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43b640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x43b644: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x43b644u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x43b648: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x43b648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x43b64c: 0x0  nop
    ctx->pc = 0x43b64cu;
    // NOP
label_43b650:
    // 0x43b650: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x43b650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x43b654: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x43b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x43b658: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x43b658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x43b65c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x43b65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x43b660: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x43b660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x43b664: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x43b664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x43b668: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x43b668u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x43b66c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x43b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x43b670: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x43b670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x43b674: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x43b674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x43b678: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x43b678u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x43b67c: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x43b67cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x43b680: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x43b680u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x43b684: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x43b684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x43b688: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x43b688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43b68c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x43b68cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x43b690: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x43b690u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x43b694: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x43B694u;
    {
        const bool branch_taken_0x43b694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B694u;
        // 0x43b698: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b694) {
            ctx->pc = 0x43B650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b650;
        }
    }
    ctx->pc = 0x43B69Cu;
    // 0x43b69c: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x43b69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x43b6a0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x43B6A0u;
    {
        const bool branch_taken_0x43b6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43b6a0) {
            ctx->pc = 0x43B6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B6A0u;
            // 0x43b6a4: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B6E0u;
            goto label_43b6e0;
        }
    }
    ctx->pc = 0x43B6A8u;
label_43b6a8:
    // 0x43b6a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x43b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x43b6ac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x43b6acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x43b6b0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x43b6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x43b6b4: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x43b6b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x43b6b8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x43b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x43b6bc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x43b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x43b6c0: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x43b6c0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x43b6c4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x43b6c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x43b6c8: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x43b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x43b6cc: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x43b6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x43b6d0: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x43b6d0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x43b6d4: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x43B6D4u;
    {
        const bool branch_taken_0x43b6d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x43B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B6D4u;
        // 0x43b6d8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b6d4) {
            ctx->pc = 0x43B6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b6a8;
        }
    }
    ctx->pc = 0x43B6DCu;
    // 0x43b6dc: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x43b6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_43b6e0:
    // 0x43b6e0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x43b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43b6e4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x43B6E4u;
    {
        const bool branch_taken_0x43b6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43b6e4) {
            ctx->pc = 0x43B6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43B6E4u;
            // 0x43b6e8: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43B70Cu;
            goto label_43b70c;
        }
    }
    ctx->pc = 0x43B6ECu;
    // 0x43b6ec: 0x0  nop
    ctx->pc = 0x43b6ecu;
    // NOP
label_43b6f0:
    // 0x43b6f0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x43b6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x43b6f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x43b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43b6f8: 0x0  nop
    ctx->pc = 0x43b6f8u;
    // NOP
    // 0x43b6fc: 0x0  nop
    ctx->pc = 0x43b6fcu;
    // NOP
    // 0x43b700: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x43B700u;
    {
        const bool branch_taken_0x43b700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B700u;
        // 0x43b704: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43b700) {
            ctx->pc = 0x43B6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43b6f0;
        }
    }
    ctx->pc = 0x43B708u;
    // 0x43b708: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x43b708u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_43b70c:
    // 0x43b70c: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x43b70cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b710: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x43b710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43b714: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x43b714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43b718: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43b718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43b71c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x43b71cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43b720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43b720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43b724: 0x3e00008  jr          $ra
    ctx->pc = 0x43B724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43B724u;
        // 0x43b728: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43B724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43B72Cu;
    // 0x43b72c: 0x0  nop
    ctx->pc = 0x43b72cu;
    // NOP
    ctx->pc = 0x43b730u;
}
