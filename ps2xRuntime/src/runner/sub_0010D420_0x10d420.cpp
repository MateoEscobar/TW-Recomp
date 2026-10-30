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

// Function: sub_0010D420
// Address: 0x10d420 - 0x10d480
void sub_0010D420_0x10d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D420_0x10d420");
#endif

    ctx->pc = 0x10d420u;

    // 0x10d420: 0x240300d0  addiu       $v1, $zero, 0xD0
    ctx->pc = 0x10d420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x10d424: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d428: 0xa33018  mult        $a2, $a1, $v1
    ctx->pc = 0x10d428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x10d42c: 0x3442a014  ori         $v0, $v0, 0xA014
    ctx->pc = 0x10d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40980);
    // 0x10d430: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x10d430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x10d434: 0x8ca600a4  lw          $a2, 0xA4($a1)
    ctx->pc = 0x10d434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x10d438: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10d438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10d43c: 0x84a7009a  lh          $a3, 0x9A($a1)
    ctx->pc = 0x10d43cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 154)));
    // 0x10d440: 0x90a3009f  lbu         $v1, 0x9F($a1)
    ctx->pc = 0x10d440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 159)));
    // 0x10d444: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x10d444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x10d448: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10d448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10d44c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10d450: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x10d450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x10d454: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10d458: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10d458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10d45c: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x10d45cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x10d460: 0xe3300b  movn        $a2, $a3, $v1
    ctx->pc = 0x10d460u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x10d464: 0x3e00008  jr          $ra
    ctx->pc = 0x10D464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D464u;
        // 0x10d468: 0xaca600a4  sw          $a2, 0xA4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D46Cu;
    // 0x10d46c: 0x0  nop
    ctx->pc = 0x10d46cu;
    // NOP
    // 0x10d470: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10d470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10d474: 0x0  nop
    ctx->pc = 0x10d474u;
    // NOP
    // 0x10d478: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10d478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10d47c: 0x0  nop
    ctx->pc = 0x10d47cu;
    // NOP
    ctx->pc = 0x10d480u;
}
