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

// Function: sub_00125888
// Address: 0x125888 - 0x1259e8
void sub_00125888_0x125888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125888_0x125888");
#endif

    switch (ctx->pc) {
        case 0x125888u: goto label_125888;
        case 0x12588cu: goto label_12588c;
        case 0x125890u: goto label_125890;
        case 0x125894u: goto label_125894;
        case 0x125898u: goto label_125898;
        case 0x12589cu: goto label_12589c;
        case 0x1258a0u: goto label_1258a0;
        case 0x1258a4u: goto label_1258a4;
        case 0x1258a8u: goto label_1258a8;
        case 0x1258acu: goto label_1258ac;
        case 0x1258b0u: goto label_1258b0;
        case 0x1258b4u: goto label_1258b4;
        case 0x1258b8u: goto label_1258b8;
        case 0x1258bcu: goto label_1258bc;
        case 0x1258c0u: goto label_1258c0;
        case 0x1258c4u: goto label_1258c4;
        case 0x1258c8u: goto label_1258c8;
        case 0x1258ccu: goto label_1258cc;
        case 0x1258d0u: goto label_1258d0;
        case 0x1258d4u: goto label_1258d4;
        case 0x1258d8u: goto label_1258d8;
        case 0x1258dcu: goto label_1258dc;
        case 0x1258e0u: goto label_1258e0;
        case 0x1258e4u: goto label_1258e4;
        case 0x1258e8u: goto label_1258e8;
        case 0x1258ecu: goto label_1258ec;
        case 0x1258f0u: goto label_1258f0;
        case 0x1258f4u: goto label_1258f4;
        case 0x1258f8u: goto label_1258f8;
        case 0x1258fcu: goto label_1258fc;
        case 0x125900u: goto label_125900;
        case 0x125904u: goto label_125904;
        case 0x125908u: goto label_125908;
        case 0x12590cu: goto label_12590c;
        case 0x125910u: goto label_125910;
        case 0x125914u: goto label_125914;
        case 0x125918u: goto label_125918;
        case 0x12591cu: goto label_12591c;
        case 0x125920u: goto label_125920;
        case 0x125924u: goto label_125924;
        case 0x125928u: goto label_125928;
        case 0x12592cu: goto label_12592c;
        case 0x125930u: goto label_125930;
        case 0x125934u: goto label_125934;
        case 0x125938u: goto label_125938;
        case 0x12593cu: goto label_12593c;
        case 0x125940u: goto label_125940;
        case 0x125944u: goto label_125944;
        case 0x125948u: goto label_125948;
        case 0x12594cu: goto label_12594c;
        case 0x125950u: goto label_125950;
        case 0x125954u: goto label_125954;
        case 0x125958u: goto label_125958;
        case 0x12595cu: goto label_12595c;
        case 0x125960u: goto label_125960;
        case 0x125964u: goto label_125964;
        case 0x125968u: goto label_125968;
        case 0x12596cu: goto label_12596c;
        case 0x125970u: goto label_125970;
        case 0x125974u: goto label_125974;
        case 0x125978u: goto label_125978;
        case 0x12597cu: goto label_12597c;
        case 0x125980u: goto label_125980;
        case 0x125984u: goto label_125984;
        case 0x125988u: goto label_125988;
        case 0x12598cu: goto label_12598c;
        case 0x125990u: goto label_125990;
        case 0x125994u: goto label_125994;
        case 0x125998u: goto label_125998;
        case 0x12599cu: goto label_12599c;
        case 0x1259a0u: goto label_1259a0;
        case 0x1259a4u: goto label_1259a4;
        case 0x1259a8u: goto label_1259a8;
        case 0x1259acu: goto label_1259ac;
        case 0x1259b0u: goto label_1259b0;
        case 0x1259b4u: goto label_1259b4;
        case 0x1259b8u: goto label_1259b8;
        case 0x1259bcu: goto label_1259bc;
        case 0x1259c0u: goto label_1259c0;
        case 0x1259c4u: goto label_1259c4;
        case 0x1259c8u: goto label_1259c8;
        case 0x1259ccu: goto label_1259cc;
        case 0x1259d0u: goto label_1259d0;
        case 0x1259d4u: goto label_1259d4;
        case 0x1259d8u: goto label_1259d8;
        case 0x1259dcu: goto label_1259dc;
        case 0x1259e0u: goto label_1259e0;
        case 0x1259e4u: goto label_1259e4;
        default: break;
    }

    ctx->pc = 0x125888u;

