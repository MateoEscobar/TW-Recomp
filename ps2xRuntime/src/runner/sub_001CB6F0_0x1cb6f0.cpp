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

// Function: sub_001CB6F0
// Address: 0x1cb6f0 - 0x1cb778
void sub_001CB6F0_0x1cb6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB6F0_0x1cb6f0");
#endif

    switch (ctx->pc) {
        case 0x1cb704u: goto label_1cb704;
        case 0x1cb768u: goto label_1cb768;
        default: break;
    }

    ctx->pc = 0x1cb6f0u;

    // 0x1cb6f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cb6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cb6f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1cb6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1cb6f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cb6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cb6fc: 0xc072d1a  jal         func_1CB468
    ctx->pc = 0x1CB6FCu;
    SET_GPR_U32(ctx, 31, 0x1CB704u);
    ctx->pc = 0x1CB700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB6FCu;
    // 0x1cb700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB468u, 0x1CB6FCu, 0x1CB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB704u;
label_1cb704:
    // 0x1cb704: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x1cb704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1cb708: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1cb708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cb70c: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x1cb70cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb710: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x1cb710u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cb714: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1cb714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb71c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1cb71cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb720: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1cb720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cb724: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cb724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb728: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb72c: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x1cb72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x1cb730: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cb730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb734: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1cb734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1cb738: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cb738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cb73c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cb73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb740: 0x2409005d  addiu       $t1, $zero, 0x5D
    ctx->pc = 0x1cb740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1cb744: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1cb744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb748: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1cb748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb74c: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1cb74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1cb750: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1cb750u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1cb754: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1cb754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cb758: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cb758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb75c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cb75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cb760: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x1CB760u;
    SET_GPR_U32(ctx, 31, 0x1CB768u);
    ctx->pc = 0x1CB764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB760u;
    // 0x1cb764: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1CB760u, 0x1CB768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB768u;
label_1cb768:
    // 0x1cb768: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1cb768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cb76c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cb76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cb770: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB770u;
        // 0x1cb774: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB778u;
}
