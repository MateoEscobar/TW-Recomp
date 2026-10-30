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

// Function: sub_00264738
// Address: 0x264738 - 0x264878
void sub_00264738_0x264738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264738_0x264738");
#endif

    switch (ctx->pc) {
        case 0x26475cu: goto label_26475c;
        case 0x264768u: goto label_264768;
        case 0x264778u: goto label_264778;
        case 0x26478cu: goto label_26478c;
        case 0x264794u: goto label_264794;
        case 0x2647b0u: goto label_2647b0;
        case 0x2647c4u: goto label_2647c4;
        case 0x2647e0u: goto label_2647e0;
        case 0x2647f0u: goto label_2647f0;
        case 0x264800u: goto label_264800;
        case 0x26480cu: goto label_26480c;
        case 0x26482cu: goto label_26482c;
        case 0x264858u: goto label_264858;
        default: break;
    }

    ctx->pc = 0x264738u;

    // 0x264738: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26473c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x26473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x264740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x264748: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x264748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x26474c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26474cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x264750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264754: 0xc089b98  jal         func_226E60
    ctx->pc = 0x264754u;
    SET_GPR_U32(ctx, 31, 0x26475Cu);
    ctx->pc = 0x264758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264754u;
    // 0x264758: 0x2413027d  addiu       $s3, $zero, 0x27D (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x264754u, 0x26475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26475Cu;
label_26475c:
    // 0x26475c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26475cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264760: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x264760u;
    SET_GPR_U32(ctx, 31, 0x264768u);
    ctx->pc = 0x264764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264760u;
    // 0x264764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x264760u, 0x264768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264768u;
label_264768:
    // 0x264768: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264768u;
    {
        const bool branch_taken_0x264768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264768) {
            ctx->pc = 0x26478Cu;
            goto label_26478c;
        }
    }
    ctx->pc = 0x264770u;
    // 0x264770: 0xc095018  jal         func_254060
    ctx->pc = 0x264770u;
    SET_GPR_U32(ctx, 31, 0x264778u);
    ctx->pc = 0x264774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264770u;
    // 0x264774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x264770u, 0x264778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264778u;
label_264778:
    // 0x264778: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x264778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26477c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26477Cu;
    {
        const bool branch_taken_0x26477c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26477c) {
            ctx->pc = 0x26478Cu;
            goto label_26478c;
        }
    }
    ctx->pc = 0x264784u;
    // 0x264784: 0xc094fca  jal         func_253F28
    ctx->pc = 0x264784u;
    SET_GPR_U32(ctx, 31, 0x26478Cu);
    ctx->pc = 0x264788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264784u;
    // 0x264788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x264784u, 0x26478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26478Cu;
label_26478c:
    // 0x26478c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x26478Cu;
    SET_GPR_U32(ctx, 31, 0x264794u);
    ctx->pc = 0x264790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26478Cu;
    // 0x264790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x26478Cu, 0x264794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264794u;
label_264794:
    // 0x264794: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x264794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264798: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264798u;
    {
        const bool branch_taken_0x264798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x264798) {
            ctx->pc = 0x2647A8u;
            goto label_2647a8;
        }
    }
    ctx->pc = 0x2647A0u;
    // 0x2647a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2647A0u;
    {
        const bool branch_taken_0x2647a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2647A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647A0u;
        // 0x2647a4: 0x2413027f  addiu       $s3, $zero, 0x27F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647a0) {
            ctx->pc = 0x2647F0u;
            goto label_2647f0;
        }
    }
    ctx->pc = 0x2647A8u;
label_2647a8:
    // 0x2647a8: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2647A8u;
    SET_GPR_U32(ctx, 31, 0x2647B0u);
    ctx->pc = 0x2647ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2647A8u;
    // 0x2647ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2647A8u, 0x2647B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2647B0u;
label_2647b0:
    // 0x2647b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2647b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2647b4: 0x5043000e  beql        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2647B4u;
    {
        const bool branch_taken_0x2647b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2647b4) {
            ctx->pc = 0x2647B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2647B4u;
            // 0x2647b8: 0x24130281  addiu       $s3, $zero, 0x281 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 641));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2647F0u;
            goto label_2647f0;
        }
    }
    ctx->pc = 0x2647BCu;
    // 0x2647bc: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2647BCu;
    SET_GPR_U32(ctx, 31, 0x2647C4u);
    ctx->pc = 0x2647C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2647BCu;
    // 0x2647c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2647BCu, 0x2647C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2647C4u;
