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

// Function: sub_004466F8
// Address: 0x4466f8 - 0x446770
void sub_004466F8_0x4466f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004466F8_0x4466f8");
#endif

    switch (ctx->pc) {
        case 0x446720u: goto label_446720;
        case 0x446730u: goto label_446730;
        default: break;
    }

    ctx->pc = 0x4466f8u;

    // 0x4466f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4466f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4466fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4466fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x446700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x446704: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x446704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x446708: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x446708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x44670c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x44670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x446710: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x446710u;
    {
        const bool branch_taken_0x446710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x446710) {
            ctx->pc = 0x446728u;
            goto label_446728;
        }
    }
    ctx->pc = 0x446718u;
    // 0x446718: 0xc111900  jal         func_446400
    ctx->pc = 0x446718u;
    SET_GPR_U32(ctx, 31, 0x446720u);
    ctx->pc = 0x44671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446718u;
    // 0x44671c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446400u, 0x446718u, 0x446720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446720u;
label_446720:
    // 0x446720: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x446720u;
    {
        const bool branch_taken_0x446720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446720u;
        // 0x446724: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446720) {
            ctx->pc = 0x446734u;
            goto label_446734;
        }
    }
    ctx->pc = 0x446728u;
label_446728:
    // 0x446728: 0xc1118a4  jal         func_446290
    ctx->pc = 0x446728u;
    SET_GPR_U32(ctx, 31, 0x446730u);
    ctx->pc = 0x44672Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446728u;
    // 0x44672c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446290u, 0x446728u, 0x446730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446730u;
label_446730:
    // 0x446730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x446730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_446734:
    // 0x446734: 0x3e00008  jr          $ra
    ctx->pc = 0x446734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446734u;
        // 0x446738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44673Cu;
    // 0x44673c: 0x0  nop
    ctx->pc = 0x44673cu;
    // NOP
    // 0x446740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x446744: 0x0  nop
    ctx->pc = 0x446744u;
    // NOP
    // 0x446748: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x446748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
    // 0x44674c: 0x0  nop
    ctx->pc = 0x44674cu;
    // NOP
    // 0x446750: 0x8c6200e0  lw          $v0, 0xE0($v1)
    ctx->pc = 0x446750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x446754: 0x0  nop
    ctx->pc = 0x446754u;
    // NOP
    // 0x446758: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x446758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x44675c: 0x0  nop
    ctx->pc = 0x44675cu;
    // NOP
    // 0x446760: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x446760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x446764: 0x0  nop
    ctx->pc = 0x446764u;
    // NOP
    // 0x446768: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x446768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x44676c: 0x0  nop
    ctx->pc = 0x44676cu;
    // NOP
    ctx->pc = 0x446770u;
}
