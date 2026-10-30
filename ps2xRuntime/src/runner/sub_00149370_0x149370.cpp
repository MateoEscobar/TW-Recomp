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

// Function: sub_00149370
// Address: 0x149370 - 0x149410
void sub_00149370_0x149370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149370_0x149370");
#endif

    switch (ctx->pc) {
        case 0x149370u: goto label_149370;
        case 0x149374u: goto label_149374;
        case 0x149378u: goto label_149378;
        case 0x14937cu: goto label_14937c;
        case 0x149380u: goto label_149380;
        case 0x149384u: goto label_149384;
        case 0x149388u: goto label_149388;
        case 0x14938cu: goto label_14938c;
        case 0x149390u: goto label_149390;
        case 0x149394u: goto label_149394;
        case 0x149398u: goto label_149398;
        case 0x14939cu: goto label_14939c;
        case 0x1493a0u: goto label_1493a0;
        case 0x1493a4u: goto label_1493a4;
        case 0x1493a8u: goto label_1493a8;
        case 0x1493acu: goto label_1493ac;
        case 0x1493b0u: goto label_1493b0;
        case 0x1493b4u: goto label_1493b4;
        case 0x1493b8u: goto label_1493b8;
        case 0x1493bcu: goto label_1493bc;
        case 0x1493c0u: goto label_1493c0;
        case 0x1493c4u: goto label_1493c4;
        case 0x1493c8u: goto label_1493c8;
        case 0x1493ccu: goto label_1493cc;
        case 0x1493d0u: goto label_1493d0;
        case 0x1493d4u: goto label_1493d4;
        case 0x1493d8u: goto label_1493d8;
        case 0x1493dcu: goto label_1493dc;
        case 0x1493e0u: goto label_1493e0;
        case 0x1493e4u: goto label_1493e4;
        case 0x1493e8u: goto label_1493e8;
        case 0x1493ecu: goto label_1493ec;
        case 0x1493f0u: goto label_1493f0;
        case 0x1493f4u: goto label_1493f4;
        case 0x1493f8u: goto label_1493f8;
        case 0x1493fcu: goto label_1493fc;
        case 0x149400u: goto label_149400;
        case 0x149404u: goto label_149404;
        case 0x149408u: goto label_149408;
        case 0x14940cu: goto label_14940c;
        default: break;
    }

    ctx->pc = 0x149370u;

label_149370:
    // 0x149370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_149374:
    // 0x149374: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x149374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_149378:
    // 0x149378: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x149378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14937c:
    // 0x14937c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14937cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_149380:
    // 0x149380: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x149380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_149384:
    // 0x149384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_149388:
    // 0x149388: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x149388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14938c:
    // 0x14938c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x14938cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_149390:
    // 0x149390: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x149390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_149394:
    // 0x149394: 0x40f809  jalr        $v0
label_149398:
    if (ctx->pc == 0x149398u) {
        ctx->pc = 0x149398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149394u;
        // 0x149398: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14939Cu;
        goto label_14939c;
    }
    ctx->pc = 0x149394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14939Cu);
        ctx->pc = 0x149398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149394u;
        // 0x149398: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149394u, 0x14939Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14939Cu;
label_14939c:
    // 0x14939c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1493a0:
    // 0x1493a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1493a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1493a4:
    // 0x1493a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1493a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1493a8:
    // 0x1493a8: 0xc110746  jal         func_441D18
label_1493ac:
    if (ctx->pc == 0x1493ACu) {
        ctx->pc = 0x1493ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493A8u;
        // 0x1493ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1493B0u;
        goto label_1493b0;
    }
    ctx->pc = 0x1493A8u;
    SET_GPR_U32(ctx, 31, 0x1493B0u);
    ctx->pc = 0x1493ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1493A8u;
    // 0x1493ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x441D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x441D18u, 0x1493A8u, 0x1493B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1493B0u;
label_1493b0:
    // 0x1493b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1493b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1493b4:
    // 0x1493b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1493b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1493b8:
    // 0x1493b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1493b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1493bc:
    // 0x1493bc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x1493bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_1493c0:
    // 0x1493c0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x1493c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_1493c4:
    // 0x1493c4: 0x40f809  jalr        $v0
label_1493c8:
    if (ctx->pc == 0x1493C8u) {
        ctx->pc = 0x1493C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493C4u;
        // 0x1493c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1493CCu;
        goto label_1493cc;
    }
    ctx->pc = 0x1493C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1493CCu);
        ctx->pc = 0x1493C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493C4u;
        // 0x1493c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1493C4u, 0x1493CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1493CCu;
label_1493cc:
    // 0x1493cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1493ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1493d0:
    // 0x1493d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1493d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1493d4:
    // 0x1493d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1493d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1493d8:
    // 0x1493d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1493d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1493dc:
    // 0x1493dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1493dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1493e0:
    // 0x1493e0: 0x3e00008  jr          $ra
label_1493e4:
    if (ctx->pc == 0x1493E4u) {
        ctx->pc = 0x1493E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493E0u;
        // 0x1493e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1493E8u;
        goto label_1493e8;
    }
    ctx->pc = 0x1493E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1493E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1493E0u;
        // 0x1493e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1493E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1493E8u;
label_1493e8:
    // 0x1493e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1493ec:
    // 0x1493ec: 0x0  nop
    ctx->pc = 0x1493ecu;
    // NOP
label_1493f0:
    // 0x1493f0: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x1493f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1493f4:
    // 0x1493f4: 0x0  nop
    ctx->pc = 0x1493f4u;
    // NOP
label_1493f8:
    // 0x1493f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1493f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1493fc:
    // 0x1493fc: 0x0  nop
    ctx->pc = 0x1493fcu;
    // NOP
label_149400:
    // 0x149400: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_149404:
    // 0x149404: 0x0  nop
    ctx->pc = 0x149404u;
    // NOP
label_149408:
    // 0x149408: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x149408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_14940c:
    // 0x14940c: 0x0  nop
    ctx->pc = 0x14940cu;
    // NOP
    ctx->pc = 0x149410u;
}
