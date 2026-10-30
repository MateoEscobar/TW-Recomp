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

// Function: sub_00405F78
// Address: 0x405f78 - 0x4061a0
void sub_00405F78_0x405f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00405F78_0x405f78");
#endif

    switch (ctx->pc) {
        case 0x405f78u: goto label_405f78;
        case 0x405f7cu: goto label_405f7c;
        case 0x405f80u: goto label_405f80;
        case 0x405f84u: goto label_405f84;
        case 0x405f88u: goto label_405f88;
        case 0x405f8cu: goto label_405f8c;
        case 0x405f90u: goto label_405f90;
        case 0x405f94u: goto label_405f94;
        case 0x405f98u: goto label_405f98;
        case 0x405f9cu: goto label_405f9c;
        case 0x405fa0u: goto label_405fa0;
        case 0x405fa4u: goto label_405fa4;
        case 0x405fa8u: goto label_405fa8;
        case 0x405facu: goto label_405fac;
        case 0x405fb0u: goto label_405fb0;
        case 0x405fb4u: goto label_405fb4;
        case 0x405fb8u: goto label_405fb8;
        case 0x405fbcu: goto label_405fbc;
        case 0x405fc0u: goto label_405fc0;
        case 0x405fc4u: goto label_405fc4;
        case 0x405fc8u: goto label_405fc8;
        case 0x405fccu: goto label_405fcc;
        case 0x405fd0u: goto label_405fd0;
        case 0x405fd4u: goto label_405fd4;
        case 0x405fd8u: goto label_405fd8;
        case 0x405fdcu: goto label_405fdc;
        case 0x405fe0u: goto label_405fe0;
        case 0x405fe4u: goto label_405fe4;
        case 0x405fe8u: goto label_405fe8;
        case 0x405fecu: goto label_405fec;
        case 0x405ff0u: goto label_405ff0;
        case 0x405ff4u: goto label_405ff4;
        case 0x405ff8u: goto label_405ff8;
        case 0x405ffcu: goto label_405ffc;
        case 0x406000u: goto label_406000;
        case 0x406004u: goto label_406004;
        case 0x406008u: goto label_406008;
        case 0x40600cu: goto label_40600c;
        case 0x406010u: goto label_406010;
        case 0x406014u: goto label_406014;
        case 0x406018u: goto label_406018;
        case 0x40601cu: goto label_40601c;
        case 0x406020u: goto label_406020;
        case 0x406024u: goto label_406024;
        case 0x406028u: goto label_406028;
        case 0x40602cu: goto label_40602c;
        case 0x406030u: goto label_406030;
        case 0x406034u: goto label_406034;
        case 0x406038u: goto label_406038;
        case 0x40603cu: goto label_40603c;
        case 0x406040u: goto label_406040;
        case 0x406044u: goto label_406044;
        case 0x406048u: goto label_406048;
        case 0x40604cu: goto label_40604c;
        case 0x406050u: goto label_406050;
        case 0x406054u: goto label_406054;
        case 0x406058u: goto label_406058;
        case 0x40605cu: goto label_40605c;
        case 0x406060u: goto label_406060;
        case 0x406064u: goto label_406064;
        case 0x406068u: goto label_406068;
        case 0x40606cu: goto label_40606c;
        case 0x406070u: goto label_406070;
        case 0x406074u: goto label_406074;
        case 0x406078u: goto label_406078;
        case 0x40607cu: goto label_40607c;
        case 0x406080u: goto label_406080;
        case 0x406084u: goto label_406084;
        case 0x406088u: goto label_406088;
        case 0x40608cu: goto label_40608c;
        case 0x406090u: goto label_406090;
        case 0x406094u: goto label_406094;
        case 0x406098u: goto label_406098;
        case 0x40609cu: goto label_40609c;
        case 0x4060a0u: goto label_4060a0;
        case 0x4060a4u: goto label_4060a4;
        case 0x4060a8u: goto label_4060a8;
        case 0x4060acu: goto label_4060ac;
        case 0x4060b0u: goto label_4060b0;
        case 0x4060b4u: goto label_4060b4;
        case 0x4060b8u: goto label_4060b8;
        case 0x4060bcu: goto label_4060bc;
        case 0x4060c0u: goto label_4060c0;
        case 0x4060c4u: goto label_4060c4;
        case 0x4060c8u: goto label_4060c8;
        case 0x4060ccu: goto label_4060cc;
        case 0x4060d0u: goto label_4060d0;
        case 0x4060d4u: goto label_4060d4;
        case 0x4060d8u: goto label_4060d8;
        case 0x4060dcu: goto label_4060dc;
        case 0x4060e0u: goto label_4060e0;
        case 0x4060e4u: goto label_4060e4;
        case 0x4060e8u: goto label_4060e8;
        case 0x4060ecu: goto label_4060ec;
        case 0x4060f0u: goto label_4060f0;
        case 0x4060f4u: goto label_4060f4;
        case 0x4060f8u: goto label_4060f8;
        case 0x4060fcu: goto label_4060fc;
        case 0x406100u: goto label_406100;
        case 0x406104u: goto label_406104;
        case 0x406108u: goto label_406108;
        case 0x40610cu: goto label_40610c;
        case 0x406110u: goto label_406110;
        case 0x406114u: goto label_406114;
        case 0x406118u: goto label_406118;
        case 0x40611cu: goto label_40611c;
        case 0x406120u: goto label_406120;
        case 0x406124u: goto label_406124;
        case 0x406128u: goto label_406128;
        case 0x40612cu: goto label_40612c;
        case 0x406130u: goto label_406130;
        case 0x406134u: goto label_406134;
        case 0x406138u: goto label_406138;
        case 0x40613cu: goto label_40613c;
        case 0x406140u: goto label_406140;
        case 0x406144u: goto label_406144;
        case 0x406148u: goto label_406148;
        case 0x40614cu: goto label_40614c;
        case 0x406150u: goto label_406150;
        case 0x406154u: goto label_406154;
        case 0x406158u: goto label_406158;
        case 0x40615cu: goto label_40615c;
        case 0x406160u: goto label_406160;
        case 0x406164u: goto label_406164;
        case 0x406168u: goto label_406168;
        case 0x40616cu: goto label_40616c;
        case 0x406170u: goto label_406170;
        case 0x406174u: goto label_406174;
        case 0x406178u: goto label_406178;
        case 0x40617cu: goto label_40617c;
        case 0x406180u: goto label_406180;
        case 0x406184u: goto label_406184;
        case 0x406188u: goto label_406188;
        case 0x40618cu: goto label_40618c;
        case 0x406190u: goto label_406190;
        case 0x406194u: goto label_406194;
        case 0x406198u: goto label_406198;
        case 0x40619cu: goto label_40619c;
        default: break;
    }

    ctx->pc = 0x405f78u;

