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

// Function: sub_0022C388
// Address: 0x22c388 - 0x22c548
void sub_0022C388_0x22c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C388_0x22c388");
#endif

    switch (ctx->pc) {
        case 0x22c388u: goto label_22c388;
        case 0x22c38cu: goto label_22c38c;
        case 0x22c390u: goto label_22c390;
        case 0x22c394u: goto label_22c394;
        case 0x22c398u: goto label_22c398;
        case 0x22c39cu: goto label_22c39c;
        case 0x22c3a0u: goto label_22c3a0;
        case 0x22c3a4u: goto label_22c3a4;
        case 0x22c3a8u: goto label_22c3a8;
        case 0x22c3acu: goto label_22c3ac;
        case 0x22c3b0u: goto label_22c3b0;
        case 0x22c3b4u: goto label_22c3b4;
        case 0x22c3b8u: goto label_22c3b8;
        case 0x22c3bcu: goto label_22c3bc;
        case 0x22c3c0u: goto label_22c3c0;
        case 0x22c3c4u: goto label_22c3c4;
        case 0x22c3c8u: goto label_22c3c8;
        case 0x22c3ccu: goto label_22c3cc;
        case 0x22c3d0u: goto label_22c3d0;
        case 0x22c3d4u: goto label_22c3d4;
        case 0x22c3d8u: goto label_22c3d8;
        case 0x22c3dcu: goto label_22c3dc;
        case 0x22c3e0u: goto label_22c3e0;
        case 0x22c3e4u: goto label_22c3e4;
        case 0x22c3e8u: goto label_22c3e8;
        case 0x22c3ecu: goto label_22c3ec;
        case 0x22c3f0u: goto label_22c3f0;
        case 0x22c3f4u: goto label_22c3f4;
        case 0x22c3f8u: goto label_22c3f8;
        case 0x22c3fcu: goto label_22c3fc;
        case 0x22c400u: goto label_22c400;
        case 0x22c404u: goto label_22c404;
        case 0x22c408u: goto label_22c408;
        case 0x22c40cu: goto label_22c40c;
        case 0x22c410u: goto label_22c410;
        case 0x22c414u: goto label_22c414;
        case 0x22c418u: goto label_22c418;
        case 0x22c41cu: goto label_22c41c;
        case 0x22c420u: goto label_22c420;
        case 0x22c424u: goto label_22c424;
        case 0x22c428u: goto label_22c428;
        case 0x22c42cu: goto label_22c42c;
        case 0x22c430u: goto label_22c430;
        case 0x22c434u: goto label_22c434;
        case 0x22c438u: goto label_22c438;
        case 0x22c43cu: goto label_22c43c;
        case 0x22c440u: goto label_22c440;
        case 0x22c444u: goto label_22c444;
        case 0x22c448u: goto label_22c448;
        case 0x22c44cu: goto label_22c44c;
        case 0x22c450u: goto label_22c450;
        case 0x22c454u: goto label_22c454;
        case 0x22c458u: goto label_22c458;
        case 0x22c45cu: goto label_22c45c;
        case 0x22c460u: goto label_22c460;
        case 0x22c464u: goto label_22c464;
        case 0x22c468u: goto label_22c468;
        case 0x22c46cu: goto label_22c46c;
        case 0x22c470u: goto label_22c470;
        case 0x22c474u: goto label_22c474;
        case 0x22c478u: goto label_22c478;
        case 0x22c47cu: goto label_22c47c;
        case 0x22c480u: goto label_22c480;
        case 0x22c484u: goto label_22c484;
        case 0x22c488u: goto label_22c488;
        case 0x22c48cu: goto label_22c48c;
        case 0x22c490u: goto label_22c490;
        case 0x22c494u: goto label_22c494;
        case 0x22c498u: goto label_22c498;
        case 0x22c49cu: goto label_22c49c;
        case 0x22c4a0u: goto label_22c4a0;
        case 0x22c4a4u: goto label_22c4a4;
        case 0x22c4a8u: goto label_22c4a8;
        case 0x22c4acu: goto label_22c4ac;
        case 0x22c4b0u: goto label_22c4b0;
        case 0x22c4b4u: goto label_22c4b4;
        case 0x22c4b8u: goto label_22c4b8;
        case 0x22c4bcu: goto label_22c4bc;
        case 0x22c4c0u: goto label_22c4c0;
        case 0x22c4c4u: goto label_22c4c4;
        case 0x22c4c8u: goto label_22c4c8;
        case 0x22c4ccu: goto label_22c4cc;
        case 0x22c4d0u: goto label_22c4d0;
        case 0x22c4d4u: goto label_22c4d4;
        case 0x22c4d8u: goto label_22c4d8;
        case 0x22c4dcu: goto label_22c4dc;
        case 0x22c4e0u: goto label_22c4e0;
        case 0x22c4e4u: goto label_22c4e4;
        case 0x22c4e8u: goto label_22c4e8;
        case 0x22c4ecu: goto label_22c4ec;
        case 0x22c4f0u: goto label_22c4f0;
        case 0x22c4f4u: goto label_22c4f4;
        case 0x22c4f8u: goto label_22c4f8;
        case 0x22c4fcu: goto label_22c4fc;
        case 0x22c500u: goto label_22c500;
        case 0x22c504u: goto label_22c504;
        case 0x22c508u: goto label_22c508;
        case 0x22c50cu: goto label_22c50c;
        case 0x22c510u: goto label_22c510;
        case 0x22c514u: goto label_22c514;
        case 0x22c518u: goto label_22c518;
        case 0x22c51cu: goto label_22c51c;
        case 0x22c520u: goto label_22c520;
        case 0x22c524u: goto label_22c524;
        case 0x22c528u: goto label_22c528;
        case 0x22c52cu: goto label_22c52c;
        case 0x22c530u: goto label_22c530;
        case 0x22c534u: goto label_22c534;
        case 0x22c538u: goto label_22c538;
        case 0x22c53cu: goto label_22c53c;
        case 0x22c540u: goto label_22c540;
        case 0x22c544u: goto label_22c544;
        default: break;
    }

    ctx->pc = 0x22c388u;

