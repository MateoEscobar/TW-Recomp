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

// Function: sub_003D7F10
// Address: 0x3d7f10 - 0x3d8180
void sub_003D7F10_0x3d7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7F10_0x3d7f10");
#endif

    switch (ctx->pc) {
        case 0x3d7f10u: goto label_3d7f10;
        case 0x3d7f14u: goto label_3d7f14;
        case 0x3d7f18u: goto label_3d7f18;
        case 0x3d7f1cu: goto label_3d7f1c;
        case 0x3d7f20u: goto label_3d7f20;
        case 0x3d7f24u: goto label_3d7f24;
        case 0x3d7f28u: goto label_3d7f28;
        case 0x3d7f2cu: goto label_3d7f2c;
        case 0x3d7f30u: goto label_3d7f30;
        case 0x3d7f34u: goto label_3d7f34;
        case 0x3d7f38u: goto label_3d7f38;
        case 0x3d7f3cu: goto label_3d7f3c;
        case 0x3d7f40u: goto label_3d7f40;
        case 0x3d7f44u: goto label_3d7f44;
        case 0x3d7f48u: goto label_3d7f48;
        case 0x3d7f4cu: goto label_3d7f4c;
        case 0x3d7f50u: goto label_3d7f50;
        case 0x3d7f54u: goto label_3d7f54;
        case 0x3d7f58u: goto label_3d7f58;
        case 0x3d7f5cu: goto label_3d7f5c;
        case 0x3d7f60u: goto label_3d7f60;
        case 0x3d7f64u: goto label_3d7f64;
        case 0x3d7f68u: goto label_3d7f68;
        case 0x3d7f6cu: goto label_3d7f6c;
        case 0x3d7f70u: goto label_3d7f70;
        case 0x3d7f74u: goto label_3d7f74;
        case 0x3d7f78u: goto label_3d7f78;
        case 0x3d7f7cu: goto label_3d7f7c;
        case 0x3d7f80u: goto label_3d7f80;
        case 0x3d7f84u: goto label_3d7f84;
        case 0x3d7f88u: goto label_3d7f88;
        case 0x3d7f8cu: goto label_3d7f8c;
        case 0x3d7f90u: goto label_3d7f90;
        case 0x3d7f94u: goto label_3d7f94;
        case 0x3d7f98u: goto label_3d7f98;
        case 0x3d7f9cu: goto label_3d7f9c;
        case 0x3d7fa0u: goto label_3d7fa0;
        case 0x3d7fa4u: goto label_3d7fa4;
        case 0x3d7fa8u: goto label_3d7fa8;
        case 0x3d7facu: goto label_3d7fac;
        case 0x3d7fb0u: goto label_3d7fb0;
        case 0x3d7fb4u: goto label_3d7fb4;
        case 0x3d7fb8u: goto label_3d7fb8;
        case 0x3d7fbcu: goto label_3d7fbc;
        case 0x3d7fc0u: goto label_3d7fc0;
        case 0x3d7fc4u: goto label_3d7fc4;
        case 0x3d7fc8u: goto label_3d7fc8;
        case 0x3d7fccu: goto label_3d7fcc;
        case 0x3d7fd0u: goto label_3d7fd0;
        case 0x3d7fd4u: goto label_3d7fd4;
        case 0x3d7fd8u: goto label_3d7fd8;
        case 0x3d7fdcu: goto label_3d7fdc;
        case 0x3d7fe0u: goto label_3d7fe0;
        case 0x3d7fe4u: goto label_3d7fe4;
        case 0x3d7fe8u: goto label_3d7fe8;
        case 0x3d7fecu: goto label_3d7fec;
        case 0x3d7ff0u: goto label_3d7ff0;
        case 0x3d7ff4u: goto label_3d7ff4;
        case 0x3d7ff8u: goto label_3d7ff8;
        case 0x3d7ffcu: goto label_3d7ffc;
        case 0x3d8000u: goto label_3d8000;
        case 0x3d8004u: goto label_3d8004;
        case 0x3d8008u: goto label_3d8008;
        case 0x3d800cu: goto label_3d800c;
        case 0x3d8010u: goto label_3d8010;
        case 0x3d8014u: goto label_3d8014;
        case 0x3d8018u: goto label_3d8018;
        case 0x3d801cu: goto label_3d801c;
        case 0x3d8020u: goto label_3d8020;
        case 0x3d8024u: goto label_3d8024;
        case 0x3d8028u: goto label_3d8028;
        case 0x3d802cu: goto label_3d802c;
        case 0x3d8030u: goto label_3d8030;
        case 0x3d8034u: goto label_3d8034;
        case 0x3d8038u: goto label_3d8038;
        case 0x3d803cu: goto label_3d803c;
        case 0x3d8040u: goto label_3d8040;
        case 0x3d8044u: goto label_3d8044;
        case 0x3d8048u: goto label_3d8048;
        case 0x3d804cu: goto label_3d804c;
        case 0x3d8050u: goto label_3d8050;
        case 0x3d8054u: goto label_3d8054;
        case 0x3d8058u: goto label_3d8058;
        case 0x3d805cu: goto label_3d805c;
        case 0x3d8060u: goto label_3d8060;
        case 0x3d8064u: goto label_3d8064;
        case 0x3d8068u: goto label_3d8068;
        case 0x3d806cu: goto label_3d806c;
        case 0x3d8070u: goto label_3d8070;
        case 0x3d8074u: goto label_3d8074;
        case 0x3d8078u: goto label_3d8078;
        case 0x3d807cu: goto label_3d807c;
        case 0x3d8080u: goto label_3d8080;
        case 0x3d8084u: goto label_3d8084;
        case 0x3d8088u: goto label_3d8088;
        case 0x3d808cu: goto label_3d808c;
        case 0x3d8090u: goto label_3d8090;
        case 0x3d8094u: goto label_3d8094;
        case 0x3d8098u: goto label_3d8098;
        case 0x3d809cu: goto label_3d809c;
        case 0x3d80a0u: goto label_3d80a0;
        case 0x3d80a4u: goto label_3d80a4;
        case 0x3d80a8u: goto label_3d80a8;
        case 0x3d80acu: goto label_3d80ac;
        case 0x3d80b0u: goto label_3d80b0;
        case 0x3d80b4u: goto label_3d80b4;
        case 0x3d80b8u: goto label_3d80b8;
        case 0x3d80bcu: goto label_3d80bc;
        case 0x3d80c0u: goto label_3d80c0;
        case 0x3d80c4u: goto label_3d80c4;
        case 0x3d80c8u: goto label_3d80c8;
        case 0x3d80ccu: goto label_3d80cc;
        case 0x3d80d0u: goto label_3d80d0;
        case 0x3d80d4u: goto label_3d80d4;
        case 0x3d80d8u: goto label_3d80d8;
        case 0x3d80dcu: goto label_3d80dc;
        case 0x3d80e0u: goto label_3d80e0;
        case 0x3d80e4u: goto label_3d80e4;
        case 0x3d80e8u: goto label_3d80e8;
        case 0x3d80ecu: goto label_3d80ec;
        case 0x3d80f0u: goto label_3d80f0;
        case 0x3d80f4u: goto label_3d80f4;
        case 0x3d80f8u: goto label_3d80f8;
        case 0x3d80fcu: goto label_3d80fc;
        case 0x3d8100u: goto label_3d8100;
        case 0x3d8104u: goto label_3d8104;
        case 0x3d8108u: goto label_3d8108;
        case 0x3d810cu: goto label_3d810c;
        case 0x3d8110u: goto label_3d8110;
        case 0x3d8114u: goto label_3d8114;
        case 0x3d8118u: goto label_3d8118;
        case 0x3d811cu: goto label_3d811c;
        case 0x3d8120u: goto label_3d8120;
        case 0x3d8124u: goto label_3d8124;
        case 0x3d8128u: goto label_3d8128;
        case 0x3d812cu: goto label_3d812c;
        case 0x3d8130u: goto label_3d8130;
        case 0x3d8134u: goto label_3d8134;
        case 0x3d8138u: goto label_3d8138;
        case 0x3d813cu: goto label_3d813c;
        case 0x3d8140u: goto label_3d8140;
        case 0x3d8144u: goto label_3d8144;
        case 0x3d8148u: goto label_3d8148;
        case 0x3d814cu: goto label_3d814c;
        case 0x3d8150u: goto label_3d8150;
        case 0x3d8154u: goto label_3d8154;
        case 0x3d8158u: goto label_3d8158;
        case 0x3d815cu: goto label_3d815c;
        case 0x3d8160u: goto label_3d8160;
        case 0x3d8164u: goto label_3d8164;
        case 0x3d8168u: goto label_3d8168;
        case 0x3d816cu: goto label_3d816c;
        case 0x3d8170u: goto label_3d8170;
        case 0x3d8174u: goto label_3d8174;
        case 0x3d8178u: goto label_3d8178;
        case 0x3d817cu: goto label_3d817c;
        default: break;
    }

    ctx->pc = 0x3d7f10u;

