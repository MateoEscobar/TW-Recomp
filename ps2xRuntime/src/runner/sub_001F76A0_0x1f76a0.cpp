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

// Function: sub_001F76A0
// Address: 0x1f76a0 - 0x1f7848
void sub_001F76A0_0x1f76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F76A0_0x1f76a0");
#endif

    switch (ctx->pc) {
        case 0x1f76a0u: goto label_1f76a0;
        case 0x1f76a4u: goto label_1f76a4;
        case 0x1f76a8u: goto label_1f76a8;
        case 0x1f76acu: goto label_1f76ac;
        case 0x1f76b0u: goto label_1f76b0;
        case 0x1f76b4u: goto label_1f76b4;
        case 0x1f76b8u: goto label_1f76b8;
        case 0x1f76bcu: goto label_1f76bc;
        case 0x1f76c0u: goto label_1f76c0;
        case 0x1f76c4u: goto label_1f76c4;
        case 0x1f76c8u: goto label_1f76c8;
        case 0x1f76ccu: goto label_1f76cc;
        case 0x1f76d0u: goto label_1f76d0;
        case 0x1f76d4u: goto label_1f76d4;
        case 0x1f76d8u: goto label_1f76d8;
        case 0x1f76dcu: goto label_1f76dc;
        case 0x1f76e0u: goto label_1f76e0;
        case 0x1f76e4u: goto label_1f76e4;
        case 0x1f76e8u: goto label_1f76e8;
        case 0x1f76ecu: goto label_1f76ec;
        case 0x1f76f0u: goto label_1f76f0;
        case 0x1f76f4u: goto label_1f76f4;
        case 0x1f76f8u: goto label_1f76f8;
        case 0x1f76fcu: goto label_1f76fc;
        case 0x1f7700u: goto label_1f7700;
        case 0x1f7704u: goto label_1f7704;
        case 0x1f7708u: goto label_1f7708;
        case 0x1f770cu: goto label_1f770c;
        case 0x1f7710u: goto label_1f7710;
        case 0x1f7714u: goto label_1f7714;
        case 0x1f7718u: goto label_1f7718;
        case 0x1f771cu: goto label_1f771c;
        case 0x1f7720u: goto label_1f7720;
        case 0x1f7724u: goto label_1f7724;
        case 0x1f7728u: goto label_1f7728;
        case 0x1f772cu: goto label_1f772c;
        case 0x1f7730u: goto label_1f7730;
        case 0x1f7734u: goto label_1f7734;
        case 0x1f7738u: goto label_1f7738;
        case 0x1f773cu: goto label_1f773c;
        case 0x1f7740u: goto label_1f7740;
        case 0x1f7744u: goto label_1f7744;
        case 0x1f7748u: goto label_1f7748;
        case 0x1f774cu: goto label_1f774c;
        case 0x1f7750u: goto label_1f7750;
        case 0x1f7754u: goto label_1f7754;
        case 0x1f7758u: goto label_1f7758;
        case 0x1f775cu: goto label_1f775c;
        case 0x1f7760u: goto label_1f7760;
        case 0x1f7764u: goto label_1f7764;
        case 0x1f7768u: goto label_1f7768;
        case 0x1f776cu: goto label_1f776c;
        case 0x1f7770u: goto label_1f7770;
        case 0x1f7774u: goto label_1f7774;
        case 0x1f7778u: goto label_1f7778;
        case 0x1f777cu: goto label_1f777c;
        case 0x1f7780u: goto label_1f7780;
        case 0x1f7784u: goto label_1f7784;
        case 0x1f7788u: goto label_1f7788;
        case 0x1f778cu: goto label_1f778c;
        case 0x1f7790u: goto label_1f7790;
        case 0x1f7794u: goto label_1f7794;
        case 0x1f7798u: goto label_1f7798;
        case 0x1f779cu: goto label_1f779c;
        case 0x1f77a0u: goto label_1f77a0;
        case 0x1f77a4u: goto label_1f77a4;
        case 0x1f77a8u: goto label_1f77a8;
        case 0x1f77acu: goto label_1f77ac;
        case 0x1f77b0u: goto label_1f77b0;
        case 0x1f77b4u: goto label_1f77b4;
        case 0x1f77b8u: goto label_1f77b8;
        case 0x1f77bcu: goto label_1f77bc;
        case 0x1f77c0u: goto label_1f77c0;
        case 0x1f77c4u: goto label_1f77c4;
        case 0x1f77c8u: goto label_1f77c8;
        case 0x1f77ccu: goto label_1f77cc;
        case 0x1f77d0u: goto label_1f77d0;
        case 0x1f77d4u: goto label_1f77d4;
        case 0x1f77d8u: goto label_1f77d8;
        case 0x1f77dcu: goto label_1f77dc;
        case 0x1f77e0u: goto label_1f77e0;
        case 0x1f77e4u: goto label_1f77e4;
        case 0x1f77e8u: goto label_1f77e8;
        case 0x1f77ecu: goto label_1f77ec;
        case 0x1f77f0u: goto label_1f77f0;
        case 0x1f77f4u: goto label_1f77f4;
        case 0x1f77f8u: goto label_1f77f8;
        case 0x1f77fcu: goto label_1f77fc;
        case 0x1f7800u: goto label_1f7800;
        case 0x1f7804u: goto label_1f7804;
        case 0x1f7808u: goto label_1f7808;
        case 0x1f780cu: goto label_1f780c;
        case 0x1f7810u: goto label_1f7810;
        case 0x1f7814u: goto label_1f7814;
        case 0x1f7818u: goto label_1f7818;
        case 0x1f781cu: goto label_1f781c;
        case 0x1f7820u: goto label_1f7820;
        case 0x1f7824u: goto label_1f7824;
        case 0x1f7828u: goto label_1f7828;
        case 0x1f782cu: goto label_1f782c;
        case 0x1f7830u: goto label_1f7830;
        case 0x1f7834u: goto label_1f7834;
        case 0x1f7838u: goto label_1f7838;
        case 0x1f783cu: goto label_1f783c;
        case 0x1f7840u: goto label_1f7840;
        case 0x1f7844u: goto label_1f7844;
        default: break;
    }

    ctx->pc = 0x1f76a0u;