label_22c388:
    // 0x22c388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22c38c:
    // 0x22c38c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22c38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22c390:
    // 0x22c390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22c394:
    // 0x22c394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22c394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c398:
    // 0x22c398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22c39c:
    // 0x22c39c: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_22c3a0:
    if (ctx->pc == 0x22C3A0u) {
        ctx->pc = 0x22C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C39Cu;
        // 0x22c3a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3A4u;
        goto label_22c3a4;
    }
    ctx->pc = 0x22C39Cu;
    {
        const bool branch_taken_0x22c39c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C39Cu;
        // 0x22c3a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c39c) {
            ctx->pc = 0x22C46Cu;
            goto label_22c46c;
        }
    }
    ctx->pc = 0x22C3A4u;
label_22c3a4:
    // 0x22c3a4: 0xc095018  jal         func_254060
label_22c3a8:
    if (ctx->pc == 0x22C3A8u) {
        ctx->pc = 0x22C3ACu;
        goto label_22c3ac;
    }
    ctx->pc = 0x22C3A4u;
    SET_GPR_U32(ctx, 31, 0x22C3ACu);
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22C3A4u, 0x22C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C3ACu;
label_22c3ac:
    // 0x22c3ac: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x22c3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_22c3b0:
    // 0x22c3b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22c3b4:
    if (ctx->pc == 0x22C3B4u) {
        ctx->pc = 0x22C3B8u;
        goto label_22c3b8;
    }
    ctx->pc = 0x22C3B0u;
    {
        const bool branch_taken_0x22c3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c3b0) {
            ctx->pc = 0x22C3CCu;
            goto label_22c3cc;
        }
    }
    ctx->pc = 0x22C3B8u;
label_22c3b8:
    // 0x22c3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c3bc:
    // 0x22c3bc: 0xc094fde  jal         func_253F78