label_2647c4:
    // 0x2647c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2647c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2647c8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2647C8u;
    {
        const bool branch_taken_0x2647c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2647c8) {
            ctx->pc = 0x2647D8u;
            goto label_2647d8;
        }
    }
    ctx->pc = 0x2647D0u;
    // 0x2647d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2647D0u;
    {
        const bool branch_taken_0x2647d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2647D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647D0u;
        // 0x2647d4: 0x24130281  addiu       $s3, $zero, 0x281 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 641));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647d0) {
            ctx->pc = 0x2647F0u;
            goto label_2647f0;
        }
    }
    ctx->pc = 0x2647D8u;
label_2647d8:
    // 0x2647d8: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x2647D8u;
    SET_GPR_U32(ctx, 31, 0x2647E0u);
    ctx->pc = 0x2647DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2647D8u;
    // 0x2647dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x2647D8u, 0x2647E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2647E0u;
label_2647e0:
    // 0x2647e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2647E0u;
    {
        const bool branch_taken_0x2647e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2647e0) {
            ctx->pc = 0x2647E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2647E0u;
            // 0x2647e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2647F4u;
            goto label_2647f4;
        }
    }
    ctx->pc = 0x2647E8u;
    // 0x2647e8: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2647E8u;
    SET_GPR_U32(ctx, 31, 0x2647F0u);
    ctx->pc = 0x2647ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2647E8u;
    // 0x2647ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2647E8u, 0x2647F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2647F0u;
label_2647f0:
    // 0x2647f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2647f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2647f4:
    // 0x2647f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2647f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647f8: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x2647F8u;
    SET_GPR_U32(ctx, 31, 0x264800u);
    ctx->pc = 0x2647FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2647F8u;
    // 0x2647fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x2647F8u, 0x264800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264800u;
label_264800:
    // 0x264800: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x264800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264804: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x264804u;
    SET_GPR_U32(ctx, 31, 0x26480Cu);
    ctx->pc = 0x264808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264804u;
    // 0x264808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x264804u, 0x26480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26480Cu;
label_26480c:
    // 0x26480c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x26480cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x264810: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x264810u;
    {
        const bool branch_taken_0x264810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264810u;
        // 0x264814: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264810) {
            ctx->pc = 0x264858u;
            goto label_264858;
        }
    }
    ctx->pc = 0x264818u;
    // 0x264818: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x264818u;
    {
        const bool branch_taken_0x264818 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x264818) {
            ctx->pc = 0x26481Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264818u;
            // 0x26481c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26485Cu;
            goto label_26485c;
        }
    }
    ctx->pc = 0x264820u;
    // 0x264820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264824: 0xc0406be  jal         func_101AF8
    ctx->pc = 0x264824u;
    SET_GPR_U32(ctx, 31, 0x26482Cu);
    ctx->pc = 0x264828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264824u;
    // 0x264828: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101AF8u, 0x264824u, 0x26482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26482Cu;
label_26482c:
    // 0x26482c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26482Cu;
    {
        const bool branch_taken_0x26482c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26482Cu;
        // 0x264830: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26482c) {
            ctx->pc = 0x264858u;
            goto label_264858;
        }
    }
    ctx->pc = 0x264834u;
    // 0x264834: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x264834u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x264838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26483c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264840: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x264840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x264844: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x264844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264848: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x264848u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    // 0x26484c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26484cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264850: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x264850u;
    SET_GPR_U32(ctx, 31, 0x264858u);
    ctx->pc = 0x264854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264850u;
    // 0x264854: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x264850u, 0x264858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264858u;
label_264858:
    // 0x264858: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x264858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26485c:
    // 0x26485c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x26485cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264860: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264864: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x264864u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26486c: 0x3e00008  jr          $ra
    ctx->pc = 0x26486Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26486Cu;
        // 0x264870: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26486Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264874u;
    // 0x264874: 0x0  nop
    ctx->pc = 0x264874u;
    // NOP
    ctx->pc = 0x264878u;
}
