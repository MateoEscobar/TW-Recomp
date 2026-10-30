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

// Function: sub_00428410
// Address: 0x428410 - 0x428f30
void sub_00428410_0x428410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428410_0x428410");
#endif

    switch (ctx->pc) {
        case 0x4284d4u: goto label_4284d4;
        case 0x4284f0u: goto label_4284f0;
        case 0x428520u: goto label_428520;
        case 0x42852cu: goto label_42852c;
        case 0x428540u: goto label_428540;
        case 0x428568u: goto label_428568;
        case 0x428590u: goto label_428590;
        case 0x4285c4u: goto label_4285c4;
        case 0x4285d8u: goto label_4285d8;
        case 0x428670u: goto label_428670;
        case 0x428680u: goto label_428680;
        case 0x4286f8u: goto label_4286f8;
        case 0x4287e4u: goto label_4287e4;
        case 0x4287f4u: goto label_4287f4;
        case 0x428dc8u: goto label_428dc8;
        case 0x428e10u: goto label_428e10;
        case 0x428e1cu: goto label_428e1c;
        case 0x428e98u: goto label_428e98;
        case 0x428ea4u: goto label_428ea4;
        default: break;
    }

    ctx->pc = 0x428410u;

    // 0x428410: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x428410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x428414: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x428414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x428418: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x428418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x42841c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x42841cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x428420: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x428420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x428424: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x428424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428428: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x428428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x42842c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x42842cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428430: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x428430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x428434: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x428434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x428438: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x428438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x42843c: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x42843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x428440: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x428440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x428444: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x428444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x428448: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x428448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x42844c: 0x8c446b80  lw          $a0, 0x6B80($v0)
    ctx->pc = 0x42844cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x596B80u));
    // 0x428450: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x428450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x428454: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x428454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x428458: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x428458u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42845c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x428460: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x428460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x428464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x428464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x428468: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x428468u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x42846c: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x42846cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x428470: 0xdc430028  ld          $v1, 0x28($v0)
    ctx->pc = 0x428470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x428474: 0xffa300a0  sd          $v1, 0xA0($sp)
    ctx->pc = 0x428474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 3));
    // 0x428478: 0xdc430030  ld          $v1, 0x30($v0)
    ctx->pc = 0x428478u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x42847c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x42847Cu;
    {
        const bool branch_taken_0x42847c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x428480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42847Cu;
        // 0x428480: 0xffa300a8  sd          $v1, 0xA8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42847c) {
            ctx->pc = 0x428490u;
            goto label_428490;
        }
    }
    ctx->pc = 0x428484u;
    // 0x428484: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x428484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x428488: 0xdca56df8  ld          $a1, 0x6DF8($a1)
    ctx->pc = 0x428488u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x596DF8u));
    // 0x42848c: 0xffa500a8  sd          $a1, 0xA8($sp)
    ctx->pc = 0x42848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 5));
label_428490:
    // 0x428490: 0xdc450038  ld          $a1, 0x38($v0)
    ctx->pc = 0x428490u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x428494: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x428494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x428498: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x428498u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x42849c: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x42849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x4284a0: 0xde026de8  ld          $v0, 0x6DE8($s0)
    ctx->pc = 0x4284a0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DE8u));
    // 0x4284a4: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x4284a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
    // 0x4284a8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4284a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4284ac: 0xffa00090  sd          $zero, 0x90($sp)
    ctx->pc = 0x4284acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 0));
    // 0x4284b0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4284b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4284b4: 0xdc636dd8  ld          $v1, 0x6DD8($v1)
    ctx->pc = 0x4284b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 28120)));
    // 0x4284b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4284b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4284bc: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x4284bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x4284c0: 0xffa300b8  sd          $v1, 0xB8($sp)
    ctx->pc = 0x4284c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 3));
    // 0x4284c4: 0xffa200b0  sd          $v0, 0xB0($sp)
    ctx->pc = 0x4284c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x4284c8: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x4284c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x4284cc: 0xc066196  jal         func_198658
    ctx->pc = 0x4284CCu;
    SET_GPR_U32(ctx, 31, 0x4284D4u);
    ctx->pc = 0x4284D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4284CCu;
    // 0x4284d0: 0xafa500c0  sw          $a1, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198658u, 0x4284CCu, 0x4284D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4284D4u;
label_4284d4:
    // 0x4284d4: 0xffa00080  sd          $zero, 0x80($sp)
    ctx->pc = 0x4284d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 0));
    // 0x4284d8: 0xffa00088  sd          $zero, 0x88($sp)
    ctx->pc = 0x4284d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 0));
    // 0x4284dc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4284dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4284e0: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x4284E0u;
    {
        const bool branch_taken_0x4284e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4284E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4284E0u;
        // 0x4284e4: 0xac40711c  sw          $zero, 0x711C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28956), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4284e0) {
            ctx->pc = 0x428510u;
            goto label_428510;
        }
    }
    ctx->pc = 0x4284E8u;
    // 0x4284e8: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x4284E8u;
    SET_GPR_U32(ctx, 31, 0x4284F0u);
    ctx->pc = 0x4284ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4284E8u;
    // 0x4284ec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x4284E8u, 0x4284F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4284F0u;
label_4284f0:
    // 0x4284f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4284f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4284f4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4284f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4284f8: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x4284f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
    // 0x4284fc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x4284fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x428500: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x428500u;
    {
        const bool branch_taken_0x428500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x428504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428500u;
        // 0x428504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428500) {
            ctx->pc = 0x428510u;
            goto label_428510;
        }
    }
    ctx->pc = 0x428508u;
    // 0x428508: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x428508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x42850c: 0xac62711c  sw          $v0, 0x711C($v1)
    ctx->pc = 0x42850cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x59711Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59711Cu, _value); } while (0);
