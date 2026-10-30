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

// Function: sub_001C2638
// Address: 0x1c2638 - 0x1c2788
void sub_001C2638_0x1c2638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2638_0x1c2638");
#endif

    switch (ctx->pc) {
        case 0x1c26acu: goto label_1c26ac;
        case 0x1c2710u: goto label_1c2710;
        case 0x1c2718u: goto label_1c2718;
        default: break;
    }

    ctx->pc = 0x1c2638u;

    // 0x1c2638: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1c2638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1c263c: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1c263cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1c2640: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c2640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c2644: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2648: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c2648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1c264c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c264cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c2650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2654: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c2654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c2658: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c265c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c265cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c2660: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c2660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c2664: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x1c2664u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c2668: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1c2668u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c266c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c266cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c2670: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c2670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c2674: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c2674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2678: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1c2678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c267c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1c267cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1c2680: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1c2680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1c2684: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1c2684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2688: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1c2688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1c268c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2690: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c2690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2694: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1c2694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1c2698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c269c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c269cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c26a0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1c26a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1c26a4: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1C26A4u;
    SET_GPR_U32(ctx, 31, 0x1C26ACu);
    ctx->pc = 0x1C26A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26A4u;
    // 0x1c26a8: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1C26A4u, 0x1C26ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26ACu;
label_1c26ac:
    // 0x1c26ac: 0x8e450068  lw          $a1, 0x68($s2)
    ctx->pc = 0x1c26acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1c26b0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1c26b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c26b4: 0xa3a400a0  sb          $a0, 0xA0($sp)
    ctx->pc = 0x1c26b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c26b8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1c26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c26bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1c26bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1c26c0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1c26c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c26c4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c26c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c26c8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1c26c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c26cc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c26ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c26d0: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x1c26d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x1c26d4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c26d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c26d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c26d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26dc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c26dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c26e0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c26e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c26e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c26e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c26e8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1c26e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1c26ec: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x1c26ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c26f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c26f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26f4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1c26f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1c26f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c26f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c26fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c26fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2700: 0x34e7003a  ori         $a3, $a3, 0x3A
    ctx->pc = 0x1c2700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)58);
    // 0x1c2704: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c2704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2708: 0xc0683f4  jal         func_1A0FD0
    ctx->pc = 0x1C2708u;
    SET_GPR_U32(ctx, 31, 0x1C2710u);
    ctx->pc = 0x1C270Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2708u;
    // 0x1c270c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x1C2708u, 0x1C2710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2710u;
label_1c2710:
    // 0x1c2710: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1c2710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c2714: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c2714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c2718:
    // 0x1c2718: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x1c2718u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c271c: 0x7a050010  lq          $a1, 0x10($s0)
    ctx->pc = 0x1c271cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c2720: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1c2720u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1c2724: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x1c2724u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x1c2728: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1c2728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c272c: 0x1603fffa  bne         $s0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C272Cu;
    {
        const bool branch_taken_0x1c272c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C272Cu;
        // 0x1c2730: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c272c) {
            ctx->pc = 0x1C2718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2718;
        }
    }
    ctx->pc = 0x1C2734u;
    // 0x1c2734: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1c2734u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2738: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1c2738u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1c273c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1c273cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2744: 0x8e4200ac  lw          $v0, 0xAC($s2)
    ctx->pc = 0x1c2744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x1c2748: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1c2748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1c274c: 0xae4400a8  sw          $a0, 0xA8($s2)
    ctx->pc = 0x1c274cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 4));
    // 0x1c2750: 0x246394a0  addiu       $v1, $v1, -0x6B60
    ctx->pc = 0x1c2750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939808));
    // 0x1c2754: 0xae450068  sw          $a1, 0x68($s2)
    ctx->pc = 0x1c2754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 5));
    // 0x1c2758: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c2758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c275c: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x1c275cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
    // 0x1c2760: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x1c2760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x1c2764: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x1c2764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x1c2768: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x1c2768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x1c276c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1c276cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c2770: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1c2770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c2774: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1c2774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c2778: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1c2778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c277c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2780: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2780u;
        // 0x1c2784: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2788u;
}
