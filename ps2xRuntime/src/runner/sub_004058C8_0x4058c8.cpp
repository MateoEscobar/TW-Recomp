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

// Function: sub_004058C8
// Address: 0x4058c8 - 0x405a00
void sub_004058C8_0x4058c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004058C8_0x4058c8");
#endif

    switch (ctx->pc) {
        case 0x4058c8u: goto label_4058c8;
        case 0x4058ccu: goto label_4058cc;
        case 0x4058d0u: goto label_4058d0;
        case 0x4058d4u: goto label_4058d4;
        case 0x4058d8u: goto label_4058d8;
        case 0x4058dcu: goto label_4058dc;
        case 0x4058e0u: goto label_4058e0;
        case 0x4058e4u: goto label_4058e4;
        case 0x4058e8u: goto label_4058e8;
        case 0x4058ecu: goto label_4058ec;
        case 0x4058f0u: goto label_4058f0;
        case 0x4058f4u: goto label_4058f4;
        case 0x4058f8u: goto label_4058f8;
        case 0x4058fcu: goto label_4058fc;
        case 0x405900u: goto label_405900;
        case 0x405904u: goto label_405904;
        case 0x405908u: goto label_405908;
        case 0x40590cu: goto label_40590c;
        case 0x405910u: goto label_405910;
        case 0x405914u: goto label_405914;
        case 0x405918u: goto label_405918;
        case 0x40591cu: goto label_40591c;
        case 0x405920u: goto label_405920;
        case 0x405924u: goto label_405924;
        case 0x405928u: goto label_405928;
        case 0x40592cu: goto label_40592c;
        case 0x405930u: goto label_405930;
        case 0x405934u: goto label_405934;
        case 0x405938u: goto label_405938;
        case 0x40593cu: goto label_40593c;
        case 0x405940u: goto label_405940;
        case 0x405944u: goto label_405944;
        case 0x405948u: goto label_405948;
        case 0x40594cu: goto label_40594c;
        case 0x405950u: goto label_405950;
        case 0x405954u: goto label_405954;
        case 0x405958u: goto label_405958;
        case 0x40595cu: goto label_40595c;
        case 0x405960u: goto label_405960;
        case 0x405964u: goto label_405964;
        case 0x405968u: goto label_405968;
        case 0x40596cu: goto label_40596c;
        case 0x405970u: goto label_405970;
        case 0x405974u: goto label_405974;
        case 0x405978u: goto label_405978;
        case 0x40597cu: goto label_40597c;
        case 0x405980u: goto label_405980;
        case 0x405984u: goto label_405984;
        case 0x405988u: goto label_405988;
        case 0x40598cu: goto label_40598c;
        case 0x405990u: goto label_405990;
        case 0x405994u: goto label_405994;
        case 0x405998u: goto label_405998;
        case 0x40599cu: goto label_40599c;
        case 0x4059a0u: goto label_4059a0;
        case 0x4059a4u: goto label_4059a4;
        case 0x4059a8u: goto label_4059a8;
        case 0x4059acu: goto label_4059ac;
        case 0x4059b0u: goto label_4059b0;
        case 0x4059b4u: goto label_4059b4;
        case 0x4059b8u: goto label_4059b8;
        case 0x4059bcu: goto label_4059bc;
        case 0x4059c0u: goto label_4059c0;
        case 0x4059c4u: goto label_4059c4;
        case 0x4059c8u: goto label_4059c8;
        case 0x4059ccu: goto label_4059cc;
        case 0x4059d0u: goto label_4059d0;
        case 0x4059d4u: goto label_4059d4;
        case 0x4059d8u: goto label_4059d8;
        case 0x4059dcu: goto label_4059dc;
        case 0x4059e0u: goto label_4059e0;
        case 0x4059e4u: goto label_4059e4;
        case 0x4059e8u: goto label_4059e8;
        case 0x4059ecu: goto label_4059ec;
        case 0x4059f0u: goto label_4059f0;
        case 0x4059f4u: goto label_4059f4;
        case 0x4059f8u: goto label_4059f8;
        case 0x4059fcu: goto label_4059fc;
        default: break;
    }

    ctx->pc = 0x4058c8u;

