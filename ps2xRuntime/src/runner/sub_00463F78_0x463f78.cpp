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

// Function: sub_00463F78
// Address: 0x463f78 - 0x464210
void sub_00463F78_0x463f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463F78_0x463f78");
#endif

    switch (ctx->pc) {
        case 0x463f78u: goto label_463f78;
        case 0x463f7cu: goto label_463f7c;
        case 0x463f80u: goto label_463f80;
        case 0x463f84u: goto label_463f84;
        case 0x463f88u: goto label_463f88;
        case 0x463f8cu: goto label_463f8c;
        case 0x463f90u: goto label_463f90;
        case 0x463f94u: goto label_463f94;
        case 0x463f98u: goto label_463f98;
        case 0x463f9cu: goto label_463f9c;
        case 0x463fa0u: goto label_463fa0;
        case 0x463fa4u: goto label_463fa4;
        case 0x463fa8u: goto label_463fa8;
        case 0x463facu: goto label_463fac;
        case 0x463fb0u: goto label_463fb0;
        case 0x463fb4u: goto label_463fb4;
        case 0x463fb8u: goto label_463fb8;
        case 0x463fbcu: goto label_463fbc;
        case 0x463fc0u: goto label_463fc0;
        case 0x463fc4u: goto label_463fc4;
        case 0x463fc8u: goto label_463fc8;
        case 0x463fccu: goto label_463fcc;
        case 0x463fd0u: goto label_463fd0;
        case 0x463fd4u: goto label_463fd4;
        case 0x463fd8u: goto label_463fd8;
        case 0x463fdcu: goto label_463fdc;
        case 0x463fe0u: goto label_463fe0;
        case 0x463fe4u: goto label_463fe4;
        case 0x463fe8u: goto label_463fe8;
        case 0x463fecu: goto label_463fec;
        case 0x463ff0u: goto label_463ff0;
        case 0x463ff4u: goto label_463ff4;
        case 0x463ff8u: goto label_463ff8;
        case 0x463ffcu: goto label_463ffc;
        case 0x464000u: goto label_464000;
        case 0x464004u: goto label_464004;
        case 0x464008u: goto label_464008;
        case 0x46400cu: goto label_46400c;
        case 0x464010u: goto label_464010;
        case 0x464014u: goto label_464014;
        case 0x464018u: goto label_464018;
        case 0x46401cu: goto label_46401c;
        case 0x464020u: goto label_464020;
        case 0x464024u: goto label_464024;
        case 0x464028u: goto label_464028;
        case 0x46402cu: goto label_46402c;
        case 0x464030u: goto label_464030;
        case 0x464034u: goto label_464034;
        case 0x464038u: goto label_464038;
        case 0x46403cu: goto label_46403c;
        case 0x464040u: goto label_464040;
        case 0x464044u: goto label_464044;
        case 0x464048u: goto label_464048;
        case 0x46404cu: goto label_46404c;
        case 0x464050u: goto label_464050;
        case 0x464054u: goto label_464054;
        case 0x464058u: goto label_464058;
        case 0x46405cu: goto label_46405c;
        case 0x464060u: goto label_464060;
        case 0x464064u: goto label_464064;
        case 0x464068u: goto label_464068;
        case 0x46406cu: goto label_46406c;
        case 0x464070u: goto label_464070;
        case 0x464074u: goto label_464074;
        case 0x464078u: goto label_464078;
        case 0x46407cu: goto label_46407c;
        case 0x464080u: goto label_464080;
        case 0x464084u: goto label_464084;
        case 0x464088u: goto label_464088;
        case 0x46408cu: goto label_46408c;
        case 0x464090u: goto label_464090;
        case 0x464094u: goto label_464094;
        case 0x464098u: goto label_464098;
        case 0x46409cu: goto label_46409c;
        case 0x4640a0u: goto label_4640a0;
        case 0x4640a4u: goto label_4640a4;
        case 0x4640a8u: goto label_4640a8;
        case 0x4640acu: goto label_4640ac;
        case 0x4640b0u: goto label_4640b0;
        case 0x4640b4u: goto label_4640b4;
        case 0x4640b8u: goto label_4640b8;
        case 0x4640bcu: goto label_4640bc;
        case 0x4640c0u: goto label_4640c0;
        case 0x4640c4u: goto label_4640c4;
        case 0x4640c8u: goto label_4640c8;
        case 0x4640ccu: goto label_4640cc;
        case 0x4640d0u: goto label_4640d0;
        case 0x4640d4u: goto label_4640d4;
        case 0x4640d8u: goto label_4640d8;
        case 0x4640dcu: goto label_4640dc;
        case 0x4640e0u: goto label_4640e0;
        case 0x4640e4u: goto label_4640e4;
        case 0x4640e8u: goto label_4640e8;
        case 0x4640ecu: goto label_4640ec;
        case 0x4640f0u: goto label_4640f0;
        case 0x4640f4u: goto label_4640f4;
        case 0x4640f8u: goto label_4640f8;
        case 0x4640fcu: goto label_4640fc;
        case 0x464100u: goto label_464100;
        case 0x464104u: goto label_464104;
        case 0x464108u: goto label_464108;
        case 0x46410cu: goto label_46410c;
        case 0x464110u: goto label_464110;
        case 0x464114u: goto label_464114;
        case 0x464118u: goto label_464118;
        case 0x46411cu: goto label_46411c;
        case 0x464120u: goto label_464120;
        case 0x464124u: goto label_464124;
        case 0x464128u: goto label_464128;
        case 0x46412cu: goto label_46412c;
        case 0x464130u: goto label_464130;
        case 0x464134u: goto label_464134;
        case 0x464138u: goto label_464138;
        case 0x46413cu: goto label_46413c;
        case 0x464140u: goto label_464140;
        case 0x464144u: goto label_464144;
        case 0x464148u: goto label_464148;
        case 0x46414cu: goto label_46414c;
        case 0x464150u: goto label_464150;
        case 0x464154u: goto label_464154;
        case 0x464158u: goto label_464158;
        case 0x46415cu: goto label_46415c;
        case 0x464160u: goto label_464160;
        case 0x464164u: goto label_464164;
        case 0x464168u: goto label_464168;
        case 0x46416cu: goto label_46416c;
        case 0x464170u: goto label_464170;
        case 0x464174u: goto label_464174;
        case 0x464178u: goto label_464178;
        case 0x46417cu: goto label_46417c;
        case 0x464180u: goto label_464180;
        case 0x464184u: goto label_464184;
        case 0x464188u: goto label_464188;
        case 0x46418cu: goto label_46418c;
        case 0x464190u: goto label_464190;
        case 0x464194u: goto label_464194;
        case 0x464198u: goto label_464198;
        case 0x46419cu: goto label_46419c;
        case 0x4641a0u: goto label_4641a0;
        case 0x4641a4u: goto label_4641a4;
        case 0x4641a8u: goto label_4641a8;
        case 0x4641acu: goto label_4641ac;
        case 0x4641b0u: goto label_4641b0;
        case 0x4641b4u: goto label_4641b4;
        case 0x4641b8u: goto label_4641b8;
        case 0x4641bcu: goto label_4641bc;
        case 0x4641c0u: goto label_4641c0;
        case 0x4641c4u: goto label_4641c4;
        case 0x4641c8u: goto label_4641c8;
        case 0x4641ccu: goto label_4641cc;
        case 0x4641d0u: goto label_4641d0;
        case 0x4641d4u: goto label_4641d4;
        case 0x4641d8u: goto label_4641d8;
        case 0x4641dcu: goto label_4641dc;
        case 0x4641e0u: goto label_4641e0;
        case 0x4641e4u: goto label_4641e4;
        case 0x4641e8u: goto label_4641e8;
        case 0x4641ecu: goto label_4641ec;
        case 0x4641f0u: goto label_4641f0;
        case 0x4641f4u: goto label_4641f4;
        case 0x4641f8u: goto label_4641f8;
        case 0x4641fcu: goto label_4641fc;
        case 0x464200u: goto label_464200;
        case 0x464204u: goto label_464204;
        case 0x464208u: goto label_464208;
        case 0x46420cu: goto label_46420c;
        default: break;
    }

    ctx->pc = 0x463f78u;

