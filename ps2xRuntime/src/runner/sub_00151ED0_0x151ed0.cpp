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

// Function: sub_00151ED0
// Address: 0x151ed0 - 0x1520b0
void sub_00151ED0_0x151ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151ED0_0x151ed0");
#endif

    switch (ctx->pc) {
        case 0x151eecu: goto label_151eec;
        case 0x151f1cu: goto label_151f1c;
        case 0x151f48u: goto label_151f48;
        default: break;
    }

    ctx->pc = 0x151ed0u;

    // 0x151ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151ed4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x151ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151ee4: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x151EE4u;
    SET_GPR_U32(ctx, 31, 0x151EECu);
    ctx->pc = 0x151EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EE4u;
    // 0x151ee8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x151EE4u, 0x151EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EECu;
label_151eec:
    // 0x151eec: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x151eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x151ef0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x151ef4: 0x8cc24448  lw          $v0, 0x4448($a2)
    ctx->pc = 0x151ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E4448u));
    // 0x151ef8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x151ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151efc: 0x24e54468  addiu       $a1, $a3, 0x4468
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 17512));
    // 0x151f00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151F00u;
    {
        const bool branch_taken_0x151f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F00u;
        // 0x151f04: 0x24c34448  addiu       $v1, $a2, 0x4448 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 17480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f00) {
            ctx->pc = 0x151F18u;
            goto label_151f18;
        }
    }
    ctx->pc = 0x151F08u;
    // 0x151f08: 0xacd04448  sw          $s0, 0x4448($a2)
    ctx->pc = 0x151f08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 17480), GPR_U32(ctx, 16));
    // 0x151f0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x151F0Cu;
    {
        const bool branch_taken_0x151f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F0Cu;
        // 0x151f10: 0xacf14468  sw          $s1, 0x4468($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 17512), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f0c) {
            ctx->pc = 0x151F40u;
            goto label_151f40;
        }
    }
    ctx->pc = 0x151F14u;
    // 0x151f14: 0x0  nop
    ctx->pc = 0x151f14u;
    // NOP
label_151f18:
    // 0x151f18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x151f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_151f1c:
    // 0x151f1c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x151f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x151f20: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x151f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x151f24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x151F24u;
    {
        const bool branch_taken_0x151f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F24u;
        // 0x151f28: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f24) {
            ctx->pc = 0x151F40u;
            goto label_151f40;
        }
    }
    ctx->pc = 0x151F2Cu;
    // 0x151f2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151f30: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x151F30u;
    {
        const bool branch_taken_0x151f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F30u;
        // 0x151f34: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f30) {
            ctx->pc = 0x151F1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151f1c;
        }
    }
    ctx->pc = 0x151F38u;
    // 0x151f38: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x151f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x151f3c: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x151f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
