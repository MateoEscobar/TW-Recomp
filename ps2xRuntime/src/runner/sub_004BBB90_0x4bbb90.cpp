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

// Function: sub_004BBB90
// Address: 0x4bbb90 - 0x4bbea0
void sub_004BBB90_0x4bbb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BBB90_0x4bbb90");
#endif

    switch (ctx->pc) {
        case 0x4bbbdcu: goto label_4bbbdc;
        case 0x4bbbe8u: goto label_4bbbe8;
        case 0x4bbc20u: goto label_4bbc20;
        case 0x4bbc2cu: goto label_4bbc2c;
        case 0x4bbc48u: goto label_4bbc48;
        case 0x4bbc78u: goto label_4bbc78;
        case 0x4bbd18u: goto label_4bbd18;
        case 0x4bbd50u: goto label_4bbd50;
        case 0x4bbde4u: goto label_4bbde4;
        case 0x4bbe10u: goto label_4bbe10;
        default: break;
    }

    ctx->pc = 0x4bbb90u;

    // 0x4bbb90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4bbb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4bbb94: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4bbb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x4bbb98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4bbb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4bbb9c: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x4bbb9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x4bbba0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4bbba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4bbba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bbba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbba8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x4bbba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x4bbbac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x4bbbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x4bbbb0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4bbbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4bbbb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bbbb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbbb8: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x4bbbb8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4bbbbc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x4bbbbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4bbbc0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x4bbbc0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x4bbbc4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x4bbbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x4bbbc8: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x4bbbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4bbbcc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BBBCCu;
    {
        const bool branch_taken_0x4bbbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4BBBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBBCCu;
        // 0x4bbbd0: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbbcc) {
            ctx->pc = 0x4BBBF0u;
            goto label_4bbbf0;
        }
    }
    ctx->pc = 0x4BBBD4u;
    // 0x4bbbd4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BBBD4u;
    SET_GPR_U32(ctx, 31, 0x4BBBDCu);
    ctx->pc = 0x4BBBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBBD4u;
    // 0x4bbbd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BBBD4u, 0x4BBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBBDCu;
label_4bbbdc:
    // 0x4bbbdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bbbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbbe0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BBBE0u;
    SET_GPR_U32(ctx, 31, 0x4BBBE8u);
    ctx->pc = 0x4BBBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBBE0u;
    // 0x4bbbe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BBBE0u, 0x4BBBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBBE8u;
label_4bbbe8:
    // 0x4bbbe8: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x4BBBE8u;
    {
        const bool branch_taken_0x4bbbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBBE8u;
        // 0x4bbbec: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbbe8) {
            ctx->pc = 0x4BBE74u;
            goto label_4bbe74;
        }
    }
    ctx->pc = 0x4BBBF0u;
label_4bbbf0:
    // 0x4bbbf0: 0x1cc00010  bgtz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x4BBBF0u;
    {
        const bool branch_taken_0x4bbbf0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x4BBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBBF0u;
        // 0x4bbbf4: 0x62d03  sra         $a1, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbbf0) {
            ctx->pc = 0x4BBC34u;
            goto label_4bbc34;
        }
    }
    ctx->pc = 0x4BBBF8u;
    // 0x4bbbf8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4bbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4bbbfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bbbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bbc00: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4bbc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bbc04: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4bbc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4bbc08: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x4BBC08u;
    {
        const bool branch_taken_0x4bbc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC08u;
        // 0x4bbc0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc08) {
            ctx->pc = 0x4BBE70u;
            goto label_4bbe70;
        }
    }
    ctx->pc = 0x4BBC10u;
    // 0x4bbc10: 0x4c10008  bgez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BBC10u;
    {
        const bool branch_taken_0x4bbc10 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x4BBC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC10u;
        // 0x4bbc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc10) {
            ctx->pc = 0x4BBC34u;
            goto label_4bbc34;
        }
    }
    ctx->pc = 0x4BBC18u;
    // 0x4bbc18: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BBC18u;
    SET_GPR_U32(ctx, 31, 0x4BBC20u);
    ctx->pc = 0x4BBC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBC18u;
    // 0x4bbc1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BBC18u, 0x4BBC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBC20u;
label_4bbc20:
    // 0x4bbc20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bbc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbc24: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BBC24u;
    SET_GPR_U32(ctx, 31, 0x4BBC2Cu);
    ctx->pc = 0x4BBC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBC24u;
    // 0x4bbc28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BBC24u, 0x4BBC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBC2Cu;
