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

// Function: sub_004252C8
// Address: 0x4252c8 - 0x425d78
void sub_004252C8_0x4252c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004252C8_0x4252c8");
#endif

    switch (ctx->pc) {
        case 0x425384u: goto label_425384;
        case 0x4253a0u: goto label_4253a0;
        case 0x4253d0u: goto label_4253d0;
        case 0x4253dcu: goto label_4253dc;
        case 0x4253f0u: goto label_4253f0;
        case 0x425418u: goto label_425418;
        case 0x425440u: goto label_425440;
        case 0x425474u: goto label_425474;
        case 0x425488u: goto label_425488;
        case 0x425520u: goto label_425520;
        case 0x425530u: goto label_425530;
        case 0x4255a8u: goto label_4255a8;
        case 0x425694u: goto label_425694;
        case 0x4256a4u: goto label_4256a4;
        case 0x425c80u: goto label_425c80;
        case 0x425cc8u: goto label_425cc8;
        case 0x425cd4u: goto label_425cd4;
        default: break;
    }

    ctx->pc = 0x4252c8u;

    // 0x4252c8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4252c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x4252cc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4252ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4252d0: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x4252d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x4252d4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x4252d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x4252d8: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x4252d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x4252dc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4252dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4252e0: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x4252e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x4252e4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4252e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4252e8: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x4252e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x4252ec: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x4252ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x4252f0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x4252f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x4252f4: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x4252f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x4252f8: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x4252f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x4252fc: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x4252fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x425300: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x425300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x425304: 0x8c446b80  lw          $a0, 0x6B80($v0)
    ctx->pc = 0x425304u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x596B80u));
    // 0x425308: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x425308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x42530c: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x42530cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x425310: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x425310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x425314: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x425314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x425318: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x425318u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42531c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x425320: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x425320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x425324: 0xdc430028  ld          $v1, 0x28($v0)
    ctx->pc = 0x425324u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x425328: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x425328u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42532c: 0xffa30060  sd          $v1, 0x60($sp)
    ctx->pc = 0x42532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 3));
    // 0x425330: 0xdc430030  ld          $v1, 0x30($v0)
    ctx->pc = 0x425330u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x425334: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x425334u;
    {
        const bool branch_taken_0x425334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x425338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425334u;
        // 0x425338: 0xffa30068  sd          $v1, 0x68($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425334) {
            ctx->pc = 0x425348u;
            goto label_425348;
        }
    }
    ctx->pc = 0x42533Cu;
    // 0x42533c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42533cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x425340: 0xdca56df8  ld          $a1, 0x6DF8($a1)
    ctx->pc = 0x425340u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x596DF8u));
    // 0x425344: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x425344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
label_425348:
    // 0x425348: 0xdc450038  ld          $a1, 0x38($v0)
    ctx->pc = 0x425348u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x42534c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x42534cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x425350: 0xde026de8  ld          $v0, 0x6DE8($s0)
    ctx->pc = 0x425350u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DE8u));
    // 0x425354: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x425354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x425358: 0xdc846dd8  ld          $a0, 0x6DD8($a0)
    ctx->pc = 0x425358u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x596DD8u));
    // 0x42535c: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x42535cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x425360: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x425360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x425364: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x425364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
    // 0x425368: 0xffa40078  sd          $a0, 0x78($sp)
    ctx->pc = 0x425368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 4));
    // 0x42536c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x425370: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x425370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x425374: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x425374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425378: 0xafbd0080  sw          $sp, 0x80($sp)
    ctx->pc = 0x425378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 29));
    // 0x42537c: 0xc066196  jal         func_198658
    ctx->pc = 0x42537Cu;
    SET_GPR_U32(ctx, 31, 0x425384u);
    ctx->pc = 0x425380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42537Cu;
    // 0x425380: 0xafbd0084  sw          $sp, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198658u, 0x42537Cu, 0x425384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425384u;
label_425384:
    // 0x425384: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x425384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
    // 0x425388: 0xffa00048  sd          $zero, 0x48($sp)
    ctx->pc = 0x425388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 0));
    // 0x42538c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x42538cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x425390: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x425390u;
    {
        const bool branch_taken_0x425390 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x425394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425390u;
        // 0x425394: 0xac40711c  sw          $zero, 0x711C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28956), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425390) {
            ctx->pc = 0x4253C0u;
            goto label_4253c0;
        }
    }
    ctx->pc = 0x425398u;
    // 0x425398: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x425398u;
    SET_GPR_U32(ctx, 31, 0x4253A0u);
    ctx->pc = 0x42539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425398u;
    // 0x42539c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x425398u, 0x4253A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4253A0u;
label_4253a0:
    // 0x4253a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4253a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4253a4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4253a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4253a8: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x4253a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x4253ac: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4253acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x4253b0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4253B0u;
    {
        const bool branch_taken_0x4253b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4253B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4253B0u;
        // 0x4253b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4253b0) {
            ctx->pc = 0x4253C0u;
            goto label_4253c0;
        }
    }
    ctx->pc = 0x4253B8u;
    // 0x4253b8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4253b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4253bc: 0xac62711c  sw          $v0, 0x711C($v1)
    ctx->pc = 0x4253bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x59711Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59711Cu, _value); } while (0);
