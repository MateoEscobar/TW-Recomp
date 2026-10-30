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

// Function: sub_00414548
// Address: 0x414548 - 0x414688
void sub_00414548_0x414548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414548_0x414548");
#endif

    switch (ctx->pc) {
        case 0x414548u: goto label_414548;
        case 0x41454cu: goto label_41454c;
        case 0x414550u: goto label_414550;
        case 0x414554u: goto label_414554;
        case 0x414558u: goto label_414558;
        case 0x41455cu: goto label_41455c;
        case 0x414560u: goto label_414560;
        case 0x414564u: goto label_414564;
        case 0x414568u: goto label_414568;
        case 0x41456cu: goto label_41456c;
        case 0x414570u: goto label_414570;
        case 0x414574u: goto label_414574;
        case 0x414578u: goto label_414578;
        case 0x41457cu: goto label_41457c;
        case 0x414580u: goto label_414580;
        case 0x414584u: goto label_414584;
        case 0x414588u: goto label_414588;
        case 0x41458cu: goto label_41458c;
        case 0x414590u: goto label_414590;
        case 0x414594u: goto label_414594;
        case 0x414598u: goto label_414598;
        case 0x41459cu: goto label_41459c;
        case 0x4145a0u: goto label_4145a0;
        case 0x4145a4u: goto label_4145a4;
        case 0x4145a8u: goto label_4145a8;
        case 0x4145acu: goto label_4145ac;
        case 0x4145b0u: goto label_4145b0;
        case 0x4145b4u: goto label_4145b4;
        case 0x4145b8u: goto label_4145b8;
        case 0x4145bcu: goto label_4145bc;
        case 0x4145c0u: goto label_4145c0;
        case 0x4145c4u: goto label_4145c4;
        case 0x4145c8u: goto label_4145c8;
        case 0x4145ccu: goto label_4145cc;
        case 0x4145d0u: goto label_4145d0;
        case 0x4145d4u: goto label_4145d4;
        case 0x4145d8u: goto label_4145d8;
        case 0x4145dcu: goto label_4145dc;
        case 0x4145e0u: goto label_4145e0;
        case 0x4145e4u: goto label_4145e4;
        case 0x4145e8u: goto label_4145e8;
        case 0x4145ecu: goto label_4145ec;
        case 0x4145f0u: goto label_4145f0;
        case 0x4145f4u: goto label_4145f4;
        case 0x4145f8u: goto label_4145f8;
        case 0x4145fcu: goto label_4145fc;
        case 0x414600u: goto label_414600;
        case 0x414604u: goto label_414604;
        case 0x414608u: goto label_414608;
        case 0x41460cu: goto label_41460c;
        case 0x414610u: goto label_414610;
        case 0x414614u: goto label_414614;
        case 0x414618u: goto label_414618;
        case 0x41461cu: goto label_41461c;
        case 0x414620u: goto label_414620;
        case 0x414624u: goto label_414624;
        case 0x414628u: goto label_414628;
        case 0x41462cu: goto label_41462c;
        case 0x414630u: goto label_414630;
        case 0x414634u: goto label_414634;
        case 0x414638u: goto label_414638;
        case 0x41463cu: goto label_41463c;
        case 0x414640u: goto label_414640;
        case 0x414644u: goto label_414644;
        case 0x414648u: goto label_414648;
        case 0x41464cu: goto label_41464c;
        case 0x414650u: goto label_414650;
        case 0x414654u: goto label_414654;
        case 0x414658u: goto label_414658;
        case 0x41465cu: goto label_41465c;
        case 0x414660u: goto label_414660;
        case 0x414664u: goto label_414664;
        case 0x414668u: goto label_414668;
        case 0x41466cu: goto label_41466c;
        case 0x414670u: goto label_414670;
        case 0x414674u: goto label_414674;
        case 0x414678u: goto label_414678;
        case 0x41467cu: goto label_41467c;
        case 0x414680u: goto label_414680;
        case 0x414684u: goto label_414684;
        default: break;
    }

    ctx->pc = 0x414548u;

label_414548:
    // 0x414548: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x414548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_41454c:
    // 0x41454c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x41454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_414550:
    // 0x414550: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x414550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_414554:
    // 0x414554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x414554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414558:
    // 0x414558: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x414558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_41455c:
    // 0x41455c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x41455cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_414560:
    // 0x414560: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x414560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_414564:
    // 0x414564: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x414564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414568:
    // 0x414568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x414568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41456c:
    // 0x41456c: 0x8e060170  lw          $a2, 0x170($s0)
    ctx->pc = 0x41456cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_414570:
    // 0x414570: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x414570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_414574:
    // 0x414574: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x414574u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_414578:
    // 0x414578: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x414578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_41457c:
    // 0x41457c: 0x60f809  jalr        $v1
