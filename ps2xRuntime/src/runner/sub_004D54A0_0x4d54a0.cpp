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

// Function: sub_004D54A0
// Address: 0x4d54a0 - 0x4d57d8
void sub_004D54A0_0x4d54a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D54A0_0x4d54a0");
#endif

    switch (ctx->pc) {
        case 0x4d54f0u: goto label_4d54f0;
        case 0x4d5538u: goto label_4d5538;
        case 0x4d5570u: goto label_4d5570;
        case 0x4d5580u: goto label_4d5580;
        case 0x4d5598u: goto label_4d5598;
        case 0x4d55d8u: goto label_4d55d8;
        case 0x4d55e8u: goto label_4d55e8;
        case 0x4d5600u: goto label_4d5600;
        case 0x4d5670u: goto label_4d5670;
        case 0x4d56a8u: goto label_4d56a8;
        case 0x4d56b8u: goto label_4d56b8;
        case 0x4d56d0u: goto label_4d56d0;
        case 0x4d56e0u: goto label_4d56e0;
        case 0x4d56f8u: goto label_4d56f8;
        case 0x4d5738u: goto label_4d5738;
        case 0x4d5748u: goto label_4d5748;
        case 0x4d5760u: goto label_4d5760;
        case 0x4d5770u: goto label_4d5770;
        case 0x4d5788u: goto label_4d5788;
        default: break;
    }

    ctx->pc = 0x4d54a0u;

    // 0x4d54a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4d54a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4d54a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4d54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4d54a8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4d54a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4d54ac: 0x4a083  sra         $s4, $a0, 2
    ctx->pc = 0x4d54acu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 4), 2));
    // 0x4d54b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4d54b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4d54b4: 0x4b043  sra         $s6, $a0, 1
    ctx->pc = 0x4d54b4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4d54b8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x4d54b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x4d54bc: 0x2a820081  slti        $v0, $s4, 0x81
    ctx->pc = 0x4d54bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x4d54c0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x4d54c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x4d54c4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x4d54c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x4d54c8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x4d54c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x4d54cc: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x4d54ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x4d54d0: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x4d54d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x4d54d4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x4d54d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x4d54d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4d54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4d54dc: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4d54dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4d54e0: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x4D54E0u;
    {
        const bool branch_taken_0x4d54e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D54E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D54E0u;
        // 0x4d54e4: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d54e0) {
            ctx->pc = 0x4D562Cu;
            goto label_4d562c;
        }
    }
    ctx->pc = 0x4D54E8u;
    // 0x4d54e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d54e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d54ec: 0x0  nop
    ctx->pc = 0x4d54ecu;
    // NOP
label_4d54f0:
    // 0x4d54f0: 0x41083  sra         $v0, $a0, 2
    ctx->pc = 0x4d54f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
    // 0x4d54f4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x4d54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x4d54f8: 0x96102a  slt         $v0, $a0, $s6
    ctx->pc = 0x4d54f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d54fc: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x4D54FCu;
    {
        const bool branch_taken_0x4d54fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D54FCu;
        // 0x4d5500: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d54fc) {
            ctx->pc = 0x4D561Cu;
            goto label_4d561c;
        }
    }
    ctx->pc = 0x4D5504u;
    // 0x4d5504: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x4d5504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4d5508: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x4d5508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x4d550c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x4d550cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d5510: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d5510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d5514: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4d5514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5518: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x4d5518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x4d551c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4d551cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4d5520: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d5524: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4d5524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x4d5528: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x4d5528u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d552c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d552cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d5530: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4d5530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x4d5534: 0x948023  subu        $s0, $a0, $s4
    ctx->pc = 0x4d5534u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_4d5538:
    // 0x4d5538: 0x4b840  sll         $s7, $a0, 1
    ctx->pc = 0x4d5538u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4d553c: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x4d553cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d5540: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4D5540u;
    {
        const bool branch_taken_0x4d5540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5540u;
        // 0x4d5544: 0x4f080  sll         $fp, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5540) {
            ctx->pc = 0x4D55A4u;
            goto label_4d55a4;
        }
    }
    ctx->pc = 0x4D5548u;
    // 0x4d5548: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d5548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d554c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4d554cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d5550: 0x4a8c0  sll         $s5, $a0, 3
    ctx->pc = 0x4d5550u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4d5554: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x4d5554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4d5558: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x4d5558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d555c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4d555cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5560: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x4d5560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4d5564: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x4d5564u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d5568: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x4d5568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d556c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d5570:
    // 0x4d5570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d5570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5574: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4d5574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5578: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D5578u;
    SET_GPR_U32(ctx, 31, 0x4D5580u);
    ctx->pc = 0x4D557Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5578u;
    // 0x4d557c: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D5578u, 0x4D5580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5580u;