label_3d7f10:
    // 0x3d7f10: 0x27bdf750  addiu       $sp, $sp, -0x8B0
    ctx->pc = 0x3d7f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965072));
label_3d7f14:
    // 0x3d7f14: 0x7fb008a0  sq          $s0, 0x8A0($sp)
    ctx->pc = 0x3d7f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 16));
label_3d7f18:
    // 0x3d7f18: 0x7fb10890  sq          $s1, 0x890($sp)
    ctx->pc = 0x3d7f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 17));
label_3d7f1c:
    // 0x3d7f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f20:
    // 0x3d7f20: 0x7fb20880  sq          $s2, 0x880($sp)
    ctx->pc = 0x3d7f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 18));
label_3d7f24:
    // 0x3d7f24: 0xffbf0870  sd          $ra, 0x870($sp)
    ctx->pc = 0x3d7f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2160), GPR_U64(ctx, 31));
label_3d7f28:
    // 0x3d7f28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d7f2c:
    // 0x3d7f2c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d7f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7f30:
    // 0x3d7f30: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7f34:
    // 0x3d7f34: 0x40f809  jalr        $v0
label_3d7f38:
    if (ctx->pc == 0x3D7F38u) {
        ctx->pc = 0x3D7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F34u;
        // 0x3d7f38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F3Cu;
        goto label_3d7f3c;
    }
    ctx->pc = 0x3D7F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D7F3Cu);
        ctx->pc = 0x3D7F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F34u;
        // 0x3d7f38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7F34u, 0x3D7F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D7F3Cu;
