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

// Function: sub_00485928
// Address: 0x485928 - 0x485998
void sub_00485928_0x485928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485928_0x485928");
#endif

    switch (ctx->pc) {
        case 0x485928u: goto label_485928;
        case 0x48592cu: goto label_48592c;
        case 0x485930u: goto label_485930;
        case 0x485934u: goto label_485934;
        case 0x485938u: goto label_485938;
        case 0x48593cu: goto label_48593c;
        case 0x485940u: goto label_485940;
        case 0x485944u: goto label_485944;
        case 0x485948u: goto label_485948;
        case 0x48594cu: goto label_48594c;
        case 0x485950u: goto label_485950;
        case 0x485954u: goto label_485954;
        case 0x485958u: goto label_485958;
        case 0x48595cu: goto label_48595c;
        case 0x485960u: goto label_485960;
        case 0x485964u: goto label_485964;
        case 0x485968u: goto label_485968;
        case 0x48596cu: goto label_48596c;
        case 0x485970u: goto label_485970;
        case 0x485974u: goto label_485974;
        case 0x485978u: goto label_485978;
        case 0x48597cu: goto label_48597c;
        case 0x485980u: goto label_485980;
        case 0x485984u: goto label_485984;
        case 0x485988u: goto label_485988;
        case 0x48598cu: goto label_48598c;
        case 0x485990u: goto label_485990;
        case 0x485994u: goto label_485994;
        default: break;
    }

    ctx->pc = 0x485928u;

label_485928:
    // 0x485928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48592c:
    // 0x48592c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_485930:
    // 0x485930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_485934:
    // 0x485934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485938:
    // 0x485938: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x485938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48593c:
    // 0x48593c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48593cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_485940:
    // 0x485940: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_485944:
    if (ctx->pc == 0x485944u) {
        ctx->pc = 0x485944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485940u;
        // 0x485944: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485948u;
        goto label_485948;
    }
    ctx->pc = 0x485940u;
    {
        const bool branch_taken_0x485940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485940) {
            ctx->pc = 0x485944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x485940u;
            // 0x485944: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x485954u;
            goto label_485954;
        }
    }
    ctx->pc = 0x485948u;
label_485948:
    // 0x485948: 0xc1216aa  jal         func_485AA8
label_48594c:
    if (ctx->pc == 0x48594Cu) {
        ctx->pc = 0x485950u;
        goto label_485950;
    }
    ctx->pc = 0x485948u;
    SET_GPR_U32(ctx, 31, 0x485950u);
    ctx->pc = 0x485AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485AA8u, 0x485948u, 0x485950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485950u;
label_485950:
    // 0x485950: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x485950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_485954:
    // 0x485954: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x485954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485958:
    // 0x485958: 0xc11ffb4  jal         func_47FED0
label_48595c:
    if (ctx->pc == 0x48595Cu) {
        ctx->pc = 0x48595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485958u;
        // 0x48595c: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485960u;
        goto label_485960;
    }
    ctx->pc = 0x485958u;
    SET_GPR_U32(ctx, 31, 0x485960u);
    ctx->pc = 0x48595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485958u;
    // 0x48595c: 0x2484ebd8  addiu       $a0, $a0, -0x1428 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x485958u, 0x485960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485960u;
label_485960:
    // 0x485960: 0x8f868968  lw          $a2, -0x7698($gp)
    ctx->pc = 0x485960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_485964:
    // 0x485964: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x485964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_485968:
    // 0x485968: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x485968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_48596c:
    // 0x48596c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48596cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485970:
    // 0x485970: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x485970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_485974:
    // 0x485974: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x485974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_485978:
    // 0x485978: 0x40f809  jalr        $v0
label_48597c:
    if (ctx->pc == 0x48597Cu) {
        ctx->pc = 0x48597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485978u;
        // 0x48597c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485980u;
        goto label_485980;
    }
    ctx->pc = 0x485978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485980u);
        ctx->pc = 0x48597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485978u;
        // 0x48597c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485978u, 0x485980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485980u;
label_485980:
    // 0x485980: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x485980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485984:
    // 0x485984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x485984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485988:
    // 0x485988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48598c:
    // 0x48598c: 0x3e00008  jr          $ra
label_485990:
    if (ctx->pc == 0x485990u) {
        ctx->pc = 0x485990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48598Cu;
        // 0x485990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485994u;
        goto label_485994;
    }
    ctx->pc = 0x48598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48598Cu;
        // 0x485990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48598Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485994u;
label_485994:
    // 0x485994: 0x0  nop
    ctx->pc = 0x485994u;
    // NOP
    ctx->pc = 0x485998u;
}
