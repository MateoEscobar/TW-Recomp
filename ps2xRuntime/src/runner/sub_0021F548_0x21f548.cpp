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

// Function: sub_0021F548
// Address: 0x21f548 - 0x21f700
void sub_0021F548_0x21f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F548_0x21f548");
#endif

    switch (ctx->pc) {
        case 0x21f548u: goto label_21f548;
        case 0x21f54cu: goto label_21f54c;
        case 0x21f550u: goto label_21f550;
        case 0x21f554u: goto label_21f554;
        case 0x21f558u: goto label_21f558;
        case 0x21f55cu: goto label_21f55c;
        case 0x21f560u: goto label_21f560;
        case 0x21f564u: goto label_21f564;
        case 0x21f568u: goto label_21f568;
        case 0x21f56cu: goto label_21f56c;
        case 0x21f570u: goto label_21f570;
        case 0x21f574u: goto label_21f574;
        case 0x21f578u: goto label_21f578;
        case 0x21f57cu: goto label_21f57c;
        case 0x21f580u: goto label_21f580;
        case 0x21f584u: goto label_21f584;
        case 0x21f588u: goto label_21f588;
        case 0x21f58cu: goto label_21f58c;
        case 0x21f590u: goto label_21f590;
        case 0x21f594u: goto label_21f594;
        case 0x21f598u: goto label_21f598;
        case 0x21f59cu: goto label_21f59c;
        case 0x21f5a0u: goto label_21f5a0;
        case 0x21f5a4u: goto label_21f5a4;
        case 0x21f5a8u: goto label_21f5a8;
        case 0x21f5acu: goto label_21f5ac;
        case 0x21f5b0u: goto label_21f5b0;
        case 0x21f5b4u: goto label_21f5b4;
        case 0x21f5b8u: goto label_21f5b8;
        case 0x21f5bcu: goto label_21f5bc;
        case 0x21f5c0u: goto label_21f5c0;
        case 0x21f5c4u: goto label_21f5c4;
        case 0x21f5c8u: goto label_21f5c8;
        case 0x21f5ccu: goto label_21f5cc;
        case 0x21f5d0u: goto label_21f5d0;
        case 0x21f5d4u: goto label_21f5d4;
        case 0x21f5d8u: goto label_21f5d8;
        case 0x21f5dcu: goto label_21f5dc;
        case 0x21f5e0u: goto label_21f5e0;
        case 0x21f5e4u: goto label_21f5e4;
        case 0x21f5e8u: goto label_21f5e8;
        case 0x21f5ecu: goto label_21f5ec;
        case 0x21f5f0u: goto label_21f5f0;
        case 0x21f5f4u: goto label_21f5f4;
        case 0x21f5f8u: goto label_21f5f8;
        case 0x21f5fcu: goto label_21f5fc;
        case 0x21f600u: goto label_21f600;
        case 0x21f604u: goto label_21f604;
        case 0x21f608u: goto label_21f608;
        case 0x21f60cu: goto label_21f60c;
        case 0x21f610u: goto label_21f610;
        case 0x21f614u: goto label_21f614;
        case 0x21f618u: goto label_21f618;
        case 0x21f61cu: goto label_21f61c;
        case 0x21f620u: goto label_21f620;
        case 0x21f624u: goto label_21f624;
        case 0x21f628u: goto label_21f628;
        case 0x21f62cu: goto label_21f62c;
        case 0x21f630u: goto label_21f630;
        case 0x21f634u: goto label_21f634;
        case 0x21f638u: goto label_21f638;
        case 0x21f63cu: goto label_21f63c;
        case 0x21f640u: goto label_21f640;
        case 0x21f644u: goto label_21f644;
        case 0x21f648u: goto label_21f648;
        case 0x21f64cu: goto label_21f64c;
        case 0x21f650u: goto label_21f650;
        case 0x21f654u: goto label_21f654;
        case 0x21f658u: goto label_21f658;
        case 0x21f65cu: goto label_21f65c;
        case 0x21f660u: goto label_21f660;
        case 0x21f664u: goto label_21f664;
        case 0x21f668u: goto label_21f668;
        case 0x21f66cu: goto label_21f66c;
        case 0x21f670u: goto label_21f670;
        case 0x21f674u: goto label_21f674;
        case 0x21f678u: goto label_21f678;
        case 0x21f67cu: goto label_21f67c;
        case 0x21f680u: goto label_21f680;
        case 0x21f684u: goto label_21f684;
        case 0x21f688u: goto label_21f688;
        case 0x21f68cu: goto label_21f68c;
        case 0x21f690u: goto label_21f690;
        case 0x21f694u: goto label_21f694;
        case 0x21f698u: goto label_21f698;
        case 0x21f69cu: goto label_21f69c;
        case 0x21f6a0u: goto label_21f6a0;
        case 0x21f6a4u: goto label_21f6a4;
        case 0x21f6a8u: goto label_21f6a8;
        case 0x21f6acu: goto label_21f6ac;
        case 0x21f6b0u: goto label_21f6b0;
        case 0x21f6b4u: goto label_21f6b4;
        case 0x21f6b8u: goto label_21f6b8;
        case 0x21f6bcu: goto label_21f6bc;
        case 0x21f6c0u: goto label_21f6c0;
        case 0x21f6c4u: goto label_21f6c4;
        case 0x21f6c8u: goto label_21f6c8;
        case 0x21f6ccu: goto label_21f6cc;
        case 0x21f6d0u: goto label_21f6d0;
        case 0x21f6d4u: goto label_21f6d4;
        case 0x21f6d8u: goto label_21f6d8;
        case 0x21f6dcu: goto label_21f6dc;
        case 0x21f6e0u: goto label_21f6e0;
        case 0x21f6e4u: goto label_21f6e4;
        case 0x21f6e8u: goto label_21f6e8;
        case 0x21f6ecu: goto label_21f6ec;
        case 0x21f6f0u: goto label_21f6f0;
        case 0x21f6f4u: goto label_21f6f4;
        case 0x21f6f8u: goto label_21f6f8;
        case 0x21f6fcu: goto label_21f6fc;
        default: break;
    }

    ctx->pc = 0x21f548u;