label_3d7f3c:
    // 0x3d7f3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d7f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f40:
    // 0x3d7f40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d7f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f44:
    // 0x3d7f44: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3d7f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d7f48:
    // 0x3d7f48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d7f4c:
    // 0x3d7f4c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d7f50:
    // 0x3d7f50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d7f54:
    // 0x3d7f54: 0x0  nop
    ctx->pc = 0x3d7f54u;
    // NOP
label_3d7f58:
    // 0x3d7f58: 0x0  nop
    ctx->pc = 0x3d7f58u;
    // NOP
label_3d7f5c:
    // 0x3d7f5c: 0x0  nop
    ctx->pc = 0x3d7f5cu;
    // NOP
label_3d7f60:
    // 0x3d7f60: 0x0  nop
    ctx->pc = 0x3d7f60u;
    // NOP
label_3d7f64:
    // 0x3d7f64: 0x0  nop
    ctx->pc = 0x3d7f64u;
    // NOP
label_3d7f68:
    // 0x3d7f68: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d7f6c:
    if (ctx->pc == 0x3D7F6Cu) {
        ctx->pc = 0x3D7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F68u;
        // 0x3d7f6c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F70u;
        goto label_3d7f70;
    }
    ctx->pc = 0x3D7F68u;
    {
        const bool branch_taken_0x3d7f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F68u;
        // 0x3d7f6c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f68) {
            ctx->pc = 0x3D7F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d7f58;
        }
    }
    ctx->pc = 0x3D7F70u;