label_428510:
    // 0x428510: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x428510u;
    {
        const bool branch_taken_0x428510 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x428510) {
            ctx->pc = 0x42852Cu;
            goto label_42852c;
        }
    }
    ctx->pc = 0x428518u;
    // 0x428518: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x428518u;
    SET_GPR_U32(ctx, 31, 0x428520u);
    ctx->pc = 0x42851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428518u;
    // 0x42851c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x428518u, 0x428520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428520u;
label_428520:
    // 0x428520: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x428520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x428524: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x428524u;
    SET_GPR_U32(ctx, 31, 0x42852Cu);
    ctx->pc = 0x428528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428524u;
    // 0x428528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x428524u, 0x42852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42852Cu;
label_42852c:
    // 0x42852c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x42852Cu;
    {
        const bool branch_taken_0x42852c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x42852c) {
            ctx->pc = 0x428540u;
            goto label_428540;
        }
    }
    ctx->pc = 0x428534u;
    // 0x428534: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x428534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x428538: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x428538u;
    SET_GPR_U32(ctx, 31, 0x428540u);
    ctx->pc = 0x42853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428538u;
    // 0x42853c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x428538u, 0x428540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428540u;
label_428540:
    // 0x428540: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x428540u;
    {
        const bool branch_taken_0x428540 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x428544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428540u;
        // 0x428544: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428540) {
            ctx->pc = 0x428568u;
            goto label_428568;
        }
    }
    ctx->pc = 0x428548u;
    // 0x428548: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x428548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x42854c: 0x8c437110  lw          $v1, 0x7110($v0)
    ctx->pc = 0x42854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28944)));
    // 0x428550: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x428550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x428554: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x428554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x428558: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x428558u;
    {
        const bool branch_taken_0x428558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x428558) {
            ctx->pc = 0x428568u;
            goto label_428568;
        }
    }
    ctx->pc = 0x428560u;
    // 0x428560: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x428560u;
    SET_GPR_U32(ctx, 31, 0x428568u);
    ctx->pc = 0x428564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428560u;
    // 0x428564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x428560u, 0x428568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428568u;
label_428568:
    // 0x428568: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x428568u;
    {
        const bool branch_taken_0x428568 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x42856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428568u;
        // 0x42856c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428568) {
            ctx->pc = 0x428620u;
            goto label_428620;
        }
    }
    ctx->pc = 0x428570u;
    // 0x428570: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x428570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x428574: 0x8c437110  lw          $v1, 0x7110($v0)
    ctx->pc = 0x428574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28944)));
    // 0x428578: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x428578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x42857c: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x42857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x428580: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x428580u;
    {
        const bool branch_taken_0x428580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x428584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428580u;
        // 0x428584: 0x3c070059  lui         $a3, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428580) {
            ctx->pc = 0x428594u;
            goto label_428594;
        }
    }
    ctx->pc = 0x428588u;
    // 0x428588: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x428588u;
    SET_GPR_U32(ctx, 31, 0x428590u);
    ctx->pc = 0x42858Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428588u;
    // 0x42858c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x428588u, 0x428590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428590u;
label_428590:
    // 0x428590: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x428590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_428594:
    // 0x428594: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x428594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x428598: 0xdce26e20  ld          $v0, 0x6E20($a3)
    ctx->pc = 0x428598u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 28192)));
    // 0x42859c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x42859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4285a0: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x4285a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x4285a4: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x4285a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x4285a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4285a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4285ac: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4285acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4285b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x4285b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4285b4: 0xfce26e20  sd          $v0, 0x6E20($a3)
    ctx->pc = 0x4285b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 28192), GPR_U64(ctx, 2));
    // 0x4285b8: 0xae087118  sw          $t0, 0x7118($s0)
    ctx->pc = 0x4285b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x597118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x597118u, _value); } while (0);
    // 0x4285bc: 0xc1291e6  jal         func_4A4798
    ctx->pc = 0x4285BCu;
    SET_GPR_U32(ctx, 31, 0x4285C4u);
    ctx->pc = 0x4285C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4285BCu;
    // 0x4285c0: 0xe0f02d  daddu       $fp, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4798u, 0x4285BCu, 0x4285C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4285C4u;
label_4285c4:
    // 0x4285c4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4285c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4285c8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4285c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4285cc: 0x92460050  lbu         $a2, 0x50($s2)
    ctx->pc = 0x4285ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x4285d0: 0xc1291ee  jal         func_4A47B8
    ctx->pc = 0x4285D0u;
    SET_GPR_U32(ctx, 31, 0x4285D8u);
    ctx->pc = 0x4285D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4285D0u;
    // 0x4285d4: 0x24a56e08  addiu       $a1, $a1, 0x6E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A47B8u, 0x4285D0u, 0x4285D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4285D8u;
label_4285d8:
    // 0x4285d8: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x4285d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x4285dc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4285dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4285e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4285e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4285e4: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x4285e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x4285e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x4285e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x4285ec: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4285ECu;
    {
        const bool branch_taken_0x4285ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4285F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4285ECu;
        // 0x4285f0: 0xfc806e00  sd          $zero, 0x6E00($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4285ec) {
            ctx->pc = 0x4285FCu;
            goto label_4285fc;
        }
    }
    ctx->pc = 0x4285F4u;
    // 0x4285f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4285f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4285f8: 0xfc826e00  sd          $v0, 0x6E00($a0)
    ctx->pc = 0x4285f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
