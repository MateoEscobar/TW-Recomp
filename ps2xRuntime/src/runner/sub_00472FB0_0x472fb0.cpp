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

// Function: sub_00472FB0
// Address: 0x472fb0 - 0x473050
void sub_00472FB0_0x472fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472FB0_0x472fb0");
#endif

    switch (ctx->pc) {
        case 0x473014u: goto label_473014;
        default: break;
    }

    ctx->pc = 0x472fb0u;

    // 0x472fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x472fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x472fb4: 0x8f828524  lw          $v0, -0x7ADC($gp)
    ctx->pc = 0x472fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
    // 0x472fb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x472fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x472fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x472fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x472fc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x472fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x472fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x472fc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x472fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472fcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x472fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x472fd0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x472fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x472fd4: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x472fd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x472fd8: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x472FD8u;
    {
        const bool branch_taken_0x472fd8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x472FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472FD8u;
        // 0x472fdc: 0x2622003c  addiu       $v0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472fd8) {
            ctx->pc = 0x473000u;
            goto label_473000;
        }
    }
    ctx->pc = 0x472FE0u;
    // 0x472fe0: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x472fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x472fe4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x472fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x472fe8: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x472fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x472fec: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x472fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x472ff0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x472ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x472ff4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x472ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x472ff8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x472FF8u;
    {
        const bool branch_taken_0x472ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472FF8u;
        // 0x472ffc: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472ff8) {
            ctx->pc = 0x473034u;
            goto label_473034;
        }
    }
    ctx->pc = 0x473000u;
label_473000:
    // 0x473000: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x473000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x473004: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x473004u;
    {
        const bool branch_taken_0x473004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x473004) {
            ctx->pc = 0x473008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x473004u;
            // 0x473008: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x473018u;
            goto label_473018;
        }
    }
    ctx->pc = 0x47300Cu;
    // 0x47300c: 0xc12105a  jal         func_484168
    ctx->pc = 0x47300Cu;
    SET_GPR_U32(ctx, 31, 0x473014u);
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x47300Cu, 0x473014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473014u;
label_473014:
    // 0x473014: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x473014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_473018:
    // 0x473018: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x473018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x47301c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x47301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x473020: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x473020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x473024: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x473024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x473028: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x473028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x47302c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x47302cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x473030: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x473030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_473034:
    // 0x473034: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x473034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473038: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x473038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47303c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47303cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x473040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473044: 0x3e00008  jr          $ra
    ctx->pc = 0x473044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473044u;
        // 0x473048: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47304Cu;
    // 0x47304c: 0x0  nop
    ctx->pc = 0x47304cu;
    // NOP
    ctx->pc = 0x473050u;
}
