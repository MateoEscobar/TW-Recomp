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

// Function: sub_0042BA58
// Address: 0x42ba58 - 0x42bc98
void sub_0042BA58_0x42ba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042BA58_0x42ba58");
#endif

    switch (ctx->pc) {
        case 0x42ba6cu: goto label_42ba6c;
        case 0x42ba80u: goto label_42ba80;
        case 0x42bb38u: goto label_42bb38;
        case 0x42bb70u: goto label_42bb70;
        case 0x42bc20u: goto label_42bc20;
        default: break;
    }

    ctx->pc = 0x42ba58u;

    // 0x42ba58: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x42ba58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ba5c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x42ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x42ba60: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x42ba60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42ba64: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x42BA64u;
    {
        const bool branch_taken_0x42ba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ba64) {
            ctx->pc = 0x42BA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42BA64u;
            // 0x42ba68: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42BA74u;
            goto label_42ba74;
        }
    }
    ctx->pc = 0x42BA6Cu;
label_42ba6c:
    // 0x42ba6c: 0x3e00008  jr          $ra
    ctx->pc = 0x42BA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA6Cu;
        // 0x42ba70: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BA74u;
label_42ba74:
    // 0x42ba74: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x42ba74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42ba78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42BA78u;
    {
        const bool branch_taken_0x42ba78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA78u;
        // 0x42ba7c: 0x38820004  xori        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ba78) {
            ctx->pc = 0x42BA88u;
            goto label_42ba88;
        }
    }
    ctx->pc = 0x42BA80u;
label_42ba80:
    // 0x42ba80: 0x3e00008  jr          $ra
    ctx->pc = 0x42BA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA80u;
        // 0x42ba84: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BA88u;
label_42ba88:
    // 0x42ba88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42BA88u;
    {
        const bool branch_taken_0x42ba88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA88u;
        // 0x42ba8c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ba88) {
            ctx->pc = 0x42BAB0u;
            goto label_42bab0;
        }
    }
    ctx->pc = 0x42BA90u;
    // 0x42ba90: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x42BA90u;
    {
        const bool branch_taken_0x42ba90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42ba90) {
            ctx->pc = 0x42BA6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ba6c;
        }
    }
    ctx->pc = 0x42BA98u;
    // 0x42ba98: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x42ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x42ba9c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x42ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x42baa0: 0x1043fff2  beq         $v0, $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x42BAA0u;
    {
        const bool branch_taken_0x42baa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x42BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BAA0u;
        // 0x42baa4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42baa0) {
            ctx->pc = 0x42BA6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ba6c;
        }
    }
    ctx->pc = 0x42BAA8u;
    // 0x42baa8: 0x3e00008  jr          $ra
    ctx->pc = 0x42BAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BAA8u;
        // 0x42baac: 0x2442f288  addiu       $v0, $v0, -0xD78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BAB0u;
label_42bab0:
    // 0x42bab0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x42BAB0u;
    {
        const bool branch_taken_0x42bab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BAB0u;
        // 0x42bab4: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bab0) {
            ctx->pc = 0x42BA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ba80;
        }
    }
    ctx->pc = 0x42BAB8u;
    // 0x42bab8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x42BAB8u;
    {
        const bool branch_taken_0x42bab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BAB8u;
        // 0x42babc: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bab8) {
            ctx->pc = 0x42BAF4u;
            goto label_42baf4;
        }
    }
    ctx->pc = 0x42BAC0u;
    // 0x42bac0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x42BAC0u;
    {
        const bool branch_taken_0x42bac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BAC0u;
        // 0x42bac4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bac0) {
            ctx->pc = 0x42BA6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ba6c;
        }
    }
    ctx->pc = 0x42BAC8u;
    // 0x42bac8: 0xdd040000  ld          $a0, 0x0($t0)
    ctx->pc = 0x42bac8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x42bacc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x42baccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x42bad0: 0xdd030008  ld          $v1, 0x8($t0)
    ctx->pc = 0x42bad0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x42bad4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x42bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x42bad8: 0xdd040010  ld          $a0, 0x10($t0)
    ctx->pc = 0x42bad8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x42badc: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x42badcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x42bae0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x42bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x42bae4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x42bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x42bae8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x42bae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x42baec: 0x3e00008  jr          $ra
    ctx->pc = 0x42BAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BAECu;
        // 0x42baf0: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BAF4u;
