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

// Function: sub_00297748
// Address: 0x297748 - 0x2977c8
void sub_00297748_0x297748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297748_0x297748");
#endif

    switch (ctx->pc) {
        case 0x297780u: goto label_297780;
        case 0x2977a0u: goto label_2977a0;
        case 0x2977b8u: goto label_2977b8;
        default: break;
    }

    ctx->pc = 0x297748u;

    // 0x297748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29774c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297750: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x297750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x297754: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x297754u;
    {
        const bool branch_taken_0x297754 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x297758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297754u;
        // 0x297758: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297754) {
            ctx->pc = 0x2977B8u;
            goto label_2977b8;
        }
    }
    ctx->pc = 0x29775Cu;
    // 0x29775c: 0xa0850014  sb          $a1, 0x14($a0)
    ctx->pc = 0x29775cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 5));
    // 0x297760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297764: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x297764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297768: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x297768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x29776c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29776cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297770: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x297770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x297774: 0xa4800016  sh          $zero, 0x16($a0)
    ctx->pc = 0x297774u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x297778: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x297778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x29777c: 0x0  nop
    ctx->pc = 0x29777cu;
    // NOP
label_297780:
    // 0x297780: 0xa4a70000  sh          $a3, 0x0($a1)
    ctx->pc = 0x297780u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x297784: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x297784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x297788: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x297788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29778c: 0x0  nop
    ctx->pc = 0x29778cu;
    // NOP
    // 0x297790: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x297790u;
    {
        const bool branch_taken_0x297790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x297794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297790u;
        // 0x297794: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297790) {
            ctx->pc = 0x297780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297780;
        }
    }
    ctx->pc = 0x297798u;
    // 0x297798: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x297798u;
    SET_GPR_U32(ctx, 31, 0x2977A0u);
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297798u, 0x2977A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977A0u;
label_2977a0:
    // 0x2977a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2977a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2977a4: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2977a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2977a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2977a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2977ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2977acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2977b0: 0xc0a67aa  jal         func_299EA8
    ctx->pc = 0x2977B0u;
    SET_GPR_U32(ctx, 31, 0x2977B8u);
    ctx->pc = 0x2977B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977B0u;
    // 0x2977b4: 0x24840284  addiu       $a0, $a0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x2977B0u, 0x2977B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977B8u;
label_2977b8:
    // 0x2977b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2977b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2977bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2977BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2977C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977BCu;
        // 0x2977c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2977BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2977C4u;
    // 0x2977c4: 0x0  nop
    ctx->pc = 0x2977c4u;
    // NOP
    ctx->pc = 0x2977c8u;
}
