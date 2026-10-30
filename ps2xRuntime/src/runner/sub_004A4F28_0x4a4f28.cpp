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

// Function: sub_004A4F28
// Address: 0x4a4f28 - 0x4a4fd0
void sub_004A4F28_0x4a4f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4F28_0x4a4f28");
#endif

    switch (ctx->pc) {
        case 0x4a4f5cu: goto label_4a4f5c;
        case 0x4a4f68u: goto label_4a4f68;
        case 0x4a4fb0u: goto label_4a4fb0;
        default: break;
    }

    ctx->pc = 0x4a4f28u;

    // 0x4a4f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a4f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a4f2c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4a4f2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4f30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a4f34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4a4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4a4f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a4f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a4f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a4f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4f40: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x4a4f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4a4f44: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A4F44u;
    {
        const bool branch_taken_0x4a4f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4F44u;
        // 0x4a4f48: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4f44) {
            ctx->pc = 0x4A4F70u;
            goto label_4a4f70;
        }
    }
    ctx->pc = 0x4A4F4Cu;
    // 0x4a4f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a4f50: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x4a4f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x4a4f54: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4A4F54u;
    SET_GPR_U32(ctx, 31, 0x4A4F5Cu);
    ctx->pc = 0x4A4F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4F54u;
    // 0x4a4f58: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4A4F54u, 0x4A4F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4F5Cu;
label_4a4f5c:
    // 0x4a4f5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a4f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4f60: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4A4F60u;
    SET_GPR_U32(ctx, 31, 0x4A4F68u);
    ctx->pc = 0x4A4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4F60u;
    // 0x4a4f64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4A4F60u, 0x4A4F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4F68u;
label_4a4f68:
    // 0x4a4f68: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4A4F68u;
    {
        const bool branch_taken_0x4a4f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4F68u;
        // 0x4a4f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4f68) {
            ctx->pc = 0x4A4FC0u;
            goto label_4a4fc0;
        }
    }
    ctx->pc = 0x4A4F70u;
label_4a4f70:
    // 0x4a4f70: 0x8f868a80  lw          $a2, -0x7580($gp)
    ctx->pc = 0x4a4f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4f74: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4a4f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x4a4f78: 0x24a5ad18  addiu       $a1, $a1, -0x52E8
    ctx->pc = 0x4a4f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946072));
    // 0x4a4f7c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x4a4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a4f80: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x4a4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4a4f84: 0x34e70018  ori         $a3, $a3, 0x18
    ctx->pc = 0x4a4f84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24);
    // 0x4a4f88: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x4a4f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x4a4f8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a4f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a4f90: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4a4f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4a4f94: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x4a4f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x4a4f98: 0xa4480040  sh          $t0, 0x40($v0)
    ctx->pc = 0x4a4f98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 8));
    // 0x4a4f9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a4f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a4fa0: 0xac490050  sw          $t1, 0x50($v0)
    ctx->pc = 0x4a4fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 9));
    // 0x4a4fa4: 0xac47004c  sw          $a3, 0x4C($v0)
    ctx->pc = 0x4a4fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 7));
    // 0x4a4fa8: 0xc129622  jal         func_4A5888
    ctx->pc = 0x4A4FA8u;
    SET_GPR_U32(ctx, 31, 0x4A4FB0u);
    ctx->pc = 0x4A4FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4FA8u;
    // 0x4a4fac: 0xac500044  sw          $s0, 0x44($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5888u, 0x4A4FA8u, 0x4A4FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4FB0u;
label_4a4fb0:
    // 0x4a4fb0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a4fb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4fb4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A4FB4u;
    {
        const bool branch_taken_0x4a4fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4FB4u;
        // 0x4a4fb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4fb4) {
            ctx->pc = 0x4A4FC0u;
            goto label_4a4fc0;
        }
    }
    ctx->pc = 0x4A4FBCu;
    // 0x4a4fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a4fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a4fc0:
    // 0x4a4fc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a4fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4fc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a4fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4FC8u;
        // 0x4a4fcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4FD0u;
}
