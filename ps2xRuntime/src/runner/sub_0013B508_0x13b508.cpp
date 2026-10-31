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

// Function: sub_0013B508
// Address: 0x13b508 - 0x13b5d8
void sub_0013B508_0x13b508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B508_0x13b508");
#endif

    switch (ctx->pc) {
        case 0x13b508u: goto label_13b508;
        case 0x13b50cu: goto label_13b50c;
        case 0x13b510u: goto label_13b510;
        case 0x13b514u: goto label_13b514;
        case 0x13b518u: goto label_13b518;
        case 0x13b51cu: goto label_13b51c;
        case 0x13b520u: goto label_13b520;
        case 0x13b524u: goto label_13b524;
        case 0x13b528u: goto label_13b528;
        case 0x13b52cu: goto label_13b52c;
        case 0x13b530u: goto label_13b530;
        case 0x13b534u: goto label_13b534;
        case 0x13b538u: goto label_13b538;
        case 0x13b53cu: goto label_13b53c;
        case 0x13b540u: goto label_13b540;
        case 0x13b544u: goto label_13b544;
        case 0x13b548u: goto label_13b548;
        case 0x13b54cu: goto label_13b54c;
        case 0x13b550u: goto label_13b550;
        case 0x13b554u: goto label_13b554;
        case 0x13b558u: goto label_13b558;
        case 0x13b55cu: goto label_13b55c;
        case 0x13b560u: goto label_13b560;
        case 0x13b564u: goto label_13b564;
        case 0x13b568u: goto label_13b568;
        case 0x13b56cu: goto label_13b56c;
        case 0x13b570u: goto label_13b570;
        case 0x13b574u: goto label_13b574;
        case 0x13b578u: goto label_13b578;
        case 0x13b57cu: goto label_13b57c;
        case 0x13b580u: goto label_13b580;
        case 0x13b584u: goto label_13b584;
        case 0x13b588u: goto label_13b588;
        case 0x13b58cu: goto label_13b58c;
        case 0x13b590u: goto label_13b590;
        case 0x13b594u: goto label_13b594;
        case 0x13b598u: goto label_13b598;
        case 0x13b59cu: goto label_13b59c;
        case 0x13b5a0u: goto label_13b5a0;
        case 0x13b5a4u: goto label_13b5a4;
        case 0x13b5a8u: goto label_13b5a8;
        case 0x13b5acu: goto label_13b5ac;
        case 0x13b5b0u: goto label_13b5b0;
        case 0x13b5b4u: goto label_13b5b4;
        case 0x13b5b8u: goto label_13b5b8;
        case 0x13b5bcu: goto label_13b5bc;
        case 0x13b5c0u: goto label_13b5c0;
        case 0x13b5c4u: goto label_13b5c4;
        case 0x13b5c8u: goto label_13b5c8;
        case 0x13b5ccu: goto label_13b5cc;
        case 0x13b5d0u: goto label_13b5d0;
        case 0x13b5d4u: goto label_13b5d4;
        default: break;
    }

    ctx->pc = 0x13b508u;

label_13b508:
    // 0x13b508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13b50c:
    // 0x13b50c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13b50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_13b510:
    // 0x13b510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13b514:
    // 0x13b514: 0xc04edee  jal         func_13B7B8
label_13b518:
    if (ctx->pc == 0x13B518u) {
        ctx->pc = 0x13B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B514u;
        // 0x13b518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B51Cu;
        goto label_13b51c;
    }
    ctx->pc = 0x13B514u;
    SET_GPR_U32(ctx, 31, 0x13B51Cu);
    ctx->pc = 0x13B518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B514u;
    // 0x13b518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B7B8u, 0x13B514u, 0x13B51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B51Cu;
label_13b51c:
    // 0x13b51c: 0x26050340  addiu       $a1, $s0, 0x340
    ctx->pc = 0x13b51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_13b520:
    // 0x13b520: 0xc04eeb4  jal         func_13BAD0
label_13b524:
    if (ctx->pc == 0x13B524u) {
        ctx->pc = 0x13B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B520u;
        // 0x13b524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B528u;
        goto label_13b528;
    }
    ctx->pc = 0x13B520u;
    SET_GPR_U32(ctx, 31, 0x13B528u);
    ctx->pc = 0x13B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B520u;
    // 0x13b524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BAD0u, 0x13B520u, 0x13B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B528u;
label_13b528:
    // 0x13b528: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x13b528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_13b52c:
    // 0x13b52c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x13b52cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_13b530:
    // 0x13b530: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13b530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13b534:
    // 0x13b534: 0xc04828c  jal         func_120A30
label_13b538:
    if (ctx->pc == 0x13B538u) {
        ctx->pc = 0x13B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B534u;
        // 0x13b538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B53Cu;
        goto label_13b53c;
    }
    ctx->pc = 0x13B534u;
    SET_GPR_U32(ctx, 31, 0x13B53Cu);
    ctx->pc = 0x13B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B534u;
    // 0x13b538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x13B534u, 0x13B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B53Cu;