label_4253c0:
    // 0x4253c0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x4253C0u;
    {
        const bool branch_taken_0x4253c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4253c0) {
            ctx->pc = 0x4253DCu;
            goto label_4253dc;
        }
    }
    ctx->pc = 0x4253C8u;
    // 0x4253c8: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x4253C8u;
    SET_GPR_U32(ctx, 31, 0x4253D0u);
    ctx->pc = 0x4253CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4253C8u;
    // 0x4253cc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x4253C8u, 0x4253D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4253D0u;
label_4253d0:
    // 0x4253d0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4253d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4253d4: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x4253D4u;
    SET_GPR_U32(ctx, 31, 0x4253DCu);
    ctx->pc = 0x4253D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4253D4u;
    // 0x4253d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x4253D4u, 0x4253DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4253DCu;
label_4253dc:
    // 0x4253dc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4253DCu;
    {
        const bool branch_taken_0x4253dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4253dc) {
            ctx->pc = 0x4253F0u;
            goto label_4253f0;
        }
    }
    ctx->pc = 0x4253E4u;
    // 0x4253e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4253e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4253e8: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x4253E8u;
    SET_GPR_U32(ctx, 31, 0x4253F0u);
    ctx->pc = 0x4253ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4253E8u;
    // 0x4253ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x4253E8u, 0x4253F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4253F0u;
label_4253f0:
    // 0x4253f0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4253F0u;
    {
        const bool branch_taken_0x4253f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4253F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4253F0u;
        // 0x4253f4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4253f0) {
            ctx->pc = 0x425418u;
            goto label_425418;
        }
    }
    ctx->pc = 0x4253F8u;
    // 0x4253f8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4253f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4253fc: 0x8c437110  lw          $v1, 0x7110($v0)
    ctx->pc = 0x4253fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28944)));
    // 0x425400: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x425400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x425404: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x425404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x425408: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x425408u;
    {
        const bool branch_taken_0x425408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x425408) {
            ctx->pc = 0x425418u;
            goto label_425418;
        }
    }
    ctx->pc = 0x425410u;
    // 0x425410: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x425410u;
    SET_GPR_U32(ctx, 31, 0x425418u);
    ctx->pc = 0x425414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425410u;
    // 0x425414: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x425410u, 0x425418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425418u;
label_425418:
    // 0x425418: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x425418u;
    {
        const bool branch_taken_0x425418 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425418u;
        // 0x42541c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425418) {
            ctx->pc = 0x4254D0u;
            goto label_4254d0;
        }
    }
    ctx->pc = 0x425420u;
    // 0x425420: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x425420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425424: 0x8c437110  lw          $v1, 0x7110($v0)
    ctx->pc = 0x425424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28944)));
    // 0x425428: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x425428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x42542c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x42542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x425430: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x425430u;
    {
        const bool branch_taken_0x425430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425430u;
        // 0x425434: 0x3c070059  lui         $a3, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425430) {
            ctx->pc = 0x425444u;
            goto label_425444;
        }
    }
    ctx->pc = 0x425438u;
    // 0x425438: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x425438u;
    SET_GPR_U32(ctx, 31, 0x425440u);
    ctx->pc = 0x42543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425438u;
    // 0x42543c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x425438u, 0x425440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425440u;
label_425440:
    // 0x425440: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x425440u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_425444:
    // 0x425444: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x425444u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425448: 0xdce26e20  ld          $v0, 0x6E20($a3)
    ctx->pc = 0x425448u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 28192)));
    // 0x42544c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x42544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x425450: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x425450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x425454: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x425454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x425458: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x425458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x42545c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x42545cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425460: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x425460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x425464: 0xfce26e20  sd          $v0, 0x6E20($a3)
    ctx->pc = 0x425464u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 28192), GPR_U64(ctx, 2));
    // 0x425468: 0xae087118  sw          $t0, 0x7118($s0)
    ctx->pc = 0x425468u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x597118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x597118u, _value); } while (0);
    // 0x42546c: 0xc1291e6  jal         func_4A4798
    ctx->pc = 0x42546Cu;
    SET_GPR_U32(ctx, 31, 0x425474u);
    ctx->pc = 0x425470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42546Cu;
    // 0x425470: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4798u, 0x42546Cu, 0x425474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425474u;
label_425474:
    // 0x425474: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x425474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425478: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x425478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42547c: 0x92260050  lbu         $a2, 0x50($s1)
    ctx->pc = 0x42547cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x425480: 0xc1291ee  jal         func_4A47B8
    ctx->pc = 0x425480u;
    SET_GPR_U32(ctx, 31, 0x425488u);
    ctx->pc = 0x425484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425480u;
    // 0x425484: 0x24a56e08  addiu       $a1, $a1, 0x6E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A47B8u, 0x425480u, 0x425488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425488u;