label_4285fc:
    // 0x4285fc: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x4285fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x428600: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x428600u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x428604: 0x14450010  bne         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x428604u;
    {
        const bool branch_taken_0x428604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x428608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428604u;
        // 0x428608: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428604) {
            ctx->pc = 0x428648u;
            goto label_428648;
        }
    }
    ctx->pc = 0x42860Cu;
    // 0x42860c: 0xdc826e00  ld          $v0, 0x6E00($a0)
    ctx->pc = 0x42860cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 28160)));
    // 0x428610: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x428610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x428614: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x428614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x428618: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x428618u;
    {
        const bool branch_taken_0x428618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428618u;
        // 0x42861c: 0xfc826e00  sd          $v0, 0x6E00($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 28160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428618) {
            ctx->pc = 0x428648u;
            goto label_428648;
        }
    }
    ctx->pc = 0x428620u;
label_428620:
    // 0x428620: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x428620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x428624: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x428624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x428628: 0xdc626e20  ld          $v0, 0x6E20($v1)
    ctx->pc = 0x428628u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E20u));
    // 0x42862c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x42862cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x428630: 0xac807118  sw          $zero, 0x7118($a0)
    ctx->pc = 0x428630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x597118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x597118u, _value); } while (0);
    // 0x428634: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x428634u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428638: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x428638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x42863c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42863cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428640: 0xfc626e20  sd          $v0, 0x6E20($v1)
    ctx->pc = 0x428640u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 28192), GPR_U64(ctx, 2));
    // 0x428644: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x428644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_428648:
    // 0x428648: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x428648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42864c: 0xdca26de8  ld          $v0, 0x6DE8($a1)
    ctx->pc = 0x42864cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 28136)));
    // 0x428650: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x428650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x428654: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x428654u;
    {
        const bool branch_taken_0x428654 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x428658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428654u;
        // 0x428658: 0xfca26de8  sd          $v0, 0x6DE8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 28136), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428654) {
            ctx->pc = 0x4286ACu;
            goto label_4286ac;
        }
    }
    ctx->pc = 0x42865Cu;
    // 0x42865c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x42865cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x428660: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x428660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x428664: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x428664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x428668: 0xc1291e6  jal         func_4A4798
    ctx->pc = 0x428668u;
    SET_GPR_U32(ctx, 31, 0x428670u);
    ctx->pc = 0x42866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428668u;
    // 0x42866c: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4798u, 0x428668u, 0x428670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428670u;
label_428670:
    // 0x428670: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x428670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x428674: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x428674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x428678: 0xc1291ee  jal         func_4A47B8
    ctx->pc = 0x428678u;
    SET_GPR_U32(ctx, 31, 0x428680u);
    ctx->pc = 0x42867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428678u;
    // 0x42867c: 0x92660050  lbu         $a2, 0x50($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A47B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A47B8u, 0x428678u, 0x428680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428680u;
label_428680:
    // 0x428680: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x428680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x428684: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x428684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x428688: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x428688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x42868c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x42868cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x428690: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x428690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x428694: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x428694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x428698: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x428698u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x42869c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42869Cu;
    {
        const bool branch_taken_0x42869c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4286A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42869Cu;
        // 0x4286a0: 0x2b80b  movn        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42869c) {
            ctx->pc = 0x4286ACu;
            goto label_4286ac;
        }
    }
    ctx->pc = 0x4286A4u;
    // 0x4286a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4286a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4286a8: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x4286a8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_4286ac:
    // 0x4286ac: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x4286ACu;
    {
        const bool branch_taken_0x4286ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4286B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4286ACu;
        // 0x4286b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4286ac) {
            ctx->pc = 0x4286F0u;
            goto label_4286f0;
        }
    }
    ctx->pc = 0x4286B4u;
    // 0x4286b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4286b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4286b8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4286b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4286bc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x4286bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4286c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4286C0u;
    {
        const bool branch_taken_0x4286c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4286c0) {
            ctx->pc = 0x4286F0u;
            goto label_4286f0;
        }
    }
    ctx->pc = 0x4286C8u;
    // 0x4286c8: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4286C8u;
    {
        const bool branch_taken_0x4286c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4286c8) {
            ctx->pc = 0x4286F0u;
            goto label_4286f0;
        }
    }
    ctx->pc = 0x4286D0u;
    // 0x4286d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4286d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4286d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4286d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4286d8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x4286d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4286dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4286DCu;
    {
        const bool branch_taken_0x4286dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4286dc) {
            ctx->pc = 0x4286F0u;
            goto label_4286f0;
        }
    }
    ctx->pc = 0x4286E4u;
    // 0x4286e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4286e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4286e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4286e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4286ec: 0xae027118  sw          $v0, 0x7118($s0)
    ctx->pc = 0x4286ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28952), GPR_U32(ctx, 2));
label_4286f0:
    // 0x4286f0: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x4286F0u;
    SET_GPR_U32(ctx, 31, 0x4286F8u);
    ctx->pc = 0x4286F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4286F0u;
    // 0x4286f4: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4286F0u, 0x4286F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4286F8u;
