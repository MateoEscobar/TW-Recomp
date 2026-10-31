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

// Function: sub_00208430
// Address: 0x208430 - 0x208510
void sub_00208430_0x208430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208430_0x208430");
#endif

    switch (ctx->pc) {
        case 0x208430u: goto label_208430;
        case 0x208434u: goto label_208434;
        case 0x208438u: goto label_208438;
        case 0x20843cu: goto label_20843c;
        case 0x208440u: goto label_208440;
        case 0x208444u: goto label_208444;
        case 0x208448u: goto label_208448;
        case 0x20844cu: goto label_20844c;
        case 0x208450u: goto label_208450;
        case 0x208454u: goto label_208454;
        case 0x208458u: goto label_208458;
        case 0x20845cu: goto label_20845c;
        case 0x208460u: goto label_208460;
        case 0x208464u: goto label_208464;
        case 0x208468u: goto label_208468;
        case 0x20846cu: goto label_20846c;
        case 0x208470u: goto label_208470;
        case 0x208474u: goto label_208474;
        case 0x208478u: goto label_208478;
        case 0x20847cu: goto label_20847c;
        case 0x208480u: goto label_208480;
        case 0x208484u: goto label_208484;
        case 0x208488u: goto label_208488;
        case 0x20848cu: goto label_20848c;
        case 0x208490u: goto label_208490;
        case 0x208494u: goto label_208494;
        case 0x208498u: goto label_208498;
        case 0x20849cu: goto label_20849c;
        case 0x2084a0u: goto label_2084a0;
        case 0x2084a4u: goto label_2084a4;
        case 0x2084a8u: goto label_2084a8;
        case 0x2084acu: goto label_2084ac;
        case 0x2084b0u: goto label_2084b0;
        case 0x2084b4u: goto label_2084b4;
        case 0x2084b8u: goto label_2084b8;
        case 0x2084bcu: goto label_2084bc;
        case 0x2084c0u: goto label_2084c0;
        case 0x2084c4u: goto label_2084c4;
        case 0x2084c8u: goto label_2084c8;
        case 0x2084ccu: goto label_2084cc;
        case 0x2084d0u: goto label_2084d0;
        case 0x2084d4u: goto label_2084d4;
        case 0x2084d8u: goto label_2084d8;
        case 0x2084dcu: goto label_2084dc;
        case 0x2084e0u: goto label_2084e0;
        case 0x2084e4u: goto label_2084e4;
        case 0x2084e8u: goto label_2084e8;
        case 0x2084ecu: goto label_2084ec;
        case 0x2084f0u: goto label_2084f0;
        case 0x2084f4u: goto label_2084f4;
        case 0x2084f8u: goto label_2084f8;
        case 0x2084fcu: goto label_2084fc;
        case 0x208500u: goto label_208500;
        case 0x208504u: goto label_208504;
        case 0x208508u: goto label_208508;
        case 0x20850cu: goto label_20850c;
        default: break;
    }

    ctx->pc = 0x208430u;

label_208430:
    // 0x208430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_208434:
    // 0x208434: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x208434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_208438:
    // 0x208438: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x208438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20843c:
    // 0x20843c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20843cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_208440:
    // 0x208440: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x208440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_208444:
    // 0x208444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_208448:
    // 0x208448: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x208448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20844c:
    // 0x20844c: 0x2442e138  addiu       $v0, $v0, -0x1EC8
    ctx->pc = 0x20844cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959416));
label_208450:
    // 0x208450: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x208450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_208454:
    // 0x208454: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x208454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
label_208458:
    // 0x208458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20845c:
    // 0x20845c: 0x24c6e190  addiu       $a2, $a2, -0x1E70
    ctx->pc = 0x20845cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959504));
label_208460:
    // 0x208460: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x208460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_208464:
    // 0x208464: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x208464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_208468:
    // 0x208468: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x208468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_20846c:
    // 0x20846c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x20846cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_208470:
    // 0x208470: 0xc0822d0  jal         func_208B40
label_208474:
    if (ctx->pc == 0x208474u) {
        ctx->pc = 0x208474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208470u;
        // 0x208474: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208478u;
        goto label_208478;
    }
    ctx->pc = 0x208470u;
    SET_GPR_U32(ctx, 31, 0x208478u);
    ctx->pc = 0x208474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208470u;
    // 0x208474: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208B40u, 0x208470u, 0x208478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208478u;