label_125888:
    // 0x125888: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x125888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_12588c:
    // 0x12588c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_125890:
    // 0x125890: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x125890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_125894:
    // 0x125894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125898:
    // 0x125898: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x125898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_12589c:
    // 0x12589c: 0x26110260  addiu       $s1, $s0, 0x260
    ctx->pc = 0x12589cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
label_1258a0:
    // 0x1258a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1258a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1258a4:
    // 0x1258a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1258a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1258a8:
    // 0x1258a8: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x1258a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_1258ac:
    // 0x1258ac: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x1258acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_1258b0:
    // 0x1258b0: 0x60f809  jalr        $v1
label_1258b4:
    if (ctx->pc == 0x1258B4u) {
        ctx->pc = 0x1258B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258B0u;
        // 0x1258b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258B8u;
        goto label_1258b8;
    }
    ctx->pc = 0x1258B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1258B8u);
        ctx->pc = 0x1258B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258B0u;
        // 0x1258b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1258B0u, 0x1258B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1258B8u;
label_1258b8:
    // 0x1258b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1258b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1258bc:
    // 0x1258bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1258bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1258c0:
    // 0x1258c0: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1258c4:
    // 0x1258c4: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x1258c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1258c8:
    // 0x1258c8: 0x40f809  jalr        $v0
label_1258cc:
    if (ctx->pc == 0x1258CCu) {
        ctx->pc = 0x1258CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258C8u;
        // 0x1258cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258D0u;
        goto label_1258d0;
    }
    ctx->pc = 0x1258C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1258D0u);
        ctx->pc = 0x1258CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258C8u;
        // 0x1258cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1258C8u, 0x1258D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1258D0u;
label_1258d0:
    // 0x1258d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1258d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1258d4:
    // 0x1258d4: 0xc0cd8ec  jal         func_3363B0
label_1258d8:
    if (ctx->pc == 0x1258D8u) {
        ctx->pc = 0x1258D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258D4u;
        // 0x1258d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258DCu;
        goto label_1258dc;
    }
    ctx->pc = 0x1258D4u;
    SET_GPR_U32(ctx, 31, 0x1258DCu);
    ctx->pc = 0x1258D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1258D4u;
    // 0x1258d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x1258D4u, 0x1258DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1258DCu;
label_1258dc:
    // 0x1258dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1258dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1258e0:
    // 0x1258e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1258e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1258e4:
    // 0x1258e4: 0xc04b642  jal         func_12D908
label_1258e8:
    if (ctx->pc == 0x1258E8u) {
        ctx->pc = 0x1258E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258E4u;
        // 0x1258e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1258ECu;
        goto label_1258ec;
    }
    ctx->pc = 0x1258E4u;
    SET_GPR_U32(ctx, 31, 0x1258ECu);
    ctx->pc = 0x1258E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1258E4u;
    // 0x1258e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D908u, 0x1258E4u, 0x1258ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1258ECu;
label_1258ec:
    // 0x1258ec: 0xc60103b4  lwc1        $f1, 0x3B4($s0)
    ctx->pc = 0x1258ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1258f0:
    // 0x1258f0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1258f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_1258f4:
    // 0x1258f4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1258f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_1258f8:
    // 0x1258f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1258f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1258fc:
    // 0x1258fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1258fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_125900:
    // 0x125900: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x125900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_125904:
    // 0x125904: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x125904u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_125908:
    // 0x125908: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x125908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12590c:
    // 0x12590c: 0x0  nop
    ctx->pc = 0x12590cu;
    // NOP
label_125910:
    // 0x125910: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
label_125914:
    if (ctx->pc == 0x125914u) {
        ctx->pc = 0x125914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125910u;
        // 0x125914: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125918u;
        goto label_125918;
    }
    ctx->pc = 0x125910u;
    {
        const bool branch_taken_0x125910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125910) {
            ctx->pc = 0x125914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125910u;
            // 0x125914: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12598Cu;
            goto label_12598c;
        }
    }
    ctx->pc = 0x125918u;
label_125918:
    // 0x125918: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12591c:
    // 0x12591c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x12591cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_125920:
    // 0x125920: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_125924:
    // 0x125924: 0x40f809  jalr        $v0
label_125928:
    if (ctx->pc == 0x125928u) {
        ctx->pc = 0x125928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125924u;
        // 0x125928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12592Cu;
        goto label_12592c;
    }
    ctx->pc = 0x125924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12592Cu);
        ctx->pc = 0x125928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125924u;
        // 0x125928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125924u, 0x12592Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12592Cu;
label_12592c:
    // 0x12592c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12592cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125930:
    // 0x125930: 0xc0cd8c2  jal         func_336308