label_3d7f70:
    // 0x3d7f70: 0xc138ddc  jal         func_4E3770
label_3d7f74:
    if (ctx->pc == 0x3D7F74u) {
        ctx->pc = 0x3D7F78u;
        goto label_3d7f78;
    }
    ctx->pc = 0x3D7F70u;
    SET_GPR_U32(ctx, 31, 0x3D7F78u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D7F70u, 0x3D7F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7F78u;
label_3d7f78:
    // 0x3d7f78: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3d7f78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3d7f7c:
    // 0x3d7f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7f80:
    // 0x3d7f80: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x3d7f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_3d7f84:
    // 0x3d7f84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d7f84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d7f88:
    // 0x3d7f88: 0xc0e947e  jal         func_3A51F8
label_3d7f8c:
    if (ctx->pc == 0x3D7F8Cu) {
        ctx->pc = 0x3D7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F88u;
        // 0x3d7f8c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F90u;
        goto label_3d7f90;
    }
    ctx->pc = 0x3D7F88u;
    SET_GPR_U32(ctx, 31, 0x3D7F90u);
    ctx->pc = 0x3D7F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7F88u;
    // 0x3d7f8c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3D7F88u, 0x3D7F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7F90u;
label_3d7f90:
    // 0x3d7f90: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_3d7f94:
    if (ctx->pc == 0x3D7F94u) {
        ctx->pc = 0x3D7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F90u;
        // 0x3d7f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7F98u;
        goto label_3d7f98;
    }
    ctx->pc = 0x3D7F90u;
    {
        const bool branch_taken_0x3d7f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F90u;
        // 0x3d7f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7f90) {
            ctx->pc = 0x3D80DCu;
            goto label_3d80dc;
        }
    }
    ctx->pc = 0x3D7F98u;
label_3d7f98:
    // 0x3d7f98: 0xc0e858c  jal         func_3A1630
label_3d7f9c:
    if (ctx->pc == 0x3D7F9Cu) {
        ctx->pc = 0x3D7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7F98u;
        // 0x3d7f9c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7FA0u;
        goto label_3d7fa0;
    }
    ctx->pc = 0x3D7F98u;
    SET_GPR_U32(ctx, 31, 0x3D7FA0u);
    ctx->pc = 0x3D7F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7F98u;
    // 0x3d7f9c: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D7F98u, 0x3D7FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7FA0u;
label_3d7fa0:
    // 0x3d7fa0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d7fa4:
    // 0x3d7fa4: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_3d7fa8:
    if (ctx->pc == 0x3D7FA8u) {
        ctx->pc = 0x3D7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FA4u;
        // 0x3d7fa8: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7FACu;
        goto label_3d7fac;
    }
    ctx->pc = 0x3D7FA4u;
    {
        const bool branch_taken_0x3d7fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d7fa4) {
            ctx->pc = 0x3D7FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D7FA4u;
            // 0x3d7fa8: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D800Cu;
            goto label_3d800c;
        }
    }
    ctx->pc = 0x3D7FACu;
label_3d7fac:
    // 0x3d7fac: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3d7facu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3d7fb0:
    // 0x3d7fb0: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x3d7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
label_3d7fb4:
    // 0x3d7fb4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3d7fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3d7fb8:
    // 0x3d7fb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d7fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d7fbc:
    // 0x3d7fbc: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3d7fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d7fc0:
    // 0x3d7fc0: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3d7fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3d7fc4:
    // 0x3d7fc4: 0x346380ff  ori         $v1, $v1, 0x80FF
    ctx->pc = 0x3d7fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33023);