label_4d5580:
    // 0x4d5580: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x4d5580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x4d5584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d5584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d5588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d558c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4d558cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5590: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D5590u;
    SET_GPR_U32(ctx, 31, 0x4D5598u);
    ctx->pc = 0x4D5594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5590u;
    // 0x4d5594: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D5590u, 0x4D5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5598u;
label_4d5598:
    // 0x4d5598: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x4d5598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d559c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D559Cu;
    {
        const bool branch_taken_0x4d559c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D55A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D559Cu;
        // 0x4d55a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d559c) {
            ctx->pc = 0x4D5570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d5570;
        }
    }
    ctx->pc = 0x4D55A4u;
label_4d55a4:
    // 0x4d55a4: 0x2f48023  subu        $s0, $s7, $s4
    ctx->pc = 0x4d55a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x4d55a8: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x4d55a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d55ac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4D55ACu;
    {
        const bool branch_taken_0x4d55ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D55ACu;
        // 0x4d55b0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d55ac) {
            ctx->pc = 0x4D560Cu;
            goto label_4d560c;
        }
    }
    ctx->pc = 0x4D55B4u;
    // 0x4d55b4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4d55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d55b8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4d55b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d55bc: 0x1e9880  sll         $s3, $fp, 2
    ctx->pc = 0x4d55bcu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x4d55c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d55c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d55c4: 0x85a821  addu        $s5, $a0, $a1
    ctx->pc = 0x4d55c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d55c8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x4d55c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4d55cc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x4d55ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d55d0: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x4d55d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d55d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d55d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d55d8:
    // 0x4d55d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d55d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d55dc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4d55dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d55e0: 0xc1356d6  jal         func_4D5B58
    ctx->pc = 0x4D55E0u;
    SET_GPR_U32(ctx, 31, 0x4D55E8u);
    ctx->pc = 0x4D55E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D55E0u;
    // 0x4d55e4: 0x21e8021  addu        $s0, $s0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5B58u, 0x4D55E0u, 0x4D55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D55E8u;
label_4d55e8:
    // 0x4d55e8: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x4d55e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x4d55ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d55ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d55f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d55f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d55f4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4d55f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d55f8: 0xc1356d6  jal         func_4D5B58
    ctx->pc = 0x4D55F8u;
    SET_GPR_U32(ctx, 31, 0x4D5600u);
    ctx->pc = 0x4D55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D55F8u;
    // 0x4d55fc: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5B58u, 0x4D55F8u, 0x4D5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5600u;
label_4d5600:
    // 0x4d5600: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x4d5600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d5604: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4D5604u;
    {
        const bool branch_taken_0x4d5604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5604u;
        // 0x4d5608: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5604) {
            ctx->pc = 0x4D55D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d55d8;
        }
    }
    ctx->pc = 0x4D560Cu;
label_4d560c:
    // 0x4d560c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d560cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5610: 0x96102a  slt         $v0, $a0, $s6
    ctx->pc = 0x4d5610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d5614: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x4D5614u;
    {
        const bool branch_taken_0x4d5614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d5614) {
            ctx->pc = 0x4D5618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D5614u;
            // 0x4d5618: 0x948023  subu        $s0, $a0, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D5538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d5538;
        }
    }
    ctx->pc = 0x4D561Cu;
