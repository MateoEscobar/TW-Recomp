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

// Function: sub_00329350
// Address: 0x329350 - 0x3293d8
void sub_00329350_0x329350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329350_0x329350");
#endif

    switch (ctx->pc) {
        case 0x32936cu: goto label_32936c;
        default: break;
    }

    ctx->pc = 0x329350u;

    // 0x329350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x329354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329358: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x329358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32935c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x32935cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x329360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329364: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x329364u;
    SET_GPR_U32(ctx, 31, 0x32936Cu);
    ctx->pc = 0x329368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329364u;
    // 0x329368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x329364u, 0x32936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32936Cu;
label_32936c:
    // 0x32936c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32936cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329374: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x329374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x329378: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x329378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x32937c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x32937cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x329380: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x329380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x329384: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x329384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x329388: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x329388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x32938c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x32938cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x329390: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x329390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x329394: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x329394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x329398: 0xa4600022  sh          $zero, 0x22($v1)
    ctx->pc = 0x329398u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x32939c: 0xa4600024  sh          $zero, 0x24($v1)
    ctx->pc = 0x32939cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x3293a0: 0xa4600026  sh          $zero, 0x26($v1)
    ctx->pc = 0x3293a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x3293a4: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x3293a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x3293a8: 0xa4600030  sh          $zero, 0x30($v1)
    ctx->pc = 0x3293a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x3293ac: 0xa4600032  sh          $zero, 0x32($v1)
    ctx->pc = 0x3293acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x3293b0: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x3293b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x3293b4: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x3293b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x3293b8: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x3293b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x3293bc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3293bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3293c0: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x3293c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x3293c4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3293c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x3293c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3293c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3293cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3293CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3293D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3293CCu;
        // 0x3293d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3293CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3293D4u;
    // 0x3293d4: 0x0  nop
    ctx->pc = 0x3293d4u;
    // NOP
    ctx->pc = 0x3293d8u;
}