label_208478:
    // 0x208478: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x208478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20847c:
    // 0x20847c: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x20847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_208480:
    // 0x208480: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x208480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_208484:
    // 0x208484: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_208488:
    // 0x208488: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20848c:
    if (ctx->pc == 0x20848Cu) {
        ctx->pc = 0x20848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208488u;
        // 0x20848c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208490u;
        goto label_208490;
    }
    ctx->pc = 0x208488u;
    {
        const bool branch_taken_0x208488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208488u;
        // 0x20848c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208488) {
            ctx->pc = 0x2084B8u;
            goto label_2084b8;
        }
    }
    ctx->pc = 0x208490u;
label_208490:
    // 0x208490: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x208490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_208494:
    // 0x208494: 0xc1376d6  jal         func_4DDB58
label_208498:
    if (ctx->pc == 0x208498u) {
        ctx->pc = 0x208498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208494u;
        // 0x208498: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20849Cu;
        goto label_20849c;
    }
    ctx->pc = 0x208494u;
    SET_GPR_U32(ctx, 31, 0x20849Cu);
    ctx->pc = 0x208498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208494u;
    // 0x208498: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x208494u, 0x20849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20849Cu;
label_20849c:
    // 0x20849c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2084a0:
    // 0x2084a0: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x2084a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_2084a4:
    // 0x2084a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2084a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2084a8:
    // 0x2084a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2084a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2084ac:
    // 0x2084ac: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2084acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2084b0:
    // 0x2084b0: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x2084b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_2084b4:
    // 0x2084b4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2084b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2084b8:
    // 0x2084b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2084b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2084bc:
    // 0x2084bc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2084c0:
    if (ctx->pc == 0x2084C0u) {
        ctx->pc = 0x2084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084BCu;
        // 0x2084c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084C4u;
        goto label_2084c4;
    }
    ctx->pc = 0x2084BCu;
    {
        const bool branch_taken_0x2084bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2084C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084BCu;
        // 0x2084c0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2084bc) {
            ctx->pc = 0x2084E8u;
            goto label_2084e8;
        }
    }
    ctx->pc = 0x2084C4u;
label_2084c4:
    // 0x2084c4: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2084c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2084c8:
    // 0x2084c8: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x2084c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_2084cc:
    // 0x2084cc: 0x24c68c88  addiu       $a2, $a2, -0x7378
    ctx->pc = 0x2084ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937736));
label_2084d0:
    // 0x2084d0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x2084d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2084d4:
    // 0x2084d4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2084d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2084d8:
    // 0x2084d8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2084d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_2084dc:
    // 0x2084dc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x2084dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_2084e0:
    // 0x2084e0: 0x60f809  jalr        $v1
label_2084e4:
    if (ctx->pc == 0x2084E4u) {
        ctx->pc = 0x2084E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084E0u;
        // 0x2084e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084E8u;
        goto label_2084e8;
    }
    ctx->pc = 0x2084E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2084E8u);
        ctx->pc = 0x2084E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084E0u;
        // 0x2084e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2084E0u, 0x2084E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2084E8u;
label_2084e8:
    // 0x2084e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2084e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2084ec:
    // 0x2084ec: 0xc06a39e  jal         func_1A8E78
label_2084f0:
    if (ctx->pc == 0x2084F0u) {
        ctx->pc = 0x2084F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2084ECu;
        // 0x2084f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2084F4u;
        goto label_2084f4;
    }
    ctx->pc = 0x2084ECu;
    SET_GPR_U32(ctx, 31, 0x2084F4u);
    ctx->pc = 0x2084F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2084ECu;
    // 0x2084f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x2084ECu, 0x2084F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084F4u;
label_2084f4:
    // 0x2084f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2084f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2084f8:
    // 0x2084f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2084f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2084fc:
    // 0x2084fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2084fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_208500:
    // 0x208500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208504:
    // 0x208504: 0x3e00008  jr          $ra
label_208508:
    if (ctx->pc == 0x208508u) {
        ctx->pc = 0x208508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208504u;
        // 0x208508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20850Cu;
        goto label_20850c;
    }
    ctx->pc = 0x208504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208504u;
        // 0x208508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20850Cu;
label_20850c:
    // 0x20850c: 0x0  nop
    ctx->pc = 0x20850cu;
    // NOP
    ctx->pc = 0x208510u;
}
