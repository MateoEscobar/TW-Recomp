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

// Function: sub_001837C8
// Address: 0x1837c8 - 0x183838
void sub_001837C8_0x1837c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001837C8_0x1837c8");
#endif

    ctx->pc = 0x1837c8u;

    // 0x1837c8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1837c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837cc: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1837ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1837d0: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1837d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1837d4: 0x25236428  addiu       $v1, $t1, 0x6428
    ctx->pc = 0x1837d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 25640));
    // 0x1837d8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1837d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1837dc: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x1837dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1837e0: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x1837e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1837e4: 0x2c820064  sltiu       $v0, $a0, 0x64
    ctx->pc = 0x1837e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x1837e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1837E8u;
    {
        const bool branch_taken_0x1837e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1837ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837E8u;
        // 0x1837ec: 0x1251021  addu        $v0, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837e8) {
            ctx->pc = 0x1837F8u;
            goto label_1837f8;
        }
    }
    ctx->pc = 0x1837F0u;
    // 0x1837f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1837F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1837F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837F0u;
        // 0x1837f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1837F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1837F8u;
label_1837f8:
    // 0x1837f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1837f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1837fc: 0x8c456420  lw          $a1, 0x6420($v0)
    ctx->pc = 0x1837fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25632)));
    // 0x183800: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x183800u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x183804: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x183804u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x183808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18380c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x18380cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x183810: 0x79630000  lq          $v1, 0x0($t3)
    ctx->pc = 0x183810u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x183814: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x183814u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x183818: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x183818u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18381c: 0x7ca40020  sq          $a0, 0x20($a1)
    ctx->pc = 0x18381cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 4));
    // 0x183820: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x183820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x183824: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x183824u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x183828: 0x79040000  lq          $a0, 0x0($t0)
    ctx->pc = 0x183828u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18382c: 0x3e00008  jr          $ra
    ctx->pc = 0x18382Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18382Cu;
        // 0x183830: 0x7ca40000  sq          $a0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18382Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183834u;
    // 0x183834: 0x0  nop
    ctx->pc = 0x183834u;
    // NOP
    ctx->pc = 0x183838u;
}
