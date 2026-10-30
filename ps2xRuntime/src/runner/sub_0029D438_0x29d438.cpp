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

// Function: sub_0029D438
// Address: 0x29d438 - 0x29d4f8
void sub_0029D438_0x29d438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D438_0x29d438");
#endif

    switch (ctx->pc) {
        case 0x29d438u: goto label_29d438;
        case 0x29d43cu: goto label_29d43c;
        case 0x29d440u: goto label_29d440;
        case 0x29d444u: goto label_29d444;
        case 0x29d448u: goto label_29d448;
        case 0x29d44cu: goto label_29d44c;
        case 0x29d450u: goto label_29d450;
        case 0x29d454u: goto label_29d454;
        case 0x29d458u: goto label_29d458;
        case 0x29d45cu: goto label_29d45c;
        case 0x29d460u: goto label_29d460;
        case 0x29d464u: goto label_29d464;
        case 0x29d468u: goto label_29d468;
        case 0x29d46cu: goto label_29d46c;
        case 0x29d470u: goto label_29d470;
        case 0x29d474u: goto label_29d474;
        case 0x29d478u: goto label_29d478;
        case 0x29d47cu: goto label_29d47c;
        case 0x29d480u: goto label_29d480;
        case 0x29d484u: goto label_29d484;
        case 0x29d488u: goto label_29d488;
        case 0x29d48cu: goto label_29d48c;
        case 0x29d490u: goto label_29d490;
        case 0x29d494u: goto label_29d494;
        case 0x29d498u: goto label_29d498;
        case 0x29d49cu: goto label_29d49c;
        case 0x29d4a0u: goto label_29d4a0;
        case 0x29d4a4u: goto label_29d4a4;
        case 0x29d4a8u: goto label_29d4a8;
        case 0x29d4acu: goto label_29d4ac;
        case 0x29d4b0u: goto label_29d4b0;
        case 0x29d4b4u: goto label_29d4b4;
        case 0x29d4b8u: goto label_29d4b8;
        case 0x29d4bcu: goto label_29d4bc;
        case 0x29d4c0u: goto label_29d4c0;
        case 0x29d4c4u: goto label_29d4c4;
        case 0x29d4c8u: goto label_29d4c8;
        case 0x29d4ccu: goto label_29d4cc;
        case 0x29d4d0u: goto label_29d4d0;
        case 0x29d4d4u: goto label_29d4d4;
        case 0x29d4d8u: goto label_29d4d8;
        case 0x29d4dcu: goto label_29d4dc;
        case 0x29d4e0u: goto label_29d4e0;
        case 0x29d4e4u: goto label_29d4e4;
        case 0x29d4e8u: goto label_29d4e8;
        case 0x29d4ecu: goto label_29d4ec;
        case 0x29d4f0u: goto label_29d4f0;
        case 0x29d4f4u: goto label_29d4f4;
        default: break;
    }

    ctx->pc = 0x29d438u;

label_29d438:
    // 0x29d438: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29d438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29d43c:
    // 0x29d43c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x29d43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_29d440:
    // 0x29d440: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x29d440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_29d444:
    // 0x29d444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d448:
    // 0x29d448: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29d448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29d44c:
    // 0x29d44c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29d44cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d450:
    // 0x29d450: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29d450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29d454:
    // 0x29d454: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x29d454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_29d458:
    // 0x29d458: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x29d458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_29d45c:
    // 0x29d45c: 0x40f809  jalr        $v0
label_29d460:
    if (ctx->pc == 0x29D460u) {
        ctx->pc = 0x29D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D45Cu;
        // 0x29d460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D464u;
        goto label_29d464;
    }
    ctx->pc = 0x29D45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D464u);
        ctx->pc = 0x29D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D45Cu;
        // 0x29d460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D45Cu, 0x29D464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D464u;
label_29d464:
    // 0x29d464: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x29d464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_29d468:
    // 0x29d468: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29d46c:
    // 0x29d46c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_29d470:
    if (ctx->pc == 0x29D470u) {
        ctx->pc = 0x29D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D46Cu;
        // 0x29d470: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D474u;
        goto label_29d474;
    }
    ctx->pc = 0x29D46Cu;
    {
        const bool branch_taken_0x29d46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D46Cu;
        // 0x29d470: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d46c) {
            ctx->pc = 0x29D4DCu;
            goto label_29d4dc;
        }
    }
    ctx->pc = 0x29D474u;
