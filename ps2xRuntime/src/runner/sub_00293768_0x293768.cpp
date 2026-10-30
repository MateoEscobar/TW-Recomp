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

// Function: sub_00293768
// Address: 0x293768 - 0x293840
void sub_00293768_0x293768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293768_0x293768");
#endif

    switch (ctx->pc) {
        case 0x293768u: goto label_293768;
        case 0x29376cu: goto label_29376c;
        case 0x293770u: goto label_293770;
        case 0x293774u: goto label_293774;
        case 0x293778u: goto label_293778;
        case 0x29377cu: goto label_29377c;
        case 0x293780u: goto label_293780;
        case 0x293784u: goto label_293784;
        case 0x293788u: goto label_293788;
        case 0x29378cu: goto label_29378c;
        case 0x293790u: goto label_293790;
        case 0x293794u: goto label_293794;
        case 0x293798u: goto label_293798;
        case 0x29379cu: goto label_29379c;
        case 0x2937a0u: goto label_2937a0;
        case 0x2937a4u: goto label_2937a4;
        case 0x2937a8u: goto label_2937a8;
        case 0x2937acu: goto label_2937ac;
        case 0x2937b0u: goto label_2937b0;
        case 0x2937b4u: goto label_2937b4;
        case 0x2937b8u: goto label_2937b8;
        case 0x2937bcu: goto label_2937bc;
        case 0x2937c0u: goto label_2937c0;
        case 0x2937c4u: goto label_2937c4;
        case 0x2937c8u: goto label_2937c8;
        case 0x2937ccu: goto label_2937cc;
        case 0x2937d0u: goto label_2937d0;
        case 0x2937d4u: goto label_2937d4;
        case 0x2937d8u: goto label_2937d8;
        case 0x2937dcu: goto label_2937dc;
        case 0x2937e0u: goto label_2937e0;
        case 0x2937e4u: goto label_2937e4;
        case 0x2937e8u: goto label_2937e8;
        case 0x2937ecu: goto label_2937ec;
        case 0x2937f0u: goto label_2937f0;
        case 0x2937f4u: goto label_2937f4;
        case 0x2937f8u: goto label_2937f8;
        case 0x2937fcu: goto label_2937fc;
        case 0x293800u: goto label_293800;
        case 0x293804u: goto label_293804;
        case 0x293808u: goto label_293808;
        case 0x29380cu: goto label_29380c;
        case 0x293810u: goto label_293810;
        case 0x293814u: goto label_293814;
        case 0x293818u: goto label_293818;
        case 0x29381cu: goto label_29381c;
        case 0x293820u: goto label_293820;
        case 0x293824u: goto label_293824;
        case 0x293828u: goto label_293828;
        case 0x29382cu: goto label_29382c;
        case 0x293830u: goto label_293830;
        case 0x293834u: goto label_293834;
        case 0x293838u: goto label_293838;
        case 0x29383cu: goto label_29383c;
        default: break;
    }

    ctx->pc = 0x293768u;

label_293768:
    // 0x293768: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x293768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_29376c:
    // 0x29376c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x29376cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_293770:
    // 0x293770: 0x7fb00230  sq          $s0, 0x230($sp)
    ctx->pc = 0x293770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 16));
label_293774:
    // 0x293774: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x293774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_293778:
    // 0x293778: 0x7fb30200  sq          $s3, 0x200($sp)
    ctx->pc = 0x293778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 19));
label_29377c:
    // 0x29377c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x29377cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_293780:
    // 0x293780: 0x7fb401f0  sq          $s4, 0x1F0($sp)
    ctx->pc = 0x293780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 20));
label_293784:
    // 0x293784: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x293784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_293788:
    // 0x293788: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x293788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29378c:
    // 0x29378c: 0x7fb20210  sq          $s2, 0x210($sp)
    ctx->pc = 0x29378cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 18));
label_293790:
    // 0x293790: 0x7fb10220  sq          $s1, 0x220($sp)
    ctx->pc = 0x293790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 17));
label_293794:
    // 0x293794: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x293794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293798:
    // 0x293798: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x293798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
label_29379c:
    // 0x29379c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29379cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2937a0:
    // 0x2937a0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2937a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2937a4:
    // 0x2937a4: 0xc089d2a  jal         func_2274A8
label_2937a8:
    if (ctx->pc == 0x2937A8u) {
        ctx->pc = 0x2937A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937A4u;
        // 0x2937a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937ACu;
        goto label_2937ac;
    }
    ctx->pc = 0x2937A4u;
    SET_GPR_U32(ctx, 31, 0x2937ACu);
    ctx->pc = 0x2937A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2937A4u;
    // 0x2937a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x2937A4u, 0x2937ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937ACu;
label_2937ac:
    // 0x2937ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2937acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2937b0:
    // 0x2937b0: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
label_2937b4:
    if (ctx->pc == 0x2937B4u) {
        ctx->pc = 0x2937B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937B0u;
        // 0x2937b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937B8u;
        goto label_2937b8;
    }
    ctx->pc = 0x2937B0u;
    {
        const bool branch_taken_0x2937b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2937B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937B0u;
        // 0x2937b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937b0) {
            ctx->pc = 0x293820u;
            goto label_293820;
        }
    }
    ctx->pc = 0x2937B8u;
