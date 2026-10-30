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

// Function: sub_00198750
// Address: 0x198750 - 0x1987b8
void sub_00198750_0x198750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198750_0x198750");
#endif

    switch (ctx->pc) {
        case 0x198750u: goto label_198750;
        case 0x198754u: goto label_198754;
        case 0x198758u: goto label_198758;
        case 0x19875cu: goto label_19875c;
        case 0x198760u: goto label_198760;
        case 0x198764u: goto label_198764;
        case 0x198768u: goto label_198768;
        case 0x19876cu: goto label_19876c;
        case 0x198770u: goto label_198770;
        case 0x198774u: goto label_198774;
        case 0x198778u: goto label_198778;
        case 0x19877cu: goto label_19877c;
        case 0x198780u: goto label_198780;
        case 0x198784u: goto label_198784;
        case 0x198788u: goto label_198788;
        case 0x19878cu: goto label_19878c;
        case 0x198790u: goto label_198790;
        case 0x198794u: goto label_198794;
        case 0x198798u: goto label_198798;
        case 0x19879cu: goto label_19879c;
        case 0x1987a0u: goto label_1987a0;
        case 0x1987a4u: goto label_1987a4;
        case 0x1987a8u: goto label_1987a8;
        case 0x1987acu: goto label_1987ac;
        case 0x1987b0u: goto label_1987b0;
        case 0x1987b4u: goto label_1987b4;
        default: break;
    }

    ctx->pc = 0x198750u;

label_198750:
    // 0x198750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_198754:
    // 0x198754: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_198758:
    // 0x198758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19875c:
    // 0x19875c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19875cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198760:
    // 0x198760: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x198760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_198764:
    // 0x198764: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_198768:
    if (ctx->pc == 0x198768u) {
        ctx->pc = 0x198768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198764u;
        // 0x198768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19876Cu;
        goto label_19876c;
    }
    ctx->pc = 0x198764u;
    {
        const bool branch_taken_0x198764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198764) {
            ctx->pc = 0x198768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198764u;
            // 0x198768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1987A4u;
            goto label_1987a4;
        }
    }
    ctx->pc = 0x19876Cu;
label_19876c:
    // 0x19876c: 0xc12099a  jal         func_482668
label_198770:
    if (ctx->pc == 0x198770u) {
        ctx->pc = 0x198774u;
        goto label_198774;
    }
    ctx->pc = 0x19876Cu;
    SET_GPR_U32(ctx, 31, 0x198774u);
    ctx->pc = 0x482668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482668u, 0x19876Cu, 0x198774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198774u;
label_198774:
    // 0x198774: 0xc12107a  jal         func_4841E8
label_198778:
    if (ctx->pc == 0x198778u) {
        ctx->pc = 0x198778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198774u;
        // 0x198778: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19877Cu;
        goto label_19877c;
    }
    ctx->pc = 0x198774u;
    SET_GPR_U32(ctx, 31, 0x19877Cu);
    ctx->pc = 0x198778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198774u;
    // 0x198778: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4841E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841E8u, 0x198774u, 0x19877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19877Cu;
label_19877c:
    // 0x19877c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19877cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_198780:
    // 0x198780: 0xc12247e  jal         func_4891F8
label_198784:
    if (ctx->pc == 0x198784u) {
        ctx->pc = 0x198784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198780u;
        // 0x198784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198788u;
        goto label_198788;
    }
    ctx->pc = 0x198780u;
    SET_GPR_U32(ctx, 31, 0x198788u);
    ctx->pc = 0x198784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198780u;
    // 0x198784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4891F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891F8u, 0x198780u, 0x198788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198788u;
label_198788:
    // 0x198788: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19878c:
    // 0x19878c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198790:
    // 0x198790: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_198794:
    // 0x198794: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x198794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_198798:
    // 0x198798: 0x60f809  jalr        $v1
label_19879c:
    if (ctx->pc == 0x19879Cu) {
        ctx->pc = 0x19879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198798u;
        // 0x19879c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1987A0u;
        goto label_1987a0;
    }
    ctx->pc = 0x198798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1987A0u);
        ctx->pc = 0x19879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198798u;
        // 0x19879c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198798u, 0x1987A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1987A0u;
label_1987a0:
    // 0x1987a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1987a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1987a4:
    // 0x1987a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1987a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1987a8:
    // 0x1987a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1987a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1987ac:
    // 0x1987ac: 0x3e00008  jr          $ra
label_1987b0:
    if (ctx->pc == 0x1987B0u) {
        ctx->pc = 0x1987B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987ACu;
        // 0x1987b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1987B4u;
        goto label_1987b4;
    }
    ctx->pc = 0x1987ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1987B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987ACu;
        // 0x1987b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1987ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1987B4u;
label_1987b4:
    // 0x1987b4: 0x0  nop
    ctx->pc = 0x1987b4u;
    // NOP
    ctx->pc = 0x1987b8u;
}
