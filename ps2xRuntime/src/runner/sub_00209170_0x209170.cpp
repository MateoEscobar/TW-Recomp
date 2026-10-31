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

// Function: sub_00209170
// Address: 0x209170 - 0x209250
void sub_00209170_0x209170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209170_0x209170");
#endif

    switch (ctx->pc) {
        case 0x209170u: goto label_209170;
        case 0x209174u: goto label_209174;
        case 0x209178u: goto label_209178;
        case 0x20917cu: goto label_20917c;
        case 0x209180u: goto label_209180;
        case 0x209184u: goto label_209184;
        case 0x209188u: goto label_209188;
        case 0x20918cu: goto label_20918c;
        case 0x209190u: goto label_209190;
        case 0x209194u: goto label_209194;
        case 0x209198u: goto label_209198;
        case 0x20919cu: goto label_20919c;
        case 0x2091a0u: goto label_2091a0;
        case 0x2091a4u: goto label_2091a4;
        case 0x2091a8u: goto label_2091a8;
        case 0x2091acu: goto label_2091ac;
        case 0x2091b0u: goto label_2091b0;
        case 0x2091b4u: goto label_2091b4;
        case 0x2091b8u: goto label_2091b8;
        case 0x2091bcu: goto label_2091bc;
        case 0x2091c0u: goto label_2091c0;
        case 0x2091c4u: goto label_2091c4;
        case 0x2091c8u: goto label_2091c8;
        case 0x2091ccu: goto label_2091cc;
        case 0x2091d0u: goto label_2091d0;
        case 0x2091d4u: goto label_2091d4;
        case 0x2091d8u: goto label_2091d8;
        case 0x2091dcu: goto label_2091dc;
        case 0x2091e0u: goto label_2091e0;
        case 0x2091e4u: goto label_2091e4;
        case 0x2091e8u: goto label_2091e8;
        case 0x2091ecu: goto label_2091ec;
        case 0x2091f0u: goto label_2091f0;
        case 0x2091f4u: goto label_2091f4;
        case 0x2091f8u: goto label_2091f8;
        case 0x2091fcu: goto label_2091fc;
        case 0x209200u: goto label_209200;
        case 0x209204u: goto label_209204;
        case 0x209208u: goto label_209208;
        case 0x20920cu: goto label_20920c;
        case 0x209210u: goto label_209210;
        case 0x209214u: goto label_209214;
        case 0x209218u: goto label_209218;
        case 0x20921cu: goto label_20921c;
        case 0x209220u: goto label_209220;
        case 0x209224u: goto label_209224;
        case 0x209228u: goto label_209228;
        case 0x20922cu: goto label_20922c;
        case 0x209230u: goto label_209230;
        case 0x209234u: goto label_209234;
        case 0x209238u: goto label_209238;
        case 0x20923cu: goto label_20923c;
        case 0x209240u: goto label_209240;
        case 0x209244u: goto label_209244;
        case 0x209248u: goto label_209248;
        case 0x20924cu: goto label_20924c;
        default: break;
    }

    ctx->pc = 0x209170u;

label_209170:
    // 0x209170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_209174:
    // 0x209174: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x209174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_209178:
    // 0x209178: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x209178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20917c:
    // 0x20917c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20917cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_209180:
    // 0x209180: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x209180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_209184:
    // 0x209184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209188:
    // 0x209188: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x209188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20918c:
    // 0x20918c: 0x2442e250  addiu       $v0, $v0, -0x1DB0
    ctx->pc = 0x20918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959696));
label_209190:
    // 0x209190: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x209190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_209194:
    // 0x209194: 0x2463e278  addiu       $v1, $v1, -0x1D88
    ctx->pc = 0x209194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959736));
label_209198:
    // 0x209198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20919c:
    // 0x20919c: 0x24c6e2a8  addiu       $a2, $a2, -0x1D58
    ctx->pc = 0x20919cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959784));
label_2091a0:
    // 0x2091a0: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x2091a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_2091a4:
    // 0x2091a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2091a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2091a8:
    // 0x2091a8: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x2091a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_2091ac:
    // 0x2091ac: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x2091acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_2091b0:
    // 0x2091b0: 0xc0825e2  jal         func_209788
label_2091b4:
    if (ctx->pc == 0x2091B4u) {
        ctx->pc = 0x2091B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091B0u;
        // 0x2091b4: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091B8u;
        goto label_2091b8;
    }
    ctx->pc = 0x2091B0u;
    SET_GPR_U32(ctx, 31, 0x2091B8u);
    ctx->pc = 0x2091B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2091B0u;
    // 0x2091b4: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209788u, 0x2091B0u, 0x2091B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091B8u;