label_4d561c:
    // 0x4d561c: 0x8fb4001c  lw          $s4, 0x1C($sp)
    ctx->pc = 0x4d561cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4d5620: 0x2a820081  slti        $v0, $s4, 0x81
    ctx->pc = 0x4d5620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x4d5624: 0x1040ffb2  beqz        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x4D5624u;
    {
        const bool branch_taken_0x4d5624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5624u;
        // 0x4d5628: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5624) {
            ctx->pc = 0x4D54F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d54f0;
        }
    }
    ctx->pc = 0x4D562Cu;
label_4d562c:
    // 0x4d562c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5630: 0x96102a  slt         $v0, $a0, $s6
    ctx->pc = 0x4d5630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d5634: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x4D5634u;
    {
        const bool branch_taken_0x4d5634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5634u;
        // 0x4d5638: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5634) {
            ctx->pc = 0x4D57A4u;
            goto label_4d57a4;
        }
    }
    ctx->pc = 0x4D563Cu;
    // 0x4d563c: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x4d563cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4d5640: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x4d5640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x4d5644: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x4d5644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d5648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d5648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d564c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4d564cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5650: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4d5650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4d5654: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4d5654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4d5658: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4d5658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d565c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4d565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4d5660: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x4d5660u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d5664: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d5664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d5668: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4d5668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x4d566c: 0x948023  subu        $s0, $a0, $s4
    ctx->pc = 0x4d566cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_4d5670:
    // 0x4d5670: 0x4b840  sll         $s7, $a0, 1
    ctx->pc = 0x4d5670u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4d5674: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x4d5674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d5678: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4D5678u;
    {
        const bool branch_taken_0x4d5678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D5678u;
        // 0x4d567c: 0x4f080  sll         $fp, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5678) {
            ctx->pc = 0x4D5704u;
            goto label_4d5704;
        }
    }
    ctx->pc = 0x4D5680u;
    // 0x4d5680: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d5680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5684: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4d5684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d5688: 0x4a8c0  sll         $s5, $a0, 3
    ctx->pc = 0x4d5688u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4d568c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x4d568cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4d5690: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x4d5690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d5694: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4d5694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5698: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4d5698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d569c: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x4d569cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d56a0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x4d56a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d56a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d56a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d56a8:
    // 0x4d56a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d56a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d56ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4d56acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d56b0: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D56B0u;
    SET_GPR_U32(ctx, 31, 0x4D56B8u);
    ctx->pc = 0x4D56B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D56B0u;
    // 0x4d56b4: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D56B0u, 0x4D56B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D56B8u;
label_4d56b8:
    // 0x4d56b8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4d56b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d56bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d56bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d56c0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4d56c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d56c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d56c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d56c8: 0xc135e4a  jal         func_4D7928
    ctx->pc = 0x4D56C8u;
    SET_GPR_U32(ctx, 31, 0x4D56D0u);
    ctx->pc = 0x4D56CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D56C8u;
    // 0x4d56cc: 0x2559021  addu        $s2, $s2, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7928u, 0x4D56C8u, 0x4D56D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D56D0u;
label_4d56d0:
    // 0x4d56d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d56d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d56d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d56d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d56d8: 0xc1355f6  jal         func_4D57D8
    ctx->pc = 0x4D56D8u;
    SET_GPR_U32(ctx, 31, 0x4D56E0u);
    ctx->pc = 0x4D56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D56D8u;
    // 0x4d56dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D57D8u, 0x4D56D8u, 0x4D56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D56E0u;
label_4d56e0:
    // 0x4d56e0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4d56e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d56e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d56e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d56e8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4d56e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d56ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d56ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d56f0: 0xc135e4a  jal         func_4D7928
    ctx->pc = 0x4D56F0u;
    SET_GPR_U32(ctx, 31, 0x4D56F8u);
    ctx->pc = 0x4D56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D56F0u;
    // 0x4d56f4: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7928u, 0x4D56F0u, 0x4D56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D56F8u;
label_4d56f8:
    // 0x4d56f8: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x4d56f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d56fc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4D56FCu;
    {
        const bool branch_taken_0x4d56fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D56FCu;
        // 0x4d5700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d56fc) {
            ctx->pc = 0x4D56A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d56a8;
        }
    }
    ctx->pc = 0x4D5704u;
