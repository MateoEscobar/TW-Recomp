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

// Function: sub_001BC3B8
// Address: 0x1bc3b8 - 0x1bc440
void sub_001BC3B8_0x1bc3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC3B8_0x1bc3b8");
#endif

    switch (ctx->pc) {
        case 0x1bc3f0u: goto label_1bc3f0;
        case 0x1bc424u: goto label_1bc424;
        default: break;
    }

    ctx->pc = 0x1bc3b8u;

    // 0x1bc3b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bc3bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1bc3c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bc3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bc3c4: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1bc3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1bc3c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bc3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bc3cc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bc3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1bc3d0: 0x8c43e894  lw          $v1, -0x176C($v0)
    ctx->pc = 0x1bc3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50E894u));
    // 0x1bc3d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3d8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1bc3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1bc3dc: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1bc3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x1bc3e0: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1bc3e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1bc3e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc3e8: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x1BC3E8u;
    SET_GPR_U32(ctx, 31, 0x1BC3F0u);
    ctx->pc = 0x1BC3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3E8u;
    // 0x1bc3ec: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1BC3E8u, 0x1BC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3F0u;
label_1bc3f0:
    // 0x1bc3f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bc3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc3f4: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1bc3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x1bc3f8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bc3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bc3fc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x1bc3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bc400: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x1bc400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x1bc404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bc408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc40c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bc40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc414: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1bc414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc418: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1bc418u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc41c: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x1BC41Cu;
    SET_GPR_U32(ctx, 31, 0x1BC424u);
    ctx->pc = 0x1BC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC41Cu;
    // 0x1bc420: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1BC41Cu, 0x1BC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC424u;
label_1bc424:
    // 0x1bc424: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x1bc424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x1bc428: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bc428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc42c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bc42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc434: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC434u;
        // 0x1bc438: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC43Cu;
    // 0x1bc43c: 0x0  nop
    ctx->pc = 0x1bc43cu;
    // NOP
    ctx->pc = 0x1bc440u;
}