label_21f548:
    // 0x21f548: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_21f54c:
    // 0x21f54c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x21f54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_21f550:
    // 0x21f550: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x21f550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_21f554:
    // 0x21f554: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21f554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_21f558:
    // 0x21f558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21f55c:
    // 0x21f55c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x21f55cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_21f560:
    // 0x21f560: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x21f560u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_21f564:
    // 0x21f564: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x21f564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_21f568:
    // 0x21f568: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21f56c:
    // 0x21f56c: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x21f56cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_21f570:
    // 0x21f570: 0x8e23aa84  lw          $v1, -0x557C($s1)
    ctx->pc = 0x21f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_21f574:
    // 0x21f574: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x21f574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_21f578:
    // 0x21f578: 0x246401e0  addiu       $a0, $v1, 0x1E0
    ctx->pc = 0x21f578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
label_21f57c:
    // 0x21f57c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x21f57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21f580:
    // 0x21f580: 0xc045200  jal         func_114800
label_21f584:
    if (ctx->pc == 0x21F584u) {
        ctx->pc = 0x21F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F580u;
        // 0x21f584: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F588u;
        goto label_21f588;
    }
    ctx->pc = 0x21F580u;
    SET_GPR_U32(ctx, 31, 0x21F588u);
    ctx->pc = 0x21F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F580u;
    // 0x21f584: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x21F580u, 0x21F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F588u;
label_21f588:
    // 0x21f588: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21f588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21f58c:
    // 0x21f58c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x21f58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_21f590:
    // 0x21f590: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x21f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_21f594:
    // 0x21f594: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x21f594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_21f598:
    // 0x21f598: 0xc044594  jal         func_111650
label_21f59c:
    if (ctx->pc == 0x21F59Cu) {
        ctx->pc = 0x21F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F598u;
        // 0x21f59c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5A0u;
        goto label_21f5a0;
    }
    ctx->pc = 0x21F598u;
    SET_GPR_U32(ctx, 31, 0x21F5A0u);
    ctx->pc = 0x21F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F598u;
    // 0x21f59c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111650u, 0x21F598u, 0x21F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5A0u;
label_21f5a0:
    // 0x21f5a0: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x21f5a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_21f5a4:
    // 0x21f5a4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f5a4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21f5a8:
    // 0x21f5a8: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
label_21f5ac:
    if (ctx->pc == 0x21F5ACu) {
        ctx->pc = 0x21F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5A8u;
        // 0x21f5ac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5B0u;
        goto label_21f5b0;
    }
    ctx->pc = 0x21F5A8u;
    {
        const bool branch_taken_0x21f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f5a8) {
            ctx->pc = 0x21F5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F5A8u;
            // 0x21f5ac: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F698u;
            goto label_21f698;
        }
    }
    ctx->pc = 0x21F5B0u;
label_21f5b0:
    // 0x21f5b0: 0xc0878ea  jal         func_21E3A8
