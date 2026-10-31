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

// Function: sub_004275D0
// Address: 0x4275d0 - 0x428080
void sub_004275D0_0x4275d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004275D0_0x4275d0");
#endif

    switch (ctx->pc) {
        case 0x42768cu: goto label_42768c;
        case 0x4276a8u: goto label_4276a8;
        case 0x4276d8u: goto label_4276d8;
        case 0x4276e4u: goto label_4276e4;
        case 0x4276f8u: goto label_4276f8;
        case 0x427720u: goto label_427720;
        case 0x427748u: goto label_427748;
        case 0x42777cu: goto label_42777c;
        case 0x427790u: goto label_427790;
        case 0x427828u: goto label_427828;
        case 0x427838u: goto label_427838;
        case 0x4278b0u: goto label_4278b0;
        case 0x42799cu: goto label_42799c;
        case 0x4279acu: goto label_4279ac;
        case 0x427f88u: goto label_427f88;
        case 0x427fd0u: goto label_427fd0;
        case 0x427fdcu: goto label_427fdc;
        default: break;
    }

    ctx->pc = 0x4275d0u;

    // 0x4275d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4275d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x4275d4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4275d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4275d8: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x4275d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x4275dc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x4275dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x4275e0: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x4275e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x4275e4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4275e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4275e8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x4275e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x4275ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4275ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4275f0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x4275f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x4275f4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x4275f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x4275f8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x4275f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x4275fc: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x4275fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x427600: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x427600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x427604: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x427604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x427608: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x427608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x42760c: 0x8c446b80  lw          $a0, 0x6B80($v0)
    ctx->pc = 0x42760cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x596B80u));
    // 0x427610: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x427610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x427614: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x427614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x427618: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x427618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x42761c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x42761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x427620: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x427620u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x427624: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x427624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x427628: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x427628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42762c: 0xdc430028  ld          $v1, 0x28($v0)
    ctx->pc = 0x42762cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x427630: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x427630u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x427634: 0xffa30060  sd          $v1, 0x60($sp)
    ctx->pc = 0x427634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 3));
    // 0x427638: 0xdc430030  ld          $v1, 0x30($v0)
    ctx->pc = 0x427638u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x42763c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x42763Cu;
    {
        const bool branch_taken_0x42763c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x427640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42763Cu;
        // 0x427640: 0xffa30068  sd          $v1, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42763c) {
            ctx->pc = 0x427650u;
            goto label_427650;
        }
    }
    ctx->pc = 0x427644u;
    // 0x427644: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x427644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x427648: 0xdca56df8  ld          $a1, 0x6DF8($a1)
    ctx->pc = 0x427648u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x596DF8u));
    // 0x42764c: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x42764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
label_427650:
    // 0x427650: 0xdc450038  ld          $a1, 0x38($v0)
    ctx->pc = 0x427650u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x427654: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x427654u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x427658: 0xde026de8  ld          $v0, 0x6DE8($s0)
    ctx->pc = 0x427658u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DE8u));
    // 0x42765c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x42765cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x427660: 0xdc846dd8  ld          $a0, 0x6DD8($a0)
    ctx->pc = 0x427660u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x596DD8u));
    // 0x427664: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x427664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x427668: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x427668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x42766c: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x42766cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x427670: 0xffa40078  sd          $a0, 0x78($sp)
    ctx->pc = 0x427670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 4));
    // 0x427674: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x427674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x427678: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x427678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x42767c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427680: 0xafbd0080  sw          $sp, 0x80($sp)
    ctx->pc = 0x427680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 29));
    // 0x427684: 0xc066196  jal         func_198658
    ctx->pc = 0x427684u;
    SET_GPR_U32(ctx, 31, 0x42768Cu);
    ctx->pc = 0x427688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427684u;
    // 0x427688: 0xafbd0084  sw          $sp, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198658u, 0x427684u, 0x42768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42768Cu;
label_42768c:
    // 0x42768c: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x42768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
    // 0x427690: 0xffa00048  sd          $zero, 0x48($sp)
    ctx->pc = 0x427690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 0));
    // 0x427694: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x427694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x427698: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x427698u;
    {
        const bool branch_taken_0x427698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427698u;
        // 0x42769c: 0xac40711c  sw          $zero, 0x711C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28956), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427698) {
            ctx->pc = 0x4276C8u;
            goto label_4276c8;
        }
    }
    ctx->pc = 0x4276A0u;
    // 0x4276a0: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x4276A0u;
    SET_GPR_U32(ctx, 31, 0x4276A8u);
    ctx->pc = 0x4276A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4276A0u;
    // 0x4276a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x4276A0u, 0x4276A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4276A8u;
label_4276a8:
    // 0x4276a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4276a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4276ac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4276acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4276b0: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x4276b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x4276b4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4276b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x4276b8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4276B8u;
    {
        const bool branch_taken_0x4276b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4276BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4276B8u;
        // 0x4276bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4276b8) {
            ctx->pc = 0x4276C8u;
            goto label_4276c8;
        }
    }
    ctx->pc = 0x4276C0u;
    // 0x4276c0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4276c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4276c4: 0xac62711c  sw          $v0, 0x711C($v1)
    ctx->pc = 0x4276c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x59711Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59711Cu, _value); } while (0);
