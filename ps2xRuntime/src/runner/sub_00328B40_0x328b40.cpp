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

// Function: sub_00328B40
// Address: 0x328b40 - 0x328d20
void sub_00328B40_0x328b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328B40_0x328b40");
#endif

    switch (ctx->pc) {
        case 0x328b7cu: goto label_328b7c;
        case 0x328ba4u: goto label_328ba4;
        case 0x328bb0u: goto label_328bb0;
        case 0x328becu: goto label_328bec;
        case 0x328c04u: goto label_328c04;
        case 0x328c18u: goto label_328c18;
        case 0x328c38u: goto label_328c38;
        case 0x328c50u: goto label_328c50;
        case 0x328c80u: goto label_328c80;
        case 0x328cc0u: goto label_328cc0;
        case 0x328ce4u: goto label_328ce4;
        case 0x328d00u: goto label_328d00;
        default: break;
    }

    ctx->pc = 0x328b40u;

    // 0x328b40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x328b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x328b44: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x328b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x328b48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x328b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x328b4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x328b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x328b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x328b54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x328b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b58: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x328b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x328b5c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x328b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x328b60: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x328b60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x328b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x328b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x328b68: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x328b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x328b6c: 0x10540012  beq         $v0, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x328B6Cu;
    {
        const bool branch_taken_0x328b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x328B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B6Cu;
        // 0x328b70: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b6c) {
            ctx->pc = 0x328BB8u;
            goto label_328bb8;
        }
    }
    ctx->pc = 0x328B74u;
    // 0x328b74: 0xc0cc9e6  jal         func_332798
    ctx->pc = 0x328B74u;
    SET_GPR_U32(ctx, 31, 0x328B7Cu);
    ctx->pc = 0x328B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B74u;
    // 0x328b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332798u, 0x328B74u, 0x328B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B7Cu;
label_328b7c:
    // 0x328b7c: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x328b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x328b80: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x328b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x328b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328b88: 0x8c500038  lw          $s0, 0x38($v0)
    ctx->pc = 0x328b88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x328b8c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x328B8Cu;
    {
        const bool branch_taken_0x328b8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x328B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B8Cu;
        // 0x328b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328b8c) {
            ctx->pc = 0x328BA8u;
            goto label_328ba8;
        }
    }
    ctx->pc = 0x328B94u;
    // 0x328b94: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x328b94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x328b98: 0x24c65388  addiu       $a2, $a2, 0x5388
    ctx->pc = 0x328b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21384));
    // 0x328b9c: 0xc0ca174  jal         func_3285D0
    ctx->pc = 0x328B9Cu;
    SET_GPR_U32(ctx, 31, 0x328BA4u);
    ctx->pc = 0x328BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B9Cu;
    // 0x328ba0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3285D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3285D0u, 0x328B9Cu, 0x328BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BA4u;
label_328ba4:
    // 0x328ba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328ba8:
    // 0x328ba8: 0xc0ca22a  jal         func_3288A8
    ctx->pc = 0x328BA8u;
    SET_GPR_U32(ctx, 31, 0x328BB0u);
    ctx->pc = 0x328BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328BA8u;
    // 0x328bac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3288A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3288A8u, 0x328BA8u, 0x328BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BB0u;
label_328bb0:
    // 0x328bb0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x328bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x328bb4: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x328bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_328bb8:
    // 0x328bb8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x328bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x328bbc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x328bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x328bc0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x328bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x328bc4: 0xae3d0008  sw          $sp, 0x8($s1)
    ctx->pc = 0x328bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 29));
    // 0x328bc8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x328bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x328bcc: 0x8e540064  lw          $s4, 0x64($s2)
    ctx->pc = 0x328bccu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x328bd0: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x328BD0u;
    {
        const bool branch_taken_0x328bd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x328BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BD0u;
        // 0x328bd4: 0x3c070057  lui         $a3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bd0) {
            ctx->pc = 0x328BECu;
            goto label_328bec;
        }
    }
    ctx->pc = 0x328BD8u;
    // 0x328bd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328bdc: 0x24e75388  addiu       $a3, $a3, 0x5388
    ctx->pc = 0x328bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21384));
    // 0x328be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328be4: 0xc0ca27e  jal         func_3289F8
    ctx->pc = 0x328BE4u;
    SET_GPR_U32(ctx, 31, 0x328BECu);
    ctx->pc = 0x328BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328BE4u;
    // 0x328be8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3289F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3289F8u, 0x328BE4u, 0x328BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328BECu;
label_328bec:
    // 0x328bec: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x328becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x328bf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x328BF0u;
    {
        const bool branch_taken_0x328bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BF0u;
        // 0x328bf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bf0) {
            ctx->pc = 0x328C0Cu;
            goto label_328c0c;
        }
    }
    ctx->pc = 0x328BF8u;
    // 0x328bf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328bfc: 0xc0ca28c  jal         func_328A30
    ctx->pc = 0x328BFCu;
    SET_GPR_U32(ctx, 31, 0x328C04u);
    ctx->pc = 0x328C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328BFCu;
    // 0x328c00: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328A30u, 0x328BFCu, 0x328C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C04u;
label_328c04:
    // 0x328c04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x328C04u;
    {
        const bool branch_taken_0x328c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C04u;
        // 0x328c08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c04) {
            ctx->pc = 0x328C1Cu;
            goto label_328c1c;
        }
    }
    ctx->pc = 0x328C0Cu;