label_4286f8:
    // 0x4286f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4286f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4286fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4286fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x428700: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x428700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x428704: 0x72821389  pcpyld      $v0, $s4, $v0
    ctx->pc = 0x428704u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
    // 0x428708: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x428708u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
    // 0x42870c: 0x8e50707c  lw          $s0, 0x707C($s2)
    ctx->pc = 0x42870cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x59707Cu));
    // 0x428710: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x428710u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x428714: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x428714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x428718: 0xae50707c  sw          $s0, 0x707C($s2)
    ctx->pc = 0x428718u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x59707Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59707Cu, _value); } while (0);
    // 0x42871c: 0x3c026c0a  lui         $v0, 0x6C0A
    ctx->pc = 0x42871cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27658 << 16));
    // 0x428720: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x428720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x428724: 0x344203bc  ori         $v0, $v0, 0x3BC
    ctx->pc = 0x428724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)956);
    // 0x428728: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x428728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x42872c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42872cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428730: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x428730u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x428734: 0x72311cc8  ppacw       $v1, $s1, $s1
    ctx->pc = 0x428734u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 17)));
    // 0x428738: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x428738u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x42873c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x42873cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x428740: 0x92c30029  lbu         $v1, 0x29($s6)
    ctx->pc = 0x428740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x428744: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x428744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x428748: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x428748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
    // 0x42874c: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x42874cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x428750: 0x92c20028  lbu         $v0, 0x28($s6)
    ctx->pc = 0x428750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x428754: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x428754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x428758: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x428758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x42875c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x42875cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x428760: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x428760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x428764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x428764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x428768: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x428768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x42876c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x42876cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x428770: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x428770u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x428774: 0x70b51389  pcpyld      $v0, $a1, $s5
    ctx->pc = 0x428774u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 21)));
    // 0x428778: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x428778u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x42877c: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x42877cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x428780: 0x15ab7c  dsll32      $s5, $s5, 13
    ctx->pc = 0x428780u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 13));
    // 0x428784: 0x36b58002  ori         $s5, $s5, 0x8002
    ctx->pc = 0x428784u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32770);
    // 0x428788: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x428788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x42878c: 0x72751389  pcpyld      $v0, $s3, $s5
    ctx->pc = 0x42878cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 21)));
    // 0x428790: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x428790u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x428794: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x428794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x428798: 0xdfa20080  ld          $v0, 0x80($sp)
    ctx->pc = 0x428798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x42879c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x42879cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4287a0: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x4287a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x4287a4: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x4287a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x4287a8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4287a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4287ac: 0xdc626df8  ld          $v0, 0x6DF8($v1)
    ctx->pc = 0x4287acu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DF8u));
    // 0x4287b0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x4287b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x4287b4: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x4287b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x4287b8: 0x72751389  pcpyld      $v0, $s3, $s5
    ctx->pc = 0x4287b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 21)));
    // 0x4287bc: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x4287bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x4287c0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4287c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4287c4: 0xdfa20088  ld          $v0, 0x88($sp)
    ctx->pc = 0x4287c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4287c8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4287c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4287cc: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x4287ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x4287d0: 0xdfa500a8  ld          $a1, 0xA8($sp)
    ctx->pc = 0x4287d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x4287d4: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x4287d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x4287d8: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x4287d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x4287dc: 0xc064a30  jal         func_1928C0
    ctx->pc = 0x4287DCu;
    SET_GPR_U32(ctx, 31, 0x4287E4u);
    ctx->pc = 0x4287E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4287DCu;
    // 0x4287e0: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928C0u, 0x4287DCu, 0x4287E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4287E4u;
label_4287e4:
    // 0x4287e4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4287e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4287e8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x4287e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4287ec: 0xc064a3c  jal         func_1928F0
    ctx->pc = 0x4287ECu;
    SET_GPR_U32(ctx, 31, 0x4287F4u);
    ctx->pc = 0x4287F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4287ECu;
    // 0x4287f0: 0xdfb50098  ld          $s5, 0x98($sp) (Delay Slot)
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1928F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1928F0u, 0x4287ECu, 0x4287F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4287F4u;
label_4287f4:
    // 0x4287f4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4287f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4287f8: 0xdfa20098  ld          $v0, 0x98($sp)
    ctx->pc = 0x4287f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4287fc: 0x70551389  pcpyld      $v0, $v0, $s5
    ctx->pc = 0x4287fcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 21)));
    // 0x428800: 0x7e020080  sq          $v0, 0x80($s0)
    ctx->pc = 0x428800u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 2));
    // 0x428804: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x428804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x428808: 0xdc550010  ld          $s5, 0x10($v0)
    ctx->pc = 0x428808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x42880c: 0x72b51389  pcpyld      $v0, $s5, $s5
    ctx->pc = 0x42880cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 21), GPR_VEC(ctx, 21)));
    // 0x428810: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x428810u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x428814: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x428814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x428818: 0xdc750030  ld          $s5, 0x30($v1)
    ctx->pc = 0x428818u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x42881c: 0x72b51389  pcpyld      $v0, $s5, $s5
    ctx->pc = 0x42881cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 21), GPR_VEC(ctx, 21)));
    // 0x428820: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x428820u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    // 0x428824: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x428824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x428828: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x428828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x42882c: 0x72311cc8  ppacw       $v1, $s1, $s1
    ctx->pc = 0x42882cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 17), GPR_VEC(ctx, 17)));
    // 0x428830: 0x705114c8  ppacw       $v0, $v0, $s1
    ctx->pc = 0x428830u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 17)));
    // 0x428834: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x428834u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x428838: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x428838u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x42883c: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x42883cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x428840: 0x15ab7c  dsll32      $s5, $s5, 13
    ctx->pc = 0x428840u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 13));
    // 0x428844: 0x36b58005  ori         $s5, $s5, 0x8005
    ctx->pc = 0x428844u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32773);
    // 0x428848: 0x72751389  pcpyld      $v0, $s3, $s5
    ctx->pc = 0x428848u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 21)));
    // 0x42884c: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x42884cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x428850: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x428850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x428854: 0xdfa500a0  ld          $a1, 0xA0($sp)
    ctx->pc = 0x428854u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x428858: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x428858u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x42885c: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x42885cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
    // 0x428860: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x428860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x428864: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x428864u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x428868: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x428868u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x42886c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x42886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x428870: 0xdfa300b0  ld          $v1, 0xB0($sp)
    ctx->pc = 0x428870u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x428874: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x428874u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x428878: 0x7e0200f0  sq          $v0, 0xF0($s0)
    ctx->pc = 0x428878u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 240), GPR_VEC(ctx, 2));
    // 0x42887c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x42887cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x428880: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x428880u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x428884: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428884u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428888: 0x7e020100  sq          $v0, 0x100($s0)
    ctx->pc = 0x428888u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), GPR_VEC(ctx, 2));
    // 0x42888c: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x42888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x428890: 0xdfa500b8  ld          $a1, 0xB8($sp)
    ctx->pc = 0x428890u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x428894: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x428894u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x428898: 0x7e020110  sq          $v0, 0x110($s0)
    ctx->pc = 0x428898u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), GPR_VEC(ctx, 2));
    // 0x42889c: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x42889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x4288a0: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x4288a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x4288a4: 0x3404d802  ori         $a0, $zero, 0xD802
    ctx->pc = 0x4288a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x4288a8: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x4288a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x4288ac: 0x3484fe80  ori         $a0, $a0, 0xFE80
    ctx->pc = 0x4288acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65152);
    // 0x4288b0: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x4288b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x4288b4: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x4288b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x4288b8: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x4288b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x4288bc: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x4288bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x4288c0: 0x70942389  pcpyld      $a0, $a0, $s4
    ctx->pc = 0x4288c0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 20)));
    // 0x4288c4: 0x7e040120  sq          $a0, 0x120($s0)
    ctx->pc = 0x4288c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 288), GPR_VEC(ctx, 4));
    // 0x4288c8: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x4288c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x4288cc: 0xae50707c  sw          $s0, 0x707C($s2)
    ctx->pc = 0x4288ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 16));
    // 0x4288d0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4288d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4288d4: 0x92c20047  lbu         $v0, 0x47($s6)
    ctx->pc = 0x4288d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 71)));
    // 0x4288d8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4288d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4288dc: 0x8ca3711c  lw          $v1, 0x711C($a1)
    ctx->pc = 0x4288dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x59711Cu));
    // 0x4288e0: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x4288e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x4288e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4288e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4288e8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4288e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4288ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4288ECu;
    {
        const bool branch_taken_0x4288ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4288F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4288ECu;
        // 0x4288f0: 0xac827120  sw          $v0, 0x7120($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4288ec) {
            ctx->pc = 0x428908u;
            goto label_428908;
        }
    }
    ctx->pc = 0x4288F4u;
    // 0x4288f4: 0xdfc26e20  ld          $v0, 0x6E20($fp)
    ctx->pc = 0x4288f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x4288f8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x4288f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4288fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4288FCu;
    {
        const bool branch_taken_0x4288fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4288FCu;
        // 0x428900: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4288fc) {
            ctx->pc = 0x428914u;
            goto label_428914;
        }
    }
    ctx->pc = 0x428904u;
    // 0x428904: 0x0  nop
    ctx->pc = 0x428904u;
    // NOP