label_4276c8:
    // 0x4276c8: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x4276C8u;
    {
        const bool branch_taken_0x4276c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4276c8) {
            ctx->pc = 0x4276E4u;
            goto label_4276e4;
        }
    }
    ctx->pc = 0x4276D0u;
    // 0x4276d0: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x4276D0u;
    SET_GPR_U32(ctx, 31, 0x4276D8u);
    ctx->pc = 0x4276D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4276D0u;
    // 0x4276d4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x4276D0u, 0x4276D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4276D8u;
label_4276d8:
    // 0x4276d8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4276d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4276dc: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x4276DCu;
    SET_GPR_U32(ctx, 31, 0x4276E4u);
    ctx->pc = 0x4276E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4276DCu;
    // 0x4276e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x4276DCu, 0x4276E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4276E4u;
label_4276e4:
    // 0x4276e4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4276E4u;
    {
        const bool branch_taken_0x4276e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4276e4) {
            ctx->pc = 0x4276F8u;
            goto label_4276f8;
        }
    }
    ctx->pc = 0x4276ECu;
    // 0x4276ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4276ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4276f0: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x4276F0u;
    SET_GPR_U32(ctx, 31, 0x4276F8u);
    ctx->pc = 0x4276F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4276F0u;
    // 0x4276f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x4276F0u, 0x4276F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4276F8u;
label_4276f8:
    // 0x4276f8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4276F8u;
    {
        const bool branch_taken_0x4276f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4276FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4276F8u;
        // 0x4276fc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4276f8) {
            ctx->pc = 0x427720u;
            goto label_427720;
        }
    }
    ctx->pc = 0x427700u;
    // 0x427700: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x427700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x427704: 0x8c437110  lw          $v1, 0x7110($v0)
    ctx->pc = 0x427704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28944)));
    // 0x427708: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x427708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x42770c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x42770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x427710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x427710u;
    {
        const bool branch_taken_0x427710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x427710) {
            ctx->pc = 0x427720u;
            goto label_427720;
        }
    }
    ctx->pc = 0x427718u;
    // 0x427718: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x427718u;
    SET_GPR_U32(ctx, 31, 0x427720u);
    ctx->pc = 0x42771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427718u;
    // 0x42771c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x427718u, 0x427720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427720u;
label_427720:
    // 0x427720: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x427720u;
    {
        const bool branch_taken_0x427720 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x427724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427720u;
        // 0x427724: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427720) {
            ctx->pc = 0x4277D8u;
            goto label_4277d8;
        }
    }
    ctx->pc = 0x427728u;
    // 0x427728: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x427728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42772c: 0x8c437110  lw          $v1, 0x7110($v0)
    ctx->pc = 0x42772cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28944)));
    // 0x427730: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x427730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x427734: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x427734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x427738: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x427738u;
    {
        const bool branch_taken_0x427738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427738u;
        // 0x42773c: 0x3c070059  lui         $a3, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427738) {
            ctx->pc = 0x42774Cu;
            goto label_42774c;
        }
    }
    ctx->pc = 0x427740u;
    // 0x427740: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x427740u;
    SET_GPR_U32(ctx, 31, 0x427748u);
    ctx->pc = 0x427744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427740u;
    // 0x427744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x427740u, 0x427748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427748u;
label_427748:
    // 0x427748: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x427748u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_42774c:
    // 0x42774c: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x42774cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x427750: 0xdce26e20  ld          $v0, 0x6E20($a3)
    ctx->pc = 0x427750u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 28192)));
    // 0x427754: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x427754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x427758: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x427758u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x42775c: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x42775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x427760: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x427760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x427764: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x427764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427768: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x427768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x42776c: 0xfce26e20  sd          $v0, 0x6E20($a3)
    ctx->pc = 0x42776cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 28192), GPR_U64(ctx, 2));
    // 0x427770: 0xae087118  sw          $t0, 0x7118($s0)
    ctx->pc = 0x427770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x597118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x597118u, _value); } while (0);
    // 0x427774: 0xc1291e6  jal         func_4A4798
    ctx->pc = 0x427774u;
    SET_GPR_U32(ctx, 31, 0x42777Cu);
    ctx->pc = 0x427778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427774u;
    // 0x427778: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4798u, 0x427774u, 0x42777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42777Cu;
label_42777c:
    // 0x42777c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x42777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x427780: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x427780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x427784: 0x92260050  lbu         $a2, 0x50($s1)
    ctx->pc = 0x427784u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x427788: 0xc1291ee  jal         func_4A47B8
    ctx->pc = 0x427788u;
    SET_GPR_U32(ctx, 31, 0x427790u);
    ctx->pc = 0x42778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427788u;
    // 0x42778c: 0x24a56e08  addiu       $a1, $a1, 0x6E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A47B8u, 0x427788u, 0x427790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427790u;