label_3d7fc8:
    // 0x3d7fc8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d7fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d7fcc:
    // 0x3d7fcc: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3d7fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3d7fd0:
    // 0x3d7fd0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3d7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d7fd4:
    // 0x3d7fd4: 0x261050a8  addiu       $s0, $s0, 0x50A8
    ctx->pc = 0x3d7fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20648));
label_3d7fd8:
    // 0x3d7fd8: 0xafa30850  sw          $v1, 0x850($sp)
    ctx->pc = 0x3d7fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
label_3d7fdc:
    // 0x3d7fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7fe0:
    // 0x3d7fe0: 0xafa20840  sw          $v0, 0x840($sp)
    ctx->pc = 0x3d7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2112), GPR_U32(ctx, 2));
label_3d7fe4:
    // 0x3d7fe4: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3d7fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3d7fe8:
    // 0x3d7fe8: 0xe7a00860  swc1        $f0, 0x860($sp)
    ctx->pc = 0x3d7fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2144), bits); }
label_3d7fec:
    // 0x3d7fec: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3d7fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d7ff0:
    // 0x3d7ff0: 0xc0e9fd0  jal         func_3A7F40
label_3d7ff4:
    if (ctx->pc == 0x3D7FF4u) {
        ctx->pc = 0x3D7FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FF0u;
        // 0x3d7ff4: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7FF8u;
        goto label_3d7ff8;
    }
    ctx->pc = 0x3D7FF0u;
    SET_GPR_U32(ctx, 31, 0x3D7FF8u);
    ctx->pc = 0x3D7FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7FF0u;
    // 0x3d7ff4: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3D7FF0u, 0x3D7FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7FF8u;
label_3d7ff8:
    // 0x3d7ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d7ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7ffc:
    // 0x3d7ffc: 0xc0f15bc  jal         func_3C56F0
label_3d8000:
    if (ctx->pc == 0x3D8000u) {
        ctx->pc = 0x3D8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7FFCu;
        // 0x3d8000: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8004u;
        goto label_3d8004;
    }
    ctx->pc = 0x3D7FFCu;
    SET_GPR_U32(ctx, 31, 0x3D8004u);
    ctx->pc = 0x3D8000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7FFCu;
    // 0x3d8000: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D7FFCu, 0x3D8004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8004u;
label_3d8004:
    // 0x3d8004: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x3d8004u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_3d8008:
    // 0x3d8008: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3d8008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3d800c:
    // 0x3d800c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_3d8010:
    if (ctx->pc == 0x3D8010u) {
        ctx->pc = 0x3D8010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D800Cu;
        // 0x3d8010: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8014u;
        goto label_3d8014;
    }
    ctx->pc = 0x3D800Cu;
    {
        const bool branch_taken_0x3d800c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d800c) {
            ctx->pc = 0x3D8010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D800Cu;
            // 0x3d8010: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8074u;
            goto label_3d8074;
        }
    }
    ctx->pc = 0x3D8014u;
label_3d8014:
    // 0x3d8014: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3d8014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3d8018:
    // 0x3d8018: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x3d8018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
label_3d801c:
    // 0x3d801c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3d801cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3d8020:
    // 0x3d8020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d8020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d8024:
    // 0x3d8024: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3d8024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d8028:
    // 0x3d8028: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3d8028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3d802c:
    // 0x3d802c: 0x346380ff  ori         $v1, $v1, 0x80FF
    ctx->pc = 0x3d802cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33023);
label_3d8030:
    // 0x3d8030: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d8030u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d8034:
    // 0x3d8034: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3d8034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3d8038:
    // 0x3d8038: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3d8038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d803c:
    // 0x3d803c: 0x261050a8  addiu       $s0, $s0, 0x50A8
    ctx->pc = 0x3d803cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20648));
