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

// Function: sub_003873C8
// Address: 0x3873c8 - 0x387498
void sub_003873C8_0x3873c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003873C8_0x3873c8");
#endif

    switch (ctx->pc) {
        case 0x387450u: goto label_387450;
        case 0x387458u: goto label_387458;
        case 0x387468u: goto label_387468;
        case 0x387470u: goto label_387470;
        default: break;
    }

    ctx->pc = 0x3873c8u;

    // 0x3873c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3873c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3873cc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3873ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x3873d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3873d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3873d4: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3873d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x3873d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3873d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3873dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3873dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3873e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3873e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3873e4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3873e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x3873e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3873e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3873ec: 0x24841780  addiu       $a0, $a0, 0x1780
    ctx->pc = 0x3873ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6016));
    // 0x3873f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3873f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3873f4: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x3873f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
    // 0x3873f8: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x3873f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
    // 0x3873fc: 0xa6200094  sh          $zero, 0x94($s1)
    ctx->pc = 0x3873fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x387400: 0xa2200096  sb          $zero, 0x96($s1)
    ctx->pc = 0x387400u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 150), (uint8_t)GPR_U32(ctx, 0));
    // 0x387404: 0xa2200097  sb          $zero, 0x97($s1)
    ctx->pc = 0x387404u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x387408: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x387408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x38740c: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x38740cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x387410: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x387410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x387414: 0x8e26008c  lw          $a2, 0x8C($s1)
    ctx->pc = 0x387414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x387418: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x387418u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x38741c: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x38741cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x387420: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x387420u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x387424: 0x7e230050  sq          $v1, 0x50($s1)
    ctx->pc = 0x387424u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 3));
    // 0x387428: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x387428u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511780u));
    // 0x38742c: 0x7e220060  sq          $v0, 0x60($s1)
    ctx->pc = 0x38742cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 2));
    // 0x387430: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x387430u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511780u));
    // 0x387434: 0x7e230070  sq          $v1, 0x70($s1)
    ctx->pc = 0x387434u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 3));
    // 0x387438: 0x8e62bd30  lw          $v0, -0x42D0($s3)
    ctx->pc = 0x387438u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x38743c: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x38743Cu;
    {
        const bool branch_taken_0x38743c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x387440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38743Cu;
        // 0x387440: 0x2632008c  addiu       $s2, $s1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38743c) {
            ctx->pc = 0x387478u;
            goto label_387478;
        }
    }
    ctx->pc = 0x387444u;
    // 0x387444: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x387444u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x387448: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x387448u;
    SET_GPR_U32(ctx, 31, 0x387450u);
    ctx->pc = 0x38744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387448u;
    // 0x38744c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x387448u, 0x387450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387450u;
label_387450:
    // 0x387450: 0xc0e4060  jal         func_390180
    ctx->pc = 0x387450u;
    SET_GPR_U32(ctx, 31, 0x387458u);
    ctx->pc = 0x387454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387450u;
    // 0x387454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x387450u, 0x387458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387458u;
label_387458:
    // 0x387458: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x38745c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38745cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387460: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x387460u;
    SET_GPR_U32(ctx, 31, 0x387468u);
    ctx->pc = 0x387464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387460u;
    // 0x387464: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x387460u, 0x387468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387468u;
label_387468:
    // 0x387468: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x387468u;
    SET_GPR_U32(ctx, 31, 0x387470u);
    ctx->pc = 0x38746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387468u;
    // 0x38746c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x387468u, 0x387470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387470u;
label_387470:
    // 0x387470: 0x8e62bd30  lw          $v0, -0x42D0($s3)
    ctx->pc = 0x387470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
    // 0x387474: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x387474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_387478:
    // 0x387478: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x387478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38747c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38747cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387480: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x387480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387484: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x387484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38748c: 0x3e00008  jr          $ra
    ctx->pc = 0x38748Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38748Cu;
        // 0x387490: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38748Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387494u;
    // 0x387494: 0x0  nop
    ctx->pc = 0x387494u;
    // NOP
    ctx->pc = 0x387498u;
}