label_427790:
    // 0x427790: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x427790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x427794: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x427794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x427798: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x427798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42779c: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x42779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x4277a0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x4277a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x4277a4: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4277A4u;
    {
        const bool branch_taken_0x4277a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4277A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4277A4u;
        // 0x4277a8: 0xfc806e00  sd          $zero, 0x6E00($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4277a4) {
            ctx->pc = 0x4277B4u;
            goto label_4277b4;
        }
    }
    ctx->pc = 0x4277ACu;
    // 0x4277ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4277acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4277b0: 0xfc826e00  sd          $v0, 0x6E00($a0)
    ctx->pc = 0x4277b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
label_4277b4:
    // 0x4277b4: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x4277b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x4277b8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x4277b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x4277bc: 0x14450010  bne         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4277BCu;
    {
        const bool branch_taken_0x4277bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4277C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4277BCu;
        // 0x4277c0: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4277bc) {
            ctx->pc = 0x427800u;
            goto label_427800;
        }
    }
    ctx->pc = 0x4277C4u;
    // 0x4277c4: 0xdc826e00  ld          $v0, 0x6E00($a0)
    ctx->pc = 0x4277c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 28160)));
    // 0x4277c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4277c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4277cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4277ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4277d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4277D0u;
    {
        const bool branch_taken_0x4277d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4277D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4277D0u;
        // 0x4277d4: 0xfc826e00  sd          $v0, 0x6E00($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4277d0) {
            ctx->pc = 0x427800u;
            goto label_427800;
        }
    }
    ctx->pc = 0x4277D8u;
label_4277d8:
    // 0x4277d8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4277d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4277dc: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x4277dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x4277e0: 0xdc626e20  ld          $v0, 0x6E20($v1)
    ctx->pc = 0x4277e0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E20u));
    // 0x4277e4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4277e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4277e8: 0xac807118  sw          $zero, 0x7118($a0)
    ctx->pc = 0x4277e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x597118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x597118u, _value); } while (0);
    // 0x4277ec: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x4277ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4277f0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4277f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4277f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4277f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4277f8: 0xfc626e20  sd          $v0, 0x6E20($v1)
    ctx->pc = 0x4277f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 28192), GPR_U64(ctx, 2));
    // 0x4277fc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4277fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_427800:
    // 0x427800: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x427800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x427804: 0xdca26de8  ld          $v0, 0x6DE8($a1)
    ctx->pc = 0x427804u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 28136)));
    // 0x427808: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x427808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x42780c: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x42780Cu;
    {
        const bool branch_taken_0x42780c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x427810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42780Cu;
        // 0x427810: 0xfca26de8  sd          $v0, 0x6DE8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 28136), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42780c) {
            ctx->pc = 0x427864u;
            goto label_427864;
        }
    }
    ctx->pc = 0x427814u;
    // 0x427814: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x427814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x427818: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x427818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x42781c: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x42781cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x427820: 0xc1291e6  jal         func_4A4798
    ctx->pc = 0x427820u;
    SET_GPR_U32(ctx, 31, 0x427828u);
    ctx->pc = 0x427824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427820u;
    // 0x427824: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4798u, 0x427820u, 0x427828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427828u;
label_427828:
    // 0x427828: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x427828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x42782c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x42782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x427830: 0xc1291ee  jal         func_4A47B8
    ctx->pc = 0x427830u;
    SET_GPR_U32(ctx, 31, 0x427838u);
    ctx->pc = 0x427834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427830u;
    // 0x427834: 0x92660050  lbu         $a2, 0x50($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A47B8u, 0x427830u, 0x427838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427838u;
label_427838:
    // 0x427838: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x427838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x42783c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x42783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x427840: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x427840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x427844: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x427844u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x427848: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x427848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x42784c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x42784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x427850: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x427850u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x427854: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x427854u;
    {
        const bool branch_taken_0x427854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x427858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427854u;
        // 0x427858: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427854) {
            ctx->pc = 0x427864u;
            goto label_427864;
        }
    }
    ctx->pc = 0x42785Cu;
    // 0x42785c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x42785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x427860: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x427860u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_427864:
    // 0x427864: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x427864u;
    {
        const bool branch_taken_0x427864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x427868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427864u;
        // 0x427868: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427864) {
            ctx->pc = 0x4278A8u;
            goto label_4278a8;
        }
    }
    ctx->pc = 0x42786Cu;
    // 0x42786c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x42786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x427870: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x427870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x427874: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x427874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x427878: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x427878u;
    {
        const bool branch_taken_0x427878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427878) {
            ctx->pc = 0x4278A8u;
            goto label_4278a8;
        }
    }
    ctx->pc = 0x427880u;
    // 0x427880: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x427880u;
    {
        const bool branch_taken_0x427880 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x427880) {
            ctx->pc = 0x4278A8u;
            goto label_4278a8;
        }
    }
    ctx->pc = 0x427888u;
    // 0x427888: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x427888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x42788c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x42788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x427890: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x427890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x427894: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x427894u;
    {
        const bool branch_taken_0x427894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427894) {
            ctx->pc = 0x4278A8u;
            goto label_4278a8;
        }
    }
    ctx->pc = 0x42789Cu;
    // 0x42789c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4278a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4278a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4278a4: 0xae027118  sw          $v0, 0x7118($s0)
    ctx->pc = 0x4278a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28952), GPR_U32(ctx, 2));