label_42baf4:
    // 0x42baf4: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x42BAF4u;
    {
        const bool branch_taken_0x42baf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BAF4u;
        // 0x42baf8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42baf4) {
            ctx->pc = 0x42BA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42ba80;
        }
    }
    ctx->pc = 0x42BAFCu;
    // 0x42bafc: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x42bafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x42bb00: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x42bb00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x42bb04: 0xdd0b0010  ld          $t3, 0x10($t0)
    ctx->pc = 0x42bb04u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x42bb08: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x42bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x42bb0c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x42bb0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x42bb10: 0x32023  negu        $a0, $v1
    ctx->pc = 0x42bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x42bb14: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x42bb14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x42bb18: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x42bb18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x42bb1c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x42BB1Cu;
    {
        const bool branch_taken_0x42bb1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BB1Cu;
        // 0x42bb20: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bb1c) {
            ctx->pc = 0x42BB94u;
            goto label_42bb94;
        }
    }
    ctx->pc = 0x42BB24u;
    // 0x42bb24: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x42bb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x42bb28: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x42BB28u;
    {
        const bool branch_taken_0x42bb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BB28u;
        // 0x42bb2c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bb28) {
            ctx->pc = 0x42BB5Cu;
            goto label_42bb5c;
        }
    }
    ctx->pc = 0x42BB30u;
    // 0x42bb30: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x42bb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x42bb34: 0x0  nop
    ctx->pc = 0x42bb34u;
    // NOP
label_42bb38:
    // 0x42bb38: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x42bb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x42bb3c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x42bb3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x42bb40: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x42bb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x42bb44: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x42bb44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x42bb48: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x42bb48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x42bb4c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x42BB4Cu;
    {
        const bool branch_taken_0x42bb4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x42bb4c) {
            ctx->pc = 0x42BB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42bb38;
        }
    }
    ctx->pc = 0x42BB54u;
    // 0x42bb54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x42BB54u;
    {
        const bool branch_taken_0x42bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BB54u;
        // 0x42bb58: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bb54) {
            ctx->pc = 0x42BB64u;
            goto label_42bb64;
        }
    }
    ctx->pc = 0x42BB5Cu;
label_42bb5c:
    // 0x42bb5c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x42bb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x42bb60: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x42bb60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_42bb64:
    // 0x42bb64: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x42BB64u;
    {
        const bool branch_taken_0x42bb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42bb64) {
            ctx->pc = 0x42BBB8u;
            goto label_42bbb8;
        }
    }
    ctx->pc = 0x42BB6Cu;
    // 0x42bb6c: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x42bb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_42bb70:
    // 0x42bb70: 0xb187a  dsrl        $v1, $t3, 1
    ctx->pc = 0x42bb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 1);
    // 0x42bb74: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x42bb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x42bb78: 0x435825  or          $t3, $v0, $v1
    ctx->pc = 0x42bb78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x42bb7c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x42bb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x42bb80: 0x0  nop
    ctx->pc = 0x42bb80u;
    // NOP
    // 0x42bb84: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x42BB84u;
    {
        const bool branch_taken_0x42bb84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x42bb84) {
            ctx->pc = 0x42BB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42bb70;
        }
    }
    ctx->pc = 0x42BB8Cu;
    // 0x42bb8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x42BB8Cu;
    {
        const bool branch_taken_0x42bb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BB8Cu;
        // 0x42bb90: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bb8c) {
            ctx->pc = 0x42BBB8u;
            goto label_42bbb8;
        }
    }
    ctx->pc = 0x42BB94u;
label_42bb94:
    // 0x42bb94: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x42bb94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x42bb98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42BB98u;
    {
        const bool branch_taken_0x42bb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BB98u;
        // 0x42bb9c: 0x8d080004  lw          $t0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bb98) {
            ctx->pc = 0x42BBACu;
            goto label_42bbac;
        }
    }
    ctx->pc = 0x42BBA0u;
    // 0x42bba0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x42bba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42bba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x42BBA4u;
    {
        const bool branch_taken_0x42bba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BBA4u;
        // 0x42bba8: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bba4) {
            ctx->pc = 0x42BBB8u;
            goto label_42bbb8;
        }
    }
    ctx->pc = 0x42BBACu;
