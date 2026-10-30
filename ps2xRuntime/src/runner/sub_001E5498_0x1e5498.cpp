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

// Function: sub_001E5498
// Address: 0x1e5498 - 0x1e5540
void sub_001E5498_0x1e5498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5498_0x1e5498");
#endif

    switch (ctx->pc) {
        case 0x1e54c0u: goto label_1e54c0;
        case 0x1e54e4u: goto label_1e54e4;
        case 0x1e54ecu: goto label_1e54ec;
        case 0x1e54f4u: goto label_1e54f4;
        case 0x1e54fcu: goto label_1e54fc;
        case 0x1e5500u: goto label_1e5500;
        case 0x1e550cu: goto label_1e550c;
        case 0x1e5520u: goto label_1e5520;
        default: break;
    }

    ctx->pc = 0x1e5498u;

    // 0x1e5498: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e5498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e549c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e54a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e54a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e54a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e54a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e54a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e54a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e54ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e54acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e54b0: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1e54b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e54b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e54b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e54b8: 0xc074612  jal         func_1D1848
    ctx->pc = 0x1E54B8u;
    SET_GPR_U32(ctx, 31, 0x1E54C0u);
    ctx->pc = 0x1E54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54B8u;
    // 0x1e54bc: 0x26110bb0  addiu       $s1, $s0, 0xBB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1848u, 0x1E54B8u, 0x1E54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54C0u;
label_1e54c0:
    // 0x1e54c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e54c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e54c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1e54c8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1e54cc: 0x2463c728  addiu       $v1, $v1, -0x38D8
    ctx->pc = 0x1e54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952744));
    // 0x1e54d0: 0x2442c700  addiu       $v0, $v0, -0x3900
    ctx->pc = 0x1e54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952704));
    // 0x1e54d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1e54d8: 0x260407b0  addiu       $a0, $s0, 0x7B0
    ctx->pc = 0x1e54d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1968));
    // 0x1e54dc: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E54DCu;
    SET_GPR_U32(ctx, 31, 0x1E54E4u);
    ctx->pc = 0x1E54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54DCu;
    // 0x1e54e0: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E54DCu, 0x1E54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54E4u;
label_1e54e4:
    // 0x1e54e4: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E54E4u;
    SET_GPR_U32(ctx, 31, 0x1E54ECu);
    ctx->pc = 0x1E54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54E4u;
    // 0x1e54e8: 0x260408b0  addiu       $a0, $s0, 0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E54E4u, 0x1E54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54ECu;
label_1e54ec:
    // 0x1e54ec: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E54ECu;
    SET_GPR_U32(ctx, 31, 0x1E54F4u);
    ctx->pc = 0x1E54F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54ECu;
    // 0x1e54f0: 0x260409b0  addiu       $a0, $s0, 0x9B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E54ECu, 0x1E54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54F4u;
label_1e54f4:
    // 0x1e54f4: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1E54F4u;
    SET_GPR_U32(ctx, 31, 0x1E54FCu);
    ctx->pc = 0x1E54F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E54F4u;
    // 0x1e54f8: 0x26040ab0  addiu       $a0, $s0, 0xAB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1E54F4u, 0x1E54FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54FCu;
label_1e54fc:
    // 0x1e54fc: 0x0  nop
    ctx->pc = 0x1e54fcu;
    // NOP
label_1e5500:
    // 0x1e5500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5504: 0xc070734  jal         func_1C1CD0
    ctx->pc = 0x1E5504u;
    SET_GPR_U32(ctx, 31, 0x1E550Cu);
    ctx->pc = 0x1E5508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5504u;
    // 0x1e5508: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CD0u, 0x1E5504u, 0x1E550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E550Cu;
label_1e550c:
    // 0x1e550c: 0x0  nop
    ctx->pc = 0x1e550cu;
    // NOP
    // 0x1e5510: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E5510u;
    {
        const bool branch_taken_0x1e5510 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5510u;
        // 0x1e5514: 0x263103f0  addiu       $s1, $s1, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5510) {
            ctx->pc = 0x1E5500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5500;
        }
    }
    ctx->pc = 0x1E5518u;
    // 0x1e5518: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1E5518u;
    SET_GPR_U32(ctx, 31, 0x1E5520u);
    ctx->pc = 0x1E551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5518u;
    // 0x1e551c: 0x26041b70  addiu       $a0, $s0, 0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1E5518u, 0x1E5520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5520u;
label_1e5520:
    // 0x1e5520: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5524: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e5524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5528: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e5528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e552c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e552cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5530: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e5530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5538: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5538u;
        // 0x1e553c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5540u;
}