label_13b53c:
    // 0x13b53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b540:
    // 0x13b540: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13b540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b544:
    // 0x13b544: 0xa20203e7  sb          $v0, 0x3E7($s0)
    ctx->pc = 0x13b544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 999), (uint8_t)GPR_U32(ctx, 2));
label_13b548:
    // 0x13b548: 0xc60c0374  lwc1        $f12, 0x374($s0)
    ctx->pc = 0x13b548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_13b54c:
    // 0x13b54c: 0x84640190  lh          $a0, 0x190($v1)
    ctx->pc = 0x13b54cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 400)));
label_13b550:
    // 0x13b550: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x13b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
label_13b554:
    // 0x13b554: 0x40f809  jalr        $v0
label_13b558:
    if (ctx->pc == 0x13B558u) {
        ctx->pc = 0x13B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B554u;
        // 0x13b558: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B55Cu;
        goto label_13b55c;
    }
    ctx->pc = 0x13B554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B55Cu);
        ctx->pc = 0x13B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B554u;
        // 0x13b558: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B554u, 0x13B55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B55Cu;
label_13b55c:
    // 0x13b55c: 0xc6000370  lwc1        $f0, 0x370($s0)
    ctx->pc = 0x13b55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13b560:
    // 0x13b560: 0xc601037c  lwc1        $f1, 0x37C($s0)
    ctx->pc = 0x13b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13b564:
    // 0x13b564: 0xc6020378  lwc1        $f2, 0x378($s0)
    ctx->pc = 0x13b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13b568:
    // 0x13b568: 0xc6030380  lwc1        $f3, 0x380($s0)
    ctx->pc = 0x13b568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13b56c:
    // 0x13b56c: 0xc6040384  lwc1        $f4, 0x384($s0)
    ctx->pc = 0x13b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13b570:
    // 0x13b570: 0xc6050388  lwc1        $f5, 0x388($s0)
    ctx->pc = 0x13b570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_13b574:
    // 0x13b574: 0xc6060394  lwc1        $f6, 0x394($s0)
    ctx->pc = 0x13b574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_13b578:
    // 0x13b578: 0xe600035c  swc1        $f0, 0x35C($s0)
    ctx->pc = 0x13b578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 860), bits); }
label_13b57c:
    // 0x13b57c: 0xe6010358  swc1        $f1, 0x358($s0)
    ctx->pc = 0x13b57cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
label_13b580:
    // 0x13b580: 0xe60203c8  swc1        $f2, 0x3C8($s0)
    ctx->pc = 0x13b580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 968), bits); }
label_13b584:
    // 0x13b584: 0xe6030360  swc1        $f3, 0x360($s0)
    ctx->pc = 0x13b584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 864), bits); }
label_13b588:
    // 0x13b588: 0xe6040364  swc1        $f4, 0x364($s0)
    ctx->pc = 0x13b588u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 868), bits); }
label_13b58c:
    // 0x13b58c: 0xe6050368  swc1        $f5, 0x368($s0)
    ctx->pc = 0x13b58cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 872), bits); }
label_13b590:
    // 0x13b590: 0xe606036c  swc1        $f6, 0x36C($s0)
    ctx->pc = 0x13b590u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 876), bits); }
label_13b594:
    // 0x13b594: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13b594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b598:
    // 0x13b598: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x13b598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
label_13b59c:
    // 0x13b59c: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x13b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
label_13b5a0:
    // 0x13b5a0: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x13b5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
label_13b5a4:
    // 0x13b5a4: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x13b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
label_13b5a8:
    // 0x13b5a8: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x13b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
label_13b5ac:
    // 0x13b5ac: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x13b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
label_13b5b0:
    // 0x13b5b0: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x13b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
label_13b5b4:
    // 0x13b5b4: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x13b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
label_13b5b8:
    // 0x13b5b8: 0x84440138  lh          $a0, 0x138($v0)
    ctx->pc = 0x13b5b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 312)));
label_13b5bc:
    // 0x13b5bc: 0x8c43013c  lw          $v1, 0x13C($v0)
    ctx->pc = 0x13b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_13b5c0:
    // 0x13b5c0: 0x60f809  jalr        $v1
label_13b5c4:
    if (ctx->pc == 0x13B5C4u) {
        ctx->pc = 0x13B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5C0u;
        // 0x13b5c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B5C8u;
        goto label_13b5c8;
    }
    ctx->pc = 0x13B5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13B5C8u);
        ctx->pc = 0x13B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5C0u;
        // 0x13b5c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B5C0u, 0x13B5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B5C8u;
label_13b5c8:
    // 0x13b5c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13b5cc:
    // 0x13b5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b5d0:
    // 0x13b5d0: 0x3e00008  jr          $ra
label_13b5d4:
    if (ctx->pc == 0x13B5D4u) {
        ctx->pc = 0x13B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5D0u;
        // 0x13b5d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B5D8u;
        goto label_fallthrough_0x13b5d0;
    }
    ctx->pc = 0x13B5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5D0u;
        // 0x13b5d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13b5d0:
    ctx->pc = 0x13B5D8u;
}