label_22c3c0:
    if (ctx->pc == 0x22C3C0u) {
        ctx->pc = 0x22C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3BCu;
        // 0x22c3c0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3C4u;
        goto label_22c3c4;
    }
    ctx->pc = 0x22C3BCu;
    SET_GPR_U32(ctx, 31, 0x22C3C4u);
    ctx->pc = 0x22C3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C3BCu;
    // 0x22c3c0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22C3BCu, 0x22C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C3C4u;
label_22c3c4:
    // 0x22c3c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_22c3c8:
    if (ctx->pc == 0x22C3C8u) {
        ctx->pc = 0x22C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3C4u;
        // 0x22c3c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3CCu;
        goto label_22c3cc;
    }
    ctx->pc = 0x22C3C4u;
    {
        const bool branch_taken_0x22c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3C4u;
        // 0x22c3c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3c4) {
            ctx->pc = 0x22C3D8u;
            goto label_22c3d8;
        }
    }
    ctx->pc = 0x22C3CCu;
label_22c3cc:
    // 0x22c3cc: 0xc094fca  jal         func_253F28
label_22c3d0:
    if (ctx->pc == 0x22C3D0u) {
        ctx->pc = 0x22C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3CCu;
        // 0x22c3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3D4u;
        goto label_22c3d4;
    }
    ctx->pc = 0x22C3CCu;
    SET_GPR_U32(ctx, 31, 0x22C3D4u);
    ctx->pc = 0x22C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C3CCu;
    // 0x22c3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22C3CCu, 0x22C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C3D4u;
label_22c3d4:
    // 0x22c3d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22c3d8:
    // 0x22c3d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c3dc:
    // 0x22c3dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22c3e0:
    // 0x22c3e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c3e4:
    // 0x22c3e4: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22c3e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22c3e8:
    // 0x22c3e8: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22c3ec:
    // 0x22c3ec: 0x40f809  jalr        $v0
label_22c3f0:
    if (ctx->pc == 0x22C3F0u) {
        ctx->pc = 0x22C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3ECu;
        // 0x22c3f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C3F4u;
        goto label_22c3f4;
    }
    ctx->pc = 0x22C3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C3F4u);
        ctx->pc = 0x22C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3ECu;
        // 0x22c3f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C3ECu, 0x22C3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C3F4u;
label_22c3f4:
    // 0x22c3f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22c3f8:
    // 0x22c3f8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c3f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c3fc:
    // 0x22c3fc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c400:
    // 0x22c400: 0x40f809  jalr        $v0
label_22c404:
    if (ctx->pc == 0x22C404u) {
        ctx->pc = 0x22C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C400u;
        // 0x22c404: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C408u;
        goto label_22c408;
    }
    ctx->pc = 0x22C400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C408u);
        ctx->pc = 0x22C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C400u;
        // 0x22c404: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C400u, 0x22C408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C408u;
label_22c408:
    // 0x22c408: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_22c40c:
    if (ctx->pc == 0x22C40Cu) {
        ctx->pc = 0x22C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C408u;
        // 0x22c40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C410u;
        goto label_22c410;
    }
    ctx->pc = 0x22C408u;
    {
        const bool branch_taken_0x22c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c408) {
            ctx->pc = 0x22C40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C408u;
            // 0x22c40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C42Cu;
            goto label_22c42c;
        }
    }
    ctx->pc = 0x22C410u;
label_22c410:
    // 0x22c410: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22c414:
    // 0x22c414: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c418:
    // 0x22c418: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c41c:
    // 0x22c41c: 0x40f809  jalr        $v0
label_22c420:
    if (ctx->pc == 0x22C420u) {
        ctx->pc = 0x22C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C41Cu;
        // 0x22c420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C424u;
        goto label_22c424;
    }
    ctx->pc = 0x22C41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C424u);
        ctx->pc = 0x22C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C41Cu;
        // 0x22c420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C41Cu, 0x22C424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C424u;
label_22c424:
    // 0x22c424: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22c424u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22c428:
    // 0x22c428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c42c:
    // 0x22c42c: 0xc089988  jal         func_226620