label_4278a8:
    // 0x4278a8: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x4278A8u;
    SET_GPR_U32(ctx, 31, 0x4278B0u);
    ctx->pc = 0x4278ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4278A8u;
    // 0x4278ac: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4278A8u, 0x4278B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4278B0u;
label_4278b0:
    // 0x4278b0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4278b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4278b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4278b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4278b8: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x4278b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x4278bc: 0x72821389  pcpyld      $v0, $s4, $v0
    ctx->pc = 0x4278bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
    // 0x4278c0: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x4278c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
    // 0x4278c4: 0x8e50707c  lw          $s0, 0x707C($s2)
    ctx->pc = 0x4278c4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x59707Cu));
    // 0x4278c8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x4278c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x4278cc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4278ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4278d0: 0xae50707c  sw          $s0, 0x707C($s2)
    ctx->pc = 0x4278d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x59707Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59707Cu, _value); } while (0);
    // 0x4278d4: 0x3c026c0a  lui         $v0, 0x6C0A
    ctx->pc = 0x4278d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27658 << 16));
    // 0x4278d8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x4278d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x4278dc: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x4278dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
    // 0x4278e0: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x4278e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x4278e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4278e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4278e8: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x4278e8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4278ec: 0x72311cc8  ppacw       $v1, $s1, $s1
    ctx->pc = 0x4278ecu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 17)));
    // 0x4278f0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x4278f0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4278f4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x4278f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x4278f8: 0x92c30029  lbu         $v1, 0x29($s6)
    ctx->pc = 0x4278f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x4278fc: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x4278fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x427900: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x427900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
    // 0x427904: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x427904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x427908: 0x92c20028  lbu         $v0, 0x28($s6)
    ctx->pc = 0x427908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x42790c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42790cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x427910: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x427910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x427914: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x427914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x427918: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x427918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x42791c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x427920: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x427920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x427924: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x427924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x427928: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x427928u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42792c: 0x70b51389  pcpyld      $v0, $a1, $s5
    ctx->pc = 0x42792cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 21)));
    // 0x427930: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x427930u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x427934: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x427934u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x427938: 0x15ab7c  dsll32      $s5, $s5, 13
    ctx->pc = 0x427938u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 13));
    // 0x42793c: 0x36b58002  ori         $s5, $s5, 0x8002
    ctx->pc = 0x42793cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32770);
    // 0x427940: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x427940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x427944: 0x72751389  pcpyld      $v0, $s3, $s5
    ctx->pc = 0x427944u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 21)));
    // 0x427948: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x427948u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x42794c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x42794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x427950: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x427950u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x427954: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427954u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427958: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x427958u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x42795c: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x42795cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x427960: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x427960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x427964: 0xdc626df8  ld          $v0, 0x6DF8($v1)
    ctx->pc = 0x427964u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DF8u));
    // 0x427968: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x427968u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x42796c: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x42796cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x427970: 0x72751389  pcpyld      $v0, $s3, $s5
    ctx->pc = 0x427970u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 21)));
    // 0x427974: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x427974u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x427978: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x427978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x42797c: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x42797cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x427980: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427980u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427984: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x427984u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x427988: 0xdfa50068  ld          $a1, 0x68($sp)
    ctx->pc = 0x427988u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x42798c: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x42798cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x427990: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x427990u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x427994: 0xc064a30  jal         func_1928C0
    ctx->pc = 0x427994u;
    SET_GPR_U32(ctx, 31, 0x42799Cu);
    ctx->pc = 0x427998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427994u;
    // 0x427998: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x427994u, 0x42799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42799Cu;
