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

// Function: sub_0033B6F8
// Address: 0x33b6f8 - 0x33b778
void sub_0033B6F8_0x33b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B6F8_0x33b6f8");
#endif

    switch (ctx->pc) {
        case 0x33b6f8u: goto label_33b6f8;
        case 0x33b6fcu: goto label_33b6fc;
        case 0x33b700u: goto label_33b700;
        case 0x33b704u: goto label_33b704;
        case 0x33b708u: goto label_33b708;
        case 0x33b70cu: goto label_33b70c;
        case 0x33b710u: goto label_33b710;
        case 0x33b714u: goto label_33b714;
        case 0x33b718u: goto label_33b718;
        case 0x33b71cu: goto label_33b71c;
        case 0x33b720u: goto label_33b720;
        case 0x33b724u: goto label_33b724;
        case 0x33b728u: goto label_33b728;
        case 0x33b72cu: goto label_33b72c;
        case 0x33b730u: goto label_33b730;
        case 0x33b734u: goto label_33b734;
        case 0x33b738u: goto label_33b738;
        case 0x33b73cu: goto label_33b73c;
        case 0x33b740u: goto label_33b740;
        case 0x33b744u: goto label_33b744;
        case 0x33b748u: goto label_33b748;
        case 0x33b74cu: goto label_33b74c;
        case 0x33b750u: goto label_33b750;
        case 0x33b754u: goto label_33b754;
        case 0x33b758u: goto label_33b758;
        case 0x33b75cu: goto label_33b75c;
        case 0x33b760u: goto label_33b760;
        case 0x33b764u: goto label_33b764;
        case 0x33b768u: goto label_33b768;
        case 0x33b76cu: goto label_33b76c;
        case 0x33b770u: goto label_33b770;
        case 0x33b774u: goto label_33b774;
        default: break;
    }

    ctx->pc = 0x33b6f8u;

label_33b6f8:
    // 0x33b6f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33b6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33b6fc:
    // 0x33b6fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_33b700:
    // 0x33b700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33b704:
    // 0x33b704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33b708:
    // 0x33b708: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33b708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b70c:
    // 0x33b70c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x33b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33b710:
    // 0x33b710: 0x40f809  jalr        $v0
label_33b714:
    if (ctx->pc == 0x33B714u) {
        ctx->pc = 0x33B718u;
        goto label_33b718;
    }
    ctx->pc = 0x33B710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B710u, 0x33B718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B718u;
label_33b718:
    // 0x33b718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33b718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33b71c:
    // 0x33b71c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b720:
    // 0x33b720: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x33b720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_33b724:
    // 0x33b724: 0x260203ff  addiu       $v0, $s0, 0x3FF
    ctx->pc = 0x33b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1023));
label_33b728:
    // 0x33b728: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x33b728u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_33b72c:
    // 0x33b72c: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x33b72cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_33b730:
    // 0x33b730: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x33b730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_33b734:
    // 0x33b734: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x33b734u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33b738:
    // 0x33b738: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_33b73c:
    if (ctx->pc == 0x33B73Cu) {
        ctx->pc = 0x33B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B738u;
        // 0x33b73c: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B740u;
        goto label_33b740;
    }
    ctx->pc = 0x33B738u;
    {
        const bool branch_taken_0x33b738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B738u;
        // 0x33b73c: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b738) {
            ctx->pc = 0x33B760u;
            goto label_33b760;
        }
    }
    ctx->pc = 0x33B740u;
label_33b740:
    // 0x33b740: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x33b740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_33b744:
    // 0x33b744: 0x65282f  dsubu       $a1, $v1, $a1
    ctx->pc = 0x33b744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
label_33b748:
    // 0x33b748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33b748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33b74c:
    // 0x33b74c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x33b74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_33b750:
    // 0x33b750: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33b750u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_33b754:
    // 0x33b754: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x33b754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_33b758:
    // 0x33b758: 0x40f809  jalr        $v0
label_33b75c:
    if (ctx->pc == 0x33B75Cu) {
        ctx->pc = 0x33B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B758u;
        // 0x33b75c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B760u;
        goto label_33b760;
    }
    ctx->pc = 0x33B758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33B760u);
        ctx->pc = 0x33B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B758u;
        // 0x33b75c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B758u, 0x33B760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B760u;
label_33b760:
    // 0x33b760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33b760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33b764:
    // 0x33b764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33b768:
    // 0x33b768: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33b768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33b76c:
    // 0x33b76c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b770:
    // 0x33b770: 0x3e00008  jr          $ra
label_33b774:
    if (ctx->pc == 0x33B774u) {
        ctx->pc = 0x33B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B770u;
        // 0x33b774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B778u;
        goto label_fallthrough_0x33b770;
    }
    ctx->pc = 0x33B770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B770u;
        // 0x33b774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33b770:
    ctx->pc = 0x33B778u;
}
