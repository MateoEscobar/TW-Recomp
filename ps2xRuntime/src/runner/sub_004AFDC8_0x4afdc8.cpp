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

// Function: sub_004AFDC8
// Address: 0x4afdc8 - 0x4aff68
void sub_004AFDC8_0x4afdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFDC8_0x4afdc8");
#endif

    switch (ctx->pc) {
        case 0x4afdfcu: goto label_4afdfc;
        case 0x4afe10u: goto label_4afe10;
        default: break;
    }

    ctx->pc = 0x4afdc8u;

    // 0x4afdc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4afdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4afdcc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4afdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4afdd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4afdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4afdd4: 0x24420668  addiu       $v0, $v0, 0x668
    ctx->pc = 0x4afdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x4afdd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4afdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4afddc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4afddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4afde0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4afde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afde4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x4afde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x4afde8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x4afde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x4afdec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AFDECu;
    {
        const bool branch_taken_0x4afdec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFDECu;
        // 0x4afdf0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afdec) {
            ctx->pc = 0x4AFDFCu;
            goto label_4afdfc;
        }
    }
    ctx->pc = 0x4AFDF4u;
    // 0x4afdf4: 0xc136792  jal         func_4D9E48
    ctx->pc = 0x4AFDF4u;
    SET_GPR_U32(ctx, 31, 0x4AFDFCu);
    ctx->pc = 0x4D9E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9E48u, 0x4AFDF4u, 0x4AFDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFDFCu;
label_4afdfc:
    // 0x4afdfc: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4afdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4afe00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFE00u;
    {
        const bool branch_taken_0x4afe00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFE00u;
        // 0x4afe04: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afe00) {
            ctx->pc = 0x4AFE14u;
            goto label_4afe14;
        }
    }
    ctx->pc = 0x4AFE08u;
    // 0x4afe08: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4AFE08u;
    SET_GPR_U32(ctx, 31, 0x4AFE10u);
    ctx->pc = 0x4AFE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFE08u;
    // 0x4afe0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4AFE08u, 0x4AFE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AFE10u;
label_4afe10:
    // 0x4afe10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4afe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4afe14:
    // 0x4afe14: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4afe14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4afe18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4afe18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afe1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFE1Cu;
        // 0x4afe20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFE24u;
    // 0x4afe24: 0x0  nop
    ctx->pc = 0x4afe24u;
    // NOP
    // 0x4afe28: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4afe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4afe2c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4afe2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afe30: 0x24420668  addiu       $v0, $v0, 0x668
    ctx->pc = 0x4afe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x4afe34: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4afe34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afe38: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFE38u;
    {
        const bool branch_taken_0x4afe38 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AFE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFE38u;
        // 0x4afe3c: 0xace20028  sw          $v0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afe38) {
            ctx->pc = 0x4AFE4Cu;
            goto label_4afe4c;
        }
    }
    ctx->pc = 0x4AFE40u;
    // 0x4afe40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4afe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4afe44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFE44u;
    {
        const bool branch_taken_0x4afe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFE44u;
        // 0x4afe48: 0xa0e2001a  sb          $v0, 0x1A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afe44) {
            ctx->pc = 0x4AFE50u;
            goto label_4afe50;
        }
    }
    ctx->pc = 0x4AFE4Cu;
label_4afe4c:
    // 0x4afe4c: 0xa0e0001a  sb          $zero, 0x1A($a3)
    ctx->pc = 0x4afe4cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 0));
label_4afe50:
    // 0x4afe50: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4afe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4afe54: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4afe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4afe58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4afe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4afe5c: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x4afe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x4afe60: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x4afe60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x4afe64: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x4afe64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afe68: 0xa4e30018  sh          $v1, 0x18($a3)
    ctx->pc = 0x4afe68u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x4afe6c: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x4afe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x4afe70: 0xace5001c  sw          $a1, 0x1C($a3)
    ctx->pc = 0x4afe70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
    // 0x4afe74: 0xa0e0001b  sb          $zero, 0x1B($a3)
    ctx->pc = 0x4afe74u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4afe78: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4afe78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x4afe7c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFE7Cu;
        // 0x4afe80: 0xace00020  sw          $zero, 0x20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFE84u;
    // 0x4afe84: 0x0  nop
    ctx->pc = 0x4afe84u;
    // NOP
    // 0x4afe88: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFE88u;
    {
        const bool branch_taken_0x4afe88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFE88u;
        // 0x4afe8c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afe88) {
            ctx->pc = 0x4AFE9Cu;
            goto label_4afe9c;
        }
    }
    ctx->pc = 0x4AFE90u;
    // 0x4afe90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4afe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4afe94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFE94u;
    {
        const bool branch_taken_0x4afe94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFE94u;
        // 0x4afe98: 0xa0e2001a  sb          $v0, 0x1A($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afe94) {
            ctx->pc = 0x4AFEA0u;
            goto label_4afea0;
        }
    }
    ctx->pc = 0x4AFE9Cu;
