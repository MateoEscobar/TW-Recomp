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

// Function: sub_00354710
// Address: 0x354710 - 0x354768
void sub_00354710_0x354710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354710_0x354710");
#endif

    switch (ctx->pc) {
        case 0x354710u: goto label_354710;
        case 0x354714u: goto label_354714;
        case 0x354718u: goto label_354718;
        case 0x35471cu: goto label_35471c;
        case 0x354720u: goto label_354720;
        case 0x354724u: goto label_354724;
        case 0x354728u: goto label_354728;
        case 0x35472cu: goto label_35472c;
        case 0x354730u: goto label_354730;
        case 0x354734u: goto label_354734;
        case 0x354738u: goto label_354738;
        case 0x35473cu: goto label_35473c;
        case 0x354740u: goto label_354740;
        case 0x354744u: goto label_354744;
        case 0x354748u: goto label_354748;
        case 0x35474cu: goto label_35474c;
        case 0x354750u: goto label_354750;
        case 0x354754u: goto label_354754;
        case 0x354758u: goto label_354758;
        case 0x35475cu: goto label_35475c;
        case 0x354760u: goto label_354760;
        case 0x354764u: goto label_354764;
        default: break;
    }

    ctx->pc = 0x354710u;

label_354710:
    // 0x354710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_354714:
    // 0x354714: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x354714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_354718:
    // 0x354718: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x354718u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_35471c:
    // 0x35471c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35471cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_354720:
    // 0x354720: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_354724:
    if (ctx->pc == 0x354724u) {
        ctx->pc = 0x354724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354720u;
        // 0x354724: 0xae002af4  sw          $zero, 0x2AF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10996), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354728u;
        goto label_354728;
    }
    ctx->pc = 0x354720u;
    {
        const bool branch_taken_0x354720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x354724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354720u;
        // 0x354724: 0xae002af4  sw          $zero, 0x2AF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 10996), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354720) {
            ctx->pc = 0x354754u;
            goto label_354754;
        }
    }
    ctx->pc = 0x354728u;
label_354728:
    // 0x354728: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x354728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_35472c:
    // 0x35472c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_354730:
    if (ctx->pc == 0x354730u) {
        ctx->pc = 0x354730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35472Cu;
        // 0x354730: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354734u;
        goto label_354734;
    }
    ctx->pc = 0x35472Cu;
    {
        const bool branch_taken_0x35472c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35472Cu;
        // 0x354730: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35472c) {
            ctx->pc = 0x354754u;
            goto label_354754;
        }
    }
    ctx->pc = 0x354734u;
label_354734:
    // 0x354734: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x354734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_354738:
    // 0x354738: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x354738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_35473c:
    // 0x35473c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x35473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_354740:
    // 0x354740: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x354740u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_354744:
    // 0x354744: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x354744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_354748:
    // 0x354748: 0x40f809  jalr        $v0
label_35474c:
    if (ctx->pc == 0x35474Cu) {
        ctx->pc = 0x35474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354748u;
        // 0x35474c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354750u;
        goto label_354750;
    }
    ctx->pc = 0x354748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x354750u);
        ctx->pc = 0x35474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354748u;
        // 0x35474c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354748u, 0x354750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x354750u;
label_354750:
    // 0x354750: 0xae022af4  sw          $v0, 0x2AF4($s0)
    ctx->pc = 0x354750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10996), GPR_U32(ctx, 2));
label_354754:
    // 0x354754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x354754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_354758:
    // 0x354758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35475c:
    // 0x35475c: 0x3e00008  jr          $ra
label_354760:
    if (ctx->pc == 0x354760u) {
        ctx->pc = 0x354760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35475Cu;
        // 0x354760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x354764u;
        goto label_354764;
    }
    ctx->pc = 0x35475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35475Cu;
        // 0x354760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35475Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354764u;
label_354764:
    // 0x354764: 0x0  nop
    ctx->pc = 0x354764u;
    // NOP
    ctx->pc = 0x354768u;
}