label_425488:
    // 0x425488: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x425488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x42548c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x42548cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x425490: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x425490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x425494: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x425494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x425498: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x425498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x42549c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x42549Cu;
    {
        const bool branch_taken_0x42549c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4254A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42549Cu;
        // 0x4254a0: 0xfc806e00  sd          $zero, 0x6E00($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42549c) {
            ctx->pc = 0x4254ACu;
            goto label_4254ac;
        }
    }
    ctx->pc = 0x4254A4u;
    // 0x4254a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4254a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4254a8: 0xfc826e00  sd          $v0, 0x6E00($a0)
    ctx->pc = 0x4254a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
label_4254ac:
    // 0x4254ac: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x4254acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x4254b0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x4254b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x4254b4: 0x14450010  bne         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4254B4u;
    {
        const bool branch_taken_0x4254b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4254B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4254B4u;
        // 0x4254b8: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4254b4) {
            ctx->pc = 0x4254F8u;
            goto label_4254f8;
        }
    }
    ctx->pc = 0x4254BCu;
    // 0x4254bc: 0xdc826e00  ld          $v0, 0x6E00($a0)
    ctx->pc = 0x4254bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 28160)));
    // 0x4254c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4254c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4254c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4254c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4254c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4254C8u;
    {
        const bool branch_taken_0x4254c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4254CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4254C8u;
        // 0x4254cc: 0xfc826e00  sd          $v0, 0x6E00($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4254c8) {
            ctx->pc = 0x4254F8u;
            goto label_4254f8;
        }
    }
    ctx->pc = 0x4254D0u;
label_4254d0:
    // 0x4254d0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4254d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4254d4: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x4254d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x4254d8: 0xdc626e20  ld          $v0, 0x6E20($v1)
    ctx->pc = 0x4254d8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E20u));
    // 0x4254dc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4254dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4254e0: 0xac807118  sw          $zero, 0x7118($a0)
    ctx->pc = 0x4254e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x597118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x597118u, _value); } while (0);
    // 0x4254e4: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x4254e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4254e8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4254e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4254ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4254ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4254f0: 0xfc626e20  sd          $v0, 0x6E20($v1)
    ctx->pc = 0x4254f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 28192), GPR_U64(ctx, 2));
    // 0x4254f4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4254f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4254f8:
    // 0x4254f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4254f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4254fc: 0xdca26de8  ld          $v0, 0x6DE8($a1)
    ctx->pc = 0x4254fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 28136)));
    // 0x425500: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x425500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x425504: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x425504u;
    {
        const bool branch_taken_0x425504 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x425508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425504u;
        // 0x425508: 0xfca26de8  sd          $v0, 0x6DE8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 28136), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425504) {
            ctx->pc = 0x42555Cu;
            goto label_42555c;
        }
    }
    ctx->pc = 0x42550Cu;
    // 0x42550c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x42550cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x425510: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x425510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x425514: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x425514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x425518: 0xc1291e6  jal         func_4A4798
    ctx->pc = 0x425518u;
    SET_GPR_U32(ctx, 31, 0x425520u);
    ctx->pc = 0x42551Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425518u;
    // 0x42551c: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4798u, 0x425518u, 0x425520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425520u;
label_425520:
    // 0x425520: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x425520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x425524: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x425524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x425528: 0xc1291ee  jal         func_4A47B8
    ctx->pc = 0x425528u;
    SET_GPR_U32(ctx, 31, 0x425530u);
    ctx->pc = 0x42552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425528u;
    // 0x42552c: 0x92660050  lbu         $a2, 0x50($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A47B8u, 0x425528u, 0x425530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425530u;
label_425530:
    // 0x425530: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x425530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x425534: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x425534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x425538: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x425538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x42553c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x42553cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x425540: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x425540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x425544: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x425544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x425548: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x425548u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x42554c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42554Cu;
    {
        const bool branch_taken_0x42554c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x425550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42554Cu;
        // 0x425550: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42554c) {
            ctx->pc = 0x42555Cu;
            goto label_42555c;
        }
    }
    ctx->pc = 0x425554u;
    // 0x425554: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x425554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x425558: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x425558u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_42555c:
    // 0x42555c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x42555Cu;
    {
        const bool branch_taken_0x42555c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x425560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42555Cu;
        // 0x425560: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42555c) {
            ctx->pc = 0x4255A0u;
            goto label_4255a0;
        }
    }
    ctx->pc = 0x425564u;
    // 0x425564: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x425564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x425568: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x425568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x42556c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x42556cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x425570: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x425570u;
    {
        const bool branch_taken_0x425570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x425570) {
            ctx->pc = 0x4255A0u;
            goto label_4255a0;
        }
    }
    ctx->pc = 0x425578u;
    // 0x425578: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x425578u;
    {
        const bool branch_taken_0x425578 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x425578) {
            ctx->pc = 0x4255A0u;
            goto label_4255a0;
        }
    }
    ctx->pc = 0x425580u;
    // 0x425580: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x425580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x425584: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x425584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x425588: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x425588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x42558c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42558Cu;
    {
        const bool branch_taken_0x42558c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42558c) {
            ctx->pc = 0x4255A0u;
            goto label_4255a0;
        }
    }
    ctx->pc = 0x425594u;
    // 0x425594: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x425594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x425598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x425598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x42559c: 0xae027118  sw          $v0, 0x7118($s0)
    ctx->pc = 0x42559cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28952), GPR_U32(ctx, 2));
