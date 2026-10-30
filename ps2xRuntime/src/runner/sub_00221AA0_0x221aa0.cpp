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

// Function: sub_00221AA0
// Address: 0x221aa0 - 0x221bf0
void sub_00221AA0_0x221aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221AA0_0x221aa0");
#endif

    switch (ctx->pc) {
        case 0x221ad0u: goto label_221ad0;
        case 0x221ae0u: goto label_221ae0;
        case 0x221b10u: goto label_221b10;
        case 0x221b2cu: goto label_221b2c;
        case 0x221b40u: goto label_221b40;
        case 0x221b54u: goto label_221b54;
        case 0x221b78u: goto label_221b78;
        case 0x221b98u: goto label_221b98;
        case 0x221bacu: goto label_221bac;
        case 0x221bb8u: goto label_221bb8;
        default: break;
    }

    ctx->pc = 0x221aa0u;

    // 0x221aa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221aa4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x221aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x221aa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x221aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x221aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x221aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ab0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x221ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x221ab4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x221ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ab8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x221ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x221abc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x221abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ac0: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x221AC0u;
    {
        const bool branch_taken_0x221ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AC0u;
        // 0x221ac4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ac0) {
            ctx->pc = 0x221B70u;
            goto label_221b70;
        }
    }
    ctx->pc = 0x221AC8u;
    // 0x221ac8: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x221AC8u;
    SET_GPR_U32(ctx, 31, 0x221AD0u);
    ctx->pc = 0x221ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221AC8u;
    // 0x221acc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x221AC8u, 0x221AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221AD0u;
label_221ad0:
    // 0x221ad0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x221AD0u;
    {
        const bool branch_taken_0x221ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AD0u;
        // 0x221ad4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ad0) {
            ctx->pc = 0x221B70u;
            goto label_221b70;
        }
    }
    ctx->pc = 0x221AD8u;
    // 0x221ad8: 0x263003c8  addiu       $s0, $s1, 0x3C8
    ctx->pc = 0x221ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x221adc: 0x0  nop
    ctx->pc = 0x221adcu;
    // NOP
label_221ae0:
    // 0x221ae0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x221ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221ae4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x221AE4u;
    {
        const bool branch_taken_0x221ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AE4u;
        // 0x221ae8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ae4) {
            ctx->pc = 0x221AF8u;
            goto label_221af8;
        }
    }
    ctx->pc = 0x221AECu;
    // 0x221aec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x221aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x221af0: 0x1053000b  beq         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x221AF0u;
    {
        const bool branch_taken_0x221af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x221AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AF0u;
        // 0x221af4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221af0) {
            ctx->pc = 0x221B20u;
            goto label_221b20;
        }
    }
    ctx->pc = 0x221AF8u;
label_221af8:
    // 0x221af8: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x221af8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x221afc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x221AFCu;
    {
        const bool branch_taken_0x221afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221AFCu;
        // 0x221b00: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221afc) {
            ctx->pc = 0x221AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221ae0;
        }
    }
    ctx->pc = 0x221B04u;
    // 0x221b04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x221b04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b08: 0x263003c8  addiu       $s0, $s1, 0x3C8
    ctx->pc = 0x221b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x221b0c: 0x0  nop
    ctx->pc = 0x221b0cu;
    // NOP
label_221b10:
    // 0x221b10: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x221b10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x221b14: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x221B14u;
    {
        const bool branch_taken_0x221b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B14u;
        // 0x221b18: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b14) {
            ctx->pc = 0x221B5Cu;
            goto label_221b5c;
        }
    }
    ctx->pc = 0x221B1Cu;
    // 0x221b1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x221b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_221b20:
    // 0x221b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b24: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x221B24u;
    SET_GPR_U32(ctx, 31, 0x221B2Cu);
    ctx->pc = 0x221B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B24u;
    // 0x221b28: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x221B24u, 0x221B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B2Cu;
label_221b2c:
    // 0x221b2c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x221b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x221b30: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x221B30u;
    {
        const bool branch_taken_0x221b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B30u;
        // 0x221b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b30) {
            ctx->pc = 0x221BD0u;
            goto label_221bd0;
        }
    }
    ctx->pc = 0x221B38u;
    // 0x221b38: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x221B38u;
    SET_GPR_U32(ctx, 31, 0x221B40u);
    ctx->pc = 0x221B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B38u;
    // 0x221b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x221B38u, 0x221B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B40u;
