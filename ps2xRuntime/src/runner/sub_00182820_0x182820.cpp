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

// Function: sub_00182820
// Address: 0x182820 - 0x1828b0
void sub_00182820_0x182820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182820_0x182820");
#endif

    switch (ctx->pc) {
        case 0x182850u: goto label_182850;
        case 0x182874u: goto label_182874;
        case 0x182880u: goto label_182880;
        default: break;
    }

    ctx->pc = 0x182820u;

    // 0x182820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182824: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x182824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x182828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18282c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x182830: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x182830u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x182834: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x182834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x182838: 0x8e50cd4c  lw          $s0, -0x32B4($s2)
    ctx->pc = 0x182838u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x18283c: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x18283cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x182840: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x182840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x182844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182848: 0xc051048  jal         func_144120
    ctx->pc = 0x182848u;
    SET_GPR_U32(ctx, 31, 0x182850u);
    ctx->pc = 0x18284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182848u;
    // 0x18284c: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x182848u, 0x182850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182850u;
label_182850:
    // 0x182850: 0x8e44cd4c  lw          $a0, -0x32B4($s2)
    ctx->pc = 0x182850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    // 0x182854: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x182854u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
    // 0x182858: 0xae021040  sw          $v0, 0x1040($s0)
    ctx->pc = 0x182858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4160), GPR_U32(ctx, 2));
    // 0x18285c: 0x263127a8  addiu       $s1, $s1, 0x27A8
    ctx->pc = 0x18285cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10152));
    // 0x182860: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x182860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x182864: 0x8ca21040  lw          $v0, 0x1040($a1)
    ctx->pc = 0x182864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4160)));
    // 0x182868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x182868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18286c: 0xc060a2c  jal         func_1828B0
    ctx->pc = 0x18286Cu;
    SET_GPR_U32(ctx, 31, 0x182874u);
    ctx->pc = 0x182870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18286Cu;
    // 0x182870: 0xaca31048  sw          $v1, 0x1048($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4168), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828B0u, 0x18286Cu, 0x182874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182874u;
label_182874:
    // 0x182874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x182874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182878: 0xc10c978  jal         func_4325E0
    ctx->pc = 0x182878u;
    SET_GPR_U32(ctx, 31, 0x182880u);
    ctx->pc = 0x18287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182878u;
    // 0x18287c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x182878u, 0x182880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182880u;
label_182880:
    // 0x182880: 0x8e43cd4c  lw          $v1, -0x32B4($s2)
    ctx->pc = 0x182880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    // 0x182884: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x182884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182888: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x182888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18288c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18288cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182890: 0x8c621040  lw          $v0, 0x1040($v1)
    ctx->pc = 0x182890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4160)));
    // 0x182894: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182898: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x182898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x18289c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18289cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1828a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1828a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1828a4: 0xac621044  sw          $v0, 0x1044($v1)
    ctx->pc = 0x1828a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4164), GPR_U32(ctx, 2));
    // 0x1828a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1828A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1828ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1828A8u;
        // 0x1828ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1828A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1828B0u;
}