label_29d474:
    // 0x29d474: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29d478:
    // 0x29d478: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x29d478u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_29d47c:
    // 0x29d47c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x29d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_29d480:
    // 0x29d480: 0x60f809  jalr        $v1
label_29d484:
    if (ctx->pc == 0x29D484u) {
        ctx->pc = 0x29D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D480u;
        // 0x29d484: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D488u;
        goto label_29d488;
    }
    ctx->pc = 0x29D480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29D488u);
        ctx->pc = 0x29D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D480u;
        // 0x29d484: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D480u, 0x29D488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D488u;
label_29d488:
    // 0x29d488: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x29d488u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d48c:
    // 0x29d48c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29d48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d490:
    // 0x29d490: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x29d490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_29d494:
    // 0x29d494: 0xc0cdb38  jal         func_336CE0
label_29d498:
    if (ctx->pc == 0x29D498u) {
        ctx->pc = 0x29D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D494u;
        // 0x29d498: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D49Cu;
        goto label_29d49c;
    }
    ctx->pc = 0x29D494u;
    SET_GPR_U32(ctx, 31, 0x29D49Cu);
    ctx->pc = 0x29D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D494u;
    // 0x29d498: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29D494u, 0x29D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D49Cu;
label_29d49c:
    // 0x29d49c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x29d49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29d4a0:
    // 0x29d4a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x29d4a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_29d4a4:
    // 0x29d4a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d4a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29d4a8:
    // 0x29d4a8: 0x0  nop
    ctx->pc = 0x29d4a8u;
    // NOP
label_29d4ac:
    // 0x29d4ac: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_29d4b0:
    if (ctx->pc == 0x29D4B0u) {
        ctx->pc = 0x29D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4ACu;
        // 0x29d4b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4B4u;
        goto label_29d4b4;
    }
    ctx->pc = 0x29D4ACu;
    {
        const bool branch_taken_0x29d4ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4ACu;
        // 0x29d4b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4ac) {
            ctx->pc = 0x29D4DCu;
            goto label_29d4dc;
        }
    }
    ctx->pc = 0x29D4B4u;
label_29d4b4:
    // 0x29d4b4: 0xc0cdb38  jal         func_336CE0
label_29d4b8:
    if (ctx->pc == 0x29D4B8u) {
        ctx->pc = 0x29D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4B4u;
        // 0x29d4b8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4BCu;
        goto label_29d4bc;
    }
    ctx->pc = 0x29D4B4u;
    SET_GPR_U32(ctx, 31, 0x29D4BCu);
    ctx->pc = 0x29D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4B4u;
    // 0x29d4b8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29D4B4u, 0x29D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4BCu;
label_29d4bc:
    // 0x29d4bc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x29d4bcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_29d4c0:
    // 0x29d4c0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x29d4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d4c4:
    // 0x29d4c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29d4c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29d4c8:
    // 0x29d4c8: 0x0  nop
    ctx->pc = 0x29d4c8u;
    // NOP
label_29d4cc:
    // 0x29d4cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_29d4d0:
    if (ctx->pc == 0x29D4D0u) {
        ctx->pc = 0x29D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4CCu;
        // 0x29d4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4D4u;
        goto label_29d4d4;
    }
    ctx->pc = 0x29D4CCu;
    {
        const bool branch_taken_0x29d4cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4CCu;
        // 0x29d4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4cc) {
            ctx->pc = 0x29D4E0u;
            goto label_29d4e0;
        }
    }
    ctx->pc = 0x29D4D4u;
label_29d4d4:
    // 0x29d4d4: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x29d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
label_29d4d8:
    // 0x29d4d8: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x29d4d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_29d4dc:
    // 0x29d4dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d4e0:
    // 0x29d4e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x29d4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29d4e4:
    // 0x29d4e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x29d4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29d4e8:
    // 0x29d4e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29d4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29d4ec:
    // 0x29d4ec: 0x3e00008  jr          $ra
label_29d4f0:
    if (ctx->pc == 0x29D4F0u) {
        ctx->pc = 0x29D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4ECu;
        // 0x29d4f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4F4u;
        goto label_29d4f4;
    }
    ctx->pc = 0x29D4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4ECu;
        // 0x29d4f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D4F4u;
label_29d4f4:
    // 0x29d4f4: 0x0  nop
    ctx->pc = 0x29d4f4u;
    // NOP
    ctx->pc = 0x29d4f8u;
}