label_414580:
    if (ctx->pc == 0x414580u) {
        ctx->pc = 0x414580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41457Cu;
        // 0x414580: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414584u;
        goto label_414584;
    }
    ctx->pc = 0x41457Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x414584u);
        ctx->pc = 0x414580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41457Cu;
        // 0x414580: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41457Cu, 0x414584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414584u;
label_414584:
    // 0x414584: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x414584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_414588:
    // 0x414588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x414588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41458c:
    // 0x41458c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41458cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414590:
    // 0x414590: 0xc0cdb38  jal         func_336CE0
label_414594:
    if (ctx->pc == 0x414594u) {
        ctx->pc = 0x414594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414590u;
        // 0x414594: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414598u;
        goto label_414598;
    }
    ctx->pc = 0x414590u;
    SET_GPR_U32(ctx, 31, 0x414598u);
    ctx->pc = 0x414594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414590u;
    // 0x414594: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x414590u, 0x414598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414598u;
label_414598:
    // 0x414598: 0xc6010174  lwc1        $f1, 0x174($s0)
    ctx->pc = 0x414598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_41459c:
    // 0x41459c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x41459cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_4145a0:
    // 0x4145a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4145a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4145a4:
    // 0x4145a4: 0x0  nop
    ctx->pc = 0x4145a4u;
    // NOP
label_4145a8:
    // 0x4145a8: 0x45010030  bc1t        . + 4 + (0x30 << 2)
label_4145ac:
    if (ctx->pc == 0x4145ACu) {
        ctx->pc = 0x4145ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145A8u;
        // 0x4145ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145B0u;
        goto label_4145b0;
    }
    ctx->pc = 0x4145A8u;
    {
        const bool branch_taken_0x4145a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4145ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145A8u;
        // 0x4145ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4145a8) {
            ctx->pc = 0x41466Cu;
            goto label_41466c;
        }
    }
    ctx->pc = 0x4145B0u;
label_4145b0:
    // 0x4145b0: 0x8e04017c  lw          $a0, 0x17C($s0)
    ctx->pc = 0x4145b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_4145b4:
    // 0x4145b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4145b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4145b8:
    // 0x4145b8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_4145bc:
    if (ctx->pc == 0x4145BCu) {
        ctx->pc = 0x4145BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145B8u;
        // 0x4145bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145C0u;
        goto label_4145c0;
    }
    ctx->pc = 0x4145B8u;
    {
        const bool branch_taken_0x4145b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4145BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145B8u;
        // 0x4145bc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4145b8) {
            ctx->pc = 0x4145DCu;
            goto label_4145dc;
        }
    }
    ctx->pc = 0x4145C0u;
label_4145c0:
    // 0x4145c0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4145c4:
    if (ctx->pc == 0x4145C4u) {
        ctx->pc = 0x4145C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145C0u;
        // 0x4145c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145C8u;
        goto label_4145c8;
    }
    ctx->pc = 0x4145C0u;
    {
        const bool branch_taken_0x4145c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4145C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145C0u;
        // 0x4145c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4145c0) {
            ctx->pc = 0x41466Cu;
            goto label_41466c;
        }
    }
    ctx->pc = 0x4145C8u;
label_4145c8:
    // 0x4145c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4145c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4145cc:
    // 0x4145cc: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_4145d0:
    if (ctx->pc == 0x4145D0u) {
        ctx->pc = 0x4145D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145CCu;
        // 0x4145d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145D4u;
        goto label_4145d4;
    }
    ctx->pc = 0x4145CCu;
    {
        const bool branch_taken_0x4145cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4145D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145CCu;
        // 0x4145d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4145cc) {
            ctx->pc = 0x4145F4u;
            goto label_4145f4;
        }
    }
    ctx->pc = 0x4145D4u;
label_4145d4:
    // 0x4145d4: 0x10000026  b           . + 4 + (0x26 << 2)
label_4145d8:
    if (ctx->pc == 0x4145D8u) {
        ctx->pc = 0x4145D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145D4u;
        // 0x4145d8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145DCu;
        goto label_4145dc;
    }
    ctx->pc = 0x4145D4u;
    {
        const bool branch_taken_0x4145d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4145D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145D4u;
        // 0x4145d8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4145d4) {
            ctx->pc = 0x414670u;
            goto label_414670;
        }
    }
    ctx->pc = 0x4145DCu;
label_4145dc:
    // 0x4145dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4145dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4145e0:
    // 0x4145e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4145e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4145e4:
    // 0x4145e4: 0xc0937ba  jal         func_24DEE8
label_4145e8:
    if (ctx->pc == 0x4145E8u) {
        ctx->pc = 0x4145E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145E4u;
        // 0x4145e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145ECu;
        goto label_4145ec;
    }
    ctx->pc = 0x4145E4u;
    SET_GPR_U32(ctx, 31, 0x4145ECu);
    ctx->pc = 0x4145E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4145E4u;
    // 0x4145e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DEE8u, 0x4145E4u, 0x4145ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4145ECu;