label_463f78:
    // 0x463f78: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x463f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_463f7c:
    // 0x463f7c: 0x8f838490  lw          $v1, -0x7B70($gp)
    ctx->pc = 0x463f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_463f80:
    // 0x463f80: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x463f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_463f84:
    // 0x463f84: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x463f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_463f88:
    // 0x463f88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x463f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_463f8c:
    // 0x463f8c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x463f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_463f90:
    // 0x463f90: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x463f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_463f94:
    // 0x463f94: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x463f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_463f98:
    // 0x463f98: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x463f98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_463f9c:
    // 0x463f9c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x463f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_463fa0:
    // 0x463fa0: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x463fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_463fa4:
    // 0x463fa4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x463fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_463fa8:
    // 0x463fa8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x463fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_463fac:
    // 0x463fac: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x463facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_463fb0:
    // 0x463fb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x463fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_463fb4:
    // 0x463fb4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x463fb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_463fb8:
    // 0x463fb8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x463fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_463fbc:
    // 0x463fbc: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x463fbcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_463fc0:
    // 0x463fc0: 0x12c00086  beqz        $s6, . + 4 + (0x86 << 2)
label_463fc4:
    if (ctx->pc == 0x463FC4u) {
        ctx->pc = 0x463FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463FC0u;
        // 0x463fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x463FC8u;
        goto label_463fc8;
    }
    ctx->pc = 0x463FC0u;
    {
        const bool branch_taken_0x463fc0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x463FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463FC0u;
        // 0x463fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463fc0) {
            ctx->pc = 0x4641DCu;
            goto label_4641dc;
        }
    }
    ctx->pc = 0x463FC8u;
