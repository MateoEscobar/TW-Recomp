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

// Function: sub_0032A1C0
// Address: 0x32a1c0 - 0x32a228
void sub_0032A1C0_0x32a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A1C0_0x32a1c0");
#endif

    switch (ctx->pc) {
        case 0x32a1e8u: goto label_32a1e8;
        case 0x32a1f4u: goto label_32a1f4;
        default: break;
    }

    ctx->pc = 0x32a1c0u;

    // 0x32a1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32a1c4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x32a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x32a1c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32a1cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32a1d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x32a1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32a1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32a1d8: 0x24515868  addiu       $s1, $v0, 0x5868
    ctx->pc = 0x32a1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22632));
    // 0x32a1dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a1e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32a1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x32a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x575868u));
label_32a1e8:
    // 0x32a1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a1ec: 0xc0cbf58  jal         func_32FD60
    ctx->pc = 0x32A1ECu;
    SET_GPR_U32(ctx, 31, 0x32A1F4u);
    ctx->pc = 0x32A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A1ECu;
    // 0x32a1f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FD60u, 0x32A1ECu, 0x32A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A1F4u;
label_32a1f4:
    // 0x32a1f4: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x32a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x32a1f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32a1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a1fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32a1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32a200: 0xa443000a  sh          $v1, 0xA($v0)
    ctx->pc = 0x32a200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a204: 0x2a020012  slti        $v0, $s0, 0x12
    ctx->pc = 0x32a204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x32a208: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x32A208u;
    {
        const bool branch_taken_0x32a208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a208) {
            ctx->pc = 0x32A20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A208u;
            // 0x32a20c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32a1e8;
        }
    }
    ctx->pc = 0x32A210u;
    // 0x32a210: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32a210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32a214: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32a214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a218: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32a218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a220: 0x3e00008  jr          $ra
    ctx->pc = 0x32A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A220u;
        // 0x32a224: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A228u;
}
