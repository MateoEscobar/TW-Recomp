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

// Function: sub_00352FA0
// Address: 0x352fa0 - 0x353020
void sub_00352FA0_0x352fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352FA0_0x352fa0");
#endif

    switch (ctx->pc) {
        case 0x352fdcu: goto label_352fdc;
        case 0x352fe4u: goto label_352fe4;
        case 0x35300cu: goto label_35300c;
        default: break;
    }

    ctx->pc = 0x352fa0u;

label_352fa0:
    // 0x352fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x352fa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x352fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x352fa8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x352fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x352fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x352facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x352fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x352fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352fb4: 0x86020030  lh          $v0, 0x30($s0)
    ctx->pc = 0x352fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x352fb8: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x352fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x352fbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x352fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x352fc0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x352fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x352fc4: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x352fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x352fc8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x352fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x352fcc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x352FCCu;
    {
        const bool branch_taken_0x352fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352FCCu;
        // 0x352fd0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352fcc) {
            ctx->pc = 0x352FECu;
            goto label_352fec;
        }
    }
    ctx->pc = 0x352FD4u;
    // 0x352fd4: 0xc062274  jal         func_1889D0
    ctx->pc = 0x352FD4u;
    SET_GPR_U32(ctx, 31, 0x352FDCu);
    ctx->pc = 0x352FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352FD4u;
    // 0x352fd8: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x352FD4u, 0x352FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352FDCu;
label_352fdc:
    // 0x352fdc: 0xc0d4be8  jal         func_352FA0
    ctx->pc = 0x352FDCu;
    SET_GPR_U32(ctx, 31, 0x352FE4u);
    ctx->pc = 0x352FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352FDCu;
    // 0x352fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352FA0u;
    goto label_352fa0;
    ctx->pc = 0x352FE4u;
label_352fe4:
    // 0x352fe4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x352FE4u;
    {
        const bool branch_taken_0x352fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x352FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352FE4u;
        // 0x352fe8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352fe4) {
            ctx->pc = 0x353010u;
            goto label_353010;
        }
    }
    ctx->pc = 0x352FECu;
label_352fec:
    // 0x352fec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x352fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x352ff0: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x352ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x352ff4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x352ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x352ff8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x352FF8u;
    {
        const bool branch_taken_0x352ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352FF8u;
        // 0x352ffc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352ff8) {
            ctx->pc = 0x35300Cu;
            goto label_35300c;
        }
    }
    ctx->pc = 0x353000u;
    // 0x353000: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x353000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353004: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x353004u;
    SET_GPR_U32(ctx, 31, 0x35300Cu);
    ctx->pc = 0x353008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353004u;
    // 0x353008: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x353004u, 0x35300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35300Cu;
label_35300c:
    // 0x35300c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35300cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353010:
    // 0x353010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353014: 0x3e00008  jr          $ra
    ctx->pc = 0x353014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353014u;
        // 0x353018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35301Cu;
    // 0x35301c: 0x0  nop
    ctx->pc = 0x35301cu;
    // NOP
    ctx->pc = 0x353020u;
}