label_151f40:
    // 0x151f40: 0xc110cc4  jal         func_443310
    ctx->pc = 0x151F40u;
    SET_GPR_U32(ctx, 31, 0x151F48u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x151F40u, 0x151F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F48u;
label_151f48:
    // 0x151f48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151f54: 0x3e00008  jr          $ra
    ctx->pc = 0x151F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F54u;
        // 0x151f58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151F5Cu;
    // 0x151f5c: 0x0  nop
    ctx->pc = 0x151f5cu;
    // NOP
    // 0x151f60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x151f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x151f64: 0x0  nop
    ctx->pc = 0x151f64u;
    // NOP
    // 0x151f68: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x151f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151f6c: 0x0  nop
    ctx->pc = 0x151f6cu;
    // NOP
    // 0x151f70: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x151f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x151f74: 0x0  nop
    ctx->pc = 0x151f74u;
    // NOP
    // 0x151f78: 0xac640078  sw          $a0, 0x78($v1)
    ctx->pc = 0x151f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 4));
    // 0x151f7c: 0x0  nop
    ctx->pc = 0x151f7cu;
    // NOP
    // 0x151f80: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x151f80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
    // 0x151f84: 0x0  nop
    ctx->pc = 0x151f84u;
    // NOP
    // 0x151f88: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x151f88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x151f8c: 0x0  nop
    ctx->pc = 0x151f8cu;
    // NOP
    // 0x151f90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x151f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x151f94: 0x0  nop
    ctx->pc = 0x151f94u;
    // NOP
    // 0x151f98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151f9c: 0x0  nop
    ctx->pc = 0x151f9cu;
    // NOP
    // 0x151fa0: 0x0  nop
    ctx->pc = 0x151fa0u;
    // NOP
    // 0x151fa4: 0x0  nop
    ctx->pc = 0x151fa4u;
    // NOP
    // 0x151fa8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151fac: 0x0  nop
    ctx->pc = 0x151facu;
    // NOP
    // 0x151fb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151fb4: 0x0  nop
    ctx->pc = 0x151fb4u;
    // NOP
    // 0x151fb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151fbc: 0x0  nop
    ctx->pc = 0x151fbcu;
    // NOP
    // 0x151fc0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x151fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x151fc4: 0x0  nop
    ctx->pc = 0x151fc4u;
    // NOP
    // 0x151fc8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x151fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x151fcc: 0x0  nop
    ctx->pc = 0x151fccu;
    // NOP
    // 0x151fd0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x151fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x151fd4: 0x0  nop
    ctx->pc = 0x151fd4u;
    // NOP
    // 0x151fd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x151fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151fdc: 0x0  nop
    ctx->pc = 0x151fdcu;
    // NOP
    // 0x151fe0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x151fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151fe4: 0x0  nop
    ctx->pc = 0x151fe4u;
    // NOP
    // 0x151fe8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x151fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x151fec: 0x0  nop
    ctx->pc = 0x151fecu;
    // NOP
    // 0x151ff0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151ff4: 0x0  nop
    ctx->pc = 0x151ff4u;
    // NOP
    // 0x151ff8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151ffc: 0x0  nop
    ctx->pc = 0x151ffcu;
    // NOP
    // 0x152000: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x152000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x152004: 0x0  nop
    ctx->pc = 0x152004u;
    // NOP
    // 0x152008: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x152008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15200c: 0x0  nop
    ctx->pc = 0x15200cu;
    // NOP
    // 0x152010: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x152010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x152014: 0x0  nop
    ctx->pc = 0x152014u;
    // NOP
    // 0x152018: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x152018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x15201c: 0x0  nop
    ctx->pc = 0x15201cu;
    // NOP
    // 0x152020: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x152024: 0x0  nop
    ctx->pc = 0x152024u;
    // NOP
    // 0x152028: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x152028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15202c: 0x0  nop
    ctx->pc = 0x15202cu;
    // NOP
    // 0x152030: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x152034: 0x0  nop
    ctx->pc = 0x152034u;
    // NOP
    // 0x152038: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15203c: 0x0  nop
    ctx->pc = 0x15203cu;
    // NOP
    // 0x152040: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x152040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x152044: 0x0  nop
    ctx->pc = 0x152044u;
    // NOP
    // 0x152048: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15204c: 0x0  nop
    ctx->pc = 0x15204cu;
    // NOP
    // 0x152050: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x152050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x152054: 0x0  nop
    ctx->pc = 0x152054u;
    // NOP
    // 0x152058: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15205c: 0x0  nop
    ctx->pc = 0x15205cu;
    // NOP
    // 0x152060: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x152060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x152064: 0x0  nop
    ctx->pc = 0x152064u;
    // NOP
    // 0x152068: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15206c: 0x0  nop
    ctx->pc = 0x15206cu;
    // NOP
    // 0x152070: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152074: 0x0  nop
    ctx->pc = 0x152074u;
    // NOP
    // 0x152078: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x152078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15207c: 0x0  nop
    ctx->pc = 0x15207cu;
    // NOP
    // 0x152080: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x152084: 0x0  nop
    ctx->pc = 0x152084u;
    // NOP
    // 0x152088: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x152088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15208c: 0x0  nop
    ctx->pc = 0x15208cu;
    // NOP
    // 0x152090: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x152090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x152094: 0x0  nop
    ctx->pc = 0x152094u;
    // NOP
    // 0x152098: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x152098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15209c: 0x0  nop
    ctx->pc = 0x15209cu;
    // NOP
    // 0x1520a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1520a4: 0x0  nop
    ctx->pc = 0x1520a4u;
    // NOP
    // 0x1520a8: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x1520a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1520ac: 0x0  nop
    ctx->pc = 0x1520acu;
    // NOP
    ctx->pc = 0x1520b0u;
}