label_42799c:
    // 0x42799c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x42799cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x4279a0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x4279a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4279a4: 0xc064a3c  jal         func_1928F0
    ctx->pc = 0x4279A4u;
    SET_GPR_U32(ctx, 31, 0x4279ACu);
    ctx->pc = 0x4279A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4279A4u;
    // 0x4279a8: 0xdfb50058  ld          $s5, 0x58($sp) (Delay Slot)
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928F0u, 0x4279A4u, 0x4279ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4279ACu;
label_4279ac:
    // 0x4279ac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x4279acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x4279b0: 0xdfa20058  ld          $v0, 0x58($sp)
    ctx->pc = 0x4279b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4279b4: 0x70551389  pcpyld      $v0, $v0, $s5
    ctx->pc = 0x4279b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
    // 0x4279b8: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x4279b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x4279bc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x4279bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4279c0: 0xdc550010  ld          $s5, 0x10($v0)
    ctx->pc = 0x4279c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4279c4: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x4279c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x4279c8: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4279c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4279cc: 0x70551389  pcpyld      $v0, $v0, $s5
    ctx->pc = 0x4279ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
    // 0x4279d0: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x4279d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x4279d4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x4279d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4279d8: 0xdcb50030  ld          $s5, 0x30($a1)
    ctx->pc = 0x4279d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4279dc: 0xdc620030  ld          $v0, 0x30($v1)
    ctx->pc = 0x4279dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4279e0: 0x70551389  pcpyld      $v0, $v0, $s5
    ctx->pc = 0x4279e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
    // 0x4279e4: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x4279e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    // 0x4279e8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x4279e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x4279ec: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x4279ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x4279f0: 0x72311cc8  ppacw       $v1, $s1, $s1
    ctx->pc = 0x4279f0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 17)));
    // 0x4279f4: 0x705114c8  ppacw       $v0, $v0, $s1
    ctx->pc = 0x4279f4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x4279f8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x4279f8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4279fc: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x4279fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x427a00: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x427a00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x427a04: 0x15ab7c  dsll32      $s5, $s5, 13
    ctx->pc = 0x427a04u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 13));
    // 0x427a08: 0x36b58005  ori         $s5, $s5, 0x8005
    ctx->pc = 0x427a08u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32773);
    // 0x427a0c: 0x72751389  pcpyld      $v0, $s3, $s5
    ctx->pc = 0x427a0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 21)));
    // 0x427a10: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x427a10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x427a14: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x427a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x427a18: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x427a18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x427a1c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x427a1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x427a20: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x427a20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x427a24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x427a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x427a28: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x427a28u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x427a2c: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x427a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x427a30: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x427a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x427a34: 0xdfa50070  ld          $a1, 0x70($sp)
    ctx->pc = 0x427a34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x427a38: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x427a38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x427a3c: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x427a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x427a40: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x427a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x427a44: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x427a44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x427a48: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427a48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427a4c: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x427a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x427a50: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x427a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x427a54: 0xdfa30078  ld          $v1, 0x78($sp)
    ctx->pc = 0x427a54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x427a58: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x427a58u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x427a5c: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x427a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
    // 0x427a60: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x427a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x427a64: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427a68: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x427a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x427a6c: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x427a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x427a70: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x427a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x427a74: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x427a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x427a78: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x427a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x427a7c: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x427a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x427a80: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x427a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x427a84: 0x70942389  pcpyld      $a0, $a0, $s4
    ctx->pc = 0x427a84u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 20)));
    // 0x427a88: 0x7e040120  sq          $a0, 0x120($s0)
    ctx->pc = 0x427a88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 288), GPR_VEC(ctx, 4));
    // 0x427a8c: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x427a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x427a90: 0xae50707c  sw          $s0, 0x707C($s2)
    ctx->pc = 0x427a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 16));
    // 0x427a94: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x427a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x427a98: 0x92c20047  lbu         $v0, 0x47($s6)
    ctx->pc = 0x427a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 71)));
    // 0x427a9c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x427a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x427aa0: 0x8ca3711c  lw          $v1, 0x711C($a1)
    ctx->pc = 0x427aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x59711Cu));
    // 0x427aa4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x427aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x427aa8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x427aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x427aac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x427aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x427ab0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x427AB0u;
    {
        const bool branch_taken_0x427ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x427AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427AB0u;
        // 0x427ab4: 0xac827120  sw          $v0, 0x7120($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ab0) {
            ctx->pc = 0x427AC8u;
            goto label_427ac8;
        }
    }
    ctx->pc = 0x427AB8u;
    // 0x427ab8: 0xdfc26e20  ld          $v0, 0x6E20($fp)
    ctx->pc = 0x427ab8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x427abc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x427abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x427ac0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x427AC0u;
    {
        const bool branch_taken_0x427ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427AC0u;
        // 0x427ac4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ac0) {
            ctx->pc = 0x427AD4u;
            goto label_427ad4;
        }
    }
    ctx->pc = 0x427AC8u;