label_4bbc2c:
    // 0x4bbc2c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x4BBC2Cu;
    {
        const bool branch_taken_0x4bbc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC2Cu;
        // 0x4bbc30: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc2c) {
            ctx->pc = 0x4BBE74u;
            goto label_4bbe74;
        }
    }
    ctx->pc = 0x4BBC34u;
label_4bbc34:
    // 0x4bbc34: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x4BBC34u;
    {
        const bool branch_taken_0x4bbc34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC34u;
        // 0x4bbc38: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc34) {
            ctx->pc = 0x4BBCB8u;
            goto label_4bbcb8;
        }
    }
    ctx->pc = 0x4BBC3Cu;
    // 0x4bbc3c: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x4BBC3Cu;
    {
        const bool branch_taken_0x4bbc3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC3Cu;
        // 0x4bbc40: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc3c) {
            ctx->pc = 0x4BBC68u;
            goto label_4bbc68;
        }
    }
    ctx->pc = 0x4BBC44u;
    // 0x4bbc44: 0x0  nop
    ctx->pc = 0x4bbc44u;
    // NOP
label_4bbc48:
    // 0x4bbc48: 0x712c2  srl         $v0, $a3, 11
    ctx->pc = 0x4bbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x4bbc4c: 0x24a5ffeb  addiu       $a1, $a1, -0x15
    ctx->pc = 0x4bbc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967275));
    // 0x4bbc50: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4bbc50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4bbc54: 0x73d40  sll         $a3, $a3, 21
    ctx->pc = 0x4bbc54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x4bbc58: 0x0  nop
    ctx->pc = 0x4bbc58u;
    // NOP
    // 0x4bbc5c: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BBC5Cu;
    {
        const bool branch_taken_0x4bbc5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bbc5c) {
            ctx->pc = 0x4BBC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bbc48;
        }
    }
    ctx->pc = 0x4BBC64u;
    // 0x4bbc64: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x4bbc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_4bbc68:
    // 0x4bbc68: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4bbc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bbc6c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4BBC6Cu;
    {
        const bool branch_taken_0x4bbc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC6Cu;
        // 0x4bbc70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc6c) {
            ctx->pc = 0x4BBC9Cu;
            goto label_4bbc9c;
        }
    }
    ctx->pc = 0x4BBC74u;
    // 0x4bbc74: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x4bbc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4bbc78:
    // 0x4bbc78: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4bbc78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4bbc7c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x4bbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x4bbc80: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4bbc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bbc84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4bbc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4bbc88: 0x0  nop
    ctx->pc = 0x4bbc88u;
    // NOP
    // 0x4bbc8c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BBC8Cu;
    {
        const bool branch_taken_0x4bbc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bbc8c) {
            ctx->pc = 0x4BBC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bbc78;
        }
    }
    ctx->pc = 0x4BBC94u;
    // 0x4bbc94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BBC94u;
    {
        const bool branch_taken_0x4bbc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBC94u;
        // 0x4bbc98: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbc94) {
            ctx->pc = 0x4BBCA4u;
            goto label_4bbca4;
        }
    }
    ctx->pc = 0x4BBC9Cu;
label_4bbc9c:
    // 0x4bbc9c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x4bbc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4bbca0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x4bbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_4bbca4:
    // 0x4bbca4: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x4bbca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4bbca8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x4bbca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x4bbcac: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4bbcacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4bbcb0: 0x873804  sllv        $a3, $a3, $a0
    ctx->pc = 0x4bbcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x4bbcb4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4bbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_4bbcb8:
    // 0x4bbcb8: 0x24a5fc01  addiu       $a1, $a1, -0x3FF
    ctx->pc = 0x4bbcb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966273));
    // 0x4bbcbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bbcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bbcc0: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x4bbcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x4bbcc4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4bbcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4bbcc8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x4bbcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4bbccc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BBCCCu;
    {
        const bool branch_taken_0x4bbccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBCCCu;
        // 0x4bbcd0: 0x443025  or          $a2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbccc) {
            ctx->pc = 0x4BBCE8u;
            goto label_4bbce8;
        }
    }
    ctx->pc = 0x4BBCD4u;
    // 0x4bbcd4: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x4bbcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x4bbcd8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x4bbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4bbcdc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4bbcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4bbce0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4bbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bbce4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4bbce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4bbce8:
    // 0x4bbce8: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x4bbce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x4bbcec: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x4bbcecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x4bbcf0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x4bbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4bbcf4: 0x5ad00  sll         $s5, $a1, 20
    ctx->pc = 0x4bbcf4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x4bbcf8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4bbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bbcfc: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4bbcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4bbd00: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4bbd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bbd04: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4bbd04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbd08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4bbd08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbd0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bbd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbd10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4bbd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbd14: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x4bbd14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
