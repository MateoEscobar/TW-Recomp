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

// Function: sub_00423F70
// Address: 0x423f70 - 0x424098
void sub_00423F70_0x423f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423F70_0x423f70");
#endif

    switch (ctx->pc) {
        case 0x423fd8u: goto label_423fd8;
        case 0x423fe0u: goto label_423fe0;
        case 0x424014u: goto label_424014;
        default: break;
    }

    ctx->pc = 0x423f70u;

    // 0x423f70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x423f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x423f74: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x423f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x423f78: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x423f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x423f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x423f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423f80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x423f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x423f84: 0x30f300ff  andi        $s3, $a3, 0xFF
    ctx->pc = 0x423f84u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x423f88: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x423f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x423f8c: 0x30d400ff  andi        $s4, $a2, 0xFF
    ctx->pc = 0x423f8cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x423f90: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x423f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x423f94: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x423f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x423f98: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x423f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x423f9c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x423f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x423fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423fa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x423fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x423fa8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x423FA8u;
    {
        const bool branch_taken_0x423fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x423FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423FA8u;
        // 0x423fac: 0x30b500ff  andi        $s5, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x423fa8) {
            ctx->pc = 0x424068u;
            goto label_424068;
        }
    }
    ctx->pc = 0x423FB0u;
    // 0x423fb0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x423fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x423fb4: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x423FB4u;
    {
        const bool branch_taken_0x423fb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x423FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423FB4u;
        // 0x423fb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423fb4) {
            ctx->pc = 0x424068u;
            goto label_424068;
        }
    }
    ctx->pc = 0x423FBCu;
    // 0x423fbc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x423fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x423fc0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x423fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x423fc4: 0x2457e948  addiu       $s7, $v0, -0x16B8
    ctx->pc = 0x423fc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961480));
    // 0x423fc8: 0x2476e8f8  addiu       $s6, $v1, -0x1708
    ctx->pc = 0x423fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961400));
    // 0x423fcc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x423fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x423fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x423fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423fd4: 0x0  nop
    ctx->pc = 0x423fd4u;
    // NOP
label_423fd8:
    // 0x423fd8: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x423FD8u;
    SET_GPR_U32(ctx, 31, 0x423FE0u);
    ctx->pc = 0x423FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423FD8u;
    // 0x423fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x423FD8u, 0x423FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423FE0u;
label_423fe0:
    // 0x423fe0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x423fe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x423fe4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x423fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x423fe8: 0x5455001b  bnel        $v0, $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x423FE8u;
    {
        const bool branch_taken_0x423fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x423fe8) {
            ctx->pc = 0x423FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423FE8u;
            // 0x423fec: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424058u;
            goto label_424058;
        }
    }
    ctx->pc = 0x423FF0u;
    // 0x423ff0: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x423ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x423ff4: 0x54540018  bnel        $v0, $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x423FF4u;
    {
        const bool branch_taken_0x423ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x423ff4) {
            ctx->pc = 0x423FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x423FF4u;
            // 0x423ff8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424058u;
            goto label_424058;
        }
    }
    ctx->pc = 0x423FFCu;
    // 0x423ffc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x423ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x424000: 0x54530015  bnel        $v0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x424000u;
    {
        const bool branch_taken_0x424000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x424000) {
            ctx->pc = 0x424004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424000u;
            // 0x424004: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424058u;
            goto label_424058;
        }
    }
    ctx->pc = 0x424008u;
    // 0x424008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x424008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42400c: 0xc109026  jal         func_424098
    ctx->pc = 0x42400Cu;
    SET_GPR_U32(ctx, 31, 0x424014u);
    ctx->pc = 0x424010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42400Cu;
    // 0x424010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x42400Cu, 0x424014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424014u;
label_424014:
    // 0x424014: 0x103142  srl         $a2, $s0, 5
    ctx->pc = 0x424014u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x424018: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x424018u;
    {
        const bool branch_taken_0x424018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424018u;
        // 0x42401c: 0x3205001f  andi        $a1, $s0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x424018) {
            ctx->pc = 0x424038u;
            goto label_424038;
        }
    }
    ctx->pc = 0x424020u;
    // 0x424020: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x424020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x424024: 0xb22004  sllv        $a0, $s2, $a1
    ctx->pc = 0x424024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
    // 0x424028: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x424028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x42402c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42402cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x424030: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x424030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x424034: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x424034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_424038:
    // 0x424038: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x424038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x42403c: 0xb21804  sllv        $v1, $s2, $a1
    ctx->pc = 0x42403cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
    // 0x424040: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x424040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x424044: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x424044u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x424048: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x424048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42404c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42404cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x424050: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x424050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x424054: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x424054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_424058:
    // 0x424058: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x424058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x42405c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x42405cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x424060: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x424060u;
    {
        const bool branch_taken_0x424060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424060u;
        // 0x424064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424060) {
            ctx->pc = 0x423FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_423fd8;
        }
    }
    ctx->pc = 0x424068u;
label_424068:
    // 0x424068: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x424068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x42406c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x42406cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x424070: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x424070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x424074: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x424074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x424078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x424078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42407c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x42407cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x424080: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x424080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x424084: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x424084u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x424088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x424088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42408c: 0x3e00008  jr          $ra
    ctx->pc = 0x42408Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42408Cu;
        // 0x424090: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42408Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424094u;
    // 0x424094: 0x0  nop
    ctx->pc = 0x424094u;
    // NOP
    ctx->pc = 0x424098u;
}