label_4255a0:
    // 0x4255a0: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x4255A0u;
    SET_GPR_U32(ctx, 31, 0x4255A8u);
    ctx->pc = 0x4255A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4255A0u;
    // 0x4255a4: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4255A0u, 0x4255A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4255A8u;
label_4255a8:
    // 0x4255a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4255a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4255ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4255acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4255b0: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x4255b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x4255b4: 0x72821389  pcpyld      $v0, $s4, $v0
    ctx->pc = 0x4255b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
    // 0x4255b8: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x4255b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
    // 0x4255bc: 0x8e50707c  lw          $s0, 0x707C($s2)
    ctx->pc = 0x4255bcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x59707Cu));
    // 0x4255c0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x4255c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x4255c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x4255c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4255c8: 0xae50707c  sw          $s0, 0x707C($s2)
    ctx->pc = 0x4255c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x59707Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59707Cu, _value); } while (0);
    // 0x4255cc: 0x3c026c0a  lui         $v0, 0x6C0A
    ctx->pc = 0x4255ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27658 << 16));
    // 0x4255d0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x4255d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x4255d4: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x4255d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
    // 0x4255d8: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x4255d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x4255dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4255dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4255e0: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x4255e0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4255e4: 0x72311cc8  ppacw       $v1, $s1, $s1
    ctx->pc = 0x4255e4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 17)));
    // 0x4255e8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x4255e8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4255ec: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x4255ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x4255f0: 0x92c30029  lbu         $v1, 0x29($s6)
    ctx->pc = 0x4255f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x4255f4: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x4255f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x4255f8: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x4255f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
    // 0x4255fc: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x4255fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x425600: 0x92c20028  lbu         $v0, 0x28($s6)
    ctx->pc = 0x425600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x425604: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x425604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x425608: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x425608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x42560c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x42560cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x425610: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x425610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x425614: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x425614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x425618: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x425618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x42561c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x42561cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x425620: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x425620u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x425624: 0x70b51389  pcpyld      $v0, $a1, $s5
    ctx->pc = 0x425624u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 21)));
    // 0x425628: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x425628u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x42562c: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x42562cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x425630: 0x15ab7c  dsll32      $s5, $s5, 13
    ctx->pc = 0x425630u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 13));
    // 0x425634: 0x36b58002  ori         $s5, $s5, 0x8002
    ctx->pc = 0x425634u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32770);
    // 0x425638: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x425638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x42563c: 0x72751389  pcpyld      $v0, $s3, $s5
    ctx->pc = 0x42563cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 21)));
    // 0x425640: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x425640u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x425644: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x425644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x425648: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x425648u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42564c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x42564cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425650: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x425650u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x425654: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x425654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x425658: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x425658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x42565c: 0xdc626df8  ld          $v0, 0x6DF8($v1)
    ctx->pc = 0x42565cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DF8u));
    // 0x425660: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x425660u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x425664: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x425664u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x425668: 0x72751389  pcpyld      $v0, $s3, $s5
    ctx->pc = 0x425668u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 21)));
    // 0x42566c: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x42566cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x425670: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x425670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x425674: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x425674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x425678: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425678u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x42567c: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x42567cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x425680: 0xdfa50068  ld          $a1, 0x68($sp)
    ctx->pc = 0x425680u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x425684: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x425684u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x425688: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x425688u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x42568c: 0xc064a30  jal         func_1928C0
    ctx->pc = 0x42568Cu;
    SET_GPR_U32(ctx, 31, 0x425694u);
    ctx->pc = 0x425690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42568Cu;
    // 0x425690: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x42568Cu, 0x425694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425694u;