label_405f78:
    // 0x405f78: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x405f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
label_405f7c:
    // 0x405f7c: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x405f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
label_405f80:
    // 0x405f80: 0x7fb10480  sq          $s1, 0x480($sp)
    ctx->pc = 0x405f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 17));
label_405f84:
    // 0x405f84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x405f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_405f88:
    // 0x405f88: 0x7fb20470  sq          $s2, 0x470($sp)
    ctx->pc = 0x405f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 18));
label_405f8c:
    // 0x405f8c: 0x7fb30460  sq          $s3, 0x460($sp)
    ctx->pc = 0x405f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 19));
label_405f90:
    // 0x405f90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x405f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_405f94:
    // 0x405f94: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x405f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_405f98:
    // 0x405f98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x405f98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405f9c:
    // 0x405f9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x405f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_405fa0:
    // 0x405fa0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x405fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_405fa4:
    // 0x405fa4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x405fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_405fa8:
    // 0x405fa8: 0x40f809  jalr        $v0
label_405fac:
    if (ctx->pc == 0x405FACu) {
        ctx->pc = 0x405FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FA8u;
        // 0x405fac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405FB0u;
        goto label_405fb0;
    }
    ctx->pc = 0x405FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405FB0u);
        ctx->pc = 0x405FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FA8u;
        // 0x405fac: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405FA8u, 0x405FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405FB0u;
label_405fb0:
    // 0x405fb0: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x405fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_405fb4:
    // 0x405fb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x405fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405fb8:
    // 0x405fb8: 0x2c62001b  sltiu       $v0, $v1, 0x1B
    ctx->pc = 0x405fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
label_405fbc:
    // 0x405fbc: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_405fc0:
    if (ctx->pc == 0x405FC0u) {
        ctx->pc = 0x405FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FBCu;
        // 0x405fc0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405FC4u;
        goto label_405fc4;
    }
    ctx->pc = 0x405FBCu;
    {
        const bool branch_taken_0x405fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FBCu;
        // 0x405fc0: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405fbc) {
            ctx->pc = 0x4061A0u;
            return;
        }
    }
    ctx->pc = 0x405FC4u;