label_427ac8:
    // 0x427ac8: 0xdfc26e20  ld          $v0, 0x6E20($fp)
    ctx->pc = 0x427ac8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x427acc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x427accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x427ad0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x427ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_427ad4:
    // 0x427ad4: 0xffc26e20  sd          $v0, 0x6E20($fp)
    ctx->pc = 0x427ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 28192), GPR_U64(ctx, 2));
    // 0x427ad8: 0x92c60029  lbu         $a2, 0x29($s6)
    ctx->pc = 0x427ad8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x427adc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x427adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x427ae0: 0x8fc26e20  lw          $v0, 0x6E20($fp)
    ctx->pc = 0x427ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x427ae4: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x427ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x427ae8: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x427ae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x427aec: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x427aecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x427af0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x427af0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x427af4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x427af4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x427af8: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x427af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x427afc: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x427afcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x427b00: 0xdc64f750  ld          $a0, -0x8B0($v1)
    ctx->pc = 0x427b00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294965072)));
    // 0x427b04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x427b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x427b08: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x427b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
    // 0x427b0c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x427b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x427b10: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x427b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x427b14: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x427b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x427b18: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x427b18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x427b1c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x427b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x427b20: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x427b20u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x427b24: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x427b24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x427b28: 0x8e46707c  lw          $a2, 0x707C($s2)
    ctx->pc = 0x427b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x427b2c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x427b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x427b30: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x427b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x427b34: 0xae46707c  sw          $a2, 0x707C($s2)
    ctx->pc = 0x427b34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 6));
    // 0x427b38: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x427b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x427b3c: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x427b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x427b40: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x427b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x427b44: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x427b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x427b48: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x427b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x427b4c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x427b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x427b50: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x427b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x427b54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x427b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427b58: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x427b58u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x427b5c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x427b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x427b60: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x427b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x427b64: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x427b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x427b68: 0xdfc26e20  ld          $v0, 0x6E20($fp)
    ctx->pc = 0x427b68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x427b6c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x427b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x427b70: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x427b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x427b74: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x427b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x427b78: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x427b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x427b7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x427B7Cu;
    {
        const bool branch_taken_0x427b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427B7Cu;
        // 0x427b80: 0x92c20044  lbu         $v0, 0x44($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427b7c) {
            ctx->pc = 0x427B90u;
            goto label_427b90;
        }
    }
    ctx->pc = 0x427B84u;
    // 0x427b84: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x427b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x427b88: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x427b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x427b8c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x427b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_427b90:
    // 0x427b90: 0x92c30045  lbu         $v1, 0x45($s6)
    ctx->pc = 0x427b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 69)));
    // 0x427b94: 0x92c40046  lbu         $a0, 0x46($s6)
    ctx->pc = 0x427b94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 70)));
    // 0x427b98: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x427b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x427b9c: 0x0  nop
    ctx->pc = 0x427b9cu;
    // NOP
    // 0x427ba0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x427ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x427ba4: 0x92c50047  lbu         $a1, 0x47($s6)
    ctx->pc = 0x427ba4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 71)));
    // 0x427ba8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x427ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x427bac: 0x0  nop
    ctx->pc = 0x427bacu;
    // NOP
    // 0x427bb0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x427bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x427bb4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x427bb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x427bb8: 0x0  nop
    ctx->pc = 0x427bb8u;
    // NOP
    // 0x427bbc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x427bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x427bc0: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x427bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x427bc4: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x427bc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x427bc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x427bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x427bcc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x427bccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x427bd0: 0x0  nop
    ctx->pc = 0x427bd0u;
    // NOP
    // 0x427bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x427bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x427bd8: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x427bd8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x427bdc: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x427bdcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x427be0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x427be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x427be4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x427be4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x427be8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x427be8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x427bec: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x427becu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x427bf0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x427bf0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x427bf4: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x427bf4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x427bf8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x427bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x427bfc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x427bfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x427c00: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x427c00u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x427c04: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x427c04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x427c08: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x427c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x427c0c: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x427c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x427c10: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x427c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x427c14: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x427c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x427c18: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x427c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x427c1c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x427c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x427c20: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x427c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x427c24: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x427c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x427c28: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x427c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x427c2c: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x427c2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x427c30: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x427c30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x427c34: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x427c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x427c38: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x427c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x427c3c: 0x8ec2003c  lw          $v0, 0x3C($s6)
    ctx->pc = 0x427c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x427c40: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x427c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x427c44: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x427c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x427c48: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x427c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x427c4c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x427c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x427c50: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x427c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x427c54: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x427c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x427c58: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x427c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x427c5c: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x427c5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x427c60: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x427c60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x427c64: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x427c64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x427c68: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x427c68u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x427c6c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x427c6cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x427c70: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x427c70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x427c74: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x427c74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x427c78: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x427c78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x427c7c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x427c7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x427c80: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x427c80u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x427c84: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x427c84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x427c88: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x427c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x427c8c: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x427c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x427c90: 0x92c20028  lbu         $v0, 0x28($s6)
    ctx->pc = 0x427c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x427c94: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x427c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x427c98: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x427c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x427c9c: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x427c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x427ca0: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x427ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x427ca4: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x427ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x427ca8: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x427ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x427cac: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x427cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x427cb0: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x427cb0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x427cb4: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x427cb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x427cb8: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x427cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x427cbc: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x427cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x427cc0: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427cc4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x427cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x427cc8: 0x8c626e80  lw          $v0, 0x6E80($v1)
    ctx->pc = 0x427cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x596E80u));
    // 0x427ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x427CCCu;
    {
        const bool branch_taken_0x427ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427CCCu;
        // 0x427cd0: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ccc) {
            ctx->pc = 0x427CE0u;
            goto label_427ce0;
        }
    }
    ctx->pc = 0x427CD4u;
    // 0x427cd4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x427CD4u;
    {
        const bool branch_taken_0x427cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427cd4) {
            ctx->pc = 0x427CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427CD4u;
            // 0x427cd8: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x427D00u;
            goto label_427d00;
        }
    }
    ctx->pc = 0x427CDCu;
    // 0x427cdc: 0x0  nop
    ctx->pc = 0x427cdcu;
    // NOP
label_427ce0:
    // 0x427ce0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x427ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x427ce4: 0x8c436e84  lw          $v1, 0x6E84($v0)
    ctx->pc = 0x427ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x596E84u));
    // 0x427ce8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x427CE8u;
    {
        const bool branch_taken_0x427ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x427CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427CE8u;
        // 0x427cec: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x427ce8) {
            ctx->pc = 0x427D28u;
            goto label_427d28;
        }
    }
    ctx->pc = 0x427CF0u;
    // 0x427cf0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x427CF0u;
    {
        const bool branch_taken_0x427cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427cf0) {
            ctx->pc = 0x427CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427CF0u;
            // 0x427cf4: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427D30u;
            goto label_427d30;
        }
    }
    ctx->pc = 0x427CF8u;
    // 0x427cf8: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x427cf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x427cfc: 0x0  nop
    ctx->pc = 0x427cfcu;
    // NOP