label_463fc8:
    // 0x463fc8: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x463fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_463fcc:
    // 0x463fcc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x463fccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_463fd0:
    // 0x463fd0: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_463fd4:
    if (ctx->pc == 0x463FD4u) {
        ctx->pc = 0x463FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463FD0u;
        // 0x463fd4: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x463FD8u;
        goto label_463fd8;
    }
    ctx->pc = 0x463FD0u;
    {
        const bool branch_taken_0x463fd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x463FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463FD0u;
        // 0x463fd4: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463fd0) {
            ctx->pc = 0x464024u;
            goto label_464024;
        }
    }
    ctx->pc = 0x463FD8u;
label_463fd8:
    // 0x463fd8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x463fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_463fdc:
    // 0x463fdc: 0x3c060053  lui         $a2, 0x53
    ctx->pc = 0x463fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
label_463fe0:
    // 0x463fe0: 0x8c62ae30  lw          $v0, -0x51D0($v1)
    ctx->pc = 0x463fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946352)));
label_463fe4:
    // 0x463fe4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x463fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_463fe8:
    // 0x463fe8: 0x8cc4e618  lw          $a0, -0x19E8($a2)
    ctx->pc = 0x463fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960664)));
label_463fec:
    // 0x463fec: 0x40f809  jalr        $v0
label_463ff0:
    if (ctx->pc == 0x463FF0u) {
        ctx->pc = 0x463FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463FECu;
        // 0x463ff0: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x463FF4u;
        goto label_463ff4;
    }
    ctx->pc = 0x463FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x463FF4u);
        ctx->pc = 0x463FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463FECu;
        // 0x463ff0: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x463FECu, 0x463FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x463FF4u;
label_463ff4:
    // 0x463ff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x463ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_463ff8:
    // 0x463ff8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_463ffc:
    if (ctx->pc == 0x463FFCu) {
        ctx->pc = 0x463FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463FF8u;
        // 0x463ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464000u;
        goto label_464000;
    }
    ctx->pc = 0x463FF8u;
    {
        const bool branch_taken_0x463ff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x463FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x463FF8u;
        // 0x463ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463ff8) {
            ctx->pc = 0x464008u;
            goto label_464008;
        }
    }
    ctx->pc = 0x464000u;
label_464000:
    // 0x464000: 0x10000008  b           . + 4 + (0x8 << 2)
label_464004:
    if (ctx->pc == 0x464004u) {
        ctx->pc = 0x464004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464000u;
        // 0x464004: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464008u;
        goto label_464008;
    }
    ctx->pc = 0x464000u;
    {
        const bool branch_taken_0x464000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464000u;
        // 0x464004: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464000) {
            ctx->pc = 0x464024u;
            goto label_464024;
        }
    }
    ctx->pc = 0x464008u;