label_405fc4:
    // 0x405fc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x405fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_405fc8:
    // 0x405fc8: 0x24427b20  addiu       $v0, $v0, 0x7B20
    ctx->pc = 0x405fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31520));
label_405fcc:
    // 0x405fcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x405fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_405fd0:
    // 0x405fd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x405fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_405fd4:
    // 0x405fd4: 0x800008  jr          $a0
label_405fd8:
    if (ctx->pc == 0x405FD8u) {
        ctx->pc = 0x405FDCu;
        goto label_405fdc;
    }
    ctx->pc = 0x405FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x405FDCu: goto label_405fdc;
            case 0x406028u: goto label_406028;
            case 0x4060D4u: goto label_4060d4;
            case 0x406114u: goto label_406114;
            case 0x406124u: goto label_406124;
            case 0x406160u: goto label_406160;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405FD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x405FDCu;
label_405fdc:
    // 0x405fdc: 0xc0ea146  jal         func_3A8518
label_405fe0:
    if (ctx->pc == 0x405FE0u) {
        ctx->pc = 0x405FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FDCu;
        // 0x405fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405FE4u;
        goto label_405fe4;
    }
    ctx->pc = 0x405FDCu;
    SET_GPR_U32(ctx, 31, 0x405FE4u);
    ctx->pc = 0x405FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405FDCu;
    // 0x405fe0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x405FDCu, 0x405FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405FE4u;
label_405fe4:
    // 0x405fe4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x405fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405fe8:
    // 0x405fe8: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
label_405fec:
    if (ctx->pc == 0x405FECu) {
        ctx->pc = 0x405FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FE8u;
        // 0x405fec: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405FF0u;
        goto label_405ff0;
    }
    ctx->pc = 0x405FE8u;
    {
        const bool branch_taken_0x405fe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x405fe8) {
            ctx->pc = 0x405FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405FE8u;
            // 0x405fec: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405FFCu;
            goto label_405ffc;
        }
    }
    ctx->pc = 0x405FF0u;
label_405ff0:
    // 0x405ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x405ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_405ff4:
    // 0x405ff4: 0x10000003  b           . + 4 + (0x3 << 2)
label_405ff8:
    if (ctx->pc == 0x405FF8u) {
        ctx->pc = 0x405FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FF4u;
        // 0x405ff8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405FFCu;
        goto label_405ffc;
    }
    ctx->pc = 0x405FF4u;
    {
        const bool branch_taken_0x405ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FF4u;
        // 0x405ff8: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405ff4) {
            ctx->pc = 0x406004u;
            goto label_406004;
        }
    }
    ctx->pc = 0x405FFCu;
label_405ffc:
    // 0x405ffc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_406000:
    if (ctx->pc == 0x406000u) {
        ctx->pc = 0x406000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FFCu;
        // 0x406000: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406004u;
        goto label_406004;
    }
    ctx->pc = 0x405FFCu;
    {
        const bool branch_taken_0x405ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405ffc) {
            ctx->pc = 0x406000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405FFCu;
            // 0x406000: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406004u;
            goto label_406004;
        }
    }
    ctx->pc = 0x406004u;
label_406004:
    // 0x406004: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x406004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_406008:
    // 0x406008: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_40600c:
    if (ctx->pc == 0x40600Cu) {
        ctx->pc = 0x40600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406008u;
        // 0x40600c: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406010u;
        goto label_406010;
    }
    ctx->pc = 0x406008u;
    {
        const bool branch_taken_0x406008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406008u;
        // 0x40600c: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406008) {
            ctx->pc = 0x4061A4u;
            return;
        }
    }
    ctx->pc = 0x406010u;
label_406010:
    // 0x406010: 0xc0ea16a  jal         func_3A85A8
label_406014:
    if (ctx->pc == 0x406014u) {
        ctx->pc = 0x406014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406010u;
        // 0x406014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406018u;
        goto label_406018;
    }
    ctx->pc = 0x406010u;
    SET_GPR_U32(ctx, 31, 0x406018u);
    ctx->pc = 0x406014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406010u;
    // 0x406014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x406010u, 0x406018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406018u;
label_406018:
    // 0x406018: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x406018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_40601c:
    // 0x40601c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x40601cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406020:
    // 0x406020: 0x10000035  b           . + 4 + (0x35 << 2)
