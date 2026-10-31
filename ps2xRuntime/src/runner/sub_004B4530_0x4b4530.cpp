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

// Function: sub_004B4530
// Address: 0x4b4530 - 0x4b46c0
void sub_004B4530_0x4b4530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4530_0x4b4530");
#endif

    switch (ctx->pc) {
        case 0x4b4560u: goto label_4b4560;
        case 0x4b4574u: goto label_4b4574;
        case 0x4b45acu: goto label_4b45ac;
        case 0x4b45e0u: goto label_4b45e0;
        case 0x4b4638u: goto label_4b4638;
        case 0x4b4680u: goto label_4b4680;
        default: break;
    }

    ctx->pc = 0x4b4530u;

    // 0x4b4530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b4530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4b4534: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b4534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b4538: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b4538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b453c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b453cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4540: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b4540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b4544: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4b4544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4548: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b4548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b454c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b454cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b4550: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b4550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b4554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b4554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4558: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B4558u;
    SET_GPR_U32(ctx, 31, 0x4B4560u);
    ctx->pc = 0x4B455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4558u;
    // 0x4b455c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B4558u, 0x4B4560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4560u;
label_4b4560:
    // 0x4b4560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b4560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4564: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B4564u;
    {
        const bool branch_taken_0x4b4564 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4564u;
        // 0x4b4568: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4564) {
            ctx->pc = 0x4B4588u;
            goto label_4b4588;
        }
    }
    ctx->pc = 0x4B456Cu;
    // 0x4b456c: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B456Cu;
    SET_GPR_U32(ctx, 31, 0x4B4574u);
    ctx->pc = 0x4B4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B456Cu;
    // 0x4b4570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B456Cu, 0x4B4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4574u;
label_4b4574:
    // 0x4b4574: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4b4574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b457c: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x4b457cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x4b4580: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x4B4580u;
    {
        const bool branch_taken_0x4b4580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4580u;
        // 0x4b4584: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4580) {
            ctx->pc = 0x4B46A0u;
            goto label_4b46a0;
        }
    }
    ctx->pc = 0x4B4588u;
label_4b4588:
    // 0x4b4588: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B4588u;
    {
        const bool branch_taken_0x4b4588 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x4B458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4588u;
        // 0x4b458c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4588) {
            ctx->pc = 0x4B45A0u;
            goto label_4b45a0;
        }
    }
    ctx->pc = 0x4B4590u;
    // 0x4b4590: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b4590u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4594: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x4b4594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4598: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4b4598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b459c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b459cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b45a0:
    // 0x4b45a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4b45a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b45a4: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B45A4u;
    SET_GPR_U32(ctx, 31, 0x4B45ACu);
    ctx->pc = 0x4B45A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B45A4u;
    // 0x4b45a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B45A4u, 0x4B45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B45ACu;
label_4b45ac:
    // 0x4b45ac: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x4b45acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4b45b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4b45b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b45b4: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4b45b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4b45b8: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x4b45b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4b45bc: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x4b45bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x4b45c0: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x4b45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4b45c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b45c8: 0xa670000e  sh          $s0, 0xE($s3)
    ctx->pc = 0x4b45c8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 14), (uint16_t)GPR_U32(ctx, 16));
    // 0x4b45cc: 0x1025821  addu        $t3, $t0, $v0
    ctx->pc = 0x4b45ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4b45d0: 0xc36021  addu        $t4, $a2, $v1
    ctx->pc = 0x4b45d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4b45d4: 0x26670014  addiu       $a3, $s3, 0x14
    ctx->pc = 0x4b45d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4b45d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b45d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b45dc: 0x0  nop
    ctx->pc = 0x4b45dcu;
    // NOP
label_4b45e0:
    // 0x4b45e0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4b45e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b45e4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b45e8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4b45e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4b45ec: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x4b45ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4b45f0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4b45f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4b45f4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4b45f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b45f8: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x4b45f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x4b45fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4b45fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b4600: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b4600u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b4604: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4b4604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4b4608: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4b4608u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b460c: 0x34c03  sra         $t1, $v1, 16
    ctx->pc = 0x4b460cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b4610: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4b4610u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4614: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x4b4614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x4b4618: 0xcc102b  sltu        $v0, $a2, $t4
    ctx->pc = 0x4b4618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x4b461c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x4b461cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b4620: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x4b4620u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4b4624: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4B4624u;
    {
        const bool branch_taken_0x4b4624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4624u;
        // 0x4b4628: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4624) {
            ctx->pc = 0x4B45E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b45e0;
        }
    }
    ctx->pc = 0x4B462Cu;
    // 0x4b462c: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x4b462cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4b4630: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4B4630u;
    {
        const bool branch_taken_0x4b4630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4630) {
            ctx->pc = 0x4B4634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4630u;
            // 0x4b4634: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B4670u;
            goto label_4b4670;
        }
    }
    ctx->pc = 0x4B4638u;
label_4b4638:
    // 0x4b4638: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b4638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b463c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4b463cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4b4640: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4b4640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4b4644: 0x10b202b  sltu        $a0, $t0, $t3
    ctx->pc = 0x4b4644u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4b4648: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4b4648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4b464c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b464cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b4650: 0x34c03  sra         $t1, $v1, 16
    ctx->pc = 0x4b4650u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4b4654: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4b4654u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b4658: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x4b4658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4b465c: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x4b465cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b4660: 0x54c03  sra         $t1, $a1, 16
    ctx->pc = 0x4b4660u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4b4664: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B4664u;
    {
        const bool branch_taken_0x4b4664 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B4668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4664u;
        // 0x4b4668: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4664) {
            ctx->pc = 0x4B4638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4638;
        }
    }
    ctx->pc = 0x4B466Cu;
    // 0x4b466c: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x4b466cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_4b4670:
    // 0x4b4670: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b4674: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4B4674u;
    {
        const bool branch_taken_0x4b4674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b4674) {
            ctx->pc = 0x4B4678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B4674u;
            // 0x4b4678: 0xae6a0010  sw          $t2, 0x10($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B46A0u;
            goto label_4b46a0;
        }
    }
    ctx->pc = 0x4B467Cu;
    // 0x4b467c: 0x0  nop
    ctx->pc = 0x4b467cu;
    // NOP
label_4b4680:
    // 0x4b4680: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x4b4680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x4b4684: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4b4684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x4b4688: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b4688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b468c: 0x0  nop
    ctx->pc = 0x4b468cu;
    // NOP
    // 0x4b4690: 0x0  nop
    ctx->pc = 0x4b4690u;
    // NOP
    // 0x4b4694: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B4694u;
    {
        const bool branch_taken_0x4b4694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4694) {
            ctx->pc = 0x4B4680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b4680;
        }
    }
    ctx->pc = 0x4B469Cu;
    // 0x4b469c: 0xae6a0010  sw          $t2, 0x10($s3)
    ctx->pc = 0x4b469cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 10));
label_4b46a0:
    // 0x4b46a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b46a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b46a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b46a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b46a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b46a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b46ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b46acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b46b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b46b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b46b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b46b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b46b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B46B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B46B8u;
        // 0x4b46bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B46B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B46C0u;
}