label_4d5704:
    // 0x4d5704: 0x2f48023  subu        $s0, $s7, $s4
    ctx->pc = 0x4d5704u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x4d5708: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x4d5708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d570c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4D570Cu;
    {
        const bool branch_taken_0x4d570c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D570Cu;
        // 0x4d5710: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d570c) {
            ctx->pc = 0x4D5794u;
            goto label_4d5794;
        }
    }
    ctx->pc = 0x4D5714u;
    // 0x4d5714: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4d5714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d5718: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x4d5718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d571c: 0x1e9880  sll         $s3, $fp, 2
    ctx->pc = 0x4d571cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x4d5720: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d5720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5724: 0x85a821  addu        $s5, $a0, $a1
    ctx->pc = 0x4d5724u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d5728: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4d5728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d572c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x4d572cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d5730: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x4d5730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4d5734: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d5734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d5738:
    // 0x4d5738: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d5738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d573c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4d573cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5740: 0xc1356d6  jal         func_4D5B58
    ctx->pc = 0x4D5740u;
    SET_GPR_U32(ctx, 31, 0x4D5748u);
    ctx->pc = 0x4D5744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5740u;
    // 0x4d5744: 0x21e8021  addu        $s0, $s0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5B58u, 0x4D5740u, 0x4D5748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5748u;
label_4d5748:
    // 0x4d5748: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4d5748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d574c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d574cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5750: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4d5750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d5754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d5754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5758: 0xc135f3a  jal         func_4D7CE8
    ctx->pc = 0x4D5758u;
    SET_GPR_U32(ctx, 31, 0x4D5760u);
    ctx->pc = 0x4D575Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5758u;
    // 0x4d575c: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7CE8u, 0x4D5758u, 0x4D5760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5760u;
label_4d5760:
    // 0x4d5760: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d5760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5764: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d5764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5768: 0xc1356d6  jal         func_4D5B58
    ctx->pc = 0x4D5768u;
    SET_GPR_U32(ctx, 31, 0x4D5770u);
    ctx->pc = 0x4D576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5768u;
    // 0x4d576c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5B58u, 0x4D5768u, 0x4D5770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5770u;
label_4d5770:
    // 0x4d5770: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4d5770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4d5774: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d5774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5778: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4d5778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d577c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d577cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5780: 0xc135f3a  jal         func_4D7CE8
    ctx->pc = 0x4D5780u;
    SET_GPR_U32(ctx, 31, 0x4D5788u);
    ctx->pc = 0x4D5784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5780u;
    // 0x4d5784: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7CE8u, 0x4D5780u, 0x4D5788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5788u;
label_4d5788:
    // 0x4d5788: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x4d5788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d578c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4D578Cu;
    {
        const bool branch_taken_0x4d578c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D578Cu;
        // 0x4d5790: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d578c) {
            ctx->pc = 0x4D5738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d5738;
        }
    }
    ctx->pc = 0x4D5794u;
label_4d5794:
    // 0x4d5794: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4d5794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5798: 0x96102a  slt         $v0, $a0, $s6
    ctx->pc = 0x4d5798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4d579c: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x4D579Cu;
    {
        const bool branch_taken_0x4d579c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D57A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D579Cu;
        // 0x4d57a0: 0x948023  subu        $s0, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d579c) {
            ctx->pc = 0x4D5670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d5670;
        }
    }
    ctx->pc = 0x4D57A4u;
label_4d57a4:
    // 0x4d57a4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4d57a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d57a8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x4d57a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d57ac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x4d57acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4d57b0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x4d57b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4d57b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4d57b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4d57b8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x4d57b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4d57bc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4d57bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4d57c0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x4d57c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4d57c4: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x4d57c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d57c8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x4d57c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4d57cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4D57CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D57CCu;
        // 0x4d57d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D57CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D57D4u;
    // 0x4d57d4: 0x0  nop
    ctx->pc = 0x4d57d4u;
    // NOP
    ctx->pc = 0x4d57d8u;
}