label_4afe9c:
    // 0x4afe9c: 0xa0e0001a  sb          $zero, 0x1A($a3)
    ctx->pc = 0x4afe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 0));
label_4afea0:
    // 0x4afea0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4afea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4afea4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4afea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4afea8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4afea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4afeac: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4afeacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4afeb0: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x4afeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x4afeb4: 0xa4e20018  sh          $v0, 0x18($a3)
    ctx->pc = 0x4afeb4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x4afeb8: 0xfce30010  sd          $v1, 0x10($a3)
    ctx->pc = 0x4afeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 3));
    // 0x4afebc: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x4afebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
    // 0x4afec0: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x4afec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x4afec4: 0xa0e0001b  sb          $zero, 0x1B($a3)
    ctx->pc = 0x4afec4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x4afec8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFEC8u;
        // 0x4afecc: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFED0u;
    // 0x4afed0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4afed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afed4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4afed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4afed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AFED8u;
    {
        const bool branch_taken_0x4afed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afed8) {
            ctx->pc = 0x4AFEE8u;
            goto label_4afee8;
        }
    }
    ctx->pc = 0x4AFEE0u;
    // 0x4afee0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFEE0u;
        // 0x4afee4: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFEE8u;
label_4afee8:
    // 0x4afee8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFEE8u;
        // 0x4afeec: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFEF0u;
    // 0x4afef0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4afef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afef4: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x4afef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4afef8: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFEF8u;
    {
        const bool branch_taken_0x4afef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4afef8) {
            ctx->pc = 0x4AFEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFEF8u;
            // 0x4afefc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFF04u;
            goto label_4aff04;
        }
    }
    ctx->pc = 0x4AFF00u;
    // 0x4aff00: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x4aff00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_4aff04:
    // 0x4aff04: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFF04u;
    {
        const bool branch_taken_0x4aff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aff04) {
            ctx->pc = 0x4AFF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFF04u;
            // 0x4aff08: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFF10u;
            goto label_4aff10;
        }
    }
    ctx->pc = 0x4AFF0Cu;
    // 0x4aff0c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x4aff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_4aff10:
    // 0x4aff10: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AFF10u;
    {
        const bool branch_taken_0x4aff10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF10u;
        // 0x4aff14: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff10) {
            ctx->pc = 0x4AFF30u;
            goto label_4aff30;
        }
    }
    ctx->pc = 0x4AFF18u;
    // 0x4aff18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AFF18u;
    {
        const bool branch_taken_0x4aff18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aff18) {
            ctx->pc = 0x4AFF28u;
            goto label_4aff28;
        }
    }
    ctx->pc = 0x4AFF20u;
    // 0x4aff20: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF20u;
        // 0x4aff24: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFF28u;
label_4aff28:
    // 0x4aff28: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF28u;
        // 0x4aff2c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFF30u;
label_4aff30:
    // 0x4aff30: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF30u;
        // 0x4aff34: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFF38u;
    // 0x4aff38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4aff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aff3c: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x4aff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4aff40: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFF40u;
    {
        const bool branch_taken_0x4aff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aff40) {
            ctx->pc = 0x4AFF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFF40u;
            // 0x4aff44: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFF4Cu;
            goto label_4aff4c;
        }
    }
    ctx->pc = 0x4AFF48u;
    // 0x4aff48: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x4aff48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_4aff4c:
    // 0x4aff4c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFF4Cu;
    {
        const bool branch_taken_0x4aff4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aff4c) {
            ctx->pc = 0x4AFF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFF4Cu;
            // 0x4aff50: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFF58u;
            goto label_4aff58;
        }
    }
    ctx->pc = 0x4AFF54u;
    // 0x4aff54: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x4aff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_4aff58:
    // 0x4aff58: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x4aff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x4aff5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AFF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF5Cu;
        // 0x4aff60: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AFF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AFF64u;
    // 0x4aff64: 0x0  nop
    ctx->pc = 0x4aff64u;
    // NOP
    ctx->pc = 0x4aff68u;
}
