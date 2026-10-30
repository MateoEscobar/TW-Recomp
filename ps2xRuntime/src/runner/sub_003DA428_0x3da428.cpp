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

// Function: sub_003DA428
// Address: 0x3da428 - 0x3da4f0
void sub_003DA428_0x3da428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA428_0x3da428");
#endif

    switch (ctx->pc) {
        case 0x3da428u: goto label_3da428;
        case 0x3da42cu: goto label_3da42c;
        case 0x3da430u: goto label_3da430;
        case 0x3da434u: goto label_3da434;
        case 0x3da438u: goto label_3da438;
        case 0x3da43cu: goto label_3da43c;
        case 0x3da440u: goto label_3da440;
        case 0x3da444u: goto label_3da444;
        case 0x3da448u: goto label_3da448;
        case 0x3da44cu: goto label_3da44c;
        case 0x3da450u: goto label_3da450;
        case 0x3da454u: goto label_3da454;
        case 0x3da458u: goto label_3da458;
        case 0x3da45cu: goto label_3da45c;
        case 0x3da460u: goto label_3da460;
        case 0x3da464u: goto label_3da464;
        case 0x3da468u: goto label_3da468;
        case 0x3da46cu: goto label_3da46c;
        case 0x3da470u: goto label_3da470;
        case 0x3da474u: goto label_3da474;
        case 0x3da478u: goto label_3da478;
        case 0x3da47cu: goto label_3da47c;
        case 0x3da480u: goto label_3da480;
        case 0x3da484u: goto label_3da484;
        case 0x3da488u: goto label_3da488;
        case 0x3da48cu: goto label_3da48c;
        case 0x3da490u: goto label_3da490;
        case 0x3da494u: goto label_3da494;
        case 0x3da498u: goto label_3da498;
        case 0x3da49cu: goto label_3da49c;
        case 0x3da4a0u: goto label_3da4a0;
        case 0x3da4a4u: goto label_3da4a4;
        case 0x3da4a8u: goto label_3da4a8;
        case 0x3da4acu: goto label_3da4ac;
        case 0x3da4b0u: goto label_3da4b0;
        case 0x3da4b4u: goto label_3da4b4;
        case 0x3da4b8u: goto label_3da4b8;
        case 0x3da4bcu: goto label_3da4bc;
        case 0x3da4c0u: goto label_3da4c0;
        case 0x3da4c4u: goto label_3da4c4;
        case 0x3da4c8u: goto label_3da4c8;
        case 0x3da4ccu: goto label_3da4cc;
        case 0x3da4d0u: goto label_3da4d0;
        case 0x3da4d4u: goto label_3da4d4;
        case 0x3da4d8u: goto label_3da4d8;
        case 0x3da4dcu: goto label_3da4dc;
        case 0x3da4e0u: goto label_3da4e0;
        case 0x3da4e4u: goto label_3da4e4;
        case 0x3da4e8u: goto label_3da4e8;
        case 0x3da4ecu: goto label_3da4ec;
        default: break;
    }

    ctx->pc = 0x3da428u;

label_3da428:
    // 0x3da428: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3da428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3da42c:
    // 0x3da42c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3da42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3da430:
    // 0x3da430: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3da430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3da434:
    // 0x3da434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3da438:
    // 0x3da438: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3da438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3da43c:
    // 0x3da43c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3da43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3da440:
    // 0x3da440: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3da440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3da444:
    // 0x3da444: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3da444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3da448:
    // 0x3da448: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3da448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3da44c:
    // 0x3da44c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3da44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3da450:
    // 0x3da450: 0x40f809  jalr        $v0
label_3da454:
    if (ctx->pc == 0x3DA454u) {
        ctx->pc = 0x3DA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA450u;
        // 0x3da454: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA458u;
        goto label_3da458;
    }
    ctx->pc = 0x3DA450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DA458u);
        ctx->pc = 0x3DA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA450u;
        // 0x3da454: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA450u, 0x3DA458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DA458u;
label_3da458:
    // 0x3da458: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3da458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3da45c:
    // 0x3da45c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3da45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3da460:
    // 0x3da460: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3da460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3da464:
    // 0x3da464: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3da464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3da468:
    // 0x3da468: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3da468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3da46c:
    // 0x3da46c: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3da46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3da470:
    // 0x3da470: 0xc0ea14c  jal         func_3A8530
