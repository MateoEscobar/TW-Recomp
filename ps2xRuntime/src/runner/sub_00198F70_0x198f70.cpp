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

// Function: sub_00198F70
// Address: 0x198f70 - 0x198ff0
void sub_00198F70_0x198f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198F70_0x198f70");
#endif

    switch (ctx->pc) {
        case 0x198fa4u: goto label_198fa4;
        case 0x198fccu: goto label_198fcc;
        default: break;
    }

    ctx->pc = 0x198f70u;

    // 0x198f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198f74: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x198f74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x198f78: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x198f78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x198f7c: 0x3c08001a  lui         $t0, 0x1A
    ctx->pc = 0x198f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26 << 16));
    // 0x198f80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x198f84: 0x24c68d40  addiu       $a2, $a2, -0x72C0
    ctx->pc = 0x198f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937920));
    // 0x198f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198f8c: 0x24e78db8  addiu       $a3, $a3, -0x7248
    ctx->pc = 0x198f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938040));
    // 0x198f90: 0x25088dc0  addiu       $t0, $t0, -0x7240
    ctx->pc = 0x198f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938048));
    // 0x198f94: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x198f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x198f98: 0x240503f1  addiu       $a1, $zero, 0x3F1
    ctx->pc = 0x198f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
    // 0x198f9c: 0xc11c222  jal         func_470888
    ctx->pc = 0x198F9Cu;
    SET_GPR_U32(ctx, 31, 0x198FA4u);
    ctx->pc = 0x198FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F9Cu;
    // 0x198fa0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x470888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470888u, 0x198F9Cu, 0x198FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FA4u;
label_198fa4:
    // 0x198fa4: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x198FA4u;
    {
        const bool branch_taken_0x198fa4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x198FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FA4u;
        // 0x198fa8: 0xae02ced0  sw          $v0, -0x3130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294954704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198fa4) {
            ctx->pc = 0x198FDCu;
            goto label_198fdc;
        }
    }
    ctx->pc = 0x198FACu;
    // 0x198fac: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x198facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x198fb0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x198fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x198fb4: 0x3c07001a  lui         $a3, 0x1A
    ctx->pc = 0x198fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26 << 16));
    // 0x198fb8: 0x24a58e20  addiu       $a1, $a1, -0x71E0
    ctx->pc = 0x198fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938144));
    // 0x198fbc: 0x24c68ed0  addiu       $a2, $a2, -0x7130
    ctx->pc = 0x198fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938320));
    // 0x198fc0: 0x24e78f68  addiu       $a3, $a3, -0x7098
    ctx->pc = 0x198fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938472));
    // 0x198fc4: 0xc11c234  jal         func_4708D0
    ctx->pc = 0x198FC4u;
    SET_GPR_U32(ctx, 31, 0x198FCCu);
    ctx->pc = 0x198FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FC4u;
    // 0x198fc8: 0x240403f1  addiu       $a0, $zero, 0x3F1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4708D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4708D0u, 0x198FC4u, 0x198FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FCCu;
label_198fcc:
    // 0x198fcc: 0x8e03ced0  lw          $v1, -0x3130($s0)
    ctx->pc = 0x198fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954704)));
    // 0x198fd0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x198fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x198fd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198FD4u;
    {
        const bool branch_taken_0x198fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FD4u;
        // 0x198fd8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198fd4) {
            ctx->pc = 0x198FE0u;
            goto label_198fe0;
        }
    }
    ctx->pc = 0x198FDCu;
label_198fdc:
    // 0x198fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198fe0:
    // 0x198fe0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x198fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x198FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FE8u;
        // 0x198fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198FF0u;
}
