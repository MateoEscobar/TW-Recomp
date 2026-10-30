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

// Function: sub_0011D180
// Address: 0x11d180 - 0x11d228
void sub_0011D180_0x11d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D180_0x11d180");
#endif

    switch (ctx->pc) {
        case 0x11d1b4u: goto label_11d1b4;
        case 0x11d1d8u: goto label_11d1d8;
        case 0x11d1e0u: goto label_11d1e0;
        case 0x11d1f0u: goto label_11d1f0;
        default: break;
    }

    ctx->pc = 0x11d180u;

    // 0x11d180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d184: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11d184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11d188: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11d18c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11d18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d190: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11d190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11d194: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11d194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d198: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11d198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d19c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1a0: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x11d1a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d1a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d1ac: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D1ACu;
    SET_GPR_U32(ctx, 31, 0x11D1B4u);
    ctx->pc = 0x11D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1ACu;
    // 0x11d1b0: 0x202200b  movn        $a0, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D1ACu, 0x11D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1B4u;
label_11d1b4:
    // 0x11d1b4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x11D1B4u;
    {
        const bool branch_taken_0x11d1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d1b4) {
            ctx->pc = 0x11D1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D1B4u;
            // 0x11d1b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D210u;
            goto label_11d210;
        }
    }
    ctx->pc = 0x11D1BCu;
    // 0x11d1bc: 0x16120013  bne         $s0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x11D1BCu;
    {
        const bool branch_taken_0x11d1bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x11D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1BCu;
        // 0x11d1c0: 0xa05103e4  sb          $s1, 0x3E4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 996), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1bc) {
            ctx->pc = 0x11D20Cu;
            goto label_11d20c;
        }
    }
    ctx->pc = 0x11D1C4u;
    // 0x11d1c4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x11d1c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11d1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d1cc: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x11d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11d1d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11D1D0u;
    {
        const bool branch_taken_0x11d1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1D0u;
        // 0x11d1d4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1d0) {
            ctx->pc = 0x11D1FCu;
            goto label_11d1fc;
        }
    }
    ctx->pc = 0x11D1D8u;
label_11d1d8:
    // 0x11d1d8: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D1D8u;
    SET_GPR_U32(ctx, 31, 0x11D1E0u);
    ctx->pc = 0x11D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1D8u;
    // 0x11d1dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D1D8u, 0x11D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1E0u;
label_11d1e0:
    // 0x11d1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D1E0u;
    {
        const bool branch_taken_0x11d1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1E0u;
        // 0x11d1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1e0) {
            ctx->pc = 0x11D1F4u;
            goto label_11d1f4;
        }
    }
    ctx->pc = 0x11D1E8u;
    // 0x11d1e8: 0xc047eec  jal         func_11FBB0
    ctx->pc = 0x11D1E8u;
    SET_GPR_U32(ctx, 31, 0x11D1F0u);
    ctx->pc = 0x11D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1E8u;
    // 0x11d1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11D1E8u, 0x11D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1F0u;
label_11d1f0:
    // 0x11d1f0: 0xa05103e4  sb          $s1, 0x3E4($v0)
    ctx->pc = 0x11d1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 996), (uint8_t)GPR_U32(ctx, 17));
label_11d1f4:
    // 0x11d1f4: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x11d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x11d1f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11d1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11d1fc:
    // 0x11d1fc: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11d1fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11d200: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11d200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d204: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11D204u;
    {
        const bool branch_taken_0x11d204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D204u;
        // 0x11d208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d204) {
            ctx->pc = 0x11D1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11d1d8;
        }
    }
    ctx->pc = 0x11D20Cu;
label_11d20c:
    // 0x11d20c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11d20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11d210:
    // 0x11d210: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11d210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d214: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11d214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d21c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D21Cu;
        // 0x11d220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D224u;
    // 0x11d224: 0x0  nop
    ctx->pc = 0x11d224u;
    // NOP
    ctx->pc = 0x11d228u;
}
