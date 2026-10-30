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

// Function: sub_004138A8
// Address: 0x4138a8 - 0x4138f0
void sub_004138A8_0x4138a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004138A8_0x4138a8");
#endif

    ctx->pc = 0x4138a8u;

    // 0x4138a8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4138a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4138ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4138acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4138b0: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x4138b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4138b4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x4138b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4138b8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4138b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4138bc: 0xac8500e0  sw          $a1, 0xE0($a0)
    ctx->pc = 0x4138bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
    // 0x4138c0: 0xac670110  sw          $a3, 0x110($v1)
    ctx->pc = 0x4138c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 7));
    // 0x4138c4: 0x8d040140  lw          $a0, 0x140($t0)
    ctx->pc = 0x4138c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 320)));
    // 0x4138c8: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x4138c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4138cc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4138ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4138d0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4138D0u;
    {
        const bool branch_taken_0x4138d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4138D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4138D0u;
        // 0x4138d4: 0xad020140  sw          $v0, 0x140($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4138d0) {
            ctx->pc = 0x4138E8u;
            goto label_4138e8;
        }
    }
    ctx->pc = 0x4138D8u;
    // 0x4138d8: 0x91020149  lbu         $v0, 0x149($t0)
    ctx->pc = 0x4138d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 329)));
    // 0x4138dc: 0xc2182b  sltu        $v1, $a2, $v0
    ctx->pc = 0x4138dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4138e0: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x4138e0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x4138e4: 0xa1020149  sb          $v0, 0x149($t0)
    ctx->pc = 0x4138e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 329), (uint8_t)GPR_U32(ctx, 2));
label_4138e8:
    // 0x4138e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4138E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4138E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4138F0u;
}
