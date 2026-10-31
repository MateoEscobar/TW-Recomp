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

// Function: sub_0010EF18
// Address: 0x10ef18 - 0x10ef90
void sub_0010EF18_0x10ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EF18_0x10ef18");
#endif

    switch (ctx->pc) {
        case 0x10ef40u: goto label_10ef40;
        default: break;
    }

    ctx->pc = 0x10ef18u;

    // 0x10ef18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ef1c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10ef1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10ef24: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x10ef24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10ef28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ef28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ef30: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x10ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x10ef34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10ef38: 0xc050fda  jal         func_143F68
    ctx->pc = 0x10EF38u;
    SET_GPR_U32(ctx, 31, 0x10EF40u);
    ctx->pc = 0x10EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF38u;
    // 0x10ef3c: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x10EF38u, 0x10EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF40u;
label_10ef40:
    // 0x10ef40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ef44: 0x240507d0  addiu       $a1, $zero, 0x7D0
    ctx->pc = 0x10ef44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x10ef48: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x10ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x10ef4c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x10ef4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x10ef50: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x10ef50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x10ef54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10ef54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef58: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x10ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x10ef5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ef60: 0x8d05a8f0  lw          $a1, -0x5710($t0)
    ctx->pc = 0x10ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50A8F0u));
    // 0x10ef64: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x10ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10ef68: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x10ef68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x10ef6c: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x10ef6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10ef70: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x10ef70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10ef74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10ef74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ef78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ef7c: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x10ef7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10ef80: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x10ef80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10ef84: 0xad05a8f0  sw          $a1, -0x5710($t0)
    ctx->pc = 0x10ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294945008), GPR_U32(ctx, 5));
    // 0x10ef88: 0x3e00008  jr          $ra
    ctx->pc = 0x10EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF88u;
        // 0x10ef8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EF90u;
}
