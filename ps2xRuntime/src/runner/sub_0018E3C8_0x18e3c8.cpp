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

// Function: sub_0018E3C8
// Address: 0x18e3c8 - 0x18e470
void sub_0018E3C8_0x18e3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E3C8_0x18e3c8");
#endif

    switch (ctx->pc) {
        case 0x18e3f8u: goto label_18e3f8;
        case 0x18e408u: goto label_18e408;
        case 0x18e41cu: goto label_18e41c;
        case 0x18e42cu: goto label_18e42c;
        case 0x18e434u: goto label_18e434;
        default: break;
    }

    ctx->pc = 0x18e3c8u;

    // 0x18e3c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18e3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e3cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18e3d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x18e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x18e3d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18e3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18e3d8: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x18e3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18e3dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x18e3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18e3e0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x18e3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x18e3e4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x18e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x18e3e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18e3e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e3ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18e3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x18e3f0: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x18e3f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
    // 0x18e3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18e3f8:
    // 0x18e3f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e3fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18e3fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18e400: 0xc0e4092  jal         func_390248
    ctx->pc = 0x18E400u;
    SET_GPR_U32(ctx, 31, 0x18E408u);
    ctx->pc = 0x18E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E400u;
    // 0x18e404: 0x24840218  addiu       $a0, $a0, 0x218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390248u, 0x18E400u, 0x18E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E408u;
label_18e408:
    // 0x18e408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e40c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18E40Cu;
    {
        const bool branch_taken_0x18e40c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E40Cu;
        // 0x18e410: 0x2e620002  sltiu       $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e40c) {
            ctx->pc = 0x18E444u;
            goto label_18e444;
        }
    }
    ctx->pc = 0x18E414u;
    // 0x18e414: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x18E414u;
    SET_GPR_U32(ctx, 31, 0x18E41Cu);
    ctx->pc = 0x18E418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E414u;
    // 0x18e418: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x18E414u, 0x18E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E41Cu;
label_18e41c:
    // 0x18e41c: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x18e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x18e420: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x18e420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x18e424: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x18E424u;
    SET_GPR_U32(ctx, 31, 0x18E42Cu);
    ctx->pc = 0x18E428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E424u;
    // 0x18e428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x18E424u, 0x18E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E42Cu;
label_18e42c:
    // 0x18e42c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x18E42Cu;
    SET_GPR_U32(ctx, 31, 0x18E434u);
    ctx->pc = 0x18E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E42Cu;
    // 0x18e430: 0x8e442c7c  lw          $a0, 0x2C7C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x18E42Cu, 0x18E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E434u;
label_18e434:
    // 0x18e434: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18e438: 0x8e82bd30  lw          $v0, -0x42D0($s4)
    ctx->pc = 0x18e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x18e43c: 0xac620218  sw          $v0, 0x218($v1)
    ctx->pc = 0x18e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 536), GPR_U32(ctx, 2));
    // 0x18e440: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x18e440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e444:
    // 0x18e444: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18E444u;
    {
        const bool branch_taken_0x18e444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E444u;
        // 0x18e448: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e444) {
            ctx->pc = 0x18E3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e3f8;
        }
    }
    ctx->pc = 0x18E44Cu;
    // 0x18e44c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18e44cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e450: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x18e450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e454: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18e454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e458: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x18e458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e45c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18e45cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e464: 0x3e00008  jr          $ra
    ctx->pc = 0x18E464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E464u;
        // 0x18e468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E46Cu;
    // 0x18e46c: 0x0  nop
    ctx->pc = 0x18e46cu;
    // NOP
    ctx->pc = 0x18e470u;
}
