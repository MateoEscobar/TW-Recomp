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

// Function: sub_004AD9C0
// Address: 0x4ad9c0 - 0x4ada78
void sub_004AD9C0_0x4ad9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD9C0_0x4ad9c0");
#endif

    switch (ctx->pc) {
        case 0x4ada14u: goto label_4ada14;
        case 0x4ada2cu: goto label_4ada2c;
        case 0x4ada60u: goto label_4ada60;
        default: break;
    }

    ctx->pc = 0x4ad9c0u;

    // 0x4ad9c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad9c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad9c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ad9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ad9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad9d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad9d4: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ad9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ad9d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD9D8u;
    {
        const bool branch_taken_0x4ad9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD9D8u;
        // 0x4ad9dc: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad9d8) {
            ctx->pc = 0x4AD9ECu;
            goto label_4ad9ec;
        }
    }
    ctx->pc = 0x4AD9E0u;
    // 0x4ad9e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ad9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad9e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4AD9E4u;
    {
        const bool branch_taken_0x4ad9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD9E4u;
        // 0x4ad9e8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad9e4) {
            ctx->pc = 0x4ADA18u;
            goto label_4ada18;
        }
    }
    ctx->pc = 0x4AD9ECu;
label_4ad9ec:
    // 0x4ad9ec: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4ad9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4ad9f0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD9F0u;
    {
        const bool branch_taken_0x4ad9f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD9F0u;
        // 0x4ad9f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad9f0) {
            ctx->pc = 0x4ADA18u;
            goto label_4ada18;
        }
    }
    ctx->pc = 0x4AD9F8u;
    // 0x4ad9f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ad9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ad9fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4ad9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4ada00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4ada00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4ada04: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ADA04u;
    {
        const bool branch_taken_0x4ada04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4ADA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADA04u;
        // 0x4ada08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ada04) {
            ctx->pc = 0x4ADA18u;
            goto label_4ada18;
        }
    }
    ctx->pc = 0x4ADA0Cu;
    // 0x4ada0c: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4ADA0Cu;
    SET_GPR_U32(ctx, 31, 0x4ADA14u);
    ctx->pc = 0x4ADA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADA0Cu;
    // 0x4ada10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ADA0Cu, 0x4ADA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADA14u;
label_4ada14:
    // 0x4ada14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ada14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ada18:
    // 0x4ada18: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4ADA18u;
    {
        const bool branch_taken_0x4ada18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADA18u;
        // 0x4ada1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ada18) {
            ctx->pc = 0x4ADA64u;
            goto label_4ada64;
        }
    }
    ctx->pc = 0x4ADA20u;
    // 0x4ada20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ada20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ada24: 0xc12af22  jal         func_4ABC88
    ctx->pc = 0x4ADA24u;
    SET_GPR_U32(ctx, 31, 0x4ADA2Cu);
    ctx->pc = 0x4ADA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADA24u;
    // 0x4ada28: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABC88u, 0x4ADA24u, 0x4ADA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADA2Cu;
label_4ada2c:
    // 0x4ada2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ada2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ada30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ada30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ada34: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4ADA34u;
    {
        const bool branch_taken_0x4ada34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ada34) {
            ctx->pc = 0x4ADA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ADA34u;
            // 0x4ada38: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ADA50u;
            goto label_4ada50;
        }
    }
    ctx->pc = 0x4ADA3Cu;
    // 0x4ada3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ada3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ada40: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ada40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ada44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4ada44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4ada48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4ADA48u;
    {
        const bool branch_taken_0x4ada48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADA48u;
        // 0x4ada4c: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ada48) {
            ctx->pc = 0x4ADA60u;
            goto label_4ada60;
        }
    }
    ctx->pc = 0x4ADA50u;
label_4ada50:
    // 0x4ada50: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4ada50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4ada54: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x4ada54u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x4ada58: 0xc12bed0  jal         func_4AFB40
    ctx->pc = 0x4ADA58u;
    SET_GPR_U32(ctx, 31, 0x4ADA60u);
    ctx->pc = 0x4ADA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADA58u;
    // 0x4ada5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB40u, 0x4ADA58u, 0x4ADA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADA60u;
label_4ada60:
    // 0x4ada60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ada60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ada64:
    // 0x4ada64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ada64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ada68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ada68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ada6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADA6Cu;
        // 0x4ada70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADA74u;
    // 0x4ada74: 0x0  nop
    ctx->pc = 0x4ada74u;
    // NOP
    ctx->pc = 0x4ada78u;
}