label_2091b8:
    // 0x2091b8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2091b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2091bc:
    // 0x2091bc: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x2091bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_2091c0:
    // 0x2091c0: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x2091c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_2091c4:
    // 0x2091c4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2091c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2091c8:
    // 0x2091c8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2091cc:
    if (ctx->pc == 0x2091CCu) {
        ctx->pc = 0x2091CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091C8u;
        // 0x2091cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091D0u;
        goto label_2091d0;
    }
    ctx->pc = 0x2091C8u;
    {
        const bool branch_taken_0x2091c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2091CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091C8u;
        // 0x2091cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091c8) {
            ctx->pc = 0x2091F8u;
            goto label_2091f8;
        }
    }
    ctx->pc = 0x2091D0u;
label_2091d0:
    // 0x2091d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2091d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2091d4:
    // 0x2091d4: 0xc1376d6  jal         func_4DDB58
label_2091d8:
    if (ctx->pc == 0x2091D8u) {
        ctx->pc = 0x2091D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091D4u;
        // 0x2091d8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2091DCu;
        goto label_2091dc;
    }
    ctx->pc = 0x2091D4u;
    SET_GPR_U32(ctx, 31, 0x2091DCu);
    ctx->pc = 0x2091D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2091D4u;
    // 0x2091d8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x2091D4u, 0x2091DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091DCu;
label_2091dc:
    // 0x2091dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2091dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2091e0:
    // 0x2091e0: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x2091e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_2091e4:
    // 0x2091e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2091e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2091e8:
    // 0x2091e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2091e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2091ec:
    // 0x2091ec: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2091ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2091f0:
    // 0x2091f0: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x2091f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_2091f4:
    // 0x2091f4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2091f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2091f8:
    // 0x2091f8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2091f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2091fc:
    // 0x2091fc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_209200:
    if (ctx->pc == 0x209200u) {
        ctx->pc = 0x209200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091FCu;
        // 0x209200: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209204u;
        goto label_209204;
    }
    ctx->pc = 0x2091FCu;
    {
        const bool branch_taken_0x2091fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x209200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091FCu;
        // 0x209200: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091fc) {
            ctx->pc = 0x209228u;
            goto label_209228;
        }
    }
    ctx->pc = 0x209204u;
label_209204:
    // 0x209204: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x209204u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_209208:
    // 0x209208: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x209208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20920c:
    // 0x20920c: 0x24c68de0  addiu       $a2, $a2, -0x7220
    ctx->pc = 0x20920cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938080));
label_209210:
    // 0x209210: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x209210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_209214:
    // 0x209214: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x209214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_209218:
    // 0x209218: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x209218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_20921c:
    // 0x20921c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x20921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_209220:
    // 0x209220: 0x60f809  jalr        $v1
label_209224:
    if (ctx->pc == 0x209224u) {
        ctx->pc = 0x209224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209220u;
        // 0x209224: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209228u;
        goto label_209228;
    }
    ctx->pc = 0x209220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209228u);
        ctx->pc = 0x209224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209220u;
        // 0x209224: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209220u, 0x209228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209228u;
label_209228:
    // 0x209228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20922c:
    // 0x20922c: 0xc06a39e  jal         func_1A8E78
label_209230:
    if (ctx->pc == 0x209230u) {
        ctx->pc = 0x209230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20922Cu;
        // 0x209230: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209234u;
        goto label_209234;
    }
    ctx->pc = 0x20922Cu;
    SET_GPR_U32(ctx, 31, 0x209234u);
    ctx->pc = 0x209230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20922Cu;
    // 0x209230: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x20922Cu, 0x209234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209234u;
label_209234:
    // 0x209234: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x209234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209238:
    // 0x209238: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x209238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20923c:
    // 0x20923c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20923cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209240:
    // 0x209240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209244:
    // 0x209244: 0x3e00008  jr          $ra
label_209248:
    if (ctx->pc == 0x209248u) {
        ctx->pc = 0x209248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209244u;
        // 0x209248: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20924Cu;
        goto label_20924c;
    }
    ctx->pc = 0x209244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209244u;
        // 0x209248: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20924Cu;
label_20924c:
    // 0x20924c: 0x0  nop
    ctx->pc = 0x20924cu;
    // NOP
    ctx->pc = 0x209250u;
}
