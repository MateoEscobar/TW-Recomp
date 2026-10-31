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

// Function: sub_004DF390
// Address: 0x4df390 - 0x4df430
void sub_004DF390_0x4df390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF390_0x4df390");
#endif

    switch (ctx->pc) {
        case 0x4df390u: goto label_4df390;
        case 0x4df394u: goto label_4df394;
        case 0x4df398u: goto label_4df398;
        case 0x4df39cu: goto label_4df39c;
        case 0x4df3a0u: goto label_4df3a0;
        case 0x4df3a4u: goto label_4df3a4;
        case 0x4df3a8u: goto label_4df3a8;
        case 0x4df3acu: goto label_4df3ac;
        case 0x4df3b0u: goto label_4df3b0;
        case 0x4df3b4u: goto label_4df3b4;
        case 0x4df3b8u: goto label_4df3b8;
        case 0x4df3bcu: goto label_4df3bc;
        case 0x4df3c0u: goto label_4df3c0;
        case 0x4df3c4u: goto label_4df3c4;
        case 0x4df3c8u: goto label_4df3c8;
        case 0x4df3ccu: goto label_4df3cc;
        case 0x4df3d0u: goto label_4df3d0;
        case 0x4df3d4u: goto label_4df3d4;
        case 0x4df3d8u: goto label_4df3d8;
        case 0x4df3dcu: goto label_4df3dc;
        case 0x4df3e0u: goto label_4df3e0;
        case 0x4df3e4u: goto label_4df3e4;
        case 0x4df3e8u: goto label_4df3e8;
        case 0x4df3ecu: goto label_4df3ec;
        case 0x4df3f0u: goto label_4df3f0;
        case 0x4df3f4u: goto label_4df3f4;
        case 0x4df3f8u: goto label_4df3f8;
        case 0x4df3fcu: goto label_4df3fc;
        case 0x4df400u: goto label_4df400;
        case 0x4df404u: goto label_4df404;
        case 0x4df408u: goto label_4df408;
        case 0x4df40cu: goto label_4df40c;
        case 0x4df410u: goto label_4df410;
        case 0x4df414u: goto label_4df414;
        case 0x4df418u: goto label_4df418;
        case 0x4df41cu: goto label_4df41c;
        case 0x4df420u: goto label_4df420;
        case 0x4df424u: goto label_4df424;
        case 0x4df428u: goto label_4df428;
        case 0x4df42cu: goto label_4df42c;
        default: break;
    }

    ctx->pc = 0x4df390u;

label_4df390:
    // 0x4df390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4df390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4df394:
    // 0x4df394: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4df394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4df398:
    // 0x4df398: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4df398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4df39c:
    // 0x4df39c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4df39cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4df3a0:
    // 0x4df3a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4df3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4df3a4:
    // 0x4df3a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4df3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4df3a8:
    // 0x4df3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4df3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4df3ac:
    // 0x4df3ac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4df3b0:
    if (ctx->pc == 0x4DF3B0u) {
        ctx->pc = 0x4DF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF3ACu;
        // 0x4df3b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF3B4u;
        goto label_4df3b4;
    }
    ctx->pc = 0x4DF3ACu;
    {
        const bool branch_taken_0x4df3ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF3ACu;
        // 0x4df3b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df3ac) {
            ctx->pc = 0x4DF3F4u;
            goto label_4df3f4;
        }
    }
    ctx->pc = 0x4DF3B4u;
label_4df3b4:
    // 0x4df3b4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4df3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4df3b8:
    // 0x4df3b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4df3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4df3bc:
    // 0x4df3bc: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4df3bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4df3c0:
    // 0x4df3c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4df3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4df3c4:
    // 0x4df3c4: 0x60f809  jalr        $v1
label_4df3c8:
    if (ctx->pc == 0x4DF3C8u) {
        ctx->pc = 0x4DF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF3C4u;
        // 0x4df3c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF3CCu;
        goto label_4df3cc;
    }
    ctx->pc = 0x4DF3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DF3CCu);
        ctx->pc = 0x4DF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF3C4u;
        // 0x4df3c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF3C4u, 0x4DF3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF3CCu;
label_4df3cc:
    // 0x4df3cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4df3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4df3d0:
    // 0x4df3d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4df3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4df3d4:
    // 0x4df3d4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4df3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4df3d8:
    // 0x4df3d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4df3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4df3dc:
    // 0x4df3dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4df3dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4df3e0:
    // 0x4df3e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4df3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4df3e4:
    // 0x4df3e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4df3e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4df3e8:
    // 0x4df3e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4df3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4df3ec:
    // 0x4df3ec: 0x60f809  jalr        $v1
label_4df3f0:
    if (ctx->pc == 0x4DF3F0u) {
        ctx->pc = 0x4DF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF3ECu;
        // 0x4df3f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF3F4u;
        goto label_4df3f4;
    }
    ctx->pc = 0x4DF3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DF3F4u);
        ctx->pc = 0x4DF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF3ECu;
        // 0x4df3f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF3ECu, 0x4DF3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DF3F4u;
label_4df3f4:
    // 0x4df3f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4df3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4df3f8:
    // 0x4df3f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4df3f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4df3fc:
    // 0x4df3fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4df3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df400:
    // 0x4df400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4df400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4df404:
    // 0x4df404: 0x3e00008  jr          $ra
label_4df408:
    if (ctx->pc == 0x4DF408u) {
        ctx->pc = 0x4DF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF404u;
        // 0x4df408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DF40Cu;
        goto label_4df40c;
    }
    ctx->pc = 0x4DF404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DF404u;
        // 0x4df408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DF404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DF40Cu;
label_4df40c:
    // 0x4df40c: 0x0  nop
    ctx->pc = 0x4df40cu;
    // NOP
label_4df410:
    // 0x4df410: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4df410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4df414:
    // 0x4df414: 0x0  nop
    ctx->pc = 0x4df414u;
    // NOP
label_4df418:
    // 0x4df418: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4df418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4df41c:
    // 0x4df41c: 0x0  nop
    ctx->pc = 0x4df41cu;
    // NOP
label_4df420:
    // 0x4df420: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4df420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4df424:
    // 0x4df424: 0x0  nop
    ctx->pc = 0x4df424u;
    // NOP
label_4df428:
    // 0x4df428: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4df428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4df42c:
    // 0x4df42c: 0x0  nop
    ctx->pc = 0x4df42cu;
    // NOP
    ctx->pc = 0x4df430u;
}