label_428908:
    // 0x428908: 0xdfc26e20  ld          $v0, 0x6E20($fp)
    ctx->pc = 0x428908u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x42890c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x42890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x428910: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x428910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_428914:
    // 0x428914: 0xffc26e20  sd          $v0, 0x6E20($fp)
    ctx->pc = 0x428914u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 28192), GPR_U64(ctx, 2));
    // 0x428918: 0x92c60029  lbu         $a2, 0x29($s6)
    ctx->pc = 0x428918u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 41)));
    // 0x42891c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x42891cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x428920: 0x8fc26e20  lw          $v0, 0x6E20($fp)
    ctx->pc = 0x428920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x428924: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x428924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x428928: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x428928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x42892c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x42892cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x428930: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x428930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x428934: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x428934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x428938: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x428938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x42893c: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x42893cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x428940: 0xdc64f750  ld          $a0, -0x8B0($v1)
    ctx->pc = 0x428940u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294965072)));
    // 0x428944: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x428944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x428948: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x428948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
    // 0x42894c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x42894cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x428950: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x428950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x428954: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x428954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x428958: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x428958u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x42895c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x42895cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x428960: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x428960u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x428964: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x428964u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x428968: 0x8e46707c  lw          $a2, 0x707C($s2)
    ctx->pc = 0x428968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x42896c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x42896cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x428970: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x428970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x428974: 0xae46707c  sw          $a2, 0x707C($s2)
    ctx->pc = 0x428974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 6));
    // 0x428978: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x428978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x42897c: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x42897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x428980: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x428980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x428984: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x428984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x428988: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x428988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x42898c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x42898cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x428990: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x428990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x428994: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x428994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428998: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x428998u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x42899c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x42899cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4289a0: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x4289a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4289a4: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x4289a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x4289a8: 0xdfc26e20  ld          $v0, 0x6E20($fp)
    ctx->pc = 0x4289a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 28192)));
    // 0x4289ac: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x4289acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x4289b0: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x4289b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x4289b4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4289b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4289b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4289b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4289bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4289BCu;
    {
        const bool branch_taken_0x4289bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4289C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4289BCu;
        // 0x4289c0: 0x92c20044  lbu         $v0, 0x44($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4289bc) {
            ctx->pc = 0x4289D0u;
            goto label_4289d0;
        }
    }
    ctx->pc = 0x4289C4u;
    // 0x4289c4: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x4289c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x4289c8: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x4289c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x4289cc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4289ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_4289d0:
    // 0x4289d0: 0x92c30045  lbu         $v1, 0x45($s6)
    ctx->pc = 0x4289d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 69)));
    // 0x4289d4: 0x92c40046  lbu         $a0, 0x46($s6)
    ctx->pc = 0x4289d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 70)));
    // 0x4289d8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4289d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4289dc: 0x0  nop
    ctx->pc = 0x4289dcu;
    // NOP
    // 0x4289e0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4289e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4289e4: 0x92c50047  lbu         $a1, 0x47($s6)
    ctx->pc = 0x4289e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 71)));
    // 0x4289e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4289e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4289ec: 0x0  nop
    ctx->pc = 0x4289ecu;
    // NOP
    // 0x4289f0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4289f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4289f4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4289f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4289f8: 0x0  nop
    ctx->pc = 0x4289f8u;
    // NOP
    // 0x4289fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4289fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x428a00: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x428a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x428a04: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x428a04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x428a08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x428a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x428a0c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x428a0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x428a10: 0x0  nop
    ctx->pc = 0x428a10u;
    // NOP
    // 0x428a14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x428a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x428a18: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x428a18u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x428a1c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x428a1cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x428a20: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x428a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x428a24: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x428a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x428a28: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x428a28u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x428a2c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x428a2cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x428a30: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x428a30u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x428a34: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x428a34u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x428a38: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x428a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x428a3c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x428a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x428a40: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x428a40u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x428a44: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x428a44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x428a48: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x428a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x428a4c: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x428a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x428a50: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x428a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x428a54: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x428a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x428a58: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x428a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x428a5c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x428a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x428a60: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x428a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x428a64: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x428a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x428a68: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x428a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x428a6c: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x428a6cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x428a70: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x428a70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x428a74: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x428a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x428a78: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x428a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x428a7c: 0x8ec2003c  lw          $v0, 0x3C($s6)
    ctx->pc = 0x428a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x428a80: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x428a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x428a84: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x428a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x428a88: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x428a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x428a8c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x428a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x428a90: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x428a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x428a94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x428a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x428a98: 0xc6c0001c  lwc1        $f0, 0x1C($s6)
    ctx->pc = 0x428a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x428a9c: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x428a9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x428aa0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x428aa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x428aa4: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x428aa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x428aa8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x428aa8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x428aac: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x428aacu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x428ab0: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x428ab0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x428ab4: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x428ab4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x428ab8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x428ab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x428abc: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x428abcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x428ac0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x428ac0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x428ac4: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x428ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x428ac8: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x428ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x428acc: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x428accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x428ad0: 0x92c20028  lbu         $v0, 0x28($s6)
    ctx->pc = 0x428ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x428ad4: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x428ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x428ad8: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x428ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x428adc: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x428adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x428ae0: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x428ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x428ae4: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x428ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x428ae8: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x428ae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x428aec: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x428aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x428af0: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x428af0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x428af4: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x428af4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x428af8: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x428af8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x428afc: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x428afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x428b00: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428b00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428b04: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x428b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x428b08: 0x8c626e80  lw          $v0, 0x6E80($v1)
    ctx->pc = 0x428b08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x596E80u));
    // 0x428b0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x428B0Cu;
    {
        const bool branch_taken_0x428b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428B0Cu;
        // 0x428b10: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x428b0c) {
            ctx->pc = 0x428B20u;
            goto label_428b20;
        }
    }
    ctx->pc = 0x428B14u;
    // 0x428b14: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x428B14u;
    {
        const bool branch_taken_0x428b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x428b14) {
            ctx->pc = 0x428B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x428B14u;
            // 0x428b18: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x428B40u;
            goto label_428b40;
        }
    }
    ctx->pc = 0x428B1Cu;
    // 0x428b1c: 0x0  nop
    ctx->pc = 0x428b1cu;
    // NOP