label_328c0c:
    // 0x328c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328c10: 0xc0cd11e  jal         func_334478
    ctx->pc = 0x328C10u;
    SET_GPR_U32(ctx, 31, 0x328C18u);
    ctx->pc = 0x328C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C10u;
    // 0x328c14: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334478u, 0x328C10u, 0x328C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C18u;
label_328c18:
    // 0x328c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x328c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328c1c:
    // 0x328c1c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x328C1Cu;
    {
        const bool branch_taken_0x328c1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C1Cu;
        // 0x328c20: 0x3c070057  lui         $a3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c1c) {
            ctx->pc = 0x328C38u;
            goto label_328c38;
        }
    }
    ctx->pc = 0x328C24u;
    // 0x328c24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x328c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328c28: 0x24e75390  addiu       $a3, $a3, 0x5390
    ctx->pc = 0x328c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21392));
    // 0x328c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328c30: 0xc0ca27e  jal         func_3289F8
    ctx->pc = 0x328C30u;
    SET_GPR_U32(ctx, 31, 0x328C38u);
    ctx->pc = 0x328C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C30u;
    // 0x328c34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3289F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3289F8u, 0x328C30u, 0x328C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C38u;
label_328c38:
    // 0x328c38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x328c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x328c3c: 0x16620016  bne         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x328C3Cu;
    {
        const bool branch_taken_0x328c3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x328c3c) {
            ctx->pc = 0x328C98u;
            goto label_328c98;
        }
    }
    ctx->pc = 0x328C44u;
    // 0x328c44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x328C44u;
    {
        const bool branch_taken_0x328c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C44u;
        // 0x328c48: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c44) {
            ctx->pc = 0x328C68u;
            goto label_328c68;
        }
    }
    ctx->pc = 0x328C4Cu;
    // 0x328c4c: 0x0  nop
    ctx->pc = 0x328c4cu;
    // NOP
label_328c50:
    // 0x328c50: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x328c50u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x328c54: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x328c54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328c58: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x328c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x328c5c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x328c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x328c60: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x328c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x328c64: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x328c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_328c68:
    // 0x328c68: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x328c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x328c6c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x328C6Cu;
    {
        const bool branch_taken_0x328c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328c6c) {
            ctx->pc = 0x328C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328C6Cu;
            // 0x328c70: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328c50;
        }
    }
    ctx->pc = 0x328C74u;
    // 0x328c74: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x328C74u;
    {
        const bool branch_taken_0x328c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C74u;
        // 0x328c78: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c74) {
            ctx->pc = 0x328CF8u;
            goto label_328cf8;
        }
    }
    ctx->pc = 0x328C7Cu;
    // 0x328c7c: 0x0  nop
    ctx->pc = 0x328c7cu;
    // NOP
label_328c80:
    // 0x328c80: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x328c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x328c84: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x328c84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x328c88: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x328c88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328c8c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x328c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x328c90: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x328c90u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x328c94: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x328c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_328c98:
    // 0x328c98: 0x5a600017  blezl       $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x328C98u;
    {
        const bool branch_taken_0x328c98 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x328c98) {
            ctx->pc = 0x328C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328C98u;
            // 0x328c9c: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328CF8u;
            goto label_328cf8;
        }
    }
    ctx->pc = 0x328CA0u;
    // 0x328ca0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x328ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x328ca4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x328ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x328ca8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x328CA8u;
    {
        const bool branch_taken_0x328ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328ca8) {
            ctx->pc = 0x328CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328CA8u;
            // 0x328cac: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328c80;
        }
    }
    ctx->pc = 0x328CB0u;
    // 0x328cb0: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x328CB0u;
    {
        const bool branch_taken_0x328cb0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x328CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CB0u;
        // 0x328cb4: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328cb0) {
            ctx->pc = 0x328CF8u;
            goto label_328cf8;
        }
    }
    ctx->pc = 0x328CB8u;
    // 0x328cb8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x328cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328cbc: 0x0  nop
    ctx->pc = 0x328cbcu;
    // NOP
label_328cc0:
    // 0x328cc0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x328cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x328cc4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x328cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x328cc8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x328cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x328ccc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x328cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x328cd0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x328CD0u;
    {
        const bool branch_taken_0x328cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x328cd0) {
            ctx->pc = 0x328CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328CD0u;
            // 0x328cd4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328CE8u;
            goto label_328ce8;
        }
    }
    ctx->pc = 0x328CD8u;
    // 0x328cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328cdc: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x328CDCu;
    SET_GPR_U32(ctx, 31, 0x328CE4u);
    ctx->pc = 0x328CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CDCu;
    // 0x328ce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x328CDCu, 0x328CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CE4u;
label_328ce4:
    // 0x328ce4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x328ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_328ce8:
    // 0x328ce8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x328ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x328cec: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x328cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x328cf0: 0x1e60fff3  bgtz        $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x328CF0u;
    {
        const bool branch_taken_0x328cf0 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x328CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CF0u;
        // 0x328cf4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328cf0) {
            ctx->pc = 0x328CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328cc0;
        }
    }
    ctx->pc = 0x328CF8u;
label_328cf8:
    // 0x328cf8: 0xc0ca864  jal         func_32A190
    ctx->pc = 0x328CF8u;
    SET_GPR_U32(ctx, 31, 0x328D00u);
    ctx->pc = 0x328CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328CF8u;
    // 0x328cfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A190u, 0x328CF8u, 0x328D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D00u;
label_328d00:
    // 0x328d00: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x328d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x328d04: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x328d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x328d08: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x328d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x328d0c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x328d0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328d10: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x328d10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328d14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x328d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328d18: 0x3e00008  jr          $ra
    ctx->pc = 0x328D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D18u;
        // 0x328d1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328D20u;
}
