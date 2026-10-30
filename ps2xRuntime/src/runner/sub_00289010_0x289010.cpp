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

// Function: sub_00289010
// Address: 0x289010 - 0x2890a8
void sub_00289010_0x289010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289010_0x289010");
#endif

    switch (ctx->pc) {
        case 0x28904cu: goto label_28904c;
        case 0x28905cu: goto label_28905c;
        case 0x289070u: goto label_289070;
        default: break;
    }

    ctx->pc = 0x289010u;

    // 0x289010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x289010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x289014: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x289014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x289018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x289018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28901c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28901cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289020: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x289020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x289024: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x289024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289028: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x289028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28902c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28902cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289034: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x289034u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x289038: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x289038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28903c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28903cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289040: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x289040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x289044: 0xc088878  jal         func_2221E0
    ctx->pc = 0x289044u;
    SET_GPR_U32(ctx, 31, 0x28904Cu);
    ctx->pc = 0x289048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289044u;
    // 0x289048: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221E0u, 0x289044u, 0x28904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28904Cu;
label_28904c:
    // 0x28904c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28904Cu;
    {
        const bool branch_taken_0x28904c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28904Cu;
        // 0x289050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28904c) {
            ctx->pc = 0x289088u;
            goto label_289088;
        }
    }
    ctx->pc = 0x289054u;
    // 0x289054: 0xc092414  jal         func_249050
    ctx->pc = 0x289054u;
    SET_GPR_U32(ctx, 31, 0x28905Cu);
    ctx->pc = 0x289058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289054u;
    // 0x289058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249050u, 0x289054u, 0x28905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28905Cu;
label_28905c:
    // 0x28905c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289060: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x289060u;
    {
        const bool branch_taken_0x289060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x289064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289060u;
        // 0x289064: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289060) {
            ctx->pc = 0x289084u;
            goto label_289084;
        }
    }
    ctx->pc = 0x289068u;
    // 0x289068: 0xc0a22dc  jal         func_288B70
    ctx->pc = 0x289068u;
    SET_GPR_U32(ctx, 31, 0x289070u);
    ctx->pc = 0x28906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289068u;
    // 0x28906c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B70u, 0x289068u, 0x289070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289070u;
label_289070:
    // 0x289070: 0xe614003c  swc1        $f20, 0x3C($s0)
    ctx->pc = 0x289070u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x289074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x289074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289078: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x289078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28907c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28907Cu;
    {
        const bool branch_taken_0x28907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28907Cu;
        // 0x289080: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28907c) {
            ctx->pc = 0x289088u;
            goto label_289088;
        }
    }
    ctx->pc = 0x289084u;
label_289084:
    // 0x289084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289088:
    // 0x289088: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x289088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28908c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28908cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289090: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x289090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289098: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x289098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28909c: 0x3e00008  jr          $ra
    ctx->pc = 0x28909Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2890A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28909Cu;
        // 0x2890a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28909Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2890A4u;
    // 0x2890a4: 0x0  nop
    ctx->pc = 0x2890a4u;
    // NOP
    ctx->pc = 0x2890a8u;
}