label_425694:
    // 0x425694: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x425694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x425698: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x425698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x42569c: 0xc064a3c  jal         func_1928F0
    ctx->pc = 0x42569Cu;
    SET_GPR_U32(ctx, 31, 0x4256A4u);
    ctx->pc = 0x4256A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42569Cu;
    // 0x4256a0: 0xdfb50058  ld          $s5, 0x58($sp) (Delay Slot)
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928F0u, 0x42569Cu, 0x4256A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4256A4u;
label_4256a4:
    // 0x4256a4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x4256a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x4256a8: 0xdfa20058  ld          $v0, 0x58($sp)
    ctx->pc = 0x4256a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4256ac: 0x70551389  pcpyld      $v0, $v0, $s5
    ctx->pc = 0x4256acu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
    // 0x4256b0: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x4256b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x4256b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x4256b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4256b8: 0xdc550010  ld          $s5, 0x10($v0)
    ctx->pc = 0x4256b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4256bc: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x4256bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x4256c0: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4256c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4256c4: 0x70551389  pcpyld      $v0, $v0, $s5
    ctx->pc = 0x4256c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
    // 0x4256c8: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x4256c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x4256cc: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x4256ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4256d0: 0xdcb50030  ld          $s5, 0x30($a1)
    ctx->pc = 0x4256d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4256d4: 0xdc620030  ld          $v0, 0x30($v1)
    ctx->pc = 0x4256d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x4256d8: 0x70551389  pcpyld      $v0, $v0, $s5
    ctx->pc = 0x4256d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
    // 0x4256dc: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x4256dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    // 0x4256e0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x4256e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x4256e4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x4256e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x4256e8: 0x72311cc8  ppacw       $v1, $s1, $s1
    ctx->pc = 0x4256e8u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 17)));
    // 0x4256ec: 0x705114c8  ppacw       $v0, $v0, $s1
    ctx->pc = 0x4256ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x4256f0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x4256f0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4256f4: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x4256f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x4256f8: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x4256f8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4256fc: 0x15ab7c  dsll32      $s5, $s5, 13
    ctx->pc = 0x4256fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 13));
    // 0x425700: 0x36b58005  ori         $s5, $s5, 0x8005
    ctx->pc = 0x425700u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32773);
    // 0x425704: 0x72751389  pcpyld      $v0, $s3, $s5
    ctx->pc = 0x425704u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 21)));
    // 0x425708: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x425708u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x42570c: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x42570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x425710: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x425710u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x425714: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x425714u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x425718: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x425718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x42571c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x42571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x425720: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x425720u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x425724: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x425724u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x425728: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x425728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x42572c: 0xdfa50070  ld          $a1, 0x70($sp)
    ctx->pc = 0x42572cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x425730: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x425730u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x425734: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x425734u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x425738: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x425738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x42573c: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x42573cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x425740: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425740u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425744: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x425744u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x425748: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x425748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x42574c: 0xdfa30078  ld          $v1, 0x78($sp)
    ctx->pc = 0x42574cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x425750: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x425750u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x425754: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x425754u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
    // 0x425758: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x425758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x42575c: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x42575cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425760: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x425760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x425764: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x425764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x425768: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x425768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x42576c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x42576cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x425770: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x425770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x425774: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x425774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x425778: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x425778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x42577c: 0x70942389  pcpyld      $a0, $a0, $s4
    ctx->pc = 0x42577cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 20)));
    // 0x425780: 0x7e040120  sq          $a0, 0x120($s0)
    ctx->pc = 0x425780u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 288), GPR_VEC(ctx, 4));
    // 0x425784: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x425784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x425788: 0xae50707c  sw          $s0, 0x707C($s2)
    ctx->pc = 0x425788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 16));
    // 0x42578c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x42578cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x425790: 0x92c20047  lbu         $v0, 0x47($s6)
    ctx->pc = 0x425790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 71)));
    // 0x425794: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x425794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x425798: 0x8ca3711c  lw          $v1, 0x711C($a1)
    ctx->pc = 0x425798u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x59711Cu));
    // 0x42579c: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x42579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x4257a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4257a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4257a4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4257a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4257a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4257A8u;
    {
        const bool branch_taken_0x4257a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4257ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4257A8u;
        // 0x4257ac: 0xac827120  sw          $v0, 0x7120($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4257a8) {
            ctx->pc = 0x4257C0u;
            goto label_4257c0;
        }
    }
    ctx->pc = 0x4257B0u;
    // 0x4257b0: 0xdfc26e20  ld          $v0, 0x6E20($fp)
    ctx->pc = 0x4257b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x4257b4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x4257b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4257b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4257B8u;
    {
        const bool branch_taken_0x4257b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4257BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4257B8u;
        // 0x4257bc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4257b8) {
            ctx->pc = 0x4257CCu;
            goto label_4257cc;
        }
    }
    ctx->pc = 0x4257C0u;