label_464008:
    // 0x464008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x464008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46400c:
    // 0x46400c: 0xc10c1fa  jal         func_4307E8
label_464010:
    if (ctx->pc == 0x464010u) {
        ctx->pc = 0x464010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46400Cu;
        // 0x464010: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464014u;
        goto label_464014;
    }
    ctx->pc = 0x46400Cu;
    SET_GPR_U32(ctx, 31, 0x464014u);
    ctx->pc = 0x464010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46400Cu;
    // 0x464010: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x46400Cu, 0x464014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464014u;
label_464014:
    // 0x464014: 0x8f838490  lw          $v1, -0x7B70($gp)
    ctx->pc = 0x464014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_464018:
    // 0x464018: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x464018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_46401c:
    // 0x46401c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x46401cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_464020:
    // 0x464020: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x464020u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464024:
    // 0x464024: 0x57c00003  bnel        $fp, $zero, . + 4 + (0x3 << 2)
label_464028:
    if (ctx->pc == 0x464028u) {
        ctx->pc = 0x464028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464024u;
        // 0x464028: 0x8ec50080  lw          $a1, 0x80($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46402Cu;
        goto label_46402c;
    }
    ctx->pc = 0x464024u;
    {
        const bool branch_taken_0x464024 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x464024) {
            ctx->pc = 0x464028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x464024u;
            // 0x464028: 0x8ec50080  lw          $a1, 0x80($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x464034u;
            goto label_464034;
        }
    }
    ctx->pc = 0x46402Cu;
label_46402c:
    // 0x46402c: 0x1000006b  b           . + 4 + (0x6B << 2)
label_464030:
    if (ctx->pc == 0x464030u) {
        ctx->pc = 0x464030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46402Cu;
        // 0x464030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464034u;
        goto label_464034;
    }
    ctx->pc = 0x46402Cu;
    {
        const bool branch_taken_0x46402c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46402Cu;
        // 0x464030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46402c) {
            ctx->pc = 0x4641DCu;
            goto label_4641dc;
        }
    }
    ctx->pc = 0x464034u;
label_464034:
    // 0x464034: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x464034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_464038:
    // 0x464038: 0xc1193d8  jal         func_464F60
label_46403c:
    if (ctx->pc == 0x46403Cu) {
        ctx->pc = 0x46403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464038u;
        // 0x46403c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464040u;
        goto label_464040;
    }
    ctx->pc = 0x464038u;
    SET_GPR_U32(ctx, 31, 0x464040u);
    ctx->pc = 0x46403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464038u;
    // 0x46403c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x464F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464F60u, 0x464038u, 0x464040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464040u;
label_464040:
    // 0x464040: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x464040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_464044:
    // 0x464044: 0x0  nop
    ctx->pc = 0x464044u;
    // NOP
label_464048:
    // 0x464048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x464048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46404c:
    // 0x46404c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x46404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_464050:
    // 0x464050: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x464050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_464054:
    // 0x464054: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x464054u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_464058:
    // 0x464058: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_46405c:
    if (ctx->pc == 0x46405Cu) {
        ctx->pc = 0x46405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464058u;
        // 0x46405c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464060u;
        goto label_464060;
    }
    ctx->pc = 0x464058u;
    {
        const bool branch_taken_0x464058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464058u;
        // 0x46405c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464058) {
            ctx->pc = 0x4641C4u;
            goto label_4641c4;
        }
    }
    ctx->pc = 0x464060u;
label_464060:
    // 0x464060: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x464060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_464064:
    // 0x464064: 0x2442e860  addiu       $v0, $v0, -0x17A0
    ctx->pc = 0x464064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
label_464068:
    // 0x464068: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x464068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46406c:
    // 0x46406c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46406cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_464070:
    // 0x464070: 0x800008  jr          $a0
label_464074:
    if (ctx->pc == 0x464074u) {
        ctx->pc = 0x464078u;
        goto label_464078;
    }
    ctx->pc = 0x464070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x464078u: goto label_464078;
            case 0x4640ECu: goto label_4640ec;
            case 0x464158u: goto label_464158;
            case 0x46419Cu: goto label_46419c;
            case 0x4641C4u: goto label_4641c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464070u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x464078u;
