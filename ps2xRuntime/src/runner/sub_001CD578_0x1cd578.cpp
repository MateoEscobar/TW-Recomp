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

// Function: sub_001CD578
// Address: 0x1cd578 - 0x1cd5e8
void sub_001CD578_0x1cd578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD578_0x1cd578");
#endif

    switch (ctx->pc) {
        case 0x1cd5ccu: goto label_1cd5cc;
        case 0x1cd5d8u: goto label_1cd5d8;
        default: break;
    }

    ctx->pc = 0x1cd578u;

    // 0x1cd578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cd578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cd57c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1cd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cd580: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cd580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cd584: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1cd584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cd588: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cd588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cd58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd590: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1cd590u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd594: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1cd594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd598: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cd598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd59c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1cd59cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd5a0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cd5a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd5a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cd5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd5a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cd5a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd5b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd5b4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1cd5b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd5b8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1cd5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd5bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cd5bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cd5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cd5c4: 0xc06e424  jal         func_1B9090
    ctx->pc = 0x1CD5C4u;
    SET_GPR_U32(ctx, 31, 0x1CD5CCu);
    ctx->pc = 0x1CD5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD5C4u;
    // 0x1cd5c8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x1CD5C4u, 0x1CD5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5CCu;
label_1cd5cc:
    // 0x1cd5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd5d0: 0xc06e51e  jal         func_1B9478
    ctx->pc = 0x1CD5D0u;
    SET_GPR_U32(ctx, 31, 0x1CD5D8u);
    ctx->pc = 0x1CD5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD5D0u;
    // 0x1cd5d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1CD5D0u, 0x1CD5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD5D8u;
label_1cd5d8:
    // 0x1cd5d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cd5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd5dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cd5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5E0u;
        // 0x1cd5e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD5E8u;
}
