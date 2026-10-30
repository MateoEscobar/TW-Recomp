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

// Function: sub_0016E388
// Address: 0x16e388 - 0x16e420
void sub_0016E388_0x16e388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E388_0x16e388");
#endif

    switch (ctx->pc) {
        case 0x16e388u: goto label_16e388;
        case 0x16e38cu: goto label_16e38c;
        case 0x16e390u: goto label_16e390;
        case 0x16e394u: goto label_16e394;
        case 0x16e398u: goto label_16e398;
        case 0x16e39cu: goto label_16e39c;
        case 0x16e3a0u: goto label_16e3a0;
        case 0x16e3a4u: goto label_16e3a4;
        case 0x16e3a8u: goto label_16e3a8;
        case 0x16e3acu: goto label_16e3ac;
        case 0x16e3b0u: goto label_16e3b0;
        case 0x16e3b4u: goto label_16e3b4;
        case 0x16e3b8u: goto label_16e3b8;
        case 0x16e3bcu: goto label_16e3bc;
        case 0x16e3c0u: goto label_16e3c0;
        case 0x16e3c4u: goto label_16e3c4;
        case 0x16e3c8u: goto label_16e3c8;
        case 0x16e3ccu: goto label_16e3cc;
        case 0x16e3d0u: goto label_16e3d0;
        case 0x16e3d4u: goto label_16e3d4;
        case 0x16e3d8u: goto label_16e3d8;
        case 0x16e3dcu: goto label_16e3dc;
        case 0x16e3e0u: goto label_16e3e0;
        case 0x16e3e4u: goto label_16e3e4;
        case 0x16e3e8u: goto label_16e3e8;
        case 0x16e3ecu: goto label_16e3ec;
        case 0x16e3f0u: goto label_16e3f0;
        case 0x16e3f4u: goto label_16e3f4;
        case 0x16e3f8u: goto label_16e3f8;
        case 0x16e3fcu: goto label_16e3fc;
        case 0x16e400u: goto label_16e400;
        case 0x16e404u: goto label_16e404;
        case 0x16e408u: goto label_16e408;
        case 0x16e40cu: goto label_16e40c;
        case 0x16e410u: goto label_16e410;
        case 0x16e414u: goto label_16e414;
        case 0x16e418u: goto label_16e418;
        case 0x16e41cu: goto label_16e41c;
        default: break;
    }

    ctx->pc = 0x16e388u;

label_16e388:
    // 0x16e388: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16e388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16e38c:
    // 0x16e38c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x16e38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_16e390:
    // 0x16e390: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16e390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_16e394:
    // 0x16e394: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x16e394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_16e398:
    // 0x16e398: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16e398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_16e39c:
    // 0x16e39c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16e39cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e3a0:
    // 0x16e3a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e3a4:
    // 0x16e3a4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16e3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_16e3a8:
    // 0x16e3a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16e3ac:
    // 0x16e3ac: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x16e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_16e3b0:
    // 0x16e3b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e3b4:
    // 0x16e3b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16e3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16e3b8:
    // 0x16e3b8: 0x8c65b8b8  lw          $a1, -0x4748($v1)
    ctx->pc = 0x16e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_16e3bc:
    // 0x16e3bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x16e3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16e3c0:
    // 0x16e3c0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x16e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_16e3c4:
    // 0x16e3c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x16e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_16e3c8:
    // 0x16e3c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16e3cc:
    // 0x16e3cc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x16e3ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_16e3d0:
    // 0x16e3d0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_16e3d4:
    // 0x16e3d4: 0x40f809  jalr        $v0
label_16e3d8:
    if (ctx->pc == 0x16E3D8u) {
        ctx->pc = 0x16E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3D4u;
        // 0x16e3d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E3DCu;
        goto label_16e3dc;
    }
    ctx->pc = 0x16E3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E3DCu);
        ctx->pc = 0x16E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E3D4u;
        // 0x16e3d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E3D4u, 0x16E3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E3DCu;
label_16e3dc:
    // 0x16e3dc: 0x24420bb8  addiu       $v0, $v0, 0xBB8
    ctx->pc = 0x16e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3000));
label_16e3e0:
    // 0x16e3e0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x16e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_16e3e4:
    // 0x16e3e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16e3e8:
    // 0x16e3e8: 0x24638988  addiu       $v1, $v1, -0x7678
    ctx->pc = 0x16e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936968));
label_16e3ec:
    // 0x16e3ec: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x16e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_16e3f0:
    // 0x16e3f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16e3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e3f4:
    // 0x16e3f4: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x16e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
label_16e3f8:
    // 0x16e3f8: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x16e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_16e3fc:
    // 0x16e3fc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x16e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_16e400:
    // 0x16e400: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16e400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16e404:
    // 0x16e404: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16e404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16e408:
    // 0x16e408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16e408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16e40c:
    // 0x16e40c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16e40cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16e410:
    // 0x16e410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e414:
    // 0x16e414: 0x3e00008  jr          $ra
label_16e418:
    if (ctx->pc == 0x16E418u) {
        ctx->pc = 0x16E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E414u;
        // 0x16e418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E41Cu;
        goto label_16e41c;
    }
    ctx->pc = 0x16E414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E414u;
        // 0x16e418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E41Cu;
label_16e41c:
    // 0x16e41c: 0x0  nop
    ctx->pc = 0x16e41cu;
    // NOP
    ctx->pc = 0x16e420u;
}