label_464078:
    // 0x464078: 0x3c59021  addu        $s2, $fp, $a1
    ctx->pc = 0x464078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_46407c:
    // 0x46407c: 0x2c58821  addu        $s1, $s6, $a1
    ctx->pc = 0x46407cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_464080:
    // 0x464080: 0xc119528  jal         func_4654A0
label_464084:
    if (ctx->pc == 0x464084u) {
        ctx->pc = 0x464084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464080u;
        // 0x464084: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464088u;
        goto label_464088;
    }
    ctx->pc = 0x464080u;
    SET_GPR_U32(ctx, 31, 0x464088u);
    ctx->pc = 0x464084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464080u;
    // 0x464084: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4654A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4654A0u, 0x464080u, 0x464088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464088u;
label_464088:
    // 0x464088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46408c:
    // 0x46408c: 0xc11953a  jal         func_4654E8
label_464090:
    if (ctx->pc == 0x464090u) {
        ctx->pc = 0x464090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46408Cu;
        // 0x464090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464094u;
        goto label_464094;
    }
    ctx->pc = 0x46408Cu;
    SET_GPR_U32(ctx, 31, 0x464094u);
    ctx->pc = 0x464090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46408Cu;
    // 0x464090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4654E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4654E8u, 0x46408Cu, 0x464094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464094u;
label_464094:
    // 0x464094: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x464094u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_464098:
    // 0x464098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x464098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46409c:
    // 0x46409c: 0xc1194fe  jal         func_4653F8
label_4640a0:
    if (ctx->pc == 0x4640A0u) {
        ctx->pc = 0x4640A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46409Cu;
        // 0x4640a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4640A4u;
        goto label_4640a4;
    }
    ctx->pc = 0x46409Cu;
    SET_GPR_U32(ctx, 31, 0x4640A4u);
    ctx->pc = 0x4640A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46409Cu;
    // 0x4640a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4653F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4653F8u, 0x46409Cu, 0x4640A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4640A4u;
label_4640a4:
    // 0x4640a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4640a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4640a8:
    // 0x4640a8: 0xc119512  jal         func_465448
label_4640ac:
    if (ctx->pc == 0x4640ACu) {
        ctx->pc = 0x4640ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4640A8u;
        // 0x4640ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4640B0u;
        goto label_4640b0;
    }
    ctx->pc = 0x4640A8u;
    SET_GPR_U32(ctx, 31, 0x4640B0u);
    ctx->pc = 0x4640ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4640A8u;
    // 0x4640ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465448u, 0x4640A8u, 0x4640B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4640B0u;
label_4640b0:
    // 0x4640b0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4640b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4640b4:
    // 0x4640b4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x4640b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_4640b8:
    // 0x4640b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4640b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4640bc:
    // 0x4640bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_4640c0:
    if (ctx->pc == 0x4640C0u) {
        ctx->pc = 0x4640C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4640BCu;
        // 0x4640c0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4640C4u;
        goto label_4640c4;
    }
    ctx->pc = 0x4640BCu;
    {
        const bool branch_taken_0x4640bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4640C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4640BCu;
        // 0x4640c0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4640bc) {
            ctx->pc = 0x4640D0u;
            goto label_4640d0;
        }
    }
    ctx->pc = 0x4640C4u;
label_4640c4:
    // 0x4640c4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4640c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4640c8:
    // 0x4640c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4640c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4640cc:
    // 0x4640cc: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x4640ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_4640d0:
    // 0x4640d0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4640d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4640d4:
    // 0x4640d4: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_4640d8:
    if (ctx->pc == 0x4640D8u) {
        ctx->pc = 0x4640D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4640D4u;
        // 0x4640d8: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4640DCu;
        goto label_4640dc;
    }
    ctx->pc = 0x4640D4u;
    {
        const bool branch_taken_0x4640d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4640D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4640D4u;
        // 0x4640d8: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4640d4) {
            ctx->pc = 0x4641C8u;
            goto label_4641c8;
        }
    }
    ctx->pc = 0x4640DCu;
label_4640dc:
    // 0x4640dc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4640dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4640e0:
    // 0x4640e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4640e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4640e4:
    // 0x4640e4: 0x10000037  b           . + 4 + (0x37 << 2)
