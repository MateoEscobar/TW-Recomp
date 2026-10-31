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

// Function: sub_001352F0
// Address: 0x1352f0 - 0x135390
void sub_001352F0_0x1352f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001352F0_0x1352f0");
#endif

    switch (ctx->pc) {
        case 0x135304u: goto label_135304;
        case 0x135330u: goto label_135330;
        case 0x135360u: goto label_135360;
        case 0x135378u: goto label_135378;
        default: break;
    }

    ctx->pc = 0x1352f0u;

    // 0x1352f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1352f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1352f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1352f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1352f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1352f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1352fc: 0xc04821a  jal         func_120868
    ctx->pc = 0x1352FCu;
    SET_GPR_U32(ctx, 31, 0x135304u);
    ctx->pc = 0x135300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352FCu;
    // 0x135300: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x1352FCu, 0x135304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135304u;
label_135304:
    // 0x135304: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x135304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x135308: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x135308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x13530c: 0x244262d0  addiu       $v0, $v0, 0x62D0
    ctx->pc = 0x13530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25296));
    // 0x135310: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x135310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x135314: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x135314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x135318: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x135318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13531c: 0xae000204  sw          $zero, 0x204($s0)
    ctx->pc = 0x13531cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 0));
    // 0x135320: 0x2602020c  addiu       $v0, $s0, 0x20C
    ctx->pc = 0x135320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
    // 0x135324: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x135324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x135328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x135328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13532c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x13532cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_135330:
    // 0x135330: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x135330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x135334: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x135334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135338: 0x0  nop
    ctx->pc = 0x135338u;
    // NOP
    // 0x13533c: 0x0  nop
    ctx->pc = 0x13533cu;
    // NOP
    // 0x135340: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x135340u;
    {
        const bool branch_taken_0x135340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x135344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135340u;
        // 0x135344: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135340) {
            ctx->pc = 0x135330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135330;
        }
    }
    ctx->pc = 0x135348u;
    // 0x135348: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x135348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x13534c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x13534cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x135350: 0x24a58cf8  addiu       $a1, $a1, -0x7308
    ctx->pc = 0x135350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937848));
    // 0x135354: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x135354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x135358: 0xc10c4de  jal         func_431378
    ctx->pc = 0x135358u;
    SET_GPR_U32(ctx, 31, 0x135360u);
    ctx->pc = 0x13535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135358u;
    // 0x13535c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x135358u, 0x135360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135360u;
label_135360:
    // 0x135360: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x135360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x135364: 0x2604020c  addiu       $a0, $s0, 0x20C
    ctx->pc = 0x135364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
    // 0x135368: 0x24631790  addiu       $v1, $v1, 0x1790
    ctx->pc = 0x135368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
    // 0x13536c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13536cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511790u));
    // 0x135370: 0xc136e0a  jal         func_4DB828
    ctx->pc = 0x135370u;
    SET_GPR_U32(ctx, 31, 0x135378u);
    ctx->pc = 0x135374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135370u;
    // 0x135374: 0x7e0201f0  sq          $v0, 0x1F0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB828u, 0x135370u, 0x135378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135378u;
label_135378:
    // 0x135378: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x135378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13537c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13537cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135380: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x135380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135384: 0x3e00008  jr          $ra
    ctx->pc = 0x135384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135384u;
        // 0x135388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13538Cu;
    // 0x13538c: 0x0  nop
    ctx->pc = 0x13538cu;
    // NOP
    ctx->pc = 0x135390u;
}
