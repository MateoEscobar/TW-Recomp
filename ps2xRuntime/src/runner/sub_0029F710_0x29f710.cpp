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

// Function: sub_0029F710
// Address: 0x29f710 - 0x29f790
void sub_0029F710_0x29f710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F710_0x29f710");
#endif

    switch (ctx->pc) {
        case 0x29f710u: goto label_29f710;
        case 0x29f714u: goto label_29f714;
        case 0x29f718u: goto label_29f718;
        case 0x29f71cu: goto label_29f71c;
        case 0x29f720u: goto label_29f720;
        case 0x29f724u: goto label_29f724;
        case 0x29f728u: goto label_29f728;
        case 0x29f72cu: goto label_29f72c;
        case 0x29f730u: goto label_29f730;
        case 0x29f734u: goto label_29f734;
        case 0x29f738u: goto label_29f738;
        case 0x29f73cu: goto label_29f73c;
        case 0x29f740u: goto label_29f740;
        case 0x29f744u: goto label_29f744;
        case 0x29f748u: goto label_29f748;
        case 0x29f74cu: goto label_29f74c;
        case 0x29f750u: goto label_29f750;
        case 0x29f754u: goto label_29f754;
        case 0x29f758u: goto label_29f758;
        case 0x29f75cu: goto label_29f75c;
        case 0x29f760u: goto label_29f760;
        case 0x29f764u: goto label_29f764;
        case 0x29f768u: goto label_29f768;
        case 0x29f76cu: goto label_29f76c;
        case 0x29f770u: goto label_29f770;
        case 0x29f774u: goto label_29f774;
        case 0x29f778u: goto label_29f778;
        case 0x29f77cu: goto label_29f77c;
        case 0x29f780u: goto label_29f780;
        case 0x29f784u: goto label_29f784;
        case 0x29f788u: goto label_29f788;
        case 0x29f78cu: goto label_29f78c;
        default: break;
    }

    ctx->pc = 0x29f710u;

label_29f710:
    // 0x29f710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29f710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29f714:
    // 0x29f714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29f718:
    // 0x29f718: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x29f718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_29f71c:
    // 0x29f71c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29f71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_29f720:
    // 0x29f720: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x29f720u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_29f724:
    // 0x29f724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29f728:
    // 0x29f728: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29f728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f72c:
    // 0x29f72c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x29f72cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_29f730:
    // 0x29f730: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_29f734:
    if (ctx->pc == 0x29F734u) {
        ctx->pc = 0x29F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F730u;
        // 0x29f734: 0x2882a  slt         $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F738u;
        goto label_29f738;
    }
    ctx->pc = 0x29F730u;
    {
        const bool branch_taken_0x29f730 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F730u;
        // 0x29f734: 0x2882a  slt         $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f730) {
            ctx->pc = 0x29F774u;
            goto label_29f774;
        }
    }
    ctx->pc = 0x29F738u;
label_29f738:
    // 0x29f738: 0xc0a36c2  jal         func_28DB08
label_29f73c:
    if (ctx->pc == 0x29F73Cu) {
        ctx->pc = 0x29F740u;
        goto label_29f740;
    }
    ctx->pc = 0x29F738u;
    SET_GPR_U32(ctx, 31, 0x29F740u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x29F738u, 0x29F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F740u;
label_29f740:
    // 0x29f740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f744:
    // 0x29f744: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29f744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29f748:
    // 0x29f748: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29f748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29f74c:
    // 0x29f74c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29f750:
    // 0x29f750: 0x40f809  jalr        $v0
label_29f754:
    if (ctx->pc == 0x29F754u) {
        ctx->pc = 0x29F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F750u;
        // 0x29f754: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F758u;
        goto label_29f758;
    }
    ctx->pc = 0x29F750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F758u);
        ctx->pc = 0x29F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F750u;
        // 0x29f754: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F750u, 0x29F758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F758u;
label_29f758:
    // 0x29f758: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
label_29f75c:
    if (ctx->pc == 0x29F75Cu) {
        ctx->pc = 0x29F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F758u;
        // 0x29f75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F760u;
        goto label_29f760;
    }
    ctx->pc = 0x29F758u;
    {
        const bool branch_taken_0x29f758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x29F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F758u;
        // 0x29f75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f758) {
            ctx->pc = 0x29F778u;
            goto label_29f778;
        }
    }
    ctx->pc = 0x29F760u;
label_29f760:
    // 0x29f760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f764:
    // 0x29f764: 0xc0beef8  jal         func_2FBBE0
label_29f768:
    if (ctx->pc == 0x29F768u) {
        ctx->pc = 0x29F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F764u;
        // 0x29f768: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F76Cu;
        goto label_29f76c;
    }
    ctx->pc = 0x29F764u;
    SET_GPR_U32(ctx, 31, 0x29F76Cu);
    ctx->pc = 0x29F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F764u;
    // 0x29f768: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE0u, 0x29F764u, 0x29F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F76Cu;
label_29f76c:
    // 0x29f76c: 0x10000002  b           . + 4 + (0x2 << 2)
label_29f770:
    if (ctx->pc == 0x29F770u) {
        ctx->pc = 0x29F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F76Cu;
        // 0x29f770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F774u;
        goto label_29f774;
    }
    ctx->pc = 0x29F76Cu;
    {
        const bool branch_taken_0x29f76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F76Cu;
        // 0x29f770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f76c) {
            ctx->pc = 0x29F778u;
            goto label_29f778;
        }
    }
    ctx->pc = 0x29F774u;
label_29f774:
    // 0x29f774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29f774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f778:
    // 0x29f778: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29f778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f77c:
    // 0x29f77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29f780:
    // 0x29f780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f784:
    // 0x29f784: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x29f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29f788:
    // 0x29f788: 0x3e00008  jr          $ra
label_29f78c:
    if (ctx->pc == 0x29F78Cu) {
        ctx->pc = 0x29F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F788u;
        // 0x29f78c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F790u;
        goto label_fallthrough_0x29f788;
    }
    ctx->pc = 0x29F788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F788u;
        // 0x29f78c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29f788:
    ctx->pc = 0x29F790u;
}