label_1f76a0:
    // 0x1f76a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f76a4:
    // 0x1f76a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f76a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f76a8:
    // 0x1f76a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f76a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f76ac:
    // 0x1f76ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f76acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f76b0:
    // 0x1f76b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1f76b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1f76b4:
    // 0x1f76b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f76b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f76b8:
    // 0x1f76b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f76b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f76bc:
    // 0x1f76bc: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x1f76bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f76c0:
    // 0x1f76c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f76c4:
    // 0x1f76c4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f76c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f76c8:
    // 0x1f76c8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f76c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f76cc:
    // 0x1f76cc: 0x40f809  jalr        $v0
label_1f76d0:
    if (ctx->pc == 0x1F76D0u) {
        ctx->pc = 0x1F76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76CCu;
        // 0x1f76d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F76D4u;
        goto label_1f76d4;
    }
    ctx->pc = 0x1F76CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F76D4u);
        ctx->pc = 0x1F76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76CCu;
        // 0x1f76d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F76CCu, 0x1F76D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F76D4u;
label_1f76d4:
    // 0x1f76d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f76d8:
    if (ctx->pc == 0x1F76D8u) {
        ctx->pc = 0x1F76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76D4u;
        // 0x1f76d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F76DCu;
        goto label_1f76dc;
    }
    ctx->pc = 0x1F76D4u;
    {
        const bool branch_taken_0x1f76d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76D4u;
        // 0x1f76d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76d4) {
            ctx->pc = 0x1F76ECu;
            goto label_1f76ec;
        }
    }
    ctx->pc = 0x1F76DCu;
label_1f76dc:
    // 0x1f76dc: 0xc07dd4e  jal         func_1F7538