label_3d8040:
    // 0x3d8040: 0xafa30850  sw          $v1, 0x850($sp)
    ctx->pc = 0x3d8040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
label_3d8044:
    // 0x3d8044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d8044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d8048:
    // 0x3d8048: 0xafa20840  sw          $v0, 0x840($sp)
    ctx->pc = 0x3d8048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2112), GPR_U32(ctx, 2));
label_3d804c:
    // 0x3d804c: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3d804cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3d8050:
    // 0x3d8050: 0xe7a00860  swc1        $f0, 0x860($sp)
    ctx->pc = 0x3d8050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2144), bits); }
label_3d8054:
    // 0x3d8054: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3d8054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d8058:
    // 0x3d8058: 0xc0e9fd0  jal         func_3A7F40
label_3d805c:
    if (ctx->pc == 0x3D805Cu) {
        ctx->pc = 0x3D805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8058u;
        // 0x3d805c: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8060u;
        goto label_3d8060;
    }
    ctx->pc = 0x3D8058u;
    SET_GPR_U32(ctx, 31, 0x3D8060u);
    ctx->pc = 0x3D805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8058u;
    // 0x3d805c: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3D8058u, 0x3D8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8060u;
label_3d8060:
    // 0x3d8060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8064:
    // 0x3d8064: 0xc0f15bc  jal         func_3C56F0
label_3d8068:
    if (ctx->pc == 0x3D8068u) {
        ctx->pc = 0x3D8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8064u;
        // 0x3d8068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D806Cu;
        goto label_3d806c;
    }
    ctx->pc = 0x3D8064u;
    SET_GPR_U32(ctx, 31, 0x3D806Cu);
    ctx->pc = 0x3D8068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8064u;
    // 0x3d8068: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D8064u, 0x3D806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D806Cu;
label_3d806c:
    // 0x3d806c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x3d806cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_3d8070:
    // 0x3d8070: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x3d8070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d8074:
    // 0x3d8074: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_3d8078:
    if (ctx->pc == 0x3D8078u) {
        ctx->pc = 0x3D8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8074u;
        // 0x3d8078: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D807Cu;
        goto label_3d807c;
    }
    ctx->pc = 0x3D8074u;
    {
        const bool branch_taken_0x3d8074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8074u;
        // 0x3d8078: 0x7bb008a0  lq          $s0, 0x8A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8074) {
            ctx->pc = 0x3D8164u;
            goto label_3d8164;
        }
    }
    ctx->pc = 0x3D807Cu;
label_3d807c:
    // 0x3d807c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3d807cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3d8080:
    // 0x3d8080: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x3d8080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
label_3d8084:
    // 0x3d8084: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3d8084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3d8088:
    // 0x3d8088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d8088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d808c:
    // 0x3d808c: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3d808cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d8090:
    // 0x3d8090: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3d8090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3d8094:
    // 0x3d8094: 0x346380ff  ori         $v1, $v1, 0x80FF
    ctx->pc = 0x3d8094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33023);
label_3d8098:
    // 0x3d8098: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d8098u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d809c:
    // 0x3d809c: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3d809cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3d80a0:
    // 0x3d80a0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3d80a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3d80a4:
    // 0x3d80a4: 0x261050a8  addiu       $s0, $s0, 0x50A8
    ctx->pc = 0x3d80a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20648));
label_3d80a8:
    // 0x3d80a8: 0xafa30850  sw          $v1, 0x850($sp)
    ctx->pc = 0x3d80a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2128), GPR_U32(ctx, 3));
label_3d80ac:
    // 0x3d80ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d80acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d80b0:
    // 0x3d80b0: 0xafa20840  sw          $v0, 0x840($sp)
    ctx->pc = 0x3d80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2112), GPR_U32(ctx, 2));
label_3d80b4:
    // 0x3d80b4: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3d80b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3d80b8:
    // 0x3d80b8: 0xe7a00860  swc1        $f0, 0x860($sp)
    ctx->pc = 0x3d80b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2144), bits); }