label_3da474:
    if (ctx->pc == 0x3DA474u) {
        ctx->pc = 0x3DA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA470u;
        // 0x3da474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA478u;
        goto label_3da478;
    }
    ctx->pc = 0x3DA470u;
    SET_GPR_U32(ctx, 31, 0x3DA478u);
    ctx->pc = 0x3DA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA470u;
    // 0x3da474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DA470u, 0x3DA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA478u;
label_3da478:
    // 0x3da478: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da47c:
    // 0x3da47c: 0xc0ea12a  jal         func_3A84A8
label_3da480:
    if (ctx->pc == 0x3DA480u) {
        ctx->pc = 0x3DA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA47Cu;
        // 0x3da480: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA484u;
        goto label_3da484;
    }
    ctx->pc = 0x3DA47Cu;
    SET_GPR_U32(ctx, 31, 0x3DA484u);
    ctx->pc = 0x3DA480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA47Cu;
    // 0x3da480: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA47Cu, 0x3DA484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA484u;
label_3da484:
    // 0x3da484: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3da484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da488:
    // 0x3da488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3da488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3da48c:
    // 0x3da48c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3da48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3da490:
    // 0x3da490: 0xc0ea12a  jal         func_3A84A8
label_3da494:
    if (ctx->pc == 0x3DA494u) {
        ctx->pc = 0x3DA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA490u;
        // 0x3da494: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA498u;
        goto label_3da498;
    }
    ctx->pc = 0x3DA490u;
    SET_GPR_U32(ctx, 31, 0x3DA498u);
    ctx->pc = 0x3DA494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA490u;
    // 0x3da494: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DA490u, 0x3DA498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA498u;
label_3da498:
    // 0x3da498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3da498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3da49c:
    // 0x3da49c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x3da49cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3da4a0:
    // 0x3da4a0: 0x24422ea0  addiu       $v0, $v0, 0x2EA0
    ctx->pc = 0x3da4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11936));
label_3da4a4:
    // 0x3da4a4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3da4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3da4a8:
    // 0x3da4a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3da4a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3da4ac:
    // 0x3da4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3da4b0:
    // 0x3da4b0: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x3da4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_3da4b4:
    // 0x3da4b4: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3da4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3da4b8:
    // 0x3da4b8: 0xc0e858c  jal         func_3A1630
label_3da4bc:
    if (ctx->pc == 0x3DA4BCu) {
        ctx->pc = 0x3DA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA4B8u;
        // 0x3da4bc: 0x8cc545b0  lw          $a1, 0x45B0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17840)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA4C0u;
        goto label_3da4c0;
    }
    ctx->pc = 0x3DA4B8u;
    SET_GPR_U32(ctx, 31, 0x3DA4C0u);
    ctx->pc = 0x3DA4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA4B8u;
    // 0x3da4bc: 0x8cc545b0  lw          $a1, 0x45B0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 17840)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DA4B8u, 0x3DA4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA4C0u;
label_3da4c0:
    // 0x3da4c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3da4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3da4c4:
    // 0x3da4c4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x3da4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_3da4c8:
    // 0x3da4c8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3da4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3da4cc:
    // 0x3da4cc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3da4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3da4d0:
    // 0x3da4d0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3da4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3da4d4:
    // 0x3da4d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3da4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3da4d8:
    // 0x3da4d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3da4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3da4dc:
    // 0x3da4dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3da4dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3da4e0:
    // 0x3da4e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3da4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3da4e4:
    // 0x3da4e4: 0x3e00008  jr          $ra
label_3da4e8:
    if (ctx->pc == 0x3DA4E8u) {
        ctx->pc = 0x3DA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA4E4u;
        // 0x3da4e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DA4ECu;
        goto label_3da4ec;
    }
    ctx->pc = 0x3DA4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA4E4u;
        // 0x3da4e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA4ECu;
label_3da4ec:
    // 0x3da4ec: 0x0  nop
    ctx->pc = 0x3da4ecu;
    // NOP
    ctx->pc = 0x3da4f0u;
}