label_4bbd18:
    // 0x4bbd18: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x4bbd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x4bbd1c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x4bbd1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4bbd20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BBD20u;
    {
        const bool branch_taken_0x4bbd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBD20u;
        // 0x4bbd24: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbd20) {
            ctx->pc = 0x4BBD34u;
            goto label_4bbd34;
        }
    }
    ctx->pc = 0x4BBD28u;
    // 0x4bbd28: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x4bbd28u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4bbd2c: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x4bbd2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x4bbd30: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x4bbd30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_4bbd34:
    // 0x4bbd34: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x4bbd34u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x4bbd38: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x4bbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4bbd3c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4bbd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4bbd40: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4bbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bbd44: 0x1520fff4  bnez        $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4BBD44u;
    {
        const bool branch_taken_0x4bbd44 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBD44u;
        // 0x4bbd48: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbd44) {
            ctx->pc = 0x4BBD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bbd18;
        }
    }
    ctx->pc = 0x4BBD4Cu;
    // 0x4bbd4c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x4bbd4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_4bbd50:
    // 0x4bbd50: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4bbd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbd54: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x4bbd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4bbd58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BBD58u;
    {
        const bool branch_taken_0x4bbd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBD58u;
        // 0x4bbd5c: 0x1692821  addu        $a1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbd58) {
            ctx->pc = 0x4BBD7Cu;
            goto label_4bbd7c;
        }
    }
    ctx->pc = 0x4BBD60u;
    // 0x4bbd60: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x4BBD60u;
    {
        const bool branch_taken_0x4bbd60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x4BBD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBD60u;
        // 0x4bbd64: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbd60) {
            ctx->pc = 0x4BBDACu;
            goto label_4bbdac;
        }
    }
    ctx->pc = 0x4BBD68u;
    // 0x4bbd68: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x4bbd68u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4bbd6c: 0x55000010  bnel        $t0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4BBD6Cu;
    {
        const bool branch_taken_0x4bbd6c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bbd6c) {
            ctx->pc = 0x4BBD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BBD6Cu;
            // 0x4bbd70: 0x94842  srl         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BBDB0u;
            goto label_4bbdb0;
        }
    }
    ctx->pc = 0x4BBD74u;
    // 0x4bbd74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BBD74u;
    {
        const bool branch_taken_0x4bbd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBD74u;
        // 0x4bbd78: 0xa95821  addu        $t3, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbd74) {
            ctx->pc = 0x4BBD84u;
            goto label_4bbd84;
        }
    }
    ctx->pc = 0x4BBD7Cu;
label_4bbd7c:
    // 0x4bbd7c: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x4bbd7cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4bbd80: 0xa95821  addu        $t3, $a1, $t1
    ctx->pc = 0x4bbd80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_4bbd84:
    // 0x4bbd84: 0xb31024  and         $v0, $a1, $s3
    ctx->pc = 0x4bbd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x4bbd88: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BBD88u;
    {
        const bool branch_taken_0x4bbd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x4BBD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBD88u;
        // 0x4bbd8c: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbd88) {
            ctx->pc = 0x4BBD9Cu;
            goto label_4bbd9c;
        }
    }
    ctx->pc = 0x4BBD90u;
    // 0x4bbd90: 0x1731824  and         $v1, $t3, $s3
    ctx->pc = 0x4bbd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 19));
    // 0x4bbd94: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x4bbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4bbd98: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x4bbd98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
label_4bbd9c:
    // 0x4bbd9c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x4bbd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4bbda0: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x4bbda0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x4bbda4: 0x2298821  addu        $s1, $s1, $t1
    ctx->pc = 0x4bbda4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x4bbda8: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x4bbda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
label_4bbdac:
    // 0x4bbdac: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x4bbdacu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_4bbdb0:
    // 0x4bbdb0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x4bbdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4bbdb4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4bbdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4bbdb8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4bbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4bbdbc: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x4BBDBCu;
    {
        const bool branch_taken_0x4bbdbc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BBDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBDBCu;
        // 0x4bbdc0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbdbc) {
            ctx->pc = 0x4BBD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bbd50;
        }
    }
    ctx->pc = 0x4BBDC4u;
    // 0x4bbdc4: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x4bbdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x4bbdc8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4BBDC8u;
    {
        const bool branch_taken_0x4bbdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBDC8u;
        // 0x4bbdcc: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbdc8) {
            ctx->pc = 0x4BBE3Cu;
            goto label_4bbe3c;
        }
    }
    ctx->pc = 0x4BBDD0u;
    // 0x4bbdd0: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x4bbdd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4bbdd4: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x4bbdd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x4bbdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bbdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbddc: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4BBDDCu;
    SET_GPR_U32(ctx, 31, 0x4BBDE4u);
    ctx->pc = 0x4BBDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBDDCu;
    // 0x4bbde0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4BBDDCu, 0x4BBDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBDE4u;
