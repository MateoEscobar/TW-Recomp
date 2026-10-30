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

// Function: sub_0032D658
// Address: 0x32d658 - 0x32d6e8
void sub_0032D658_0x32d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D658_0x32d658");
#endif

    switch (ctx->pc) {
        case 0x32d678u: goto label_32d678;
        default: break;
    }

    ctx->pc = 0x32d658u;

    // 0x32d658: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d65c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32d660: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32d664: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32d664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d66c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d670: 0xc0ca4d4  jal         func_329350
    ctx->pc = 0x32D670u;
    SET_GPR_U32(ctx, 31, 0x32D678u);
    ctx->pc = 0x32D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D670u;
    // 0x32d674: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329350u, 0x32D670u, 0x32D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D678u;
label_32d678:
    // 0x32d678: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x32d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x32d67c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d680: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x32d680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x32d684: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x32d684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x32d688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d68c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x32d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x32d690: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x32d690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x32d694: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x32d694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
    // 0x32d698: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x32d698u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x32d69c: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x32d69cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x32d6a0: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x32d6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x32d6a4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x32d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x32d6a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32d6ac: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x32d6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x32d6b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32d6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d6b4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x32d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x32d6b8: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x32d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x32d6bc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x32d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x32d6c0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x32d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x32d6c4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x32d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x32d6c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32d6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d6cc: 0xa4400022  sh          $zero, 0x22($v0)
    ctx->pc = 0x32d6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x32d6d0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x32d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x32d6d4: 0xa4400024  sh          $zero, 0x24($v0)
    ctx->pc = 0x32d6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x32d6d8: 0xa4400020  sh          $zero, 0x20($v0)
    ctx->pc = 0x32d6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x32d6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x32D6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D6DCu;
        // 0x32d6e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D6E4u;
    // 0x32d6e4: 0x0  nop
    ctx->pc = 0x32d6e4u;
    // NOP
    ctx->pc = 0x32d6e8u;
}