label_4058c8:
    // 0x4058c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4058c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4058cc:
    // 0x4058cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4058ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4058d0:
    // 0x4058d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4058d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4058d4:
    // 0x4058d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4058d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4058d8:
    // 0x4058d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4058d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4058dc:
    // 0x4058dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4058dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4058e0:
    // 0x4058e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4058e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4058e4:
    // 0x4058e4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x4058e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_4058e8:
    // 0x4058e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4058e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4058ec:
    // 0x4058ec: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x4058ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_4058f0:
    // 0x4058f0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x4058f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_4058f4:
    // 0x4058f4: 0x40f809  jalr        $v0
label_4058f8:
    if (ctx->pc == 0x4058F8u) {
        ctx->pc = 0x4058F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4058F4u;
        // 0x4058f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4058FCu;
        goto label_4058fc;
    }
    ctx->pc = 0x4058F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4058FCu);
        ctx->pc = 0x4058F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4058F4u;
        // 0x4058f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4058F4u, 0x4058FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4058FCu;
label_4058fc:
    // 0x4058fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4058fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405900:
    // 0x405900: 0xc0ea146  jal         func_3A8518
label_405904:
    if (ctx->pc == 0x405904u) {
        ctx->pc = 0x405904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405900u;
        // 0x405904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405908u;
        goto label_405908;
    }
    ctx->pc = 0x405900u;
    SET_GPR_U32(ctx, 31, 0x405908u);
    ctx->pc = 0x405904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405900u;
    // 0x405904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x405900u, 0x405908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405908u;
label_405908:
    // 0x405908: 0xc0ea13a  jal         func_3A84E8
label_40590c:
    if (ctx->pc == 0x40590Cu) {
        ctx->pc = 0x40590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405908u;
        // 0x40590c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405910u;
        goto label_405910;
    }
    ctx->pc = 0x405908u;
    SET_GPR_U32(ctx, 31, 0x405910u);
    ctx->pc = 0x40590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405908u;
    // 0x40590c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x405908u, 0x405910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405910u;
label_405910:
    // 0x405910: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x405910u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_405914:
    // 0x405914: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x405914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_405918:
    // 0x405918: 0xc0ea12a  jal         func_3A84A8
label_40591c:
    if (ctx->pc == 0x40591Cu) {
        ctx->pc = 0x40591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405918u;
        // 0x40591c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405920u;
        goto label_405920;
    }
    ctx->pc = 0x405918u;
    SET_GPR_U32(ctx, 31, 0x405920u);
    ctx->pc = 0x40591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405918u;
    // 0x40591c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x405918u, 0x405920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405920u;
label_405920:
    // 0x405920: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x405920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_405924:
    // 0x405924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x405924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_405928:
    // 0x405928: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x405928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40592c:
    // 0x40592c: 0xc0e858c  jal         func_3A1630
label_405930:
    if (ctx->pc == 0x405930u) {
        ctx->pc = 0x405930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40592Cu;
        // 0x405930: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405934u;
        goto label_405934;
    }
    ctx->pc = 0x40592Cu;
    SET_GPR_U32(ctx, 31, 0x405934u);
    ctx->pc = 0x405930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40592Cu;
    // 0x405930: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x40592Cu, 0x405934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405934u;
label_405934:
    // 0x405934: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x405934u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_405938:
    // 0x405938: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x405938u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_40593c:
    // 0x40593c: 0x2631b8b8  addiu       $s1, $s1, -0x4748
    ctx->pc = 0x40593cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949048));
label_405940:
    // 0x405940: 0xe61400c0  swc1        $f20, 0xC0($s0)
    ctx->pc = 0x405940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_405944:
    // 0x405944: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x405944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_405948:
    // 0x405948: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x405948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40594c:
    // 0x40594c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40594cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_405950:
    // 0x405950: 0xc0cd4ee  jal         func_3353B8