label_428b20:
    // 0x428b20: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x428b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x428b24: 0x8c436e84  lw          $v1, 0x6E84($v0)
    ctx->pc = 0x428b24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x596E84u));
    // 0x428b28: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x428B28u;
    {
        const bool branch_taken_0x428b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x428B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428B28u;
        // 0x428b2c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x428b28) {
            ctx->pc = 0x428B68u;
            goto label_428b68;
        }
    }
    ctx->pc = 0x428B30u;
    // 0x428b30: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x428B30u;
    {
        const bool branch_taken_0x428b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x428b30) {
            ctx->pc = 0x428B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x428B30u;
            // 0x428b34: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x428B70u;
            goto label_428b70;
        }
    }
    ctx->pc = 0x428B38u;
    // 0x428b38: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x428b38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x428b3c: 0x0  nop
    ctx->pc = 0x428b3cu;
    // NOP
label_428b40:
    // 0x428b40: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x428b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x428b44: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x428b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x428b48: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x428b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
    // 0x428b4c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x428b4cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7F0u));
    // 0x428b50: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x428b50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x428b54: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x428b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428b58: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x428b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x428b5c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x428b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x428b60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x428B60u;
    {
        const bool branch_taken_0x428b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428B60u;
        // 0x428b64: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428b60) {
            ctx->pc = 0x428B90u;
            goto label_428b90;
        }
    }
    ctx->pc = 0x428B68u;
label_428b68:
    // 0x428b68: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x428b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x428b6c: 0x0  nop
    ctx->pc = 0x428b6cu;
    // NOP
label_428b70:
    // 0x428b70: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x428b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x428b74: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x428b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x428b78: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x428b78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x428b7c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x428b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x428b80: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x428b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428b84: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x428b84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x428b88: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x428b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x428b8c: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x428b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
