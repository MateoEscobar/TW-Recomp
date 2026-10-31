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

// Function: sub_004B12D0
// Address: 0x4b12d0 - 0x4b1320
void sub_004B12D0_0x4b12d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B12D0_0x4b12d0");
#endif

    switch (ctx->pc) {
        case 0x4b12e8u: goto label_4b12e8;
        case 0x4b1308u: goto label_4b1308;
        default: break;
    }

    ctx->pc = 0x4b12d0u;

    // 0x4b12d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b12d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b12d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b12d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b12d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b12d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b12dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b12dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b12e0: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x4B12E0u;
    SET_GPR_U32(ctx, 31, 0x4B12E8u);
    ctx->pc = 0x4B12E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B12E0u;
    // 0x4b12e4: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x4B12E0u, 0x4B12E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B12E8u;
label_4b12e8:
    // 0x4b12e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B12E8u;
    {
        const bool branch_taken_0x4b12e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B12E8u;
        // 0x4b12ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b12e8) {
            ctx->pc = 0x4B12F8u;
            goto label_4b12f8;
        }
    }
    ctx->pc = 0x4B12F0u;
    // 0x4b12f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B12F0u;
    {
        const bool branch_taken_0x4b12f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B12F0u;
        // 0x4b12f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b12f0) {
            ctx->pc = 0x4B130Cu;
            goto label_4b130c;
        }
    }
    ctx->pc = 0x4B12F8u;
label_4b12f8:
    // 0x4b12f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b12f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b12fc: 0x24a60400  addiu       $a2, $a1, 0x400
    ctx->pc = 0x4b12fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x4b1300: 0xc12c392  jal         func_4B0E48
    ctx->pc = 0x4B1300u;
    SET_GPR_U32(ctx, 31, 0x4B1308u);
    ctx->pc = 0x4B1304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1300u;
    // 0x4b1304: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0E48u, 0x4B1300u, 0x4B1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1308u;
label_4b1308:
    // 0x4b1308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b1308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b130c:
    // 0x4b130c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b130cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b1310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b1310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b1314: 0x3e00008  jr          $ra
    ctx->pc = 0x4B1314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B1314u;
        // 0x4b1318: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B1314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B131Cu;
    // 0x4b131c: 0x0  nop
    ctx->pc = 0x4b131cu;
    // NOP
    ctx->pc = 0x4b1320u;
}