label_221b40:
    // 0x221b40: 0x16620023  bne         $s3, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x221B40u;
    {
        const bool branch_taken_0x221b40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x221B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B40u;
        // 0x221b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b40) {
            ctx->pc = 0x221BD0u;
            goto label_221bd0;
        }
    }
    ctx->pc = 0x221B48u;
    // 0x221b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b4c: 0xc089974  jal         func_2265D0
    ctx->pc = 0x221B4Cu;
    SET_GPR_U32(ctx, 31, 0x221B54u);
    ctx->pc = 0x221B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B4Cu;
    // 0x221b50: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x221B4Cu, 0x221B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B54u;
label_221b54:
    // 0x221b54: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x221B54u;
    {
        const bool branch_taken_0x221b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B54u;
        // 0x221b58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b54) {
            ctx->pc = 0x221BD0u;
            goto label_221bd0;
        }
    }
    ctx->pc = 0x221B5Cu;
label_221b5c:
    // 0x221b5c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x221b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x221b60: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x221B60u;
    {
        const bool branch_taken_0x221b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B60u;
        // 0x221b64: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b60) {
            ctx->pc = 0x221B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221b10;
        }
    }
    ctx->pc = 0x221B68u;
    // 0x221b68: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x221B68u;
    {
        const bool branch_taken_0x221b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B68u;
        // 0x221b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b68) {
            ctx->pc = 0x221BD0u;
            goto label_221bd0;
        }
    }
    ctx->pc = 0x221B70u;
label_221b70:
    // 0x221b70: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x221b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b74: 0x263003c8  addiu       $s0, $s1, 0x3C8
    ctx->pc = 0x221b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
label_221b78:
    // 0x221b78: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x221b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x221b7c: 0x14530010  bne         $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x221B7Cu;
    {
        const bool branch_taken_0x221b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x221B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B7Cu;
        // 0x221b80: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b7c) {
            ctx->pc = 0x221BC0u;
            goto label_221bc0;
        }
    }
    ctx->pc = 0x221B84u;
    // 0x221b84: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x221b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x221b88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x221B88u;
    {
        const bool branch_taken_0x221b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B88u;
        // 0x221b8c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b88) {
            ctx->pc = 0x221BB0u;
            goto label_221bb0;
        }
    }
    ctx->pc = 0x221B90u;
    // 0x221b90: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x221B90u;
    SET_GPR_U32(ctx, 31, 0x221B98u);
    ctx->pc = 0x221B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221B90u;
    // 0x221b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x221B90u, 0x221B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221B98u;
label_221b98:
    // 0x221b98: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x221B98u;
    {
        const bool branch_taken_0x221b98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x221B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221B98u;
        // 0x221b9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b98) {
            ctx->pc = 0x221BB0u;
            goto label_221bb0;
        }
    }
    ctx->pc = 0x221BA0u;
    // 0x221ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x221ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ba4: 0xc089974  jal         func_2265D0
    ctx->pc = 0x221BA4u;
    SET_GPR_U32(ctx, 31, 0x221BACu);
    ctx->pc = 0x221BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BA4u;
    // 0x221ba8: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x221BA4u, 0x221BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BACu;
label_221bac:
    // 0x221bac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x221bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_221bb0:
    // 0x221bb0: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x221BB0u;
    SET_GPR_U32(ctx, 31, 0x221BB8u);
    ctx->pc = 0x221BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221BB0u;
    // 0x221bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x221BB0u, 0x221BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BB8u;
label_221bb8:
    // 0x221bb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x221BB8u;
    {
        const bool branch_taken_0x221bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BB8u;
        // 0x221bbc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bb8) {
            ctx->pc = 0x221BD0u;
            goto label_221bd0;
        }
    }
    ctx->pc = 0x221BC0u;
label_221bc0:
    // 0x221bc0: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x221bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x221bc4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x221BC4u;
    {
        const bool branch_taken_0x221bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BC4u;
        // 0x221bc8: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221bc4) {
            ctx->pc = 0x221B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221b78;
        }
    }
    ctx->pc = 0x221BCCu;
    // 0x221bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221bd0:
    // 0x221bd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x221bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221bd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x221bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x221bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221bdc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x221bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221be4: 0x3e00008  jr          $ra
    ctx->pc = 0x221BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221BE4u;
        // 0x221be8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221BECu;
    // 0x221bec: 0x0  nop
    ctx->pc = 0x221becu;
    // NOP
    ctx->pc = 0x221bf0u;
}
