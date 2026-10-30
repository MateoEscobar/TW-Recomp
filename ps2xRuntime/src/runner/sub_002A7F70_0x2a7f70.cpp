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

// Function: sub_002A7F70
// Address: 0x2a7f70 - 0x2a7ff8
void sub_002A7F70_0x2a7f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7F70_0x2a7f70");
#endif

    switch (ctx->pc) {
        case 0x2a7f70u: goto label_2a7f70;
        case 0x2a7f74u: goto label_2a7f74;
        case 0x2a7f78u: goto label_2a7f78;
        case 0x2a7f7cu: goto label_2a7f7c;
        case 0x2a7f80u: goto label_2a7f80;
        case 0x2a7f84u: goto label_2a7f84;
        case 0x2a7f88u: goto label_2a7f88;
        case 0x2a7f8cu: goto label_2a7f8c;
        case 0x2a7f90u: goto label_2a7f90;
        case 0x2a7f94u: goto label_2a7f94;
        case 0x2a7f98u: goto label_2a7f98;
        case 0x2a7f9cu: goto label_2a7f9c;
        case 0x2a7fa0u: goto label_2a7fa0;
        case 0x2a7fa4u: goto label_2a7fa4;
        case 0x2a7fa8u: goto label_2a7fa8;
        case 0x2a7facu: goto label_2a7fac;
        case 0x2a7fb0u: goto label_2a7fb0;
        case 0x2a7fb4u: goto label_2a7fb4;
        case 0x2a7fb8u: goto label_2a7fb8;
        case 0x2a7fbcu: goto label_2a7fbc;
        case 0x2a7fc0u: goto label_2a7fc0;
        case 0x2a7fc4u: goto label_2a7fc4;
        case 0x2a7fc8u: goto label_2a7fc8;
        case 0x2a7fccu: goto label_2a7fcc;
        case 0x2a7fd0u: goto label_2a7fd0;
        case 0x2a7fd4u: goto label_2a7fd4;
        case 0x2a7fd8u: goto label_2a7fd8;
        case 0x2a7fdcu: goto label_2a7fdc;
        case 0x2a7fe0u: goto label_2a7fe0;
        case 0x2a7fe4u: goto label_2a7fe4;
        case 0x2a7fe8u: goto label_2a7fe8;
        case 0x2a7fecu: goto label_2a7fec;
        case 0x2a7ff0u: goto label_2a7ff0;
        case 0x2a7ff4u: goto label_2a7ff4;
        default: break;
    }

    ctx->pc = 0x2a7f70u;

label_2a7f70:
    // 0x2a7f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a7f74:
    // 0x2a7f74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a7f78:
    // 0x2a7f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a7f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a7f7c:
    // 0x2a7f7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a7f80:
    // 0x2a7f80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a7f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a7f84:
    // 0x2a7f84: 0x8c65bd30  lw          $a1, -0x42D0($v1)
    ctx->pc = 0x2a7f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a7f88:
    // 0x2a7f88: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a7f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a7f8c:
    // 0x2a7f8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a7f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2a7f90:
    // 0x2a7f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a7f94:
    // 0x2a7f94: 0xc1073fa  jal         func_41CFE8
label_2a7f98:
    if (ctx->pc == 0x2A7F98u) {
        ctx->pc = 0x2A7F9Cu;
        goto label_2a7f9c;
    }
    ctx->pc = 0x2A7F94u;
    SET_GPR_U32(ctx, 31, 0x2A7F9Cu);
    ctx->pc = 0x41CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CFE8u, 0x2A7F94u, 0x2A7F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7F9Cu;
label_2a7f9c:
    // 0x2a7f9c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7fa0:
    // 0x2a7fa0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a7fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a7fa4:
    // 0x2a7fa4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a7fa8:
    // 0x2a7fa8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a7fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a7fac:
    // 0x2a7fac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a7facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a7fb0:
    // 0x2a7fb0: 0x40f809  jalr        $v0
label_2a7fb4:
    if (ctx->pc == 0x2A7FB4u) {
        ctx->pc = 0x2A7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FB0u;
        // 0x2a7fb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7FB8u;
        goto label_2a7fb8;
    }
    ctx->pc = 0x2A7FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A7FB8u);
        ctx->pc = 0x2A7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FB0u;
        // 0x2a7fb4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7FB0u, 0x2A7FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A7FB8u;
label_2a7fb8:
    // 0x2a7fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7fbc:
    // 0x2a7fbc: 0xc08e2b8  jal         func_238AE0
label_2a7fc0:
    if (ctx->pc == 0x2A7FC0u) {
        ctx->pc = 0x2A7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FBCu;
        // 0x2a7fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7FC4u;
        goto label_2a7fc4;
    }
    ctx->pc = 0x2A7FBCu;
    SET_GPR_U32(ctx, 31, 0x2A7FC4u);
    ctx->pc = 0x2A7FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FBCu;
    // 0x2a7fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x2A7FBCu, 0x2A7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FC4u;
label_2a7fc4:
    // 0x2a7fc4: 0xc06d026  jal         func_1B4098
label_2a7fc8:
    if (ctx->pc == 0x2A7FC8u) {
        ctx->pc = 0x2A7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FC4u;
        // 0x2a7fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7FCCu;
        goto label_2a7fcc;
    }
    ctx->pc = 0x2A7FC4u;
    SET_GPR_U32(ctx, 31, 0x2A7FCCu);
    ctx->pc = 0x2A7FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FC4u;
    // 0x2a7fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4098u, 0x2A7FC4u, 0x2A7FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FCCu;
label_2a7fcc:
    // 0x2a7fcc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2a7fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2a7fd0:
    // 0x2a7fd0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2a7fd4:
    if (ctx->pc == 0x2A7FD4u) {
        ctx->pc = 0x2A7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FD0u;
        // 0x2a7fd4: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7FD8u;
        goto label_2a7fd8;
    }
    ctx->pc = 0x2A7FD0u;
    {
        const bool branch_taken_0x2a7fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7fd0) {
            ctx->pc = 0x2A7FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7FD0u;
            // 0x2a7fd4: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7FE4u;
            goto label_2a7fe4;
        }
    }
    ctx->pc = 0x2A7FD8u;
label_2a7fd8:
    // 0x2a7fd8: 0xc10586e  jal         func_4161B8
label_2a7fdc:
    if (ctx->pc == 0x2A7FDCu) {
        ctx->pc = 0x2A7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FD8u;
        // 0x2a7fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7FE0u;
        goto label_2a7fe0;
    }
    ctx->pc = 0x2A7FD8u;
    SET_GPR_U32(ctx, 31, 0x2A7FE0u);
    ctx->pc = 0x2A7FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7FD8u;
    // 0x2a7fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2A7FD8u, 0x2A7FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7FE0u;
label_2a7fe0:
    // 0x2a7fe0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x2a7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_2a7fe4:
    // 0x2a7fe4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a7fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a7fe8:
    // 0x2a7fe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a7fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7fec:
    // 0x2a7fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a7ff0:
    // 0x2a7ff0: 0x3e00008  jr          $ra
label_2a7ff4:
    if (ctx->pc == 0x2A7FF4u) {
        ctx->pc = 0x2A7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FF0u;
        // 0x2a7ff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7FF8u;
        goto label_fallthrough_0x2a7ff0;
    }
    ctx->pc = 0x2A7FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7FF0u;
        // 0x2a7ff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a7ff0:
    ctx->pc = 0x2A7FF8u;
}