label_22c430:
    if (ctx->pc == 0x22C430u) {
        ctx->pc = 0x22C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C42Cu;
        // 0x22c430: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C434u;
        goto label_22c434;
    }
    ctx->pc = 0x22C42Cu;
    SET_GPR_U32(ctx, 31, 0x22C434u);
    ctx->pc = 0x22C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C42Cu;
    // 0x22c430: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C42Cu, 0x22C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C434u;
label_22c434:
    // 0x22c434: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c438:
    // 0x22c438: 0x8e0600d4  lw          $a2, 0xD4($s0)
    ctx->pc = 0x22c438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_22c43c:
    // 0x22c43c: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22c440:
    // 0x22c440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c444:
    // 0x22c444: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x22c444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_22c448:
    // 0x22c448: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x22c448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
label_22c44c:
    // 0x22c44c: 0xc08997c  jal         func_2265F0
label_22c450:
    if (ctx->pc == 0x22C450u) {
        ctx->pc = 0x22C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C44Cu;
        // 0x22c450: 0xa4c000bc  sh          $zero, 0xBC($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 188), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C454u;
        goto label_22c454;
    }
    ctx->pc = 0x22C44Cu;
    SET_GPR_U32(ctx, 31, 0x22C454u);
    ctx->pc = 0x22C450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C44Cu;
    // 0x22c450: 0xa4c000bc  sh          $zero, 0xBC($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 188), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22C44Cu, 0x22C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C454u;
label_22c454:
    // 0x22c454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c458:
    if (ctx->pc == 0x22C458u) {
        ctx->pc = 0x22C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C454u;
        // 0x22c458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C45Cu;
        goto label_22c45c;
    }
    ctx->pc = 0x22C454u;
    {
        const bool branch_taken_0x22c454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C454u;
        // 0x22c458: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c454) {
            ctx->pc = 0x22C464u;
            goto label_22c464;
        }
    }
    ctx->pc = 0x22C45Cu;
label_22c45c:
    // 0x22c45c: 0xc08abd2  jal         func_22AF48
label_22c460:
    if (ctx->pc == 0x22C460u) {
        ctx->pc = 0x22C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C45Cu;
        // 0x22c460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C464u;
        goto label_22c464;
    }
    ctx->pc = 0x22C45Cu;
    SET_GPR_U32(ctx, 31, 0x22C464u);
    ctx->pc = 0x22C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C45Cu;
    // 0x22c460: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AF48u, 0x22C45Cu, 0x22C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C464u;
label_22c464:
    // 0x22c464: 0xc08bf92  jal         func_22FE48
label_22c468:
    if (ctx->pc == 0x22C468u) {
        ctx->pc = 0x22C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C464u;
        // 0x22c468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C46Cu;
        goto label_22c46c;
    }
    ctx->pc = 0x22C464u;
    SET_GPR_U32(ctx, 31, 0x22C46Cu);
    ctx->pc = 0x22C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C464u;
    // 0x22c468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22C464u, 0x22C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C46Cu;
label_22c46c:
    // 0x22c46c: 0x52200032  beql        $s1, $zero, . + 4 + (0x32 << 2)
label_22c470:
    if (ctx->pc == 0x22C470u) {
        ctx->pc = 0x22C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C46Cu;
        // 0x22c470: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C474u;
        goto label_22c474;
    }
    ctx->pc = 0x22C46Cu;
    {
        const bool branch_taken_0x22c46c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c46c) {
            ctx->pc = 0x22C470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C46Cu;
            // 0x22c470: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C538u;
            goto label_22c538;
        }
    }
    ctx->pc = 0x22C474u;
label_22c474:
    // 0x22c474: 0xc095018  jal         func_254060
label_22c478:
    if (ctx->pc == 0x22C478u) {
        ctx->pc = 0x22C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C474u;
        // 0x22c478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C47Cu;
        goto label_22c47c;
    }
    ctx->pc = 0x22C474u;
    SET_GPR_U32(ctx, 31, 0x22C47Cu);
    ctx->pc = 0x22C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C474u;
    // 0x22c478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22C474u, 0x22C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C47Cu;