label_428b90:
    // 0x428b90: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x428b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428b94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x428b94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x428b98: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x428b98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x428b9c: 0xae45707c  sw          $a1, 0x707C($s2)
    ctx->pc = 0x428b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 5));
    // 0x428ba0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x428ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x428ba4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x428ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x428ba8: 0x8c447124  lw          $a0, 0x7124($v0)
    ctx->pc = 0x428ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x597124u));
    // 0x428bac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x428bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x428bb0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x428BB0u;
    {
        const bool branch_taken_0x428bb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x428BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428BB0u;
        // 0x428bb4: 0xaca06e78  sw          $zero, 0x6E78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428bb0) {
            ctx->pc = 0x428BC0u;
            goto label_428bc0;
        }
    }
    ctx->pc = 0x428BB8u;
    // 0x428bb8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x428bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x428bbc: 0xaca26e78  sw          $v0, 0x6E78($a1)
    ctx->pc = 0x428bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28280), GPR_U32(ctx, 2));
label_428bc0:
    // 0x428bc0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x428bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x428bc4: 0x9ca56e78  lwu         $a1, 0x6E78($a1)
    ctx->pc = 0x428bc4u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 28280)));
    // 0x428bc8: 0x9c826e7c  lwu         $v0, 0x6E7C($a0)
    ctx->pc = 0x428bc8u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x596E7Cu));
    // 0x428bcc: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x428bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x428bd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x428bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x428bd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x428bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x428bd8: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x428bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x428bdc: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x428bdcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x428be0: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x428be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x428be4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x428be4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x428be8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x428be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428bec: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x428becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x428bf0: 0x8ec20040  lw          $v0, 0x40($s6)
    ctx->pc = 0x428bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x428bf4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x428BF4u;
    {
        const bool branch_taken_0x428bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x428BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428BF4u;
        // 0x428bf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428bf4) {
            ctx->pc = 0x428C88u;
            goto label_428c88;
        }
    }
    ctx->pc = 0x428BFCu;
    // 0x428bfc: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x428bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x428c00: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x428c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x428c04: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x428c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x428c08: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x428c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x428c0c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428c0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428c10: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x428c10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x428c14: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x428c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428c18: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428c1c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x428c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x428c20: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x428c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x428c24: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x428c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x428c28: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x428c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x428c2c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428c2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428c30: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x428c30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x428c34: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x428c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x428c38: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428c3c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x428c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x428c40: 0xdc626de8  ld          $v0, 0x6DE8($v1)
    ctx->pc = 0x428c40u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DE8u));
    // 0x428c44: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x428c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x428c48: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428c48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428c4c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x428c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x428c50: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x428c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x428c54: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428c58: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x428c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x428c5c: 0xdc626e08  ld          $v0, 0x6E08($v1)
    ctx->pc = 0x428c5cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E08u));
    // 0x428c60: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x428c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x428c64: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428c64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428c68: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x428c68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x428c6c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x428c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x428c70: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428c70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428c74: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x428c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x428c78: 0xdc626e00  ld          $v0, 0x6E00($v1)
    ctx->pc = 0x428c78u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596E00u));
    // 0x428c7c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x428C7Cu;
    {
        const bool branch_taken_0x428c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428C7Cu;
        // 0x428c80: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428c7c) {
            ctx->pc = 0x428CF8u;
            goto label_428cf8;
        }
    }
    ctx->pc = 0x428C84u;
    // 0x428c84: 0x0  nop
    ctx->pc = 0x428c84u;
    // NOP
label_428c88:
    // 0x428c88: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x428c88u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x428c8c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x428c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428c90: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x428c90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x428c94: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428c98: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x428c98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x428c9c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x428c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x428ca0: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428ca4: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x428ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x428ca8: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x428ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x428cac: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x428cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x428cb0: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x428cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x428cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x428cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428cb8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428cb8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428cbc: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x428cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x428cc0: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x428cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x428cc4: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428cc8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x428cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x428ccc: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x428cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x428cd0: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x428cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x428cd4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x428cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x428cd8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428cd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428cdc: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x428cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x428ce0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x428ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x428ce4: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428ce8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x428ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x428cec: 0xdc626de8  ld          $v0, 0x6DE8($v1)
    ctx->pc = 0x428cecu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DE8u));
    // 0x428cf0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x428cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x428cf4: 0x0  nop
    ctx->pc = 0x428cf4u;
    // NOP
label_428cf8:
    // 0x428cf8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428cf8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428cfc: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x428cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x428d00: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x428d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x428d04: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428d08: 0x92c30028  lbu         $v1, 0x28($s6)
    ctx->pc = 0x428d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x428d0c: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x428d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x428d10: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x428d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x428d14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x428d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x428d18: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x428d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x428d1c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x428d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x428d20: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x428d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x428d24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x428d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x428d28: 0xa2c2002b  sb          $v0, 0x2B($s6)
    ctx->pc = 0x428d28u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x428d2c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x428d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x428d30: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x428d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x428d34: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x428d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x428d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x428d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x428d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x428d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x428d40: 0x8cc36e74  lw          $v1, 0x6E74($a2)
    ctx->pc = 0x428d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28276)));
    // 0x428d44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x428d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x428d48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x428d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x428d4c: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x428D4Cu;
    {
        const bool branch_taken_0x428d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x428D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428D4Cu;
        // 0x428d50: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428d4c) {
            ctx->pc = 0x428D78u;
            goto label_428d78;
        }
    }
    ctx->pc = 0x428D54u;
    // 0x428d54: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x428d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x428d58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x428d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x428d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x428d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428d60: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x428d60u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x428d64: 0x8e43707c  lw          $v1, 0x707C($s2)
    ctx->pc = 0x428d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x428d68: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x428d68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x428d6c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x428d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x428d70: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x428d70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x428d74: 0xacc56e74  sw          $a1, 0x6E74($a2)
    ctx->pc = 0x428d74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28276), GPR_U32(ctx, 5));