label_4640e8:
    if (ctx->pc == 0x4640E8u) {
        ctx->pc = 0x4640E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4640E4u;
        // 0x4640e8: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4640ECu;
        goto label_4640ec;
    }
    ctx->pc = 0x4640E4u;
    {
        const bool branch_taken_0x4640e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4640E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4640E4u;
        // 0x4640e8: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4640e4) {
            ctx->pc = 0x4641C4u;
            goto label_4641c4;
        }
    }
    ctx->pc = 0x4640ECu;
label_4640ec:
    // 0x4640ec: 0xc1195bc  jal         func_4656F0
label_4640f0:
    if (ctx->pc == 0x4640F0u) {
        ctx->pc = 0x4640F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4640ECu;
        // 0x4640f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4640F4u;
        goto label_4640f4;
    }
    ctx->pc = 0x4640ECu;
    SET_GPR_U32(ctx, 31, 0x4640F4u);
    ctx->pc = 0x4640F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4640ECu;
    // 0x4640f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4656F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4656F0u, 0x4640ECu, 0x4640F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4640F4u;
label_4640f4:
    // 0x4640f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4640f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4640f8:
    // 0x4640f8: 0xc1195ce  jal         func_465738
label_4640fc:
    if (ctx->pc == 0x4640FCu) {
        ctx->pc = 0x4640FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4640F8u;
        // 0x4640fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464100u;
        goto label_464100;
    }
    ctx->pc = 0x4640F8u;
    SET_GPR_U32(ctx, 31, 0x464100u);
    ctx->pc = 0x4640FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4640F8u;
    // 0x4640fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465738u, 0x4640F8u, 0x464100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464100u;
label_464100:
    // 0x464100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x464100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464104:
    // 0x464104: 0xc1195f2  jal         func_4657C8
label_464108:
    if (ctx->pc == 0x464108u) {
        ctx->pc = 0x464108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464104u;
        // 0x464108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46410Cu;
        goto label_46410c;
    }
    ctx->pc = 0x464104u;
    SET_GPR_U32(ctx, 31, 0x46410Cu);
    ctx->pc = 0x464108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464104u;
    // 0x464108: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4657C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4657C8u, 0x464104u, 0x46410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46410Cu;
label_46410c:
    // 0x46410c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x46410cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_464110:
    // 0x464110: 0xc1195e0  jal         func_465780
label_464114:
    if (ctx->pc == 0x464114u) {
        ctx->pc = 0x464114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464110u;
        // 0x464114: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464118u;
        goto label_464118;
    }
    ctx->pc = 0x464110u;
    SET_GPR_U32(ctx, 31, 0x464118u);
    ctx->pc = 0x464114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464110u;
    // 0x464114: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465780u, 0x464110u, 0x464118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464118u;
label_464118:
    // 0x464118: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_46411c:
    if (ctx->pc == 0x46411Cu) {
        ctx->pc = 0x46411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464118u;
        // 0x46411c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464120u;
        goto label_464120;
    }
    ctx->pc = 0x464118u;
    {
        const bool branch_taken_0x464118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464118u;
        // 0x46411c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464118) {
            ctx->pc = 0x46412Cu;
            goto label_46412c;
        }
    }
    ctx->pc = 0x464120u;
label_464120:
    // 0x464120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x464120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464124:
    // 0x464124: 0xc11954e  jal         func_465538
label_464128:
    if (ctx->pc == 0x464128u) {
        ctx->pc = 0x464128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464124u;
        // 0x464128: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46412Cu;
        goto label_46412c;
    }
    ctx->pc = 0x464124u;
    SET_GPR_U32(ctx, 31, 0x46412Cu);
    ctx->pc = 0x464128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464124u;
    // 0x464128: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465538u, 0x464124u, 0x46412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46412Cu;
label_46412c:
    // 0x46412c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46412cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_464130:
    // 0x464130: 0xc119578  jal         func_4655E0
label_464134:
    if (ctx->pc == 0x464134u) {
        ctx->pc = 0x464134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464130u;
        // 0x464134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464138u;
        goto label_464138;
    }
    ctx->pc = 0x464130u;
    SET_GPR_U32(ctx, 31, 0x464138u);
    ctx->pc = 0x464134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464130u;
    // 0x464134: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4655E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655E0u, 0x464130u, 0x464138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464138u;
