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

// Function: sub_00370AA0
// Address: 0x370aa0 - 0x370bc8
void sub_00370AA0_0x370aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370AA0_0x370aa0");
#endif

    switch (ctx->pc) {
        case 0x370ac8u: goto label_370ac8;
        case 0x370ad0u: goto label_370ad0;
        case 0x370ae0u: goto label_370ae0;
        case 0x370af8u: goto label_370af8;
        case 0x370b00u: goto label_370b00;
        case 0x370b1cu: goto label_370b1c;
        case 0x370b28u: goto label_370b28;
        case 0x370b40u: goto label_370b40;
        case 0x370b4cu: goto label_370b4c;
        case 0x370b58u: goto label_370b58;
        case 0x370b6cu: goto label_370b6c;
        case 0x370b84u: goto label_370b84;
        case 0x370b98u: goto label_370b98;
        default: break;
    }

    ctx->pc = 0x370aa0u;

    // 0x370aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x370aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x370aa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370aa8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x370aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x370aac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ab0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x370ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x370ab4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x370ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x370ab8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x370ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x370abc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x370ac0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370AC0u;
    SET_GPR_U32(ctx, 31, 0x370AC8u);
    ctx->pc = 0x370AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370AC0u;
    // 0x370ac4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370AC0u, 0x370AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370AC8u;
label_370ac8:
    // 0x370ac8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370AC8u;
    SET_GPR_U32(ctx, 31, 0x370AD0u);
    ctx->pc = 0x370ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370AC8u;
    // 0x370acc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370AC8u, 0x370AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370AD0u;
label_370ad0:
    // 0x370ad0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x370ad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ad4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x370ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ad8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x370ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370adc: 0x0  nop
    ctx->pc = 0x370adcu;
    // NOP
label_370ae0:
    // 0x370ae0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x370ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x370ae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x370ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ae8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x370ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370aec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x370aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370af0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x370AF0u;
    SET_GPR_U32(ctx, 31, 0x370AF8u);
    ctx->pc = 0x370AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370AF0u;
    // 0x370af4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x370AF0u, 0x370AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370AF8u;
label_370af8:
    // 0x370af8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370AF8u;
    SET_GPR_U32(ctx, 31, 0x370B00u);
    ctx->pc = 0x370AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370AF8u;
    // 0x370afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370AF8u, 0x370B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B00u;
label_370b00:
    // 0x370b00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x370b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x370b04: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x370b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x370b08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x370B08u;
    {
        const bool branch_taken_0x370b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B08u;
        // 0x370b0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b08) {
            ctx->pc = 0x370AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370ae0;
        }
    }
    ctx->pc = 0x370B10u;
    // 0x370b10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x370b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b14: 0xc06d03e  jal         func_1B40F8
    ctx->pc = 0x370B14u;
    SET_GPR_U32(ctx, 31, 0x370B1Cu);
    ctx->pc = 0x370B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B14u;
    // 0x370b18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B40F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40F8u, 0x370B14u, 0x370B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B1Cu;
label_370b1c:
    // 0x370b1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x370b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b20: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x370B20u;
    SET_GPR_U32(ctx, 31, 0x370B28u);
    ctx->pc = 0x370B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B20u;
    // 0x370b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x370B20u, 0x370B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B28u;
label_370b28:
    // 0x370b28: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x370B28u;
    {
        const bool branch_taken_0x370b28 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x370B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B28u;
        // 0x370b2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b28) {
            ctx->pc = 0x370B44u;
            goto label_370b44;
        }
    }
    ctx->pc = 0x370B30u;
    // 0x370b30: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x370b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x370b34: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x370b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x370b38: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x370B38u;
    SET_GPR_U32(ctx, 31, 0x370B40u);
    ctx->pc = 0x370B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B38u;
    // 0x370b3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x370B38u, 0x370B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B40u;
label_370b40:
    // 0x370b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x370b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_370b44:
    // 0x370b44: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x370B44u;
    SET_GPR_U32(ctx, 31, 0x370B4Cu);
    ctx->pc = 0x370B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B44u;
    // 0x370b48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x370B44u, 0x370B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B4Cu;
label_370b4c:
    // 0x370b4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x370b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b50: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x370b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x370b54: 0x0  nop
    ctx->pc = 0x370b54u;
    // NOP
label_370b58:
    // 0x370b58: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x370b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x370b5c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x370b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x370b60: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x370b60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x370b64: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x370B64u;
    SET_GPR_U32(ctx, 31, 0x370B6Cu);
    ctx->pc = 0x370B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B64u;
    // 0x370b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x370B64u, 0x370B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B6Cu;
label_370b6c:
    // 0x370b6c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x370B6Cu;
    {
        const bool branch_taken_0x370b6c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x370B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B6Cu;
        // 0x370b70: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b6c) {
            ctx->pc = 0x370B88u;
            goto label_370b88;
        }
    }
    ctx->pc = 0x370B74u;
    // 0x370b74: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x370b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x370b78: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x370b78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x370b7c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x370B7Cu;
    SET_GPR_U32(ctx, 31, 0x370B84u);
    ctx->pc = 0x370B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B7Cu;
    // 0x370b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x370B7Cu, 0x370B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B84u;
label_370b84:
    // 0x370b84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x370b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_370b88:
    // 0x370b88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x370b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b90: 0xc102576  jal         func_4095D8
    ctx->pc = 0x370B90u;
    SET_GPR_U32(ctx, 31, 0x370B98u);
    ctx->pc = 0x370B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B90u;
    // 0x370b94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x370B90u, 0x370B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B98u;
label_370b98:
    // 0x370b98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370b9c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x370b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x370ba0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x370BA0u;
    {
        const bool branch_taken_0x370ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370BA0u;
        // 0x370ba4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370ba0) {
            ctx->pc = 0x370B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370b58;
        }
    }
    ctx->pc = 0x370BA8u;
    // 0x370ba8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x370ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x370bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x370bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370bb0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x370bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370bb4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x370bb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370bb8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x370bb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x370bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x370BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370BC0u;
        // 0x370bc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370BC8u;
}