label_2937b8:
    // 0x2937b8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_2937bc:
    if (ctx->pc == 0x2937BCu) {
        ctx->pc = 0x2937BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937B8u;
        // 0x2937bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937C0u;
        goto label_2937c0;
    }
    ctx->pc = 0x2937B8u;
    {
        const bool branch_taken_0x2937b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2937BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937B8u;
        // 0x2937bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937b8) {
            ctx->pc = 0x2937C8u;
            goto label_2937c8;
        }
    }
    ctx->pc = 0x2937C0u;
label_2937c0:
    // 0x2937c0: 0xc0e1a34  jal         func_3868D0
label_2937c4:
    if (ctx->pc == 0x2937C4u) {
        ctx->pc = 0x2937C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937C0u;
        // 0x2937c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937C8u;
        goto label_2937c8;
    }
    ctx->pc = 0x2937C0u;
    SET_GPR_U32(ctx, 31, 0x2937C8u);
    ctx->pc = 0x2937C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2937C0u;
    // 0x2937c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x2937C0u, 0x2937C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937C8u;
label_2937c8:
    // 0x2937c8: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_2937cc:
    if (ctx->pc == 0x2937CCu) {
        ctx->pc = 0x2937CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937C8u;
        // 0x2937cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937D0u;
        goto label_2937d0;
    }
    ctx->pc = 0x2937C8u;
    {
        const bool branch_taken_0x2937c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2937CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937C8u;
        // 0x2937cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937c8) {
            ctx->pc = 0x293820u;
            goto label_293820;
        }
    }
    ctx->pc = 0x2937D0u;
label_2937d0:
    // 0x2937d0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2937d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2937d4:
    // 0x2937d4: 0x0  nop
    ctx->pc = 0x2937d4u;
    // NOP
label_2937d8:
    // 0x2937d8: 0x52600007  beql        $s3, $zero, . + 4 + (0x7 << 2)
label_2937dc:
    if (ctx->pc == 0x2937DCu) {
        ctx->pc = 0x2937DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937D8u;
        // 0x2937dc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937E0u;
        goto label_2937e0;
    }
    ctx->pc = 0x2937D8u;
    {
        const bool branch_taken_0x2937d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2937d8) {
            ctx->pc = 0x2937DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2937D8u;
            // 0x2937dc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2937F8u;
            goto label_2937f8;
        }
    }
    ctx->pc = 0x2937E0u;
label_2937e0:
    // 0x2937e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2937e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2937e4:
    // 0x2937e4: 0x260f809  jalr        $s3
label_2937e8:
    if (ctx->pc == 0x2937E8u) {
        ctx->pc = 0x2937E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937E4u;
        // 0x2937e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937ECu;
        goto label_2937ec;
    }
    ctx->pc = 0x2937E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2937ECu);
        ctx->pc = 0x2937E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937E4u;
        // 0x2937e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2937E4u, 0x2937ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2937ECu;
label_2937ec:
    // 0x2937ec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2937f0:
    if (ctx->pc == 0x2937F0u) {
        ctx->pc = 0x2937F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937ECu;
        // 0x2937f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937F4u;
        goto label_2937f4;
    }
    ctx->pc = 0x2937ECu;
    {
        const bool branch_taken_0x2937ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2937ec) {
            ctx->pc = 0x2937F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2937ECu;
            // 0x2937f0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293814u;
            goto label_293814;
        }
    }
    ctx->pc = 0x2937F4u;
label_2937f4:
    // 0x2937f4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2937f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2937f8:
    // 0x2937f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2937f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2937fc:
    // 0x2937fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2937fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_293800:
    // 0x293800: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x293800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_293804:
    // 0x293804: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x293804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_293808:
    // 0x293808: 0x40f809  jalr        $v0
label_29380c:
    if (ctx->pc == 0x29380Cu) {
        ctx->pc = 0x29380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293808u;
        // 0x29380c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293810u;
        goto label_293810;
    }
    ctx->pc = 0x293808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x293810u);
        ctx->pc = 0x29380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293808u;
        // 0x29380c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293808u, 0x293810u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293810u;
label_293810:
    // 0x293810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x293810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_293814:
    // 0x293814: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x293814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_293818:
    // 0x293818: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_29381c:
    if (ctx->pc == 0x29381Cu) {
        ctx->pc = 0x29381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293818u;
        // 0x29381c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293820u;
        goto label_293820;
    }
    ctx->pc = 0x293818u;
    {
        const bool branch_taken_0x293818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293818u;
        // 0x29381c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293818) {
            ctx->pc = 0x2937D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2937d8;
        }
    }
    ctx->pc = 0x293820u;
label_293820:
    // 0x293820: 0x7bb00230  lq          $s0, 0x230($sp)
    ctx->pc = 0x293820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_293824:
    // 0x293824: 0x7bb10220  lq          $s1, 0x220($sp)
    ctx->pc = 0x293824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_293828:
    // 0x293828: 0x7bb20210  lq          $s2, 0x210($sp)
    ctx->pc = 0x293828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_29382c:
    // 0x29382c: 0x7bb30200  lq          $s3, 0x200($sp)
    ctx->pc = 0x29382cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_293830:
    // 0x293830: 0x7bb401f0  lq          $s4, 0x1F0($sp)
    ctx->pc = 0x293830u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_293834:
    // 0x293834: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x293834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_293838:
    // 0x293838: 0x3e00008  jr          $ra
label_29383c:
    if (ctx->pc == 0x29383Cu) {
        ctx->pc = 0x29383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293838u;
        // 0x29383c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293840u;
        goto label_fallthrough_0x293838;
    }
    ctx->pc = 0x293838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293838u;
        // 0x29383c: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x293838:
    ctx->pc = 0x293840u;
}