label_427d00:
    // 0x427d00: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x427d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x427d04: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x427d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x427d08: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x427d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
    // 0x427d0c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x427d0cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7F0u));
    // 0x427d10: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x427d10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x427d14: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x427d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x427d18: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x427d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x427d1c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x427d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x427d20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x427D20u;
    {
        const bool branch_taken_0x427d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427D20u;
        // 0x427d24: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427d20) {
            ctx->pc = 0x427D50u;
            goto label_427d50;
        }
    }
    ctx->pc = 0x427D28u;
label_427d28:
    // 0x427d28: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x427d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x427d2c: 0x0  nop
    ctx->pc = 0x427d2cu;
    // NOP
label_427d30:
    // 0x427d30: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x427d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x427d34: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x427d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x427d38: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x427d38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x427d3c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x427d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x427d40: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x427d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x427d44: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x427d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x427d48: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x427d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x427d4c: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x427d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
label_427d50:
    // 0x427d50: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x427d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x427d54: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x427d54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x427d58: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x427d58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x427d5c: 0xae45707c  sw          $a1, 0x707C($s2)
    ctx->pc = 0x427d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 5));
    // 0x427d60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x427d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x427d64: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x427d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x427d68: 0x8c447124  lw          $a0, 0x7124($v0)
    ctx->pc = 0x427d68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597124u));
    // 0x427d6c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x427d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x427d70: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x427D70u;
    {
        const bool branch_taken_0x427d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x427D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427D70u;
        // 0x427d74: 0xaca06e78  sw          $zero, 0x6E78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427d70) {
            ctx->pc = 0x427D80u;
            goto label_427d80;
        }
    }
    ctx->pc = 0x427D78u;
    // 0x427d78: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x427d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x427d7c: 0xaca26e78  sw          $v0, 0x6E78($a1)
    ctx->pc = 0x427d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 2));
label_427d80:
    // 0x427d80: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x427d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x427d84: 0x9ca56e78  lwu         $a1, 0x6E78($a1)
    ctx->pc = 0x427d84u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 28280)));
    // 0x427d88: 0x9c826e7c  lwu         $v0, 0x6E7C($a0)
    ctx->pc = 0x427d88u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x596E7Cu));
    // 0x427d8c: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x427d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x427d90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x427d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x427d94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x427d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x427d98: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x427d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x427d9c: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x427d9cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x427da0: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x427da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x427da4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x427da4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x427da8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x427da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x427dac: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x427dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x427db0: 0x8ec20040  lw          $v0, 0x40($s6)
    ctx->pc = 0x427db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x427db4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x427DB4u;
    {
        const bool branch_taken_0x427db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427DB4u;
        // 0x427db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427db4) {
            ctx->pc = 0x427E48u;
            goto label_427e48;
        }
    }
    ctx->pc = 0x427DBCu;
    // 0x427dbc: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x427dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x427dc0: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x427dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x427dc4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x427dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x427dc8: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x427dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x427dcc: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427dccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427dd0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x427dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x427dd4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x427dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x427dd8: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427ddc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x427ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x427de0: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x427de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x427de4: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x427de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x427de8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x427de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x427dec: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427decu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427df0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x427df0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x427df4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x427df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x427df8: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427df8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427dfc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x427dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x427e00: 0xdc626de8  ld          $v0, 0x6DE8($v1)
    ctx->pc = 0x427e00u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DE8u));
    // 0x427e04: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x427e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x427e08: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427e08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427e0c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x427e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x427e10: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x427e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x427e14: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427e18: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x427e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x427e1c: 0xdc626e08  ld          $v0, 0x6E08($v1)
    ctx->pc = 0x427e1cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E08u));
    // 0x427e20: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x427e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x427e24: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427e24u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427e28: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x427e28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x427e2c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x427e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x427e30: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427e34: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x427e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x427e38: 0xdc626e00  ld          $v0, 0x6E00($v1)
    ctx->pc = 0x427e38u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E00u));
    // 0x427e3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x427E3Cu;
    {
        const bool branch_taken_0x427e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427E3Cu;
        // 0x427e40: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427e3c) {
            ctx->pc = 0x427EB8u;
            goto label_427eb8;
        }
    }
    ctx->pc = 0x427E44u;
    // 0x427e44: 0x0  nop
    ctx->pc = 0x427e44u;
    // NOP
label_427e48:
    // 0x427e48: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x427e48u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x427e4c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x427e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x427e50: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x427e50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x427e54: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427e58: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x427e58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x427e5c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x427e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x427e60: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427e64: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x427e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x427e68: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x427e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x427e6c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x427e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x427e70: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x427e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x427e74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x427e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427e78: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427e78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427e7c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x427e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x427e80: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x427e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x427e84: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427e88: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x427e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x427e8c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x427e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x427e90: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x427e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x427e94: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x427e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x427e98: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427e98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427e9c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x427e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x427ea0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x427ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x427ea4: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427ea8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x427ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x427eac: 0xdc626de8  ld          $v0, 0x6DE8($v1)
    ctx->pc = 0x427eacu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DE8u));
    // 0x427eb0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x427eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x427eb4: 0x0  nop
    ctx->pc = 0x427eb4u;
    // NOP