label_428d78:
    // 0x428d78: 0x8ec20030  lw          $v0, 0x30($s6)
    ctx->pc = 0x428d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x428d7c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x428d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x428d80: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x428d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x428d84: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x428d84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x428d88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x428d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x428d8c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x428d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x428d90: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x428d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x428d94: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x428d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x428d98: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x428d98u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x428d9c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x428d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x428da0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x428da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x428da4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x428da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x428da8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x428da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x428dac: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x428dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x428db0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x428db0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x428db4: 0x8e43707c  lw          $v1, 0x707C($s2)
    ctx->pc = 0x428db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x428db8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x428db8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x428dbc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x428dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x428dc0: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x428dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x428dc4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x428dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_428dc8:
    // 0x428dc8: 0x42000039  di
    ctx->pc = 0x428dc8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x428dcc: 0x40f  sync.p
    ctx->pc = 0x428dccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x428dd0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x428dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x428dd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x428dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x428dd8: 0x0  nop
    ctx->pc = 0x428dd8u;
    // NOP
    // 0x428ddc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x428DDCu;
    {
        const bool branch_taken_0x428ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x428ddc) {
            ctx->pc = 0x428DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_428dc8;
        }
    }
    ctx->pc = 0x428DE4u;
    // 0x428de4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x428de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x428de8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x428de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x428dec: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x428decu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x428df0: 0x42000038  ei
    ctx->pc = 0x428df0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x428df4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x428df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x428df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x428df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x428dfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x428dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x428e00: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x428E00u;
    {
        const bool branch_taken_0x428e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x428E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428E00u;
        // 0x428e04: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428e00) {
            ctx->pc = 0x428E10u;
            goto label_428e10;
        }
    }
    ctx->pc = 0x428E08u;
    // 0x428e08: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x428E08u;
    SET_GPR_U32(ctx, 31, 0x428E10u);
    ctx->pc = 0x428E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428E08u;
    // 0x428e0c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x428E08u, 0x428E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428E10u;
label_428e10:
    // 0x428e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x428e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428e14: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x428E14u;
    SET_GPR_U32(ctx, 31, 0x428E1Cu);
    ctx->pc = 0x428E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428E14u;
    // 0x428e18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x428E14u, 0x428E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428E1Cu;
label_428e1c:
    // 0x428e1c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x428e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x428e20: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x428e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x428e24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x428e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428e28: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x428e28u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428e2c: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x428e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x428e30: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x428e30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x428e34: 0x705014c8  ppacw       $v0, $v0, $s0
    ctx->pc = 0x428e34u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 16)));
    // 0x428e38: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x428e38u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428e3c: 0x8e44707c  lw          $a0, 0x707C($s2)
    ctx->pc = 0x428e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x428e40: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x428e40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x428e44: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x428e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428e48: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x428e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x428e4c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x428e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x428e50: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x428e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x428e54: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x428e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x428e58: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x428e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x428e5c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x428e5cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x428e60: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x428e60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x428e64: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x428e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x428e68: 0xae42707c  sw          $v0, 0x707C($s2)
    ctx->pc = 0x428e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 2));
    // 0x428e6c: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x428e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x428e70: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x428e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x428e74: 0xdca26df8  ld          $v0, 0x6DF8($a1)
    ctx->pc = 0x428e74u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x596DF8u));
    // 0x428e78: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x428e78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x428e7c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x428e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x428e80: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x428e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x428e84: 0xae44707c  sw          $a0, 0x707C($s2)
    ctx->pc = 0x428e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 4));
    // 0x428e88: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x428e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x428e8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x428e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428e90: 0xc10a098  jal         func_428260
    ctx->pc = 0x428E90u;
    SET_GPR_U32(ctx, 31, 0x428E98u);
    ctx->pc = 0x428E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428E90u;
    // 0x428e94: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428260u, 0x428E90u, 0x428E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428E98u;
label_428e98:
    // 0x428e98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x428e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428e9c: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x428E9Cu;
    SET_GPR_U32(ctx, 31, 0x428EA4u);
    ctx->pc = 0x428EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428E9Cu;
    // 0x428ea0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x428E9Cu, 0x428EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428EA4u;
label_428ea4:
    // 0x428ea4: 0x8e43707c  lw          $v1, 0x707C($s2)
    ctx->pc = 0x428ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28796)));
    // 0x428ea8: 0x3404c808  ori         $a0, $zero, 0xC808
    ctx->pc = 0x428ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)51208);
    // 0x428eac: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x428eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x428eb0: 0x3484f180  ori         $a0, $a0, 0xF180
    ctx->pc = 0x428eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61824);
    // 0x428eb4: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x428eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x428eb8: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x428eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x428ebc: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x428ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x428ec0: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x428ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x428ec4: 0x70901389  pcpyld      $v0, $a0, $s0
    ctx->pc = 0x428ec4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 16)));
    // 0x428ec8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x428ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x428ecc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x428eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x428ed0: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x428ed0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x428ed4: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x428ed4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x428ed8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x428ed8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x428edc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x428edcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x428ee0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x428ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x428ee4: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x428ee4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x428ee8: 0xdfa40030  ld          $a0, 0x30($sp)
    ctx->pc = 0x428ee8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x428eec: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x428eecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x428ef0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x428ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x428ef4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x428ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x428ef8: 0xae43707c  sw          $v1, 0x707C($s2)
    ctx->pc = 0x428ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28796), GPR_U32(ctx, 3));
    // 0x428efc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x428efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x428f00: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x428f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x428f04: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x428f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x428f08: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x428f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x428f0c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x428f0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x428f10: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x428f10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x428f14: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x428f14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x428f18: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x428f18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x428f1c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x428f1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x428f20: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x428f20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x428f24: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x428f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x428f28: 0x3e00008  jr          $ra
    ctx->pc = 0x428F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428F28u;
        // 0x428f2c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x428F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x428F30u;
}