label_1f76e0:
    if (ctx->pc == 0x1F76E0u) {
        ctx->pc = 0x1F76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76DCu;
        // 0x1f76e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F76E4u;
        goto label_1f76e4;
    }
    ctx->pc = 0x1F76DCu;
    SET_GPR_U32(ctx, 31, 0x1F76E4u);
    ctx->pc = 0x1F76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76DCu;
    // 0x1f76e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7538u, 0x1F76DCu, 0x1F76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76E4u;
label_1f76e4:
    // 0x1f76e4: 0x10000052  b           . + 4 + (0x52 << 2)
label_1f76e8:
    if (ctx->pc == 0x1F76E8u) {
        ctx->pc = 0x1F76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76E4u;
        // 0x1f76e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F76ECu;
        goto label_1f76ec;
    }
    ctx->pc = 0x1F76E4u;
    {
        const bool branch_taken_0x1f76e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76E4u;
        // 0x1f76e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76e4) {
            ctx->pc = 0x1F7830u;
            goto label_1f7830;
        }
    }
    ctx->pc = 0x1F76ECu;
label_1f76ec:
    // 0x1f76ec: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1f76f0:
    if (ctx->pc == 0x1F76F0u) {
        ctx->pc = 0x1F76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76ECu;
        // 0x1f76f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F76F4u;
        goto label_1f76f4;
    }
    ctx->pc = 0x1F76ECu;
    {
        const bool branch_taken_0x1f76ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F76F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76ECu;
        // 0x1f76f0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76ec) {
            ctx->pc = 0x1F7704u;
            goto label_1f7704;
        }
    }
    ctx->pc = 0x1F76F4u;
label_1f76f4:
    // 0x1f76f4: 0xc07dd14  jal         func_1F7450
label_1f76f8:
    if (ctx->pc == 0x1F76F8u) {
        ctx->pc = 0x1F76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76F4u;
        // 0x1f76f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F76FCu;
        goto label_1f76fc;
    }
    ctx->pc = 0x1F76F4u;
    SET_GPR_U32(ctx, 31, 0x1F76FCu);
    ctx->pc = 0x1F76F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76F4u;
    // 0x1f76f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7450u, 0x1F76F4u, 0x1F76FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76FCu;
label_1f76fc:
    // 0x1f76fc: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1f7700:
    if (ctx->pc == 0x1F7700u) {
        ctx->pc = 0x1F7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76FCu;
        // 0x1f7700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7704u;
        goto label_1f7704;
    }
    ctx->pc = 0x1F76FCu;
    {
        const bool branch_taken_0x1f76fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76FCu;
        // 0x1f7700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76fc) {
            ctx->pc = 0x1F7830u;
            goto label_1f7830;
        }
    }
    ctx->pc = 0x1F7704u;
label_1f7704:
    // 0x1f7704: 0x16120005  bne         $s0, $s2, . + 4 + (0x5 << 2)
label_1f7708:
    if (ctx->pc == 0x1F7708u) {
        ctx->pc = 0x1F7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7704u;
        // 0x1f7708: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F770Cu;
        goto label_1f770c;
    }
    ctx->pc = 0x1F7704u;
    {
        const bool branch_taken_0x1f7704 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7704u;
        // 0x1f7708: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7704) {
            ctx->pc = 0x1F771Cu;
            goto label_1f771c;
        }
    }
    ctx->pc = 0x1F770Cu;
label_1f770c:
    // 0x1f770c: 0xc07dd2e  jal         func_1F74B8
label_1f7710:
    if (ctx->pc == 0x1F7710u) {
        ctx->pc = 0x1F7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F770Cu;
        // 0x1f7710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7714u;
        goto label_1f7714;
    }
    ctx->pc = 0x1F770Cu;
    SET_GPR_U32(ctx, 31, 0x1F7714u);
    ctx->pc = 0x1F7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F770Cu;
    // 0x1f7710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F74B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F74B8u, 0x1F770Cu, 0x1F7714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7714u;
label_1f7714:
    // 0x1f7714: 0x10000046  b           . + 4 + (0x46 << 2)