label_125934:
    if (ctx->pc == 0x125934u) {
        ctx->pc = 0x125934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125930u;
        // 0x125934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125938u;
        goto label_125938;
    }
    ctx->pc = 0x125930u;
    SET_GPR_U32(ctx, 31, 0x125938u);
    ctx->pc = 0x125934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125930u;
    // 0x125934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x125930u, 0x125938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125938u;
label_125938:
    // 0x125938: 0xc60003b4  lwc1        $f0, 0x3B4($s0)
    ctx->pc = 0x125938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12593c:
    // 0x12593c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12593cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125940:
    // 0x125940: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x125940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_125944:
    // 0x125944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125948:
    // 0x125948: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x125948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_12594c:
    // 0x12594c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12594cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_125950:
    // 0x125950: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x125950u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_125954:
    // 0x125954: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x125954u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_125958:
    // 0x125958: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x125958u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_12595c:
    // 0x12595c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x12595cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_125960:
    // 0x125960: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x125960u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_125964:
    // 0x125964: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x125964u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_125968:
    // 0x125968: 0x4a0003bf  vwaitq
    ctx->pc = 0x125968u;
    // VWAITQ (Q already resolved in this runtime)
label_12596c:
    // 0x12596c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x12596cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_125970:
    // 0x125970: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x125970u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_125974:
    // 0x125974: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x125974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_125978:
    // 0x125978: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_12597c:
    // 0x12597c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_125980:
    // 0x125980: 0xc04b53a  jal         func_12D4E8
label_125984:
    if (ctx->pc == 0x125984u) {
        ctx->pc = 0x125984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125980u;
        // 0x125984: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125988u;
        goto label_125988;
    }
    ctx->pc = 0x125980u;
    SET_GPR_U32(ctx, 31, 0x125988u);
    ctx->pc = 0x125984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125980u;
    // 0x125984: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4E8u, 0x125980u, 0x125988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125988u;
label_125988:
    // 0x125988: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x125988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_12598c:
    // 0x12598c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12598cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_125990:
    // 0x125990: 0x84440190  lh          $a0, 0x190($v0)
    ctx->pc = 0x125990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_125994:
    // 0x125994: 0x8c430194  lw          $v1, 0x194($v0)
    ctx->pc = 0x125994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
label_125998:
    // 0x125998: 0x60f809  jalr        $v1
label_12599c:
    if (ctx->pc == 0x12599Cu) {
        ctx->pc = 0x12599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125998u;
        // 0x12599c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259A0u;
        goto label_1259a0;
    }
    ctx->pc = 0x125998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1259A0u);
        ctx->pc = 0x12599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125998u;
        // 0x12599c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125998u, 0x1259A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1259A0u;
label_1259a0:
    // 0x1259a0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1259a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1259a4:
    // 0x1259a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1259a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1259a8:
    // 0x1259a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1259a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1259ac:
    // 0x1259ac: 0xe6000398  swc1        $f0, 0x398($s0)
    ctx->pc = 0x1259acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 920), bits); }
label_1259b0:
    // 0x1259b0: 0xc6140394  lwc1        $f20, 0x394($s0)
    ctx->pc = 0x1259b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1259b4:
    // 0x1259b4: 0x846401f0  lh          $a0, 0x1F0($v1)
    ctx->pc = 0x1259b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 496)));
label_1259b8:
    // 0x1259b8: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x1259b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_1259bc:
    // 0x1259bc: 0x40f809  jalr        $v0
label_1259c0:
    if (ctx->pc == 0x1259C0u) {
        ctx->pc = 0x1259C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259BCu;
        // 0x1259c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259C4u;
        goto label_1259c4;
    }
    ctx->pc = 0x1259BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1259C4u);
        ctx->pc = 0x1259C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259BCu;
        // 0x1259c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1259BCu, 0x1259C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1259C4u;
label_1259c4:
    // 0x1259c4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1259c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1259c8:
    // 0x1259c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1259c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1259cc:
    // 0x1259cc: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x1259ccu;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_1259d0:
    // 0x1259d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1259d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1259d4:
    // 0x1259d4: 0xe614039c  swc1        $f20, 0x39C($s0)
    ctx->pc = 0x1259d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 924), bits); }
label_1259d8:
    // 0x1259d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1259d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1259dc:
    // 0x1259dc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1259dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1259e0:
    // 0x1259e0: 0x3e00008  jr          $ra
label_1259e4:
    if (ctx->pc == 0x1259E4u) {
        ctx->pc = 0x1259E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259E0u;
        // 0x1259e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1259E8u;
        goto label_fallthrough_0x1259e0;
    }
    ctx->pc = 0x1259E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1259E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1259E0u;
        // 0x1259e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1259E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1259e0:
    ctx->pc = 0x1259E8u;
}