label_4257c0:
    // 0x4257c0: 0xdfc26e20  ld          $v0, 0x6E20($fp)
    ctx->pc = 0x4257c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x4257c4: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x4257c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x4257c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4257c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4257cc:
    // 0x4257cc: 0xffc26e20  sd          $v0, 0x6E20($fp)
    ctx->pc = 0x4257ccu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 28192), GPR_U64(ctx, 2));
    // 0x4257d0: 0x92c60029  lbu         $a2, 0x29($s6)
    ctx->pc = 0x4257d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x4257d4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4257d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4257d8: 0x8fc26e20  lw          $v0, 0x6E20($fp)
    ctx->pc = 0x4257d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x4257dc: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x4257dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x4257e0: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x4257e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x4257e4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4257e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4257e8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x4257e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x4257ec: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4257ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4257f0: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x4257f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x4257f4: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x4257f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x4257f8: 0xdc64f750  ld          $a0, -0x8B0($v1)
    ctx->pc = 0x4257f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294965072)));
    // 0x4257fc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4257fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x425800: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x425800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
    // 0x425804: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x425804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x425808: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x425808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x42580c: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x42580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x425810: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x425810u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x425814: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x425814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x425818: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x425818u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x42581c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x42581cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x425820: 0x8e46707c  lw          $a2, 0x707C($s2)
    ctx->pc = 0x425820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x425824: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x425824u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x425828: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x425828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x42582c: 0xae46707c  sw          $a2, 0x707C($s2)
    ctx->pc = 0x42582cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 6));
    // 0x425830: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x425830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x425834: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x425834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x425838: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x425838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x42583c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x42583cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x425840: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x425840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x425844: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x425844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x425848: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x425848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x42584c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42584cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425850: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x425850u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x425854: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x425854u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x425858: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x425858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x42585c: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x42585cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x425860: 0xdfc26e20  ld          $v0, 0x6E20($fp)
    ctx->pc = 0x425860u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x425864: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x425864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x425868: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x425868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x42586c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x42586cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x425870: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x425870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x425874: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x425874u;
    {
        const bool branch_taken_0x425874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425874u;
        // 0x425878: 0x92c20044  lbu         $v0, 0x44($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425874) {
            ctx->pc = 0x425888u;
            goto label_425888;
        }
    }
    ctx->pc = 0x42587Cu;
    // 0x42587c: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x42587cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x425880: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x425880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x425884: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x425884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_425888:
    // 0x425888: 0x92c30045  lbu         $v1, 0x45($s6)
    ctx->pc = 0x425888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 69)));
    // 0x42588c: 0x92c40046  lbu         $a0, 0x46($s6)
    ctx->pc = 0x42588cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 70)));
    // 0x425890: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x425890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x425894: 0x0  nop
    ctx->pc = 0x425894u;
    // NOP
    // 0x425898: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x425898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x42589c: 0x92c50047  lbu         $a1, 0x47($s6)
    ctx->pc = 0x42589cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 71)));
    // 0x4258a0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4258a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4258a4: 0x0  nop
    ctx->pc = 0x4258a4u;
    // NOP
    // 0x4258a8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4258a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4258ac: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4258acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4258b0: 0x0  nop
    ctx->pc = 0x4258b0u;
    // NOP
    // 0x4258b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4258b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4258b8: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x4258b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x4258bc: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x4258bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x4258c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4258c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4258c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4258c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4258c8: 0x0  nop
    ctx->pc = 0x4258c8u;
    // NOP
    // 0x4258cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4258ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4258d0: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x4258d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4258d4: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x4258d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x4258d8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x4258d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4258dc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x4258dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4258e0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x4258e0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x4258e4: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x4258e4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x4258e8: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x4258e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x4258ec: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x4258ecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x4258f0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x4258f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4258f4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x4258f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4258f8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x4258f8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4258fc: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x4258fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x425900: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x425900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x425904: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x425904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x425908: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x425908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x42590c: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x42590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x425910: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x425910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x425914: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x425914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x425918: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x425918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x42591c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x42591cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x425920: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x425920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x425924: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x425924u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x425928: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x425928u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x42592c: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x42592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x425930: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x425930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x425934: 0x8ec2003c  lw          $v0, 0x3C($s6)
    ctx->pc = 0x425934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x425938: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x425938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x42593c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x42593cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x425940: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x425940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x425944: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x425944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x425948: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x425948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x42594c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x42594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x425950: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x425950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x425954: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x425954u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x425958: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x425958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x42595c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x42595cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x425960: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x425960u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x425964: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x425964u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x425968: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x425968u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x42596c: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x42596cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x425970: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x425970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x425974: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x425974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x425978: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x425978u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x42597c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x42597cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x425980: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x425980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x425984: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x425984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x425988: 0x92c20028  lbu         $v0, 0x28($s6)
    ctx->pc = 0x425988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x42598c: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x42598cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x425990: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x425990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x425994: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x425994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x425998: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x425998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x42599c: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x42599cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x4259a0: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x4259a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x4259a4: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x4259a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x4259a8: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x4259a8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x4259ac: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x4259acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4259b0: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x4259b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x4259b4: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x4259b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x4259b8: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x4259b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x4259bc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4259bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4259c0: 0x8c626e80  lw          $v0, 0x6E80($v1)
    ctx->pc = 0x4259c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x596E80u));
    // 0x4259c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4259C4u;
    {
        const bool branch_taken_0x4259c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4259C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4259C4u;
        // 0x4259c8: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4259c4) {
            ctx->pc = 0x4259D8u;
            goto label_4259d8;
        }
    }
    ctx->pc = 0x4259CCu;
    // 0x4259cc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4259CCu;
    {
        const bool branch_taken_0x4259cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4259cc) {
            ctx->pc = 0x4259D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4259CCu;
            // 0x4259d0: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4259F8u;
            goto label_4259f8;
        }
    }
    ctx->pc = 0x4259D4u;
    // 0x4259d4: 0x0  nop
    ctx->pc = 0x4259d4u;
    // NOP
label_4259d8:
    // 0x4259d8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4259d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4259dc: 0x8c436e84  lw          $v1, 0x6E84($v0)
    ctx->pc = 0x4259dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x596E84u));
    // 0x4259e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4259E0u;
    {
        const bool branch_taken_0x4259e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4259E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4259E0u;
        // 0x4259e4: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4259e0) {
            ctx->pc = 0x425A20u;
            goto label_425a20;
        }
    }
    ctx->pc = 0x4259E8u;
    // 0x4259e8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4259E8u;
    {
        const bool branch_taken_0x4259e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4259e8) {
            ctx->pc = 0x4259ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4259E8u;
            // 0x4259ec: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x425A28u;
            goto label_425a28;
        }
    }
    ctx->pc = 0x4259F0u;
    // 0x4259f0: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x4259f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x4259f4: 0x0  nop
    ctx->pc = 0x4259f4u;
    // NOP