label_42bbac:
    // 0x42bbac: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x42bbacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42bbb0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x42bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x42bbb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x42bbb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42bbb8:
    // 0x42bbb8: 0x11050024  beq         $t0, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x42BBB8u;
    {
        const bool branch_taken_0x42bbb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x42BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BBB8u;
        // 0x42bbbc: 0x16a102d  daddu       $v0, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bbb8) {
            ctx->pc = 0x42BC4Cu;
            goto label_42bc4c;
        }
    }
    ctx->pc = 0x42BBC0u;
    // 0x42bbc0: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x42BBC0u;
    {
        const bool branch_taken_0x42bbc0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BBC0u;
        // 0x42bbc4: 0x14b102f  dsubu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bbc0) {
            ctx->pc = 0x42BBCCu;
            goto label_42bbcc;
        }
    }
    ctx->pc = 0x42BBC8u;
    // 0x42bbc8: 0x16a102f  dsubu       $v0, $t3, $t2
    ctx->pc = 0x42bbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
label_42bbcc:
    // 0x42bbcc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42BBCCu;
    {
        const bool branch_taken_0x42bbcc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x42BBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BBCCu;
        // 0x42bbd0: 0x2182f  dsubu       $v1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bbcc) {
            ctx->pc = 0x42BBE4u;
            goto label_42bbe4;
        }
    }
    ctx->pc = 0x42BBD4u;
    // 0x42bbd4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x42bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x42bbd8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x42bbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x42bbdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x42BBDCu;
    {
        const bool branch_taken_0x42bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BBDCu;
        // 0x42bbe0: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bbdc) {
            ctx->pc = 0x42BBF4u;
            goto label_42bbf4;
        }
    }
    ctx->pc = 0x42BBE4u;
label_42bbe4:
    // 0x42bbe4: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x42bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x42bbe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42bbec: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x42bbecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x42bbf0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x42bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_42bbf4:
    // 0x42bbf4: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x42bbf4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x42bbf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42bbfc: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x42bbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x42bc00: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x42bc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x42bc04: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x42bc04u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x42bc08: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x42bc08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x42bc0c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x42BC0Cu;
    {
        const bool branch_taken_0x42bc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC0Cu;
        // 0x42bc10: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bc0c) {
            ctx->pc = 0x42BC5Cu;
            goto label_42bc5c;
        }
    }
    ctx->pc = 0x42BC14u;
    // 0x42bc14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x42bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42bc18: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x42bc18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x42bc1c: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x42bc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
label_42bc20:
    // 0x42bc20: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x42bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x42bc24: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x42bc24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x42bc28: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x42bc28u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x42bc2c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x42bc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x42bc30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x42bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x42bc34: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x42bc34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x42bc38: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x42bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x42bc3c: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x42BC3Cu;
    {
        const bool branch_taken_0x42bc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC3Cu;
        // 0x42bc40: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bc3c) {
            ctx->pc = 0x42BC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42bc20;
        }
    }
    ctx->pc = 0x42BC44u;
    // 0x42bc44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x42BC44u;
    {
        const bool branch_taken_0x42bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC44u;
        // 0x42bc48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bc44) {
            ctx->pc = 0x42BC5Cu;
            goto label_42bc5c;
        }
    }
    ctx->pc = 0x42BC4Cu;
label_42bc4c:
    // 0x42bc4c: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x42bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x42bc50: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x42bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x42bc54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42bc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42bc58: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x42bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_42bc5c:
    // 0x42bc5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x42bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42bc60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42bc64: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x42bc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x42bc68: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x42bc68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x42bc6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42BC6Cu;
    {
        const bool branch_taken_0x42bc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC6Cu;
        // 0x42bc70: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bc6c) {
            ctx->pc = 0x42BC90u;
            goto label_42bc90;
        }
    }
    ctx->pc = 0x42BC74u;
    // 0x42bc74: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x42bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x42bc78: 0x5207a  dsrl        $a0, $a1, 1
    ctx->pc = 0x42bc78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) >> 1);
    // 0x42bc7c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x42bc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x42bc80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42bc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x42bc84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x42bc88: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x42bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x42bc8c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x42bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_42bc90:
    // 0x42bc90: 0x3e00008  jr          $ra
    ctx->pc = 0x42BC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC90u;
        // 0x42bc94: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BC98u;
}