label_464138:
    // 0x464138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x464138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46413c:
    // 0x46413c: 0xc11958c  jal         func_465630
label_464140:
    if (ctx->pc == 0x464140u) {
        ctx->pc = 0x464140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46413Cu;
        // 0x464140: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464144u;
        goto label_464144;
    }
    ctx->pc = 0x46413Cu;
    SET_GPR_U32(ctx, 31, 0x464144u);
    ctx->pc = 0x464140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46413Cu;
    // 0x464140: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465630u, 0x46413Cu, 0x464144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464144u;
label_464144:
    // 0x464144: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x464144u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_464148:
    // 0x464148: 0xc1195a8  jal         func_4656A0
label_46414c:
    if (ctx->pc == 0x46414Cu) {
        ctx->pc = 0x46414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464148u;
        // 0x46414c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464150u;
        goto label_464150;
    }
    ctx->pc = 0x464148u;
    SET_GPR_U32(ctx, 31, 0x464150u);
    ctx->pc = 0x46414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464148u;
    // 0x46414c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4656A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4656A0u, 0x464148u, 0x464150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464150u;
label_464150:
    // 0x464150: 0x1000001d  b           . + 4 + (0x1D << 2)
label_464154:
    if (ctx->pc == 0x464154u) {
        ctx->pc = 0x464154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464150u;
        // 0x464154: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464158u;
        goto label_464158;
    }
    ctx->pc = 0x464150u;
    {
        const bool branch_taken_0x464150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464150u;
        // 0x464154: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464150) {
            ctx->pc = 0x4641C8u;
            goto label_4641c8;
        }
    }
    ctx->pc = 0x464158u;
label_464158:
    // 0x464158: 0xc11965c  jal         func_465970
label_46415c:
    if (ctx->pc == 0x46415Cu) {
        ctx->pc = 0x46415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464158u;
        // 0x46415c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464160u;
        goto label_464160;
    }
    ctx->pc = 0x464158u;
    SET_GPR_U32(ctx, 31, 0x464160u);
    ctx->pc = 0x46415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x464158u;
    // 0x46415c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465970u, 0x464158u, 0x464160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464160u;
label_464160:
    // 0x464160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464164:
    // 0x464164: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x464164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_464168:
    // 0x464168: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x464168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46416c:
    // 0x46416c: 0xc11966e  jal         func_4659B8
label_464170:
    if (ctx->pc == 0x464170u) {
        ctx->pc = 0x464170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46416Cu;
        // 0x464170: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x464174u;
        goto label_464174;
    }
    ctx->pc = 0x46416Cu;
    SET_GPR_U32(ctx, 31, 0x464174u);
    ctx->pc = 0x464170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46416Cu;
    // 0x464170: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4659B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4659B8u, 0x46416Cu, 0x464174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464174u;
label_464174:
    // 0x464174: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_464178:
    if (ctx->pc == 0x464178u) {
        ctx->pc = 0x464178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464174u;
        // 0x464178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46417Cu;
        goto label_46417c;
    }
    ctx->pc = 0x464174u;
    {
        const bool branch_taken_0x464174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x464178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464174u;
        // 0x464178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464174) {
            ctx->pc = 0x464184u;
            goto label_464184;
        }
    }
    ctx->pc = 0x46417Cu;
label_46417c:
    // 0x46417c: 0xc119604  jal         func_465810
label_464180:
    if (ctx->pc == 0x464180u) {
        ctx->pc = 0x464180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46417Cu;
        // 0x464180: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464184u;
        goto label_464184;
    }
    ctx->pc = 0x46417Cu;
    SET_GPR_U32(ctx, 31, 0x464184u);
    ctx->pc = 0x464180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46417Cu;
    // 0x464180: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465810u, 0x46417Cu, 0x464184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464184u;
label_464184:
    // 0x464184: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x464184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_464188:
    // 0x464188: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x464188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46418c:
    // 0x46418c: 0xc119634  jal         func_4658D0