label_406024:
    if (ctx->pc == 0x406024u) {
        ctx->pc = 0x406024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406020u;
        // 0x406024: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406028u;
        goto label_406028;
    }
    ctx->pc = 0x406020u;
    {
        const bool branch_taken_0x406020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406020u;
        // 0x406024: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406020) {
            ctx->pc = 0x4060F8u;
            goto label_4060f8;
        }
    }
    ctx->pc = 0x406028u;
label_406028:
    // 0x406028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x406028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40602c:
    // 0x40602c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x40602cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_406030:
    // 0x406030: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x406030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_406034:
    // 0x406034: 0x1460005a  bnez        $v1, . + 4 + (0x5A << 2)
label_406038:
    if (ctx->pc == 0x406038u) {
        ctx->pc = 0x406038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406034u;
        // 0x406038: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40603Cu;
        goto label_40603c;
    }
    ctx->pc = 0x406034u;
    {
        const bool branch_taken_0x406034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x406038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406034u;
        // 0x406038: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406034) {
            ctx->pc = 0x4061A0u;
            return;
        }
    }
    ctx->pc = 0x40603Cu;
label_40603c:
    // 0x40603c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_406040:
    // 0x406040: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x406040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_406044:
    // 0x406044: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x406044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_406048:
    // 0x406048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x406048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40604c:
    // 0x40604c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x40604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_406050:
    // 0x406050: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x406050u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_406054:
    // 0x406054: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x406054u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_406058:
    // 0x406058: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x406058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40605c:
    // 0x40605c: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x40605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_406060:
    // 0x406060: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x406060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_406064:
    // 0x406064: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x406064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_406068:
    // 0x406068: 0x27a70430  addiu       $a3, $sp, 0x430
    ctx->pc = 0x406068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_40606c:
    // 0x40606c: 0xe7a00430  swc1        $f0, 0x430($sp)
    ctx->pc = 0x40606cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_406070:
    // 0x406070: 0x27a80440  addiu       $t0, $sp, 0x440
    ctx->pc = 0x406070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_406074:
    // 0x406074: 0xafa00420  sw          $zero, 0x420($sp)
    ctx->pc = 0x406074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 0));
label_406078:
    // 0x406078: 0x26107b08  addiu       $s0, $s0, 0x7B08
    ctx->pc = 0x406078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31496));
label_40607c:
    // 0x40607c: 0xc0e9fd0  jal         func_3A7F40
label_406080:
    if (ctx->pc == 0x406080u) {
        ctx->pc = 0x406080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40607Cu;
        // 0x406080: 0xafb30440  sw          $s3, 0x440($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406084u;
        goto label_406084;
    }
    ctx->pc = 0x40607Cu;
    SET_GPR_U32(ctx, 31, 0x406084u);
    ctx->pc = 0x406080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40607Cu;
    // 0x406080: 0xafb30440  sw          $s3, 0x440($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x40607Cu, 0x406084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406084u;
label_406084:
    // 0x406084: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x406084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_406088:
    // 0x406088: 0xc0f15bc  jal         func_3C56F0
label_40608c:
    if (ctx->pc == 0x40608Cu) {
        ctx->pc = 0x40608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406088u;
        // 0x40608c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406090u;
        goto label_406090;
    }
    ctx->pc = 0x406088u;
    SET_GPR_U32(ctx, 31, 0x406090u);
    ctx->pc = 0x40608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406088u;
    // 0x40608c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x406088u, 0x406090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406090u;
label_406090:
    // 0x406090: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x406090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_406094:
    // 0x406094: 0x2405fbff  addiu       $a1, $zero, -0x401
    ctx->pc = 0x406094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_406098:
    // 0x406098: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x406098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40609c:
    // 0x40609c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x40609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_4060a0:
    // 0x4060a0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4060a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4060a4:
    // 0x4060a4: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x4060a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_4060a8:
    // 0x4060a8: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x4060a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4060ac:
    // 0x4060ac: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x4060acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_4060b0:
    // 0x4060b0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x4060b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_4060b4:
    // 0x4060b4: 0xc0e896e  jal         func_3A25B8