label_427eb8:
    // 0x427eb8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x427eb8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427ebc: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x427ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x427ec0: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x427ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x427ec4: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x427ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x427ec8: 0x92c30028  lbu         $v1, 0x28($s6)
    ctx->pc = 0x427ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x427ecc: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x427eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x427ed0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x427ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x427ed4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x427ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x427ed8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x427ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x427edc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x427edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x427ee0: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x427ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x427ee4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x427ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x427ee8: 0xa2c2002b  sb          $v0, 0x2B($s6)
    ctx->pc = 0x427ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x427eec: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x427eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x427ef0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x427ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x427ef4: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x427ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x427ef8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x427ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x427efc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x427efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x427f00: 0x8cc36e74  lw          $v1, 0x6E74($a2)
    ctx->pc = 0x427f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28276)));
    // 0x427f04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x427f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x427f08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x427f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x427f0c: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x427F0Cu;
    {
        const bool branch_taken_0x427f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x427F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427F0Cu;
        // 0x427f10: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427f0c) {
            ctx->pc = 0x427F38u;
            goto label_427f38;
        }
    }
    ctx->pc = 0x427F14u;
    // 0x427f14: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x427f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x427f18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x427f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x427f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x427f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427f20: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x427f20u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x427f24: 0x8e43707c  lw          $v1, 0x707C($s2)
    ctx->pc = 0x427f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x427f28: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x427f28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x427f2c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x427f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x427f30: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x427f30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x427f34: 0xacc56e74  sw          $a1, 0x6E74($a2)
    ctx->pc = 0x427f34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28276), GPR_U32(ctx, 5));
label_427f38:
    // 0x427f38: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x427f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x427f3c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x427f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x427f40: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x427f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x427f44: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x427f44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x427f48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x427f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x427f4c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x427f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x427f50: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x427f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x427f54: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x427f54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x427f58: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x427f58u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x427f5c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x427f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x427f60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x427f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x427f64: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x427f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x427f68: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x427f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x427f6c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x427f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x427f70: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x427f70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x427f74: 0x8e43707c  lw          $v1, 0x707C($s2)
    ctx->pc = 0x427f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x427f78: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x427f78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x427f7c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x427f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x427f80: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x427f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x427f84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x427f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_427f88:
    // 0x427f88: 0x42000039  di
    ctx->pc = 0x427f88u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x427f8c: 0x40f  sync.p
    ctx->pc = 0x427f8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x427f90: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x427f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x427f94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x427f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x427f98: 0x0  nop
    ctx->pc = 0x427f98u;
    // NOP
    // 0x427f9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x427F9Cu;
    {
        const bool branch_taken_0x427f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x427f9c) {
            ctx->pc = 0x427F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427f88;
        }
    }
    ctx->pc = 0x427FA4u;
    // 0x427fa4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x427fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x427fa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x427fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x427fac: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x427facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x427fb0: 0x42000038  ei
    ctx->pc = 0x427fb0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x427fb4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x427fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x427fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x427fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x427fbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x427fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x427fc0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x427FC0u;
    {
        const bool branch_taken_0x427fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x427FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427FC0u;
        // 0x427fc4: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427fc0) {
            ctx->pc = 0x427FD0u;
            goto label_427fd0;
        }
    }
    ctx->pc = 0x427FC8u;
    // 0x427fc8: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x427FC8u;
    SET_GPR_U32(ctx, 31, 0x427FD0u);
    ctx->pc = 0x427FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427FC8u;
    // 0x427fcc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x427FC8u, 0x427FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427FD0u;
label_427fd0:
    // 0x427fd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x427fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427fd4: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x427FD4u;
    SET_GPR_U32(ctx, 31, 0x427FDCu);
    ctx->pc = 0x427FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x427FD4u;
    // 0x427fd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x427FD4u, 0x427FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x427FDCu;
label_427fdc:
    // 0x427fdc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x427fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x427fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x427fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427fe4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x427fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x427fe8: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x427fe8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427fec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x427fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x427ff0: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x427ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x427ff4: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x427ff4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x427ff8: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x427ff8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x427ffc: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x427ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x428000: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x428000u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x428004: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x428004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428008: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x428008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x42800c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x42800cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x428010: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x428010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x428014: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x428014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x428018: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x428018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x42801c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x42801cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x428020: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x428020u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x428024: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x428024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428028: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x42802c: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x42802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x428030: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x428030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x428034: 0xdca26df8  ld          $v0, 0x6DF8($a1)
    ctx->pc = 0x428034u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DF8u));
    // 0x428038: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428038u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x42803c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x42803cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x428040: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x428040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x428044: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x428044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x428048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x428048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42804c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x42804cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x428050: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x428050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x428054: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x428054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x428058: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x428058u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x42805c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x42805cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x428060: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x428060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x428064: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x428064u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x428068: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x428068u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x42806c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x42806cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x428070: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x428070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x428074: 0x3e00008  jr          $ra
    ctx->pc = 0x428074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428074u;
        // 0x428078: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x428074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42807Cu;
    // 0x42807c: 0x0  nop
    ctx->pc = 0x42807cu;
    // NOP
    ctx->pc = 0x428080u;
}
