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

// Function: sub_00444408
// Address: 0x444408 - 0x444488
void sub_00444408_0x444408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444408_0x444408");
#endif

    switch (ctx->pc) {
        case 0x444464u: goto label_444464;
        default: break;
    }

    ctx->pc = 0x444408u;

    // 0x444408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x444408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44440c: 0x3c0208ca  lui         $v0, 0x8CA
    ctx->pc = 0x44440cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2250 << 16));
    // 0x444410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x444410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x444414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x444414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x444418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44441c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x44441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444420: 0x72020019  multu1      $zero, $s0, $v0
    ctx->pc = 0x444420u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 16) * (uint64_t)GPR_U32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x444424: 0x820019  multu       $a0, $v0
    ctx->pc = 0x444424u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x444428: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x444428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x44442c: 0x34a54240  ori         $a1, $a1, 0x4240
    ctx->pc = 0x44442cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16960);
    // 0x444430: 0x70008010  mfhi1       $s0
    ctx->pc = 0x444430u;
    SET_GPR_U64(ctx, 16, ctx->hi1);
    // 0x444434: 0x3012  mflo        $a2
    ctx->pc = 0x444434u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x444438: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x444438u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x44443c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x44443cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x444440: 0x2010  mfhi        $a0
    ctx->pc = 0x444440u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x444444: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x444444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x444448: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x444448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x44444c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x44444cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x444450: 0x70003012  mflo1       $a2
    ctx->pc = 0x444450u;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x444454: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x444454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x444458: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x444458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x44445c: 0xc10acae  jal         func_42B2B8
    ctx->pc = 0x44445Cu;
    SET_GPR_U32(ctx, 31, 0x444464u);
    ctx->pc = 0x444460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44445Cu;
    // 0x444460: 0x2068025  or          $s0, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x44445Cu, 0x444464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444464u;
label_444464:
    // 0x444464: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x444464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x444468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x444468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44446c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44446cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x444470: 0x3e00008  jr          $ra
    ctx->pc = 0x444470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444470u;
        // 0x444474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444478u;
    // 0x444478: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x444478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x44447c: 0x0  nop
    ctx->pc = 0x44447cu;
    // NOP
    // 0x444480: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x444480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x444484: 0x0  nop
    ctx->pc = 0x444484u;
    // NOP
    ctx->pc = 0x444488u;
}
