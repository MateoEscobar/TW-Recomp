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

// Function: sub_0035CDC8
// Address: 0x35cdc8 - 0x35cea0
void sub_0035CDC8_0x35cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CDC8_0x35cdc8");
#endif

    switch (ctx->pc) {
        case 0x35cdf0u: goto label_35cdf0;
        case 0x35cdf8u: goto label_35cdf8;
        case 0x35ce08u: goto label_35ce08;
        case 0x35ce20u: goto label_35ce20;
        case 0x35ce28u: goto label_35ce28;
        case 0x35ce44u: goto label_35ce44;
        case 0x35ce50u: goto label_35ce50;
        case 0x35ce60u: goto label_35ce60;
        case 0x35ce74u: goto label_35ce74;
        default: break;
    }

    ctx->pc = 0x35cdc8u;

    // 0x35cdc8: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x35cdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
    // 0x35cdcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cdd0: 0x7fb20420  sq          $s2, 0x420($sp)
    ctx->pc = 0x35cdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 18));
    // 0x35cdd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35cdd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cdd8: 0x7fb00440  sq          $s0, 0x440($sp)
    ctx->pc = 0x35cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 16));
    // 0x35cddc: 0x7fb10430  sq          $s1, 0x430($sp)
    ctx->pc = 0x35cddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 17));
    // 0x35cde0: 0x7fb30410  sq          $s3, 0x410($sp)
    ctx->pc = 0x35cde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 19));
    // 0x35cde4: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x35cde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x35cde8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35CDE8u;
    SET_GPR_U32(ctx, 31, 0x35CDF0u);
    ctx->pc = 0x35CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CDE8u;
    // 0x35cdec: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35CDE8u, 0x35CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CDF0u;
label_35cdf0:
    // 0x35cdf0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35CDF0u;
    SET_GPR_U32(ctx, 31, 0x35CDF8u);
    ctx->pc = 0x35CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CDF0u;
    // 0x35cdf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35CDF0u, 0x35CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CDF8u;
label_35cdf8:
    // 0x35cdf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35cdf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cdfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35cdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce00: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x35ce00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce04: 0x0  nop
    ctx->pc = 0x35ce04u;
    // NOP
label_35ce08:
    // 0x35ce08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35ce08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35ce0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ce0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35ce10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35ce14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ce14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce18: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x35CE18u;
    SET_GPR_U32(ctx, 31, 0x35CE20u);
    ctx->pc = 0x35CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CE18u;
    // 0x35ce1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x35CE18u, 0x35CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE20u;
label_35ce20:
    // 0x35ce20: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35CE20u;
    SET_GPR_U32(ctx, 31, 0x35CE28u);
    ctx->pc = 0x35CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CE20u;
    // 0x35ce24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35CE20u, 0x35CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE28u;
label_35ce28:
    // 0x35ce28: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x35ce28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35ce2c: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x35ce2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x35ce30: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35CE30u;
    {
        const bool branch_taken_0x35ce30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE30u;
        // 0x35ce34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ce30) {
            ctx->pc = 0x35CE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ce08;
        }
    }
    ctx->pc = 0x35CE38u;
    // 0x35ce38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35ce38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce3c: 0xc08e462  jal         func_239188
    ctx->pc = 0x35CE3Cu;
    SET_GPR_U32(ctx, 31, 0x35CE44u);
    ctx->pc = 0x35CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CE3Cu;
    // 0x35ce40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239188u, 0x35CE3Cu, 0x35CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE44u;
label_35ce44:
    // 0x35ce44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35ce44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x35ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35ce4c: 0x0  nop
    ctx->pc = 0x35ce4cu;
    // NOP
label_35ce50:
    // 0x35ce50: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x35ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x35ce54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35ce54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35ce58: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35CE58u;
    SET_GPR_U32(ctx, 31, 0x35CE60u);
    ctx->pc = 0x35CE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CE58u;
    // 0x35ce5c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35CE58u, 0x35CE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE60u;
label_35ce60:
    // 0x35ce60: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35ce60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ce64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35ce6c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35CE6Cu;
    SET_GPR_U32(ctx, 31, 0x35CE74u);
    ctx->pc = 0x35CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CE6Cu;
    // 0x35ce70: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35CE6Cu, 0x35CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE74u;
label_35ce74:
    // 0x35ce74: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x35ce74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x35ce78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35CE78u;
    {
        const bool branch_taken_0x35ce78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE78u;
        // 0x35ce7c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ce78) {
            ctx->pc = 0x35CE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ce50;
        }
    }
    ctx->pc = 0x35CE80u;
    // 0x35ce80: 0x7bb00440  lq          $s0, 0x440($sp)
    ctx->pc = 0x35ce80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x35ce84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ce84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce88: 0x7bb10430  lq          $s1, 0x430($sp)
    ctx->pc = 0x35ce88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x35ce8c: 0x7bb20420  lq          $s2, 0x420($sp)
    ctx->pc = 0x35ce8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x35ce90: 0x7bb30410  lq          $s3, 0x410($sp)
    ctx->pc = 0x35ce90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x35ce94: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x35ce94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x35ce98: 0x3e00008  jr          $ra
    ctx->pc = 0x35CE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE98u;
        // 0x35ce9c: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CEA0u;
}
