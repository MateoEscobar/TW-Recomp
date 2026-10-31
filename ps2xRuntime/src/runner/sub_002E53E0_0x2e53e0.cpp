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

// Function: sub_002E53E0
// Address: 0x2e53e0 - 0x2e5480
void sub_002E53E0_0x2e53e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E53E0_0x2e53e0");
#endif

    switch (ctx->pc) {
        case 0x2e53e0u: goto label_2e53e0;
        case 0x2e53e4u: goto label_2e53e4;
        case 0x2e53e8u: goto label_2e53e8;
        case 0x2e53ecu: goto label_2e53ec;
        case 0x2e53f0u: goto label_2e53f0;
        case 0x2e53f4u: goto label_2e53f4;
        case 0x2e53f8u: goto label_2e53f8;
        case 0x2e53fcu: goto label_2e53fc;
        case 0x2e5400u: goto label_2e5400;
        case 0x2e5404u: goto label_2e5404;
        case 0x2e5408u: goto label_2e5408;
        case 0x2e540cu: goto label_2e540c;
        case 0x2e5410u: goto label_2e5410;
        case 0x2e5414u: goto label_2e5414;
        case 0x2e5418u: goto label_2e5418;
        case 0x2e541cu: goto label_2e541c;
        case 0x2e5420u: goto label_2e5420;
        case 0x2e5424u: goto label_2e5424;
        case 0x2e5428u: goto label_2e5428;
        case 0x2e542cu: goto label_2e542c;
        case 0x2e5430u: goto label_2e5430;
        case 0x2e5434u: goto label_2e5434;
        case 0x2e5438u: goto label_2e5438;
        case 0x2e543cu: goto label_2e543c;
        case 0x2e5440u: goto label_2e5440;
        case 0x2e5444u: goto label_2e5444;
        case 0x2e5448u: goto label_2e5448;
        case 0x2e544cu: goto label_2e544c;
        case 0x2e5450u: goto label_2e5450;
        case 0x2e5454u: goto label_2e5454;
        case 0x2e5458u: goto label_2e5458;
        case 0x2e545cu: goto label_2e545c;
        case 0x2e5460u: goto label_2e5460;
        case 0x2e5464u: goto label_2e5464;
        case 0x2e5468u: goto label_2e5468;
        case 0x2e546cu: goto label_2e546c;
        case 0x2e5470u: goto label_2e5470;
        case 0x2e5474u: goto label_2e5474;
        case 0x2e5478u: goto label_2e5478;
        case 0x2e547cu: goto label_2e547c;
        default: break;
    }

    ctx->pc = 0x2e53e0u;

label_2e53e0:
    // 0x2e53e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e53e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e53e4:
    // 0x2e53e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e53e8:
    // 0x2e53e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e53e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e53ec:
    // 0x2e53ec: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2e53f0:
    // 0x2e53f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e53f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e53f4:
    // 0x2e53f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e53f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e53f8:
    // 0x2e53f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e53f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e53fc:
    // 0x2e53fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e53fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e5400:
    // 0x2e5400: 0x246321f0  addiu       $v1, $v1, 0x21F0
    ctx->pc = 0x2e5400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8688));
label_2e5404:
    // 0x2e5404: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e5404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2e5408:
    // 0x2e5408: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e5408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2e540c:
    // 0x2e540c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2e540cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2e5410:
    // 0x2e5410: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x2e5410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_2e5414:
    // 0x2e5414: 0xae080018  sw          $t0, 0x18($s0)
    ctx->pc = 0x2e5414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 8));
label_2e5418:
    // 0x2e5418: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2e5418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2e541c:
    // 0x2e541c: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e541cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2e5420:
    // 0x2e5420: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e5420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2e5424:
    // 0x2e5424: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2e5424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2e5428:
    // 0x2e5428: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e5428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2e542c:
    // 0x2e542c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2e5430:
    if (ctx->pc == 0x2E5430u) {
        ctx->pc = 0x2E5430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E542Cu;
        // 0x2e5430: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5434u;
        goto label_2e5434;
    }
    ctx->pc = 0x2E542Cu;
    {
        const bool branch_taken_0x2e542c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e542c) {
            ctx->pc = 0x2E5430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E542Cu;
            // 0x2e5430: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5444u;
            goto label_2e5444;
        }
    }
    ctx->pc = 0x2E5434u;
label_2e5434:
    // 0x2e5434: 0xc0a33b6  jal         func_28CED8
label_2e5438:
    if (ctx->pc == 0x2E5438u) {
        ctx->pc = 0x2E5438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5434u;
        // 0x2e5438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E543Cu;
        goto label_2e543c;
    }
    ctx->pc = 0x2E5434u;
    SET_GPR_U32(ctx, 31, 0x2E543Cu);
    ctx->pc = 0x2E5438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5434u;
    // 0x2e5438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x2E5434u, 0x2E543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E543Cu;
label_2e543c:
    // 0x2e543c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2e543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2e5440:
    // 0x2e5440: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e5444:
    // 0x2e5444: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e5444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e5448:
    // 0x2e5448: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e5448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e544c:
    // 0x2e544c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e544cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e5450:
    // 0x2e5450: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e5450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e5454:
    // 0x2e5454: 0x40f809  jalr        $v0
label_2e5458:
    if (ctx->pc == 0x2E5458u) {
        ctx->pc = 0x2E5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5454u;
        // 0x2e5458: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E545Cu;
        goto label_2e545c;
    }
    ctx->pc = 0x2E5454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E545Cu);
        ctx->pc = 0x2E5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5454u;
        // 0x2e5458: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5454u, 0x2E545Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E545Cu;
label_2e545c:
    // 0x2e545c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2e545cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e5460:
    // 0x2e5460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e5460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5464:
    // 0x2e5464: 0xc0d5068  jal         func_3541A0
label_2e5468:
    if (ctx->pc == 0x2E5468u) {
        ctx->pc = 0x2E5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5464u;
        // 0x2e5468: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E546Cu;
        goto label_2e546c;
    }
    ctx->pc = 0x2E5464u;
    SET_GPR_U32(ctx, 31, 0x2E546Cu);
    ctx->pc = 0x2E5468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5464u;
    // 0x2e5468: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3541A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541A0u, 0x2E5464u, 0x2E546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E546Cu;
label_2e546c:
    // 0x2e546c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e546cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5470:
    // 0x2e5470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5474:
    // 0x2e5474: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e5474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5478:
    // 0x2e5478: 0x3e00008  jr          $ra
label_2e547c:
    if (ctx->pc == 0x2E547Cu) {
        ctx->pc = 0x2E547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5478u;
        // 0x2e547c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E5480u;
        goto label_fallthrough_0x2e5478;
    }
    ctx->pc = 0x2E5478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5478u;
        // 0x2e547c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e5478:
    ctx->pc = 0x2E5480u;
}