label_21f5b4:
    if (ctx->pc == 0x21F5B4u) {
        ctx->pc = 0x21F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5B0u;
        // 0x21f5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5B8u;
        goto label_21f5b8;
    }
    ctx->pc = 0x21F5B0u;
    SET_GPR_U32(ctx, 31, 0x21F5B8u);
    ctx->pc = 0x21F5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5B0u;
    // 0x21f5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3A8u, 0x21F5B0u, 0x21F5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5B8u;
label_21f5b8:
    // 0x21f5b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21f5bc:
    // 0x21f5bc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x21f5bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_21f5c0:
    // 0x21f5c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21f5c4:
    // 0x21f5c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21f5c8:
    // 0x21f5c8: 0x40f809  jalr        $v0
label_21f5cc:
    if (ctx->pc == 0x21F5CCu) {
        ctx->pc = 0x21F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5C8u;
        // 0x21f5cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F5D0u;
        goto label_21f5d0;
    }
    ctx->pc = 0x21F5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F5D0u);
        ctx->pc = 0x21F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5C8u;
        // 0x21f5cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F5C8u, 0x21F5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F5D0u;
label_21f5d0:
    // 0x21f5d0: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x21f5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21f5d4:
    // 0x21f5d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21f5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f5d8:
    // 0x21f5d8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x21f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21f5dc:
    // 0x21f5dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21f5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21f5e0:
    // 0x21f5e0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x21f5e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_21f5e4:
    // 0x21f5e4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x21f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_21f5e8:
    // 0x21f5e8: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x21f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_21f5ec:
    // 0x21f5ec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x21f5ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_21f5f0:
    // 0x21f5f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21f5f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f5f4:
    // 0x21f5f4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x21f5f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_21f5f8:
    // 0x21f5f8: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x21f5f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
label_21f5fc:
    // 0x21f5fc: 0xc043fa4  jal         func_10FE90
label_21f600:
    if (ctx->pc == 0x21F600u) {
        ctx->pc = 0x21F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5FCu;
        // 0x21f600: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F604u;
        goto label_21f604;
    }
    ctx->pc = 0x21F5FCu;
    SET_GPR_U32(ctx, 31, 0x21F604u);
    ctx->pc = 0x21F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5FCu;
    // 0x21f600: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE90u, 0x21F5FCu, 0x21F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F604u;
label_21f604:
    // 0x21f604: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x21f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21f608:
    // 0x21f608: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21f608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f60c:
    // 0x21f60c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x21f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21f610:
    // 0x21f610: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x21f610u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_21f614:
    // 0x21f614: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x21f614u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_21f618:
    // 0x21f618: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x21f618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_21f61c:
    // 0x21f61c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x21f61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_21f620:
    // 0x21f620: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21f620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f624:
    // 0x21f624: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x21f624u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_21f628:
    // 0x21f628: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21f628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21f62c:
    // 0x21f62c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x21f62cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
label_21f630:
    // 0x21f630: 0xc043f74  jal         func_10FDD0
label_21f634:
    if (ctx->pc == 0x21F634u) {
        ctx->pc = 0x21F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F630u;
        // 0x21f634: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F638u;
        goto label_21f638;
    }
    ctx->pc = 0x21F630u;
    SET_GPR_U32(ctx, 31, 0x21F638u);
    ctx->pc = 0x21F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F630u;
    // 0x21f634: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x21F630u, 0x21F638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F638u;
label_21f638:
    // 0x21f638: 0xc08cf14  jal         func_233C50
label_21f63c:
    if (ctx->pc == 0x21F63Cu) {
        ctx->pc = 0x21F640u;
        goto label_21f640;
    }
    ctx->pc = 0x21F638u;
    SET_GPR_U32(ctx, 31, 0x21F640u);
    ctx->pc = 0x233C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C50u, 0x21F638u, 0x21F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F640u;
label_21f640:
    // 0x21f640: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_21f644:
    if (ctx->pc == 0x21F644u) {
        ctx->pc = 0x21F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F640u;
        // 0x21f644: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F648u;
        goto label_21f648;
    }
    ctx->pc = 0x21F640u;
    {
        const bool branch_taken_0x21f640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F640u;
        // 0x21f644: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f640) {
            ctx->pc = 0x21F6DCu;
            goto label_21f6dc;
        }
    }
    ctx->pc = 0x21F648u;
label_21f648:
    // 0x21f648: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21f648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21f64c:
    // 0x21f64c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21f64cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21f650:
    // 0x21f650: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21f654:
    // 0x21f654: 0x40f809  jalr        $v0
