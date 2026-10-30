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

// Function: sub_003A5938
// Address: 0x3a5938 - 0x3a5998
void sub_003A5938_0x3a5938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5938_0x3a5938");
#endif

    switch (ctx->pc) {
        case 0x3a5968u: goto label_3a5968;
        case 0x3a597cu: goto label_3a597c;
        default: break;
    }

    ctx->pc = 0x3a5938u;

    // 0x3a5938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a5938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a593c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a5940: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a5940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3a5944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a5944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5948: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a5948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a594c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a594cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5950: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x3a5950u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a5954: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3a5954u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x3a5958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a5958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a595c: 0x26311aa0  addiu       $s1, $s1, 0x1AA0
    ctx->pc = 0x3a595cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6816));
    // 0x3a5960: 0xc0e8b36  jal         func_3A2CD8
    ctx->pc = 0x3A5960u;
    SET_GPR_U32(ctx, 31, 0x3A5968u);
    ctx->pc = 0x3A5964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5960u;
    // 0x3a5964: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x3A5960u, 0x3A5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5968u;
label_3a5968:
    // 0x3a5968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a596c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3a596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3a5970: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a5970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5974: 0xc0e723e  jal         func_39C8F8
    ctx->pc = 0x3A5974u;
    SET_GPR_U32(ctx, 31, 0x3A597Cu);
    ctx->pc = 0x3A5978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5974u;
    // 0x3a5978: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C8F8u, 0x3A5974u, 0x3A597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A597Cu;
label_3a597c:
    // 0x3a597c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a597cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a5980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5984: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a5984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a5988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a598c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A598Cu;
        // 0x3a5990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A598Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5994u;
    // 0x3a5994: 0x0  nop
    ctx->pc = 0x3a5994u;
    // NOP
    ctx->pc = 0x3a5998u;
}