label_1f7718:
    if (ctx->pc == 0x1F7718u) {
        ctx->pc = 0x1F7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7714u;
        // 0x1f7718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F771Cu;
        goto label_1f771c;
    }
    ctx->pc = 0x1F7714u;
    {
        const bool branch_taken_0x1f7714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7714u;
        // 0x1f7718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7714) {
            ctx->pc = 0x1F7830u;
            goto label_1f7830;
        }
    }
    ctx->pc = 0x1F771Cu;
label_1f771c:
    // 0x1f771c: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_1f7720:
    if (ctx->pc == 0x1F7720u) {
        ctx->pc = 0x1F7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F771Cu;
        // 0x1f7720: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7724u;
        goto label_1f7724;
    }
    ctx->pc = 0x1F771Cu;
    {
        const bool branch_taken_0x1f771c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F771Cu;
        // 0x1f7720: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f771c) {
            ctx->pc = 0x1F7740u;
            goto label_1f7740;
        }
    }
    ctx->pc = 0x1F7724u;
label_1f7724:
    // 0x1f7724: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1f7724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1f7728:
    // 0x1f7728: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f7728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f772c:
    // 0x1f772c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x1f772cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_1f7730:
    // 0x1f7730: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1f7730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_1f7734:
    // 0x1f7734: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1f7734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_1f7738:
    // 0x1f7738: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1f773c:
    if (ctx->pc == 0x1F773Cu) {
        ctx->pc = 0x1F773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7738u;
        // 0x1f773c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7740u;
        goto label_1f7740;
    }
    ctx->pc = 0x1F7738u;
    {
        const bool branch_taken_0x1f7738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7738u;
        // 0x1f773c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7738) {
            ctx->pc = 0x1F7824u;
            goto label_1f7824;
        }
    }
    ctx->pc = 0x1F7740u;
label_1f7740:
    // 0x1f7740: 0x1602003b  bne         $s0, $v0, . + 4 + (0x3B << 2)
label_1f7744:
    if (ctx->pc == 0x1F7744u) {
        ctx->pc = 0x1F7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7740u;
        // 0x1f7744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7748u;
        goto label_1f7748;
    }
    ctx->pc = 0x1F7740u;
    {
        const bool branch_taken_0x1f7740 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7740u;
        // 0x1f7744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7740) {
            ctx->pc = 0x1F7830u;
            goto label_1f7830;
        }
    }
    ctx->pc = 0x1F7748u;
label_1f7748:
    // 0x1f7748: 0xc0750fa  jal         func_1D43E8
label_1f774c:
    if (ctx->pc == 0x1F774Cu) {
        ctx->pc = 0x1F774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7748u;
        // 0x1f774c: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7750u;
        goto label_1f7750;
    }
    ctx->pc = 0x1F7748u;
    SET_GPR_U32(ctx, 31, 0x1F7750u);
    ctx->pc = 0x1F774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7748u;
    // 0x1f774c: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1F7748u, 0x1F7750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7750u;
label_1f7750:
    // 0x1f7750: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f7750u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f7754:
    // 0x1f7754: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_1f7758:
    if (ctx->pc == 0x1F7758u) {
        ctx->pc = 0x1F7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7754u;
        // 0x1f7758: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F775Cu;
        goto label_1f775c;
    }
    ctx->pc = 0x1F7754u;
    {
        const bool branch_taken_0x1f7754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7754) {
            ctx->pc = 0x1F7758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7754u;
            // 0x1f7758: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7764u;
            goto label_1f7764;
        }
    }
    ctx->pc = 0x1F775Cu;
label_1f775c:
    // 0x1f775c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1f7760:
    if (ctx->pc == 0x1F7760u) {
        ctx->pc = 0x1F7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F775Cu;
        // 0x1f7760: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7764u;
        goto label_1f7764;
    }
    ctx->pc = 0x1F775Cu;
    {
        const bool branch_taken_0x1f775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F775Cu;
        // 0x1f7760: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f775c) {
            ctx->pc = 0x1F7818u;
            goto label_1f7818;
        }
    }
    ctx->pc = 0x1F7764u;