label_3d80bc:
    // 0x3d80bc: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3d80bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d80c0:
    // 0x3d80c0: 0xc0e9fd0  jal         func_3A7F40
label_3d80c4:
    if (ctx->pc == 0x3D80C4u) {
        ctx->pc = 0x3D80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80C0u;
        // 0x3d80c4: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D80C8u;
        goto label_3d80c8;
    }
    ctx->pc = 0x3D80C0u;
    SET_GPR_U32(ctx, 31, 0x3D80C8u);
    ctx->pc = 0x3D80C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D80C0u;
    // 0x3d80c4: 0x27a80860  addiu       $t0, $sp, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3D80C0u, 0x3D80C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D80C8u;
label_3d80c8:
    // 0x3d80c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d80c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d80cc:
    // 0x3d80cc: 0xc0f15bc  jal         func_3C56F0
label_3d80d0:
    if (ctx->pc == 0x3D80D0u) {
        ctx->pc = 0x3D80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80CCu;
        // 0x3d80d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D80D4u;
        goto label_3d80d4;
    }
    ctx->pc = 0x3D80CCu;
    SET_GPR_U32(ctx, 31, 0x3D80D4u);
    ctx->pc = 0x3D80D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D80CCu;
    // 0x3d80d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D80CCu, 0x3D80D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D80D4u;
label_3d80d4:
    // 0x3d80d4: 0x10000022  b           . + 4 + (0x22 << 2)
label_3d80d8:
    if (ctx->pc == 0x3D80D8u) {
        ctx->pc = 0x3D80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80D4u;
        // 0x3d80d8: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D80DCu;
        goto label_3d80dc;
    }
    ctx->pc = 0x3D80D4u;
    {
        const bool branch_taken_0x3d80d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80D4u;
        // 0x3d80d8: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d80d4) {
            ctx->pc = 0x3D8160u;
            goto label_3d8160;
        }
    }
    ctx->pc = 0x3D80DCu;
label_3d80dc:
    // 0x3d80dc: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x3d80dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d80e0:
    // 0x3d80e0: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_3d80e4:
    if (ctx->pc == 0x3D80E4u) {
        ctx->pc = 0x3D80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80E0u;
        // 0x3d80e4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D80E8u;
        goto label_3d80e8;
    }
    ctx->pc = 0x3D80E0u;
    {
        const bool branch_taken_0x3d80e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80E0u;
        // 0x3d80e4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d80e0) {
            ctx->pc = 0x3D8104u;
            goto label_3d8104;
        }
    }
    ctx->pc = 0x3D80E8u;
label_3d80e8:
    // 0x3d80e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d80ec:
    // 0x3d80ec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d80ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d80f0:
    // 0x3d80f0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d80f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d80f4:
    // 0x3d80f4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d80f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d80f8:
    // 0x3d80f8: 0x60f809  jalr        $v1
label_3d80fc:
    if (ctx->pc == 0x3D80FCu) {
        ctx->pc = 0x3D80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80F8u;
        // 0x3d80fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8100u;
        goto label_3d8100;
    }
    ctx->pc = 0x3D80F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D8100u);
        ctx->pc = 0x3D80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D80F8u;
        // 0x3d80fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D80F8u, 0x3D8100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8100u;
label_3d8100:
    // 0x3d8100: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3d8100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3d8104:
    // 0x3d8104: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x3d8104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3d8108:
    // 0x3d8108: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_3d810c:
    if (ctx->pc == 0x3D810Cu) {
        ctx->pc = 0x3D810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8108u;
        // 0x3d810c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8110u;
        goto label_3d8110;
    }
    ctx->pc = 0x3D8108u;
    {
        const bool branch_taken_0x3d8108 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8108u;
        // 0x3d810c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8108) {
            ctx->pc = 0x3D812Cu;
            goto label_3d812c;
        }
    }
    ctx->pc = 0x3D8110u;