label_22c47c:
    // 0x22c47c: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x22c47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
label_22c480:
    // 0x22c480: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_22c484:
    if (ctx->pc == 0x22C484u) {
        ctx->pc = 0x22C488u;
        goto label_22c488;
    }
    ctx->pc = 0x22C480u;
    {
        const bool branch_taken_0x22c480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c480) {
            ctx->pc = 0x22C49Cu;
            goto label_22c49c;
        }
    }
    ctx->pc = 0x22C488u;
label_22c488:
    // 0x22c488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c48c:
    // 0x22c48c: 0xc094fde  jal         func_253F78
label_22c490:
    if (ctx->pc == 0x22C490u) {
        ctx->pc = 0x22C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C48Cu;
        // 0x22c490: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C494u;
        goto label_22c494;
    }
    ctx->pc = 0x22C48Cu;
    SET_GPR_U32(ctx, 31, 0x22C494u);
    ctx->pc = 0x22C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C48Cu;
    // 0x22c490: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22C48Cu, 0x22C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C494u;
label_22c494:
    // 0x22c494: 0x10000004  b           . + 4 + (0x4 << 2)
label_22c498:
    if (ctx->pc == 0x22C498u) {
        ctx->pc = 0x22C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C494u;
        // 0x22c498: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C49Cu;
        goto label_22c49c;
    }
    ctx->pc = 0x22C494u;
    {
        const bool branch_taken_0x22c494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C494u;
        // 0x22c498: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c494) {
            ctx->pc = 0x22C4A8u;
            goto label_22c4a8;
        }
    }
    ctx->pc = 0x22C49Cu;
label_22c49c:
    // 0x22c49c: 0xc094fca  jal         func_253F28
label_22c4a0:
    if (ctx->pc == 0x22C4A0u) {
        ctx->pc = 0x22C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C49Cu;
        // 0x22c4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C4A4u;
        goto label_22c4a4;
    }
    ctx->pc = 0x22C49Cu;
    SET_GPR_U32(ctx, 31, 0x22C4A4u);
    ctx->pc = 0x22C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C49Cu;
    // 0x22c4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22C49Cu, 0x22C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C4A4u;
label_22c4a4:
    // 0x22c4a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c4a8:
    // 0x22c4a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c4ac:
    // 0x22c4ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22c4acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22c4b0:
    // 0x22c4b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22c4b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22c4b4:
    // 0x22c4b4: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22c4b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22c4b8:
    // 0x22c4b8: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22c4bc:
    // 0x22c4bc: 0x40f809  jalr        $v0
label_22c4c0:
    if (ctx->pc == 0x22C4C0u) {
        ctx->pc = 0x22C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4BCu;
        // 0x22c4c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C4C4u;
        goto label_22c4c4;
    }
    ctx->pc = 0x22C4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C4C4u);
        ctx->pc = 0x22C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4BCu;
        // 0x22c4c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C4BCu, 0x22C4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C4C4u;
label_22c4c4:
    // 0x22c4c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c4c8:
    // 0x22c4c8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c4c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c4cc:
    // 0x22c4cc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c4d0:
    // 0x22c4d0: 0x40f809  jalr        $v0
label_22c4d4:
    if (ctx->pc == 0x22C4D4u) {
        ctx->pc = 0x22C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4D0u;
        // 0x22c4d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C4D8u;
        goto label_22c4d8;
    }
    ctx->pc = 0x22C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C4D8u);
        ctx->pc = 0x22C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4D0u;
        // 0x22c4d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C4D0u, 0x22C4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C4D8u;
label_22c4d8:
    // 0x22c4d8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_22c4dc:
    if (ctx->pc == 0x22C4DCu) {
        ctx->pc = 0x22C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4D8u;
        // 0x22c4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C4E0u;
        goto label_22c4e0;
    }
    ctx->pc = 0x22C4D8u;
    {
        const bool branch_taken_0x22c4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c4d8) {
            ctx->pc = 0x22C4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C4D8u;
            // 0x22c4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C4FCu;
            goto label_22c4fc;
        }
    }
    ctx->pc = 0x22C4E0u;