label_1f7764:
    // 0x1f7764: 0x54620022  bnel        $v1, $v0, . + 4 + (0x22 << 2)
label_1f7768:
    if (ctx->pc == 0x1F7768u) {
        ctx->pc = 0x1F7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7764u;
        // 0x1f7768: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F776Cu;
        goto label_1f776c;
    }
    ctx->pc = 0x1F7764u;
    {
        const bool branch_taken_0x1f7764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7764) {
            ctx->pc = 0x1F7768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7764u;
            // 0x1f7768: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F77F0u;
            goto label_1f77f0;
        }
    }
    ctx->pc = 0x1F776Cu;
label_1f776c:
    // 0x1f776c: 0x8e2600b0  lw          $a2, 0xB0($s1)
    ctx->pc = 0x1f776cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1f7770:
    // 0x1f7770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7774:
    // 0x1f7774: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f7774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f7778:
    // 0x1f7778: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f7778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f777c:
    // 0x1f777c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f777cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f7780:
    // 0x1f7780: 0x60f809  jalr        $v1
label_1f7784:
    if (ctx->pc == 0x1F7784u) {
        ctx->pc = 0x1F7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7780u;
        // 0x1f7784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7788u;
        goto label_1f7788;
    }
    ctx->pc = 0x1F7780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7788u);
        ctx->pc = 0x1F7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7780u;
        // 0x1f7784: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7780u, 0x1F7788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7788u;
label_1f7788:
    // 0x1f7788: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x1f7788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f778c:
    // 0x1f778c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f778cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7790:
    // 0x1f7790: 0xc0752e2  jal         func_1D4B88
label_1f7794:
    if (ctx->pc == 0x1F7794u) {
        ctx->pc = 0x1F7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7790u;
        // 0x1f7794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7798u;
        goto label_1f7798;
    }
    ctx->pc = 0x1F7790u;
    SET_GPR_U32(ctx, 31, 0x1F7798u);
    ctx->pc = 0x1F7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7790u;
    // 0x1f7794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1F7790u, 0x1F7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7798u;
label_1f7798:
    // 0x1f7798: 0x8e2600b4  lw          $a2, 0xB4($s1)
    ctx->pc = 0x1f7798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f779c:
    // 0x1f779c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f77a0:
    // 0x1f77a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f77a4:
    // 0x1f77a4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f77a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f77a8:
    // 0x1f77a8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f77a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f77ac:
    // 0x1f77ac: 0x60f809  jalr        $v1
label_1f77b0:
    if (ctx->pc == 0x1F77B0u) {
        ctx->pc = 0x1F77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77ACu;
        // 0x1f77b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F77B4u;
        goto label_1f77b4;
    }
    ctx->pc = 0x1F77ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F77B4u);
        ctx->pc = 0x1F77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77ACu;
        // 0x1f77b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F77ACu, 0x1F77B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F77B4u;
label_1f77b4:
    // 0x1f77b4: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x1f77b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f77b8:
    // 0x1f77b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f77bc:
    // 0x1f77bc: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1f77bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1f77c0:
    // 0x1f77c0: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1f77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1f77c4:
    // 0x1f77c4: 0x60f809  jalr        $v1
label_1f77c8:
    if (ctx->pc == 0x1F77C8u) {
        ctx->pc = 0x1F77C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77C4u;
        // 0x1f77c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F77CCu;
        goto label_1f77cc;
    }
    ctx->pc = 0x1F77C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F77CCu);
        ctx->pc = 0x1F77C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77C4u;
        // 0x1f77c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F77C4u, 0x1F77CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F77CCu;
label_1f77cc:
    // 0x1f77cc: 0x8e2600b8  lw          $a2, 0xB8($s1)
    ctx->pc = 0x1f77ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1f77d0:
    // 0x1f77d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f77d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f77d4:
    // 0x1f77d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f77d8:
    // 0x1f77d8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f77d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f77dc:
    // 0x1f77dc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f77e0:
    // 0x1f77e0: 0x60f809  jalr        $v1