label_4259f8:
    // 0x4259f8: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x4259f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x4259fc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4259fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x425a00: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x425a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
    // 0x425a04: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x425a04u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7F0u));
    // 0x425a08: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x425a08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x425a0c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x425a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x425a10: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x425a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x425a14: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x425a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x425a18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x425A18u;
    {
        const bool branch_taken_0x425a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425A18u;
        // 0x425a1c: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425a18) {
            ctx->pc = 0x425A48u;
            goto label_425a48;
        }
    }
    ctx->pc = 0x425A20u;
label_425a20:
    // 0x425a20: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x425a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x425a24: 0x0  nop
    ctx->pc = 0x425a24u;
    // NOP
label_425a28:
    // 0x425a28: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x425a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x425a2c: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x425a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x425a30: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x425a30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x425a34: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x425a34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x425a38: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x425a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x425a3c: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x425a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x425a40: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x425a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x425a44: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x425a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
label_425a48:
    // 0x425a48: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x425a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x425a4c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x425a4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x425a50: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x425a50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x425a54: 0xae45707c  sw          $a1, 0x707C($s2)
    ctx->pc = 0x425a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 5));
    // 0x425a58: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x425a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x425a5c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x425a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x425a60: 0x8c447124  lw          $a0, 0x7124($v0)
    ctx->pc = 0x425a60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597124u));
    // 0x425a64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x425a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x425a68: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x425A68u;
    {
        const bool branch_taken_0x425a68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x425A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425A68u;
        // 0x425a6c: 0xaca06e78  sw          $zero, 0x6E78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425a68) {
            ctx->pc = 0x425A78u;
            goto label_425a78;
        }
    }
    ctx->pc = 0x425A70u;
    // 0x425a70: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x425a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x425a74: 0xaca26e78  sw          $v0, 0x6E78($a1)
    ctx->pc = 0x425a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 2));
label_425a78:
    // 0x425a78: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x425a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x425a7c: 0x9ca56e78  lwu         $a1, 0x6E78($a1)
    ctx->pc = 0x425a7cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 28280)));
    // 0x425a80: 0x9c826e7c  lwu         $v0, 0x6E7C($a0)
    ctx->pc = 0x425a80u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x596E7Cu));
    // 0x425a84: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x425a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x425a88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x425a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x425a8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x425a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x425a90: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x425a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x425a94: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x425a94u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x425a98: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x425a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x425a9c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x425a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x425aa0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x425aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x425aa4: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x425aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x425aa8: 0x8ec20040  lw          $v0, 0x40($s6)
    ctx->pc = 0x425aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x425aac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x425AACu;
    {
        const bool branch_taken_0x425aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x425AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425AACu;
        // 0x425ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425aac) {
            ctx->pc = 0x425B40u;
            goto label_425b40;
        }
    }
    ctx->pc = 0x425AB4u;
    // 0x425ab4: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x425ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x425ab8: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x425ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x425abc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x425abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x425ac0: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x425ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x425ac4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425ac4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425ac8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x425ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x425acc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x425accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x425ad0: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425ad4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x425ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x425ad8: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x425ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x425adc: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x425adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x425ae0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x425ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x425ae4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425ae4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425ae8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x425ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x425aec: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x425aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x425af0: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425af4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x425af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x425af8: 0xdc626de8  ld          $v0, 0x6DE8($v1)
    ctx->pc = 0x425af8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DE8u));
    // 0x425afc: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x425afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x425b00: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425b00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425b04: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x425b04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x425b08: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x425b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x425b0c: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425b10: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x425b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x425b14: 0xdc626e08  ld          $v0, 0x6E08($v1)
    ctx->pc = 0x425b14u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E08u));
    // 0x425b18: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x425b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x425b1c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425b1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425b20: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x425b20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x425b24: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x425b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x425b28: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425b28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425b2c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x425b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x425b30: 0xdc626e00  ld          $v0, 0x6E00($v1)
    ctx->pc = 0x425b30u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E00u));
    // 0x425b34: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x425B34u;
    {
        const bool branch_taken_0x425b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x425B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425B34u;
        // 0x425b38: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425b34) {
            ctx->pc = 0x425BB0u;
            goto label_425bb0;
        }
    }
    ctx->pc = 0x425B3Cu;
    // 0x425b3c: 0x0  nop
    ctx->pc = 0x425b3cu;
    // NOP
label_425b40:
    // 0x425b40: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x425b40u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x425b44: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x425b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x425b48: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x425b48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x425b4c: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425b50: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x425b50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x425b54: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x425b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x425b58: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425b5c: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x425b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x425b60: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x425b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x425b64: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x425b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x425b68: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x425b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x425b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x425b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425b70: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425b70u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425b74: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x425b74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x425b78: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x425b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x425b7c: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425b80: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x425b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x425b84: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x425b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x425b88: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x425b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x425b8c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x425b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x425b90: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425b90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425b94: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x425b94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x425b98: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x425b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x425b9c: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425ba0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x425ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x425ba4: 0xdc626de8  ld          $v0, 0x6DE8($v1)
    ctx->pc = 0x425ba4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DE8u));
    // 0x425ba8: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x425ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x425bac: 0x0  nop
    ctx->pc = 0x425bacu;
    // NOP