label_21f658:
    if (ctx->pc == 0x21F658u) {
        ctx->pc = 0x21F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F654u;
        // 0x21f658: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F65Cu;
        goto label_21f65c;
    }
    ctx->pc = 0x21F654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F65Cu);
        ctx->pc = 0x21F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F654u;
        // 0x21f658: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F654u, 0x21F65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F65Cu;
label_21f65c:
    // 0x21f65c: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x21f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21f660:
    // 0x21f660: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x21f660u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_21f664:
    // 0x21f664: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x21f664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21f668:
    // 0x21f668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21f668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21f66c:
    // 0x21f66c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x21f66cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_21f670:
    // 0x21f670: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x21f670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_21f674:
    // 0x21f674: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x21f674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_21f678:
    // 0x21f678: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21f678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f67c:
    // 0x21f67c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21f67cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f680:
    // 0x21f680: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x21f680u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_21f684:
    // 0x21f684: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x21f684u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
label_21f688:
    // 0x21f688: 0xc043fa4  jal         func_10FE90
label_21f68c:
    if (ctx->pc == 0x21F68Cu) {
        ctx->pc = 0x21F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F688u;
        // 0x21f68c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F690u;
        goto label_21f690;
    }
    ctx->pc = 0x21F688u;
    SET_GPR_U32(ctx, 31, 0x21F690u);
    ctx->pc = 0x21F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F688u;
    // 0x21f68c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE90u, 0x21F688u, 0x21F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F690u;
label_21f690:
    // 0x21f690: 0x10000012  b           . + 4 + (0x12 << 2)
label_21f694:
    if (ctx->pc == 0x21F694u) {
        ctx->pc = 0x21F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F690u;
        // 0x21f694: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F698u;
        goto label_21f698;
    }
    ctx->pc = 0x21F690u;
    {
        const bool branch_taken_0x21f690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F690u;
        // 0x21f694: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f690) {
            ctx->pc = 0x21F6DCu;
            goto label_21f6dc;
        }
    }
    ctx->pc = 0x21F698u;
label_21f698:
    // 0x21f698: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21f698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21f69c:
    // 0x21f69c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21f6a0:
    // 0x21f6a0: 0x40f809  jalr        $v0
label_21f6a4:
    if (ctx->pc == 0x21F6A4u) {
        ctx->pc = 0x21F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6A0u;
        // 0x21f6a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F6A8u;
        goto label_21f6a8;
    }
    ctx->pc = 0x21F6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21F6A8u);
        ctx->pc = 0x21F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6A0u;
        // 0x21f6a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F6A0u, 0x21F6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21F6A8u;
label_21f6a8:
    // 0x21f6a8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x21f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21f6ac:
    // 0x21f6ac: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x21f6acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_21f6b0:
    // 0x21f6b0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x21f6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21f6b4:
    // 0x21f6b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21f6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21f6b8:
    // 0x21f6b8: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x21f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
label_21f6bc:
    // 0x21f6bc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21f6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21f6c0:
    // 0x21f6c0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x21f6c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_21f6c4:
    // 0x21f6c4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x21f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_21f6c8:
    // 0x21f6c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21f6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f6cc:
    // 0x21f6cc: 0xc043fa4  jal         func_10FE90
label_21f6d0:
    if (ctx->pc == 0x21F6D0u) {
        ctx->pc = 0x21F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6CCu;
        // 0x21f6d0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F6D4u;
        goto label_21f6d4;
    }
    ctx->pc = 0x21F6CCu;
    SET_GPR_U32(ctx, 31, 0x21F6D4u);
    ctx->pc = 0x21F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6CCu;
    // 0x21f6d0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE90u, 0x21F6CCu, 0x21F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6D4u;
label_21f6d4:
    // 0x21f6d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21f6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21f6d8:
    // 0x21f6d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21f6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21f6dc:
    // 0x21f6dc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21f6dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21f6e0:
    // 0x21f6e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21f6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21f6e4:
    // 0x21f6e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x21f6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21f6e8:
    // 0x21f6e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21f6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21f6ec:
    // 0x21f6ec: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x21f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21f6f0:
    // 0x21f6f0: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x21f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21f6f4:
    // 0x21f6f4: 0x3e00008  jr          $ra
label_21f6f8:
    if (ctx->pc == 0x21F6F8u) {
        ctx->pc = 0x21F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6F4u;
        // 0x21f6f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21F6FCu;
        goto label_21f6fc;
    }
    ctx->pc = 0x21F6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6F4u;
        // 0x21f6f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F6FCu;
label_21f6fc:
    // 0x21f6fc: 0x0  nop
    ctx->pc = 0x21f6fcu;
    // NOP
    ctx->pc = 0x21f700u;
}
