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

// Function: sub_0020E170
// Address: 0x20e170 - 0x20e210
void sub_0020E170_0x20e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E170_0x20e170");
#endif

    switch (ctx->pc) {
        case 0x20e184u: goto label_20e184;
        case 0x20e1a8u: goto label_20e1a8;
        case 0x20e1d8u: goto label_20e1d8;
        default: break;
    }

    ctx->pc = 0x20e170u;

    // 0x20e170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e174: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20e178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20e178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20e17c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x20E17Cu;
    SET_GPR_U32(ctx, 31, 0x20E184u);
    ctx->pc = 0x20E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E17Cu;
    // 0x20e180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20E17Cu, 0x20E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E184u;
label_20e184:
    // 0x20e184: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20e184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x20e188: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x20e188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x20e18c: 0x2442ed60  addiu       $v0, $v0, -0x12A0
    ctx->pc = 0x20e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962528));
    // 0x20e190: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20e190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20e194: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20e194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20e198: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20e198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20e19c: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x20e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x20e1a0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x20e1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x20e1a4: 0x0  nop
    ctx->pc = 0x20e1a4u;
    // NOP
label_20e1a8:
    // 0x20e1a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x20e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x20e1ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20e1b0: 0x0  nop
    ctx->pc = 0x20e1b0u;
    // NOP
    // 0x20e1b4: 0x0  nop
    ctx->pc = 0x20e1b4u;
    // NOP
    // 0x20e1b8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20E1B8u;
    {
        const bool branch_taken_0x20e1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x20E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1B8u;
        // 0x20e1bc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1b8) {
            ctx->pc = 0x20E1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e1a8;
        }
    }
    ctx->pc = 0x20E1C0u;
    // 0x20e1c0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x20e1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x20e1c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20e1c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1c8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x20e1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x20e1cc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x20e1ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x20e1d0: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x20e1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x20e1d4: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x20e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_20e1d8:
    // 0x20e1d8: 0x8d02bd30  lw          $v0, -0x42D0($t0)
    ctx->pc = 0x20e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950192)));
    // 0x20e1dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20e1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20e1e0: 0x2ce30006  sltiu       $v1, $a3, 0x6
    ctx->pc = 0x20e1e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x20e1e4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x20e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20e1e8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x20e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x20e1ec: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20e1f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20E1F0u;
    {
        const bool branch_taken_0x20e1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1F0u;
        // 0x20e1f4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1f0) {
            ctx->pc = 0x20E1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e1d8;
        }
    }
    ctx->pc = 0x20E1F8u;
    // 0x20e1f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20e1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20e1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20e200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e204: 0x3e00008  jr          $ra
    ctx->pc = 0x20E204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E204u;
        // 0x20e208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E20Cu;
    // 0x20e20c: 0x0  nop
    ctx->pc = 0x20e20cu;
    // NOP
    ctx->pc = 0x20e210u;
}