label_4145ec:
    // 0x4145ec: 0x10000020  b           . + 4 + (0x20 << 2)
label_4145f0:
    if (ctx->pc == 0x4145F0u) {
        ctx->pc = 0x4145F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145ECu;
        // 0x4145f0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4145F4u;
        goto label_4145f4;
    }
    ctx->pc = 0x4145ECu;
    {
        const bool branch_taken_0x4145ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4145F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4145ECu;
        // 0x4145f0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4145ec) {
            ctx->pc = 0x414670u;
            goto label_414670;
        }
    }
    ctx->pc = 0x4145F4u;
label_4145f4:
    // 0x4145f4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x4145f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_4145f8:
    // 0x4145f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x4145f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_4145fc:
    // 0x4145fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4145fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_414600:
    // 0x414600: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x414600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_414604:
    // 0x414604: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x414604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_414608:
    // 0x414608: 0xc136b24  jal         func_4DAC90
label_41460c:
    if (ctx->pc == 0x41460Cu) {
        ctx->pc = 0x41460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414608u;
        // 0x41460c: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414610u;
        goto label_414610;
    }
    ctx->pc = 0x414608u;
    SET_GPR_U32(ctx, 31, 0x414610u);
    ctx->pc = 0x41460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414608u;
    // 0x41460c: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x414608u, 0x414610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414610u;
label_414610:
    // 0x414610: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x414610u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_414614:
    // 0x414614: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x414614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_414618:
    // 0x414618: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x414618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41461c:
    // 0x41461c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x41461cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414620:
    // 0x414620: 0xc136b18  jal         func_4DAC60
label_414624:
    if (ctx->pc == 0x414624u) {
        ctx->pc = 0x414624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414620u;
        // 0x414624: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414628u;
        goto label_414628;
    }
    ctx->pc = 0x414620u;
    SET_GPR_U32(ctx, 31, 0x414628u);
    ctx->pc = 0x414624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x414620u;
    // 0x414624: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x414620u, 0x414628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414628u;
label_414628:
    // 0x414628: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x414628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41462c:
    // 0x41462c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41462cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_414630:
    // 0x414630: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x414630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_414634:
    // 0x414634: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x414634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_414638:
    // 0x414638: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x414638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_41463c:
    // 0x41463c: 0xc136b18  jal         func_4DAC60
label_414640:
    if (ctx->pc == 0x414640u) {
        ctx->pc = 0x414640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41463Cu;
        // 0x414640: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414644u;
        goto label_414644;
    }
    ctx->pc = 0x41463Cu;
    SET_GPR_U32(ctx, 31, 0x414644u);
    ctx->pc = 0x414640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41463Cu;
    // 0x414640: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x41463Cu, 0x414644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414644u;
label_414644:
    // 0x414644: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x414644u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_414648:
    // 0x414648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x414648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41464c:
    // 0x41464c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x41464cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_414650:
    // 0x414650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x414650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414654:
    // 0x414654: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x414654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_414658:
    // 0x414658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x414658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41465c:
    // 0x41465c: 0xc0937d0  jal         func_24DF40
label_414660:
    if (ctx->pc == 0x414660u) {
        ctx->pc = 0x414660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41465Cu;
        // 0x414660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414664u;
        goto label_414664;
    }
    ctx->pc = 0x41465Cu;
    SET_GPR_U32(ctx, 31, 0x414664u);
    ctx->pc = 0x414660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41465Cu;
    // 0x414660: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF40u, 0x41465Cu, 0x414664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414664u;
label_414664:
    // 0x414664: 0x10000002  b           . + 4 + (0x2 << 2)
label_414668:
    if (ctx->pc == 0x414668u) {
        ctx->pc = 0x414668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414664u;
        // 0x414668: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41466Cu;
        goto label_41466c;
    }
    ctx->pc = 0x414664u;
    {
        const bool branch_taken_0x414664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x414668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414664u;
        // 0x414668: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414664) {
            ctx->pc = 0x414670u;
            goto label_414670;
        }
    }
    ctx->pc = 0x41466Cu;
label_41466c:
    // 0x41466c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x41466cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_414670:
    // 0x414670: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x414670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_414674:
    // 0x414674: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x414674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_414678:
    // 0x414678: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x414678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_41467c:
    // 0x41467c: 0x3e00008  jr          $ra
label_414680:
    if (ctx->pc == 0x414680u) {
        ctx->pc = 0x414680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41467Cu;
        // 0x414680: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414684u;
        goto label_414684;
    }
    ctx->pc = 0x41467Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41467Cu;
        // 0x414680: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41467Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414684u;
label_414684:
    // 0x414684: 0x0  nop
    ctx->pc = 0x414684u;
    // NOP
    ctx->pc = 0x414688u;
}