label_1f77e4:
    if (ctx->pc == 0x1F77E4u) {
        ctx->pc = 0x1F77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77E0u;
        // 0x1f77e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F77E8u;
        goto label_1f77e8;
    }
    ctx->pc = 0x1F77E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F77E8u);
        ctx->pc = 0x1F77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77E0u;
        // 0x1f77e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F77E0u, 0x1F77E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F77E8u;
label_1f77e8:
    // 0x1f77e8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1f77ec:
    if (ctx->pc == 0x1F77ECu) {
        ctx->pc = 0x1F77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77E8u;
        // 0x1f77ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F77F0u;
        goto label_1f77f0;
    }
    ctx->pc = 0x1F77E8u;
    {
        const bool branch_taken_0x1f77e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77E8u;
        // 0x1f77ec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77e8) {
            ctx->pc = 0x1F781Cu;
            goto label_1f781c;
        }
    }
    ctx->pc = 0x1F77F0u;
label_1f77f0:
    // 0x1f77f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1f77f4:
    if (ctx->pc == 0x1F77F4u) {
        ctx->pc = 0x1F77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77F0u;
        // 0x1f77f4: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F77F8u;
        goto label_1f77f8;
    }
    ctx->pc = 0x1F77F0u;
    {
        const bool branch_taken_0x1f77f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F77F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77F0u;
        // 0x1f77f4: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77f0) {
            ctx->pc = 0x1F7808u;
            goto label_1f7808;
        }
    }
    ctx->pc = 0x1F77F8u;
label_1f77f8:
    // 0x1f77f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f77fc:
    // 0x1f77fc: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x1f77fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_1f7800:
    // 0x1f7800: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f7804:
    if (ctx->pc == 0x1F7804u) {
        ctx->pc = 0x1F7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7800u;
        // 0x1f7804: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7808u;
        goto label_1f7808;
    }
    ctx->pc = 0x1F7800u;
    {
        const bool branch_taken_0x1f7800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7800u;
        // 0x1f7804: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7800) {
            ctx->pc = 0x1F7818u;
            goto label_1f7818;
        }
    }
    ctx->pc = 0x1F7808u;
label_1f7808:
    // 0x1f7808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f780c:
    // 0x1f780c: 0xc080b0e  jal         func_202C38
label_1f7810:
    if (ctx->pc == 0x1F7810u) {
        ctx->pc = 0x1F7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F780Cu;
        // 0x1f7810: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7814u;
        goto label_1f7814;
    }
    ctx->pc = 0x1F780Cu;
    SET_GPR_U32(ctx, 31, 0x1F7814u);
    ctx->pc = 0x1F7810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F780Cu;
    // 0x1f7810: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202C38u, 0x1F780Cu, 0x1F7814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7814u;
label_1f7814:
    // 0x1f7814: 0xae320074  sw          $s2, 0x74($s1)
    ctx->pc = 0x1f7814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 18));
label_1f7818:
    // 0x1f7818: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f7818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f781c:
    // 0x1f781c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1f781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f7820:
    // 0x1f7820: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1f7820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1f7824:
    // 0x1f7824: 0xc043f0c  jal         func_10FC30
label_1f7828:
    if (ctx->pc == 0x1F7828u) {
        ctx->pc = 0x1F782Cu;
        goto label_1f782c;
    }
    ctx->pc = 0x1F7824u;
    SET_GPR_U32(ctx, 31, 0x1F782Cu);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1F7824u, 0x1F782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F782Cu;
label_1f782c:
    // 0x1f782c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7830:
    // 0x1f7830: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f7830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7834:
    // 0x1f7834: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f7834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7838:
    // 0x1f7838: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1f7838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f783c:
    // 0x1f783c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f783cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7840:
    // 0x1f7840: 0x3e00008  jr          $ra
label_1f7844:
    if (ctx->pc == 0x1F7844u) {
        ctx->pc = 0x1F7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7840u;
        // 0x1f7844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7848u;
        goto label_fallthrough_0x1f7840;
    }
    ctx->pc = 0x1F7840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7840u;
        // 0x1f7844: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f7840:
    ctx->pc = 0x1F7848u;
}