label_425bb0:
    // 0x425bb0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425bb0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425bb4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x425bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x425bb8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x425bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x425bbc: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425bc0: 0x92c30028  lbu         $v1, 0x28($s6)
    ctx->pc = 0x425bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x425bc4: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x425bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x425bc8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x425bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x425bcc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x425bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x425bd0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x425bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x425bd4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x425bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x425bd8: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x425bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x425bdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x425bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x425be0: 0xa2c2002b  sb          $v0, 0x2B($s6)
    ctx->pc = 0x425be0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x425be4: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x425be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x425be8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x425be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x425bec: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x425becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x425bf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x425bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x425bf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x425bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x425bf8: 0x8cc36e74  lw          $v1, 0x6E74($a2)
    ctx->pc = 0x425bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28276)));
    // 0x425bfc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x425bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x425c00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x425c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x425c04: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x425C04u;
    {
        const bool branch_taken_0x425c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x425C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425C04u;
        // 0x425c08: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425c04) {
            ctx->pc = 0x425C30u;
            goto label_425c30;
        }
    }
    ctx->pc = 0x425C0Cu;
    // 0x425c0c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x425c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x425c10: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x425c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x425c14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x425c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425c18: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x425c18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x425c1c: 0x8e43707c  lw          $v1, 0x707C($s2)
    ctx->pc = 0x425c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x425c20: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x425c20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x425c24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x425c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x425c28: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x425c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x425c2c: 0xacc56e74  sw          $a1, 0x6E74($a2)
    ctx->pc = 0x425c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28276), GPR_U32(ctx, 5));
label_425c30:
    // 0x425c30: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x425c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x425c34: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x425c34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x425c38: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x425c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x425c3c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x425c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x425c40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x425c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x425c44: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x425c44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x425c48: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x425c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x425c4c: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x425c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x425c50: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x425c50u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x425c54: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x425c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x425c58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x425c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x425c5c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x425c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x425c60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x425c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x425c64: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x425c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x425c68: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x425c68u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x425c6c: 0x8e43707c  lw          $v1, 0x707C($s2)
    ctx->pc = 0x425c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x425c70: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x425c70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x425c74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x425c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x425c78: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x425c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x425c7c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x425c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_425c80:
    // 0x425c80: 0x42000039  di
    ctx->pc = 0x425c80u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x425c84: 0x40f  sync.p
    ctx->pc = 0x425c84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x425c88: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x425c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x425c8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x425c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x425c90: 0x0  nop
    ctx->pc = 0x425c90u;
    // NOP
    // 0x425c94: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x425C94u;
    {
        const bool branch_taken_0x425c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x425c94) {
            ctx->pc = 0x425C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_425c80;
        }
    }
    ctx->pc = 0x425C9Cu;
    // 0x425c9c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x425c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x425ca0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x425ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x425ca4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x425ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x425ca8: 0x42000038  ei
    ctx->pc = 0x425ca8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x425cac: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x425cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x425cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x425cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x425cb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x425cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x425cb8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x425CB8u;
    {
        const bool branch_taken_0x425cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x425CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425CB8u;
        // 0x425cbc: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425cb8) {
            ctx->pc = 0x425CC8u;
            goto label_425cc8;
        }
    }
    ctx->pc = 0x425CC0u;
    // 0x425cc0: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x425CC0u;
    SET_GPR_U32(ctx, 31, 0x425CC8u);
    ctx->pc = 0x425CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425CC0u;
    // 0x425cc4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x425CC0u, 0x425CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425CC8u;
label_425cc8:
    // 0x425cc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x425cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425ccc: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x425CCCu;
    SET_GPR_U32(ctx, 31, 0x425CD4u);
    ctx->pc = 0x425CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425CCCu;
    // 0x425cd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x425CCCu, 0x425CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425CD4u;
label_425cd4:
    // 0x425cd4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x425cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x425cd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x425cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x425cdc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x425cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x425ce0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x425ce0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425ce4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x425ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x425ce8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x425ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x425cec: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x425cecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x425cf0: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x425cf0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425cf4: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x425cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x425cf8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x425cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x425cfc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x425cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x425d00: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x425d00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x425d04: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x425d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x425d08: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x425d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x425d0c: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x425d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x425d10: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x425d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x425d14: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x425d14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x425d18: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x425d18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x425d1c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x425d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x425d20: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x425d20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x425d24: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x425d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x425d28: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x425d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x425d2c: 0xdca26df8  ld          $v0, 0x6DF8($a1)
    ctx->pc = 0x425d2cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DF8u));
    // 0x425d30: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x425d30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x425d34: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x425d34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x425d38: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x425d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x425d3c: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x425d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x425d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x425d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x425d44: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x425d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x425d48: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x425d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x425d4c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x425d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x425d50: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x425d50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x425d54: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x425d54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x425d58: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x425d58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x425d5c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x425d5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x425d60: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x425d60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x425d64: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x425d64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x425d68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x425d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x425d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x425D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425D6Cu;
        // 0x425d70: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x425D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x425D74u;
    // 0x425d74: 0x0  nop
    ctx->pc = 0x425d74u;
    // NOP
    ctx->pc = 0x425d78u;
}
