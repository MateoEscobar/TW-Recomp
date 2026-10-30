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

// Function: sub_004E6718
// Address: 0x4e6718 - 0x4e6788
void sub_004E6718_0x4e6718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6718_0x4e6718");
#endif

    switch (ctx->pc) {
        case 0x4e6718u: goto label_4e6718;
        case 0x4e671cu: goto label_4e671c;
        case 0x4e6720u: goto label_4e6720;
        case 0x4e6724u: goto label_4e6724;
        case 0x4e6728u: goto label_4e6728;
        case 0x4e672cu: goto label_4e672c;
        case 0x4e6730u: goto label_4e6730;
        case 0x4e6734u: goto label_4e6734;
        case 0x4e6738u: goto label_4e6738;
        case 0x4e673cu: goto label_4e673c;
        case 0x4e6740u: goto label_4e6740;
        case 0x4e6744u: goto label_4e6744;
        case 0x4e6748u: goto label_4e6748;
        case 0x4e674cu: goto label_4e674c;
        case 0x4e6750u: goto label_4e6750;
        case 0x4e6754u: goto label_4e6754;
        case 0x4e6758u: goto label_4e6758;
        case 0x4e675cu: goto label_4e675c;
        case 0x4e6760u: goto label_4e6760;
        case 0x4e6764u: goto label_4e6764;
        case 0x4e6768u: goto label_4e6768;
        case 0x4e676cu: goto label_4e676c;
        case 0x4e6770u: goto label_4e6770;
        case 0x4e6774u: goto label_4e6774;
        case 0x4e6778u: goto label_4e6778;
        case 0x4e677cu: goto label_4e677c;
        case 0x4e6780u: goto label_4e6780;
        case 0x4e6784u: goto label_4e6784;
        default: break;
    }

    ctx->pc = 0x4e6718u;

label_4e6718:
    // 0x4e6718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e6718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e671c:
    // 0x4e671c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e6720:
    // 0x4e6720: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e6720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e6724:
    // 0x4e6724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e6724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e6728:
    // 0x4e6728: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e6728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e672c:
    // 0x4e672c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e672cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e6730:
    // 0x4e6730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e6730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e6734:
    // 0x4e6734: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4e6738:
    if (ctx->pc == 0x4E6738u) {
        ctx->pc = 0x4E6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6734u;
        // 0x4e6738: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E673Cu;
        goto label_4e673c;
    }
    ctx->pc = 0x4E6734u;
    {
        const bool branch_taken_0x4e6734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6734u;
        // 0x4e6738: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6734) {
            ctx->pc = 0x4E676Cu;
            goto label_4e676c;
        }
    }
    ctx->pc = 0x4E673Cu;
label_4e673c:
    // 0x4e673c: 0xc06f00a  jal         func_1BC028
label_4e6740:
    if (ctx->pc == 0x4E6740u) {
        ctx->pc = 0x4E6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E673Cu;
        // 0x4e6740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6744u;
        goto label_4e6744;
    }
    ctx->pc = 0x4E673Cu;
    SET_GPR_U32(ctx, 31, 0x4E6744u);
    ctx->pc = 0x4E6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E673Cu;
    // 0x4e6740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC028u, 0x4E673Cu, 0x4E6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6744u;
label_4e6744:
    // 0x4e6744: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e6744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e6748:
    // 0x4e6748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e6748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e674c:
    // 0x4e674c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e674cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e6750:
    // 0x4e6750: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e6750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e6754:
    // 0x4e6754: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e6754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e6758:
    // 0x4e6758: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e6758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e675c:
    // 0x4e675c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e675cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e6760:
    // 0x4e6760: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e6760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e6764:
    // 0x4e6764: 0x60f809  jalr        $v1
label_4e6768:
    if (ctx->pc == 0x4E6768u) {
        ctx->pc = 0x4E6768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6764u;
        // 0x4e6768: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E676Cu;
        goto label_4e676c;
    }
    ctx->pc = 0x4E6764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E676Cu);
        ctx->pc = 0x4E6768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6764u;
        // 0x4e6768: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6764u, 0x4E676Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E676Cu;
label_4e676c:
    // 0x4e676c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e676cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e6770:
    // 0x4e6770: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e6770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6774:
    // 0x4e6774: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e6774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6778:
    // 0x4e6778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e677c:
    // 0x4e677c: 0x3e00008  jr          $ra
label_4e6780:
    if (ctx->pc == 0x4E6780u) {
        ctx->pc = 0x4E6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E677Cu;
        // 0x4e6780: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6784u;
        goto label_4e6784;
    }
    ctx->pc = 0x4E677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E677Cu;
        // 0x4e6780: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E677Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6784u;
label_4e6784:
    // 0x4e6784: 0x0  nop
    ctx->pc = 0x4e6784u;
    // NOP
    ctx->pc = 0x4e6788u;
}