label_4060b8:
    if (ctx->pc == 0x4060B8u) {
        ctx->pc = 0x4060B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4060B4u;
        // 0x4060b8: 0xaca20054  sw          $v0, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4060BCu;
        goto label_4060bc;
    }
    ctx->pc = 0x4060B4u;
    SET_GPR_U32(ctx, 31, 0x4060BCu);
    ctx->pc = 0x4060B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4060B4u;
    // 0x4060b8: 0xaca20054  sw          $v0, 0x54($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x4060B4u, 0x4060BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4060BCu;
label_4060bc:
    // 0x4060bc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x4060bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4060c0:
    // 0x4060c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4060c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4060c4:
    // 0x4060c4: 0xc0e8604  jal         func_3A1810
label_4060c8:
    if (ctx->pc == 0x4060C8u) {
        ctx->pc = 0x4060C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4060C4u;
        // 0x4060c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4060CCu;
        goto label_4060cc;
    }
    ctx->pc = 0x4060C4u;
    SET_GPR_U32(ctx, 31, 0x4060CCu);
    ctx->pc = 0x4060C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4060C4u;
    // 0x4060c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x4060C4u, 0x4060CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4060CCu;
label_4060cc:
    // 0x4060cc: 0x10000035  b           . + 4 + (0x35 << 2)
label_4060d0:
    if (ctx->pc == 0x4060D0u) {
        ctx->pc = 0x4060D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4060CCu;
        // 0x4060d0: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4060D4u;
        goto label_4060d4;
    }
    ctx->pc = 0x4060CCu;
    {
        const bool branch_taken_0x4060cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4060D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4060CCu;
        // 0x4060d0: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4060cc) {
            ctx->pc = 0x4061A4u;
            return;
        }
    }
    ctx->pc = 0x4060D4u;
label_4060d4:
    // 0x4060d4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x4060d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4060d8:
    // 0x4060d8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_4060dc:
    if (ctx->pc == 0x4060DCu) {
        ctx->pc = 0x4060DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4060D8u;
        // 0x4060dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4060E0u;
        goto label_4060e0;
    }
    ctx->pc = 0x4060D8u;
    {
        const bool branch_taken_0x4060d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4060DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4060D8u;
        // 0x4060dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4060d8) {
            ctx->pc = 0x4061A0u;
            return;
        }
    }
    ctx->pc = 0x4060E0u;
label_4060e0:
    // 0x4060e0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x4060e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_4060e4:
    // 0x4060e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4060e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4060e8:
    // 0x4060e8: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x4060e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_4060ec:
    // 0x4060ec: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x4060ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_4060f0:
    // 0x4060f0: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x4060f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
label_4060f4:
    // 0x4060f4: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x4060f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4060f8:
    // 0x4060f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4060f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4060fc:
    // 0x4060fc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x4060fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_406100:
    // 0x406100: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x406100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_406104:
    // 0x406104: 0x60f809  jalr        $v1
label_406108:
    if (ctx->pc == 0x406108u) {
        ctx->pc = 0x406108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406104u;
        // 0x406108: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40610Cu;
        goto label_40610c;
    }
    ctx->pc = 0x406104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40610Cu);
        ctx->pc = 0x406108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406104u;
        // 0x406108: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406104u, 0x40610Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40610Cu;
label_40610c:
    // 0x40610c: 0x10000025  b           . + 4 + (0x25 << 2)
label_406110:
    if (ctx->pc == 0x406110u) {
        ctx->pc = 0x406110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40610Cu;
        // 0x406110: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406114u;
        goto label_406114;
    }
    ctx->pc = 0x40610Cu;
    {
        const bool branch_taken_0x40610c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40610Cu;
        // 0x406110: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40610c) {
            ctx->pc = 0x4061A4u;
            return;
        }
    }
    ctx->pc = 0x406114u;
label_406114:
    // 0x406114: 0xc0e8616  jal         func_3A1858
label_406118:
    if (ctx->pc == 0x406118u) {
        ctx->pc = 0x406118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406114u;
        // 0x406118: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40611Cu;
        goto label_40611c;
    }
    ctx->pc = 0x406114u;
    SET_GPR_U32(ctx, 31, 0x40611Cu);
    ctx->pc = 0x406118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406114u;
    // 0x406118: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x406114u, 0x40611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40611Cu;
label_40611c:
    // 0x40611c: 0x10000021  b           . + 4 + (0x21 << 2)
label_406120:
    if (ctx->pc == 0x406120u) {
        ctx->pc = 0x406120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40611Cu;
        // 0x406120: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406124u;
        goto label_406124;
    }
    ctx->pc = 0x40611Cu;
    {
        const bool branch_taken_0x40611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40611Cu;
        // 0x406120: 0x7bb00490  lq          $s0, 0x490($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40611c) {
            ctx->pc = 0x4061A4u;
            return;
        }
    }
    ctx->pc = 0x406124u;