label_22c4e0:
    // 0x22c4e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c4e4:
    // 0x22c4e4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c4e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c4e8:
    // 0x22c4e8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c4ec:
    // 0x22c4ec: 0x40f809  jalr        $v0
label_22c4f0:
    if (ctx->pc == 0x22C4F0u) {
        ctx->pc = 0x22C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4ECu;
        // 0x22c4f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C4F4u;
        goto label_22c4f4;
    }
    ctx->pc = 0x22C4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C4F4u);
        ctx->pc = 0x22C4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4ECu;
        // 0x22c4f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C4ECu, 0x22C4F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C4F4u;
label_22c4f4:
    // 0x22c4f4: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x22c4f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_22c4f8:
    // 0x22c4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c4fc:
    // 0x22c4fc: 0xc089988  jal         func_226620
label_22c500:
    if (ctx->pc == 0x22C500u) {
        ctx->pc = 0x22C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C4FCu;
        // 0x22c500: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C504u;
        goto label_22c504;
    }
    ctx->pc = 0x22C4FCu;
    SET_GPR_U32(ctx, 31, 0x22C504u);
    ctx->pc = 0x22C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C4FCu;
    // 0x22c500: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C4FCu, 0x22C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C504u;
label_22c504:
    // 0x22c504: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22c504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_22c508:
    // 0x22c508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c50c:
    // 0x22c50c: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22c510:
    // 0x22c510: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x22c510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_22c514:
    // 0x22c514: 0xc08997c  jal         func_2265F0
label_22c518:
    if (ctx->pc == 0x22C518u) {
        ctx->pc = 0x22C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C514u;
        // 0x22c518: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C51Cu;
        goto label_22c51c;
    }
    ctx->pc = 0x22C514u;
    SET_GPR_U32(ctx, 31, 0x22C51Cu);
    ctx->pc = 0x22C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C514u;
    // 0x22c518: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22C514u, 0x22C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C51Cu;
label_22c51c:
    // 0x22c51c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c520:
    if (ctx->pc == 0x22C520u) {
        ctx->pc = 0x22C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C51Cu;
        // 0x22c520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C524u;
        goto label_22c524;
    }
    ctx->pc = 0x22C51Cu;
    {
        const bool branch_taken_0x22c51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C51Cu;
        // 0x22c520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c51c) {
            ctx->pc = 0x22C52Cu;
            goto label_22c52c;
        }
    }
    ctx->pc = 0x22C524u;
label_22c524:
    // 0x22c524: 0xc08abd2  jal         func_22AF48
label_22c528:
    if (ctx->pc == 0x22C528u) {
        ctx->pc = 0x22C528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C524u;
        // 0x22c528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C52Cu;
        goto label_22c52c;
    }
    ctx->pc = 0x22C524u;
    SET_GPR_U32(ctx, 31, 0x22C52Cu);
    ctx->pc = 0x22C528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C524u;
    // 0x22c528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AF48u, 0x22C524u, 0x22C52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C52Cu;
label_22c52c:
    // 0x22c52c: 0xc08bf92  jal         func_22FE48
label_22c530:
    if (ctx->pc == 0x22C530u) {
        ctx->pc = 0x22C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C52Cu;
        // 0x22c530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C534u;
        goto label_22c534;
    }
    ctx->pc = 0x22C52Cu;
    SET_GPR_U32(ctx, 31, 0x22C534u);
    ctx->pc = 0x22C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C52Cu;
    // 0x22c530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22C52Cu, 0x22C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C534u;
label_22c534:
    // 0x22c534: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22c534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22c538:
    // 0x22c538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22c538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22c53c:
    // 0x22c53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c540:
    // 0x22c540: 0x3e00008  jr          $ra
label_22c544:
    if (ctx->pc == 0x22C544u) {
        ctx->pc = 0x22C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C540u;
        // 0x22c544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C548u;
        goto label_fallthrough_0x22c540;
    }
    ctx->pc = 0x22C540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C540u;
        // 0x22c544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22c540:
    ctx->pc = 0x22C548u;
}