label_405954:
    if (ctx->pc == 0x405954u) {
        ctx->pc = 0x405954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405950u;
        // 0x405954: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405958u;
        goto label_405958;
    }
    ctx->pc = 0x405950u;
    SET_GPR_U32(ctx, 31, 0x405958u);
    ctx->pc = 0x405954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405950u;
    // 0x405954: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x405950u, 0x405958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405958u;
label_405958:
    // 0x405958: 0x2442002a  addiu       $v0, $v0, 0x2A
    ctx->pc = 0x405958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 42));
label_40595c:
    // 0x40595c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x40595cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_405960:
    // 0x405960: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x405960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_405964:
    // 0x405964: 0x3c03b010  lui         $v1, 0xB010
    ctx->pc = 0x405964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45072 << 16));
label_405968:
    // 0x405968: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x405968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_40596c:
    // 0x40596c: 0x3c05b010  lui         $a1, 0xB010
    ctx->pc = 0x40596cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45072 << 16));
label_405970:
    // 0x405970: 0x34630030  ori         $v1, $v1, 0x30
    ctx->pc = 0x405970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48);
label_405974:
    // 0x405974: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x405974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
label_405978:
    // 0x405978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40597c:
    // 0x40597c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x40597cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_405980:
    // 0x405980: 0xae0500b4  sw          $a1, 0xB4($s0)
    ctx->pc = 0x405980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 5));
label_405984:
    // 0x405984: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x405984u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_405988:
    // 0x405988: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x405988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_40598c:
    // 0x40598c: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x40598cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_405990:
    // 0x405990: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x405990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_405994:
    // 0x405994: 0x86220078  lh          $v0, 0x78($s1)
    ctx->pc = 0x405994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 120)));
label_405998:
    // 0x405998: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x405998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_40599c:
    // 0x40599c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40599cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4059a0:
    // 0x4059a0: 0x26310078  addiu       $s1, $s1, 0x78
    ctx->pc = 0x4059a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4059a4:
    // 0x4059a4: 0xc0cd518  jal         func_335460
label_4059a8:
    if (ctx->pc == 0x4059A8u) {
        ctx->pc = 0x4059A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4059A4u;
        // 0x4059a8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4059ACu;
        goto label_4059ac;
    }
    ctx->pc = 0x4059A4u;
    SET_GPR_U32(ctx, 31, 0x4059ACu);
    ctx->pc = 0x4059A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4059A4u;
    // 0x4059a8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4059A4u, 0x4059ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4059ACu;
label_4059ac:
    // 0x4059ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4059acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4059b0:
    // 0x4059b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4059b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4059b4:
    // 0x4059b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4059b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4059b8:
    // 0x4059b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x4059b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_4059bc:
    // 0x4059bc: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x4059bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_4059c0:
    // 0x4059c0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4059c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_4059c4:
    // 0x4059c4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x4059c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_4059c8:
    // 0x4059c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x4059c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4059cc:
    // 0x4059cc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x4059ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_4059d0:
    // 0x4059d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4059d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4059d4:
    // 0x4059d4: 0x60f809  jalr        $v1
label_4059d8:
    if (ctx->pc == 0x4059D8u) {
        ctx->pc = 0x4059D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4059D4u;
        // 0x4059d8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4059DCu;
        goto label_4059dc;
    }
    ctx->pc = 0x4059D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4059DCu);
        ctx->pc = 0x4059D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4059D4u;
        // 0x4059d8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4059D4u, 0x4059DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4059DCu;
label_4059dc:
    // 0x4059dc: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x4059dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_4059e0:
    // 0x4059e0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4059e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4059e4:
    // 0x4059e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4059e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4059e8:
    // 0x4059e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4059e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4059ec:
    // 0x4059ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4059ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4059f0:
    // 0x4059f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4059f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4059f4:
    // 0x4059f4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x4059f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4059f8:
    // 0x4059f8: 0x3e00008  jr          $ra
label_4059fc:
    if (ctx->pc == 0x4059FCu) {
        ctx->pc = 0x4059FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4059F8u;
        // 0x4059fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405A00u;
        goto label_fallthrough_0x4059f8;
    }
    ctx->pc = 0x4059F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4059FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4059F8u;
        // 0x4059fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4059F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4059f8:
    ctx->pc = 0x405A00u;
}