label_406124:
    // 0x406124: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x406124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_406128:
    // 0x406128: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x406128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_40612c:
    // 0x40612c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x40612cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_406130:
    // 0x406130: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_406134:
    if (ctx->pc == 0x406134u) {
        ctx->pc = 0x406134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406130u;
        // 0x406134: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406138u;
        goto label_406138;
    }
    ctx->pc = 0x406130u;
    {
        const bool branch_taken_0x406130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x406134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406130u;
        // 0x406134: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406130) {
            ctx->pc = 0x4061A0u;
            return;
        }
    }
    ctx->pc = 0x406138u;
label_406138:
    // 0x406138: 0xc0e8616  jal         func_3A1858
label_40613c:
    if (ctx->pc == 0x40613Cu) {
        ctx->pc = 0x406140u;
        goto label_406140;
    }
    ctx->pc = 0x406138u;
    SET_GPR_U32(ctx, 31, 0x406140u);
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x406138u, 0x406140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406140u;
label_406140:
    // 0x406140: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x406140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_406144:
    // 0x406144: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x406144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_406148:
    // 0x406148: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x406148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_40614c:
    // 0x40614c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x40614cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_406150:
    // 0x406150: 0x60f809  jalr        $v1
label_406154:
    if (ctx->pc == 0x406154u) {
        ctx->pc = 0x406154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406150u;
        // 0x406154: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406158u;
        goto label_406158;
    }
    ctx->pc = 0x406150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x406158u);
        ctx->pc = 0x406154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406150u;
        // 0x406154: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406150u, 0x406158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406158u;
label_406158:
    // 0x406158: 0x10000011  b           . + 4 + (0x11 << 2)
label_40615c:
    if (ctx->pc == 0x40615Cu) {
        ctx->pc = 0x40615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406158u;
        // 0x40615c: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406160u;
        goto label_406160;
    }
    ctx->pc = 0x406158u;
    {
        const bool branch_taken_0x406158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406158u;
        // 0x40615c: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406158) {
            ctx->pc = 0x4061A0u;
            return;
        }
    }
    ctx->pc = 0x406160u;
label_406160:
    // 0x406160: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x406160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_406164:
    // 0x406164: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_406168:
    if (ctx->pc == 0x406168u) {
        ctx->pc = 0x40616Cu;
        goto label_40616c;
    }
    ctx->pc = 0x406164u;
    {
        const bool branch_taken_0x406164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x406164) {
            ctx->pc = 0x406190u;
            goto label_406190;
        }
    }
    ctx->pc = 0x40616Cu;
label_40616c:
    // 0x40616c: 0xc0e8616  jal         func_3A1858
label_406170:
    if (ctx->pc == 0x406170u) {
        ctx->pc = 0x406174u;
        goto label_406174;
    }
    ctx->pc = 0x40616Cu;
    SET_GPR_U32(ctx, 31, 0x406174u);
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x40616Cu, 0x406174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406174u;
label_406174:
    // 0x406174: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x406174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_406178:
    // 0x406178: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x406178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40617c:
    // 0x40617c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x40617cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_406180:
    // 0x406180: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x406180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_406184:
    // 0x406184: 0x60f809  jalr        $v1
label_406188:
    if (ctx->pc == 0x406188u) {
        ctx->pc = 0x406188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406184u;
        // 0x406188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40618Cu;
        goto label_40618c;
    }
    ctx->pc = 0x406184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40618Cu);
        ctx->pc = 0x406188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406184u;
        // 0x406188: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406184u, 0x40618Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40618Cu;
label_40618c:
    // 0x40618c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x40618cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_406190:
    // 0x406190: 0xc0e8616  jal         func_3A1858
label_406194:
    if (ctx->pc == 0x406194u) {
        ctx->pc = 0x406194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406190u;
        // 0x406194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406198u;
        goto label_406198;
    }
    ctx->pc = 0x406190u;
    SET_GPR_U32(ctx, 31, 0x406198u);
    ctx->pc = 0x406194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406190u;
    // 0x406194: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x406190u, 0x406198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406198u;
label_406198:
    // 0x406198: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x406198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40619c:
    // 0x40619c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x40619cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x4061a0u;
}