label_3d8110:
    // 0x3d8110: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d8110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d8114:
    // 0x3d8114: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d8114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d8118:
    // 0x3d8118: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d8118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d811c:
    // 0x3d811c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d8120:
    // 0x3d8120: 0x60f809  jalr        $v1
label_3d8124:
    if (ctx->pc == 0x3D8124u) {
        ctx->pc = 0x3D8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8120u;
        // 0x3d8124: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8128u;
        goto label_3d8128;
    }
    ctx->pc = 0x3D8120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D8128u);
        ctx->pc = 0x3D8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8120u;
        // 0x3d8124: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8120u, 0x3D8128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8128u;
label_3d8128:
    // 0x3d8128: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3d8128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3d812c:
    // 0x3d812c: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x3d812cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_3d8130:
    // 0x3d8130: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_3d8134:
    if (ctx->pc == 0x3D8134u) {
        ctx->pc = 0x3D8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8130u;
        // 0x3d8134: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8138u;
        goto label_3d8138;
    }
    ctx->pc = 0x3D8130u;
    {
        const bool branch_taken_0x3d8130 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8130u;
        // 0x3d8134: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8130) {
            ctx->pc = 0x3D8154u;
            goto label_3d8154;
        }
    }
    ctx->pc = 0x3D8138u;
label_3d8138:
    // 0x3d8138: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3d8138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3d813c:
    // 0x3d813c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d813cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d8140:
    // 0x3d8140: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3d8140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3d8144:
    // 0x3d8144: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3d8144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3d8148:
    // 0x3d8148: 0x60f809  jalr        $v1
label_3d814c:
    if (ctx->pc == 0x3D814Cu) {
        ctx->pc = 0x3D814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8148u;
        // 0x3d814c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8150u;
        goto label_3d8150;
    }
    ctx->pc = 0x3D8148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D8150u);
        ctx->pc = 0x3D814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8148u;
        // 0x3d814c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8148u, 0x3D8150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D8150u;
label_3d8150:
    // 0x3d8150: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x3d8150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_3d8154:
    // 0x3d8154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d8154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8158:
    // 0x3d8158: 0xc0e858c  jal         func_3A1630
label_3d815c:
    if (ctx->pc == 0x3D815Cu) {
        ctx->pc = 0x3D815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8158u;
        // 0x3d815c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8160u;
        goto label_3d8160;
    }
    ctx->pc = 0x3D8158u;
    SET_GPR_U32(ctx, 31, 0x3D8160u);
    ctx->pc = 0x3D815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8158u;
    // 0x3d815c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D8158u, 0x3D8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8160u;
label_3d8160:
    // 0x3d8160: 0x7bb008a0  lq          $s0, 0x8A0($sp)
    ctx->pc = 0x3d8160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_3d8164:
    // 0x3d8164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d8164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d8168:
    // 0x3d8168: 0x7bb10890  lq          $s1, 0x890($sp)
    ctx->pc = 0x3d8168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_3d816c:
    // 0x3d816c: 0x7bb20880  lq          $s2, 0x880($sp)
    ctx->pc = 0x3d816cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_3d8170:
    // 0x3d8170: 0xdfbf0870  ld          $ra, 0x870($sp)
    ctx->pc = 0x3d8170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2160)));
label_3d8174:
    // 0x3d8174: 0x3e00008  jr          $ra
label_3d8178:
    if (ctx->pc == 0x3D8178u) {
        ctx->pc = 0x3D8178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8174u;
        // 0x3d8178: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D817Cu;
        goto label_3d817c;
    }
    ctx->pc = 0x3D8174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8174u;
        // 0x3d8178: 0x27bd08b0  addiu       $sp, $sp, 0x8B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D817Cu;
label_3d817c:
    // 0x3d817c: 0x0  nop
    ctx->pc = 0x3d817cu;
    // NOP
    ctx->pc = 0x3d8180u;
}