label_464190:
    if (ctx->pc == 0x464190u) {
        ctx->pc = 0x464190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46418Cu;
        // 0x464190: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464194u;
        goto label_464194;
    }
    ctx->pc = 0x46418Cu;
    SET_GPR_U32(ctx, 31, 0x464194u);
    ctx->pc = 0x464190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46418Cu;
    // 0x464190: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4658D0u, 0x46418Cu, 0x464194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464194u;
label_464194:
    // 0x464194: 0x1000000c  b           . + 4 + (0xC << 2)
label_464198:
    if (ctx->pc == 0x464198u) {
        ctx->pc = 0x464198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464194u;
        // 0x464198: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46419Cu;
        goto label_46419c;
    }
    ctx->pc = 0x464194u;
    {
        const bool branch_taken_0x464194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x464198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464194u;
        // 0x464198: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x464194) {
            ctx->pc = 0x4641C8u;
            goto label_4641c8;
        }
    }
    ctx->pc = 0x46419Cu;
label_46419c:
    // 0x46419c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4641a0:
    // 0x4641a0: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x4641a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_4641a4:
    // 0x4641a4: 0xc11969e  jal         func_465A78
label_4641a8:
    if (ctx->pc == 0x4641A8u) {
        ctx->pc = 0x4641A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4641A4u;
        // 0x4641a8: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4641ACu;
        goto label_4641ac;
    }
    ctx->pc = 0x4641A4u;
    SET_GPR_U32(ctx, 31, 0x4641ACu);
    ctx->pc = 0x4641A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4641A4u;
    // 0x4641a8: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x465A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465A78u, 0x4641A4u, 0x4641ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4641ACu;
label_4641ac:
    // 0x4641ac: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4641acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4641b0:
    // 0x4641b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4641b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4641b4:
    // 0x4641b4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4641b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4641b8:
    // 0x4641b8: 0xc119688  jal         func_465A20
label_4641bc:
    if (ctx->pc == 0x4641BCu) {
        ctx->pc = 0x4641BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4641B8u;
        // 0x4641bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4641C0u;
        goto label_4641c0;
    }
    ctx->pc = 0x4641B8u;
    SET_GPR_U32(ctx, 31, 0x4641C0u);
    ctx->pc = 0x4641BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4641B8u;
    // 0x4641bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465A20u, 0x4641B8u, 0x4641C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4641C0u;
label_4641c0:
    // 0x4641c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4641c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4641c4:
    // 0x4641c4: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x4641c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4641c8:
    // 0x4641c8: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x4641c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4641cc:
    // 0x4641cc: 0x2ea30002  sltiu       $v1, $s5, 0x2
    ctx->pc = 0x4641ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4641d0:
    // 0x4641d0: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
label_4641d4:
    if (ctx->pc == 0x4641D4u) {
        ctx->pc = 0x4641D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4641D0u;
        // 0x4641d4: 0x151180  sll         $v0, $s5, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4641D8u;
        goto label_4641d8;
    }
    ctx->pc = 0x4641D0u;
    {
        const bool branch_taken_0x4641d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4641D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4641D0u;
        // 0x4641d4: 0x151180  sll         $v0, $s5, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4641d0) {
            ctx->pc = 0x464048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_464048;
        }
    }
    ctx->pc = 0x4641D8u;
label_4641d8:
    // 0x4641d8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x4641d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4641dc:
    // 0x4641dc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4641dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4641e0:
    // 0x4641e0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4641e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4641e4:
    // 0x4641e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4641e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4641e8:
    // 0x4641e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4641e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4641ec:
    // 0x4641ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4641ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4641f0:
    // 0x4641f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4641f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4641f4:
    // 0x4641f4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4641f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4641f8:
    // 0x4641f8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4641f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4641fc:
    // 0x4641fc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4641fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_464200:
    // 0x464200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x464200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_464204:
    // 0x464204: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x464204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_464208:
    // 0x464208: 0x3e00008  jr          $ra
label_46420c:
    if (ctx->pc == 0x46420Cu) {
        ctx->pc = 0x46420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464208u;
        // 0x46420c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x464210u;
        goto label_fallthrough_0x464208;
    }
    ctx->pc = 0x464208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x464208u;
        // 0x46420c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x464208:
    ctx->pc = 0x464210u;
}