label_4bbde4:
    // 0x4bbde4: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4BBDE4u;
    {
        const bool branch_taken_0x4bbde4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BBDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBDE4u;
        // 0x4bbde8: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbde4) {
            ctx->pc = 0x4BBE3Cu;
            goto label_4bbe3c;
        }
    }
    ctx->pc = 0x4BBDECu;
    // 0x4bbdec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bbdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bbdf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4bbdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4bbdf4: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BBDF4u;
    {
        const bool branch_taken_0x4bbdf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BBDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBDF4u;
        // 0x4bbdf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbdf4) {
            ctx->pc = 0x4BBE08u;
            goto label_4bbe08;
        }
    }
    ctx->pc = 0x4BBDFCu;
    // 0x4bbdfc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4bbdfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbe00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4BBE00u;
    {
        const bool branch_taken_0x4bbe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBE00u;
        // 0x4bbe04: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbe00) {
            ctx->pc = 0x4BBE38u;
            goto label_4bbe38;
        }
    }
    ctx->pc = 0x4BBE08u;
label_4bbe08:
    // 0x4bbe08: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4BBE08u;
    SET_GPR_U32(ctx, 31, 0x4BBE10u);
    ctx->pc = 0x4BBE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BBE08u;
    // 0x4bbe0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4BBE08u, 0x4BBE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BBE10u;
label_4bbe10:
    // 0x4bbe10: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BBE10u;
    {
        const bool branch_taken_0x4bbe10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4BBE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBE10u;
        // 0x4bbe14: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbe10) {
            ctx->pc = 0x4BBE30u;
            goto label_4bbe30;
        }
    }
    ctx->pc = 0x4BBE18u;
    // 0x4bbe18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4bbe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4bbe1c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4bbe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4bbe20: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x4bbe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x4bbe24: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x4bbe24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x4bbe28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BBE28u;
    {
        const bool branch_taken_0x4bbe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BBE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBE28u;
        // 0x4bbe2c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bbe28) {
            ctx->pc = 0x4BBE38u;
            goto label_4bbe38;
        }
    }
    ctx->pc = 0x4BBE30u;
label_4bbe30:
    // 0x4bbe30: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4bbe30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4bbe34: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4bbe34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4bbe38:
    // 0x4bbe38: 0x113842  srl         $a3, $s1, 1
    ctx->pc = 0x4bbe38u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_4bbe3c:
    // 0x4bbe3c: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x4bbe3cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x4bbe40: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x4bbe40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x4bbe44: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x4bbe44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x4bbe48: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x4bbe48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4bbe4c: 0xf32025  or          $a0, $a3, $s3
    ctx->pc = 0x4bbe4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x4bbe50: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x4bbe50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x4bbe54: 0x85380b  movn        $a3, $a0, $a1
    ctx->pc = 0x4bbe54u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x4bbe58: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x4bbe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4bbe5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4bbe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4bbe60: 0x6a03c  dsll32      $s4, $a2, 0
    ctx->pc = 0x4bbe60u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4bbe64: 0x2828025  or          $s0, $s4, $v0
    ctx->pc = 0x4bbe64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x4bbe68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bbe68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bbe6c: 0x0  nop
    ctx->pc = 0x4bbe6cu;
    // NOP
label_4bbe70:
    // 0x4bbe70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4bbe70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4bbe74:
    // 0x4bbe74: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x4bbe74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4bbe78: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x4bbe78u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bbe7c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x4bbe7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bbe80: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4bbe80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bbe84: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4bbe84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4bbe88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4bbe88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bbe8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BBE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BBE8Cu;
        // 0x4bbe90: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BBE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BBE94u;
    // 0x4bbe94: 0x0  nop
    ctx->pc = 0x4bbe94u;
    // NOP
    // 0x4bbe98: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4bbe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4bbe9c: 0x0  nop
    ctx->pc = 0x4bbe9cu;
    // NOP
    ctx->pc = 0x4bbea0u;
}
