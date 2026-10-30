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

// Function: sub_00191908
// Address: 0x191908 - 0x191a60
void sub_00191908_0x191908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191908_0x191908");
#endif

    switch (ctx->pc) {
        case 0x191908u: goto label_191908;
        case 0x19190cu: goto label_19190c;
        case 0x191910u: goto label_191910;
        case 0x191914u: goto label_191914;
        case 0x191918u: goto label_191918;
        case 0x19191cu: goto label_19191c;
        case 0x191920u: goto label_191920;
        case 0x191924u: goto label_191924;
        case 0x191928u: goto label_191928;
        case 0x19192cu: goto label_19192c;
        case 0x191930u: goto label_191930;
        case 0x191934u: goto label_191934;
        case 0x191938u: goto label_191938;
        case 0x19193cu: goto label_19193c;
        case 0x191940u: goto label_191940;
        case 0x191944u: goto label_191944;
        case 0x191948u: goto label_191948;
        case 0x19194cu: goto label_19194c;
        case 0x191950u: goto label_191950;
        case 0x191954u: goto label_191954;
        case 0x191958u: goto label_191958;
        case 0x19195cu: goto label_19195c;
        case 0x191960u: goto label_191960;
        case 0x191964u: goto label_191964;
        case 0x191968u: goto label_191968;
        case 0x19196cu: goto label_19196c;
        case 0x191970u: goto label_191970;
        case 0x191974u: goto label_191974;
        case 0x191978u: goto label_191978;
        case 0x19197cu: goto label_19197c;
        case 0x191980u: goto label_191980;
        case 0x191984u: goto label_191984;
        case 0x191988u: goto label_191988;
        case 0x19198cu: goto label_19198c;
        case 0x191990u: goto label_191990;
        case 0x191994u: goto label_191994;
        case 0x191998u: goto label_191998;
        case 0x19199cu: goto label_19199c;
        case 0x1919a0u: goto label_1919a0;
        case 0x1919a4u: goto label_1919a4;
        case 0x1919a8u: goto label_1919a8;
        case 0x1919acu: goto label_1919ac;
        case 0x1919b0u: goto label_1919b0;
        case 0x1919b4u: goto label_1919b4;
        case 0x1919b8u: goto label_1919b8;
        case 0x1919bcu: goto label_1919bc;
        case 0x1919c0u: goto label_1919c0;
        case 0x1919c4u: goto label_1919c4;
        case 0x1919c8u: goto label_1919c8;
        case 0x1919ccu: goto label_1919cc;
        case 0x1919d0u: goto label_1919d0;
        case 0x1919d4u: goto label_1919d4;
        case 0x1919d8u: goto label_1919d8;
        case 0x1919dcu: goto label_1919dc;
        case 0x1919e0u: goto label_1919e0;
        case 0x1919e4u: goto label_1919e4;
        case 0x1919e8u: goto label_1919e8;
        case 0x1919ecu: goto label_1919ec;
        case 0x1919f0u: goto label_1919f0;
        case 0x1919f4u: goto label_1919f4;
        case 0x1919f8u: goto label_1919f8;
        case 0x1919fcu: goto label_1919fc;
        case 0x191a00u: goto label_191a00;
        case 0x191a04u: goto label_191a04;
        case 0x191a08u: goto label_191a08;
        case 0x191a0cu: goto label_191a0c;
        case 0x191a10u: goto label_191a10;
        case 0x191a14u: goto label_191a14;
        case 0x191a18u: goto label_191a18;
        case 0x191a1cu: goto label_191a1c;
        case 0x191a20u: goto label_191a20;
        case 0x191a24u: goto label_191a24;
        case 0x191a28u: goto label_191a28;
        case 0x191a2cu: goto label_191a2c;
        case 0x191a30u: goto label_191a30;
        case 0x191a34u: goto label_191a34;
        case 0x191a38u: goto label_191a38;
        case 0x191a3cu: goto label_191a3c;
        case 0x191a40u: goto label_191a40;
        case 0x191a44u: goto label_191a44;
        case 0x191a48u: goto label_191a48;
        case 0x191a4cu: goto label_191a4c;
        case 0x191a50u: goto label_191a50;
        case 0x191a54u: goto label_191a54;
        case 0x191a58u: goto label_191a58;
        case 0x191a5cu: goto label_191a5c;
        default: break;
    }

    ctx->pc = 0x191908u;

label_191908:
    // 0x191908: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x191908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_19190c:
    // 0x19190c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x19190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_191910:
    // 0x191910: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x191910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_191914:
    // 0x191914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191918:
    // 0x191918: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x191918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_19191c:
    // 0x19191c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x19191cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_191920:
    // 0x191920: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x191920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_191924:
    // 0x191924: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x191924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_191928:
    // 0x191928: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x191928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_19192c:
    // 0x19192c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19192cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_191930:
    // 0x191930: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x191930u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_191934:
    // 0x191934: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x191934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_191938:
    // 0x191938: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x191938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_19193c:
    // 0x19193c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_191940:
    if (ctx->pc == 0x191940u) {
        ctx->pc = 0x191940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19193Cu;
        // 0x191940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191944u;
        goto label_191944;
    }
    ctx->pc = 0x19193Cu;
    {
        const bool branch_taken_0x19193c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19193Cu;
        // 0x191940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19193c) {
            ctx->pc = 0x191954u;
            goto label_191954;
        }
    }
    ctx->pc = 0x191944u;
label_191944:
    // 0x191944: 0x1000003b  b           . + 4 + (0x3B << 2)
label_191948:
    if (ctx->pc == 0x191948u) {
        ctx->pc = 0x191948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191944u;
        // 0x191948: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19194Cu;
        goto label_19194c;
    }
    ctx->pc = 0x191944u;
    {
        const bool branch_taken_0x191944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191944u;
        // 0x191948: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191944) {
            ctx->pc = 0x191A34u;
            goto label_191a34;
        }
    }
    ctx->pc = 0x19194Cu;
label_19194c:
    // 0x19194c: 0x10000038  b           . + 4 + (0x38 << 2)
label_191950:
    if (ctx->pc == 0x191950u) {
        ctx->pc = 0x191950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19194Cu;
        // 0x191950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191954u;
        goto label_191954;
    }
    ctx->pc = 0x19194Cu;
    {
        const bool branch_taken_0x19194c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19194Cu;
        // 0x191950: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19194c) {
            ctx->pc = 0x191A30u;
            goto label_191a30;
        }
    }
    ctx->pc = 0x191954u;
label_191954:
    // 0x191954: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x191954u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
label_191958:
    // 0x191958: 0xc047e6c  jal         func_11F9B0
label_19195c:
    if (ctx->pc == 0x19195Cu) {
        ctx->pc = 0x19195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191958u;
        // 0x19195c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191960u;
        goto label_191960;
    }
    ctx->pc = 0x191958u;
    SET_GPR_U32(ctx, 31, 0x191960u);
    ctx->pc = 0x19195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191958u;
    // 0x19195c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x191958u, 0x191960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191960u;
label_191960:
    // 0x191960: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x191960u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_191964:
    // 0x191964: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x191964u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191968:
    // 0x191968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19196c:
    // 0x19196c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19196cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_191970:
    // 0x191970: 0xc0645e6  jal         func_191798
label_191974:
    if (ctx->pc == 0x191974u) {
        ctx->pc = 0x191974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191970u;
        // 0x191974: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191978u;
        goto label_191978;
    }
    ctx->pc = 0x191970u;
    SET_GPR_U32(ctx, 31, 0x191978u);
    ctx->pc = 0x191974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191970u;
    // 0x191974: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191798u, 0x191970u, 0x191978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191978u;
label_191978:
    // 0x191978: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x191978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_19197c:
    // 0x19197c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x19197cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_191980:
    // 0x191980: 0x5da821  addu        $s5, $v0, $sp
    ctx->pc = 0x191980u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_191984:
    // 0x191984: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x191984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191988:
    // 0x191988: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x191988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19198c:
    // 0x19198c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19198cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191990:
    // 0x191990: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x191990u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191994:
    // 0x191994: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x191994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_191998:
    // 0x191998: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x191998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_19199c:
    // 0x19199c: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x19199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_1919a0:
    // 0x1919a0: 0x40f809  jalr        $v0
label_1919a4:
    if (ctx->pc == 0x1919A4u) {
        ctx->pc = 0x1919A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919A0u;
        // 0x1919a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919A8u;
        goto label_1919a8;
    }
    ctx->pc = 0x1919A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1919A8u);
        ctx->pc = 0x1919A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919A0u;
        // 0x1919a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1919A0u, 0x1919A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1919A8u;
label_1919a8:
    // 0x1919a8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1919a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1919ac:
    // 0x1919ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1919acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1919b0:
    // 0x1919b0: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1919b0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1919b4:
    // 0x1919b4: 0x84c40170  lh          $a0, 0x170($a2)
    ctx->pc = 0x1919b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 368)));
label_1919b8:
    // 0x1919b8: 0x8cc20174  lw          $v0, 0x174($a2)
    ctx->pc = 0x1919b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
label_1919bc:
    // 0x1919bc: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x1919bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_1919c0:
    // 0x1919c0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1919c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1919c4:
    // 0x1919c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1919c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1919c8:
    // 0x1919c8: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1919c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_1919cc:
    // 0x1919cc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1919ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1919d0:
    // 0x1919d0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1919d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1919d4:
    // 0x1919d4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x1919d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1919d8:
    // 0x1919d8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x1919d8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_1919dc:
    // 0x1919dc: 0x4486a000  mtc1        $a2, $f20
    ctx->pc = 0x1919dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1919e0:
    // 0x1919e0: 0x40f809  jalr        $v0
label_1919e4:
    if (ctx->pc == 0x1919E4u) {
        ctx->pc = 0x1919E8u;
        goto label_1919e8;
    }
    ctx->pc = 0x1919E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1919E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1919E0u, 0x1919E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1919E8u;
label_1919e8:
    // 0x1919e8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1919e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1919ec:
    // 0x1919ec: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1919ecu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1919f0:
    // 0x1919f0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1919f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1919f4:
    // 0x1919f4: 0x0  nop
    ctx->pc = 0x1919f4u;
    // NOP
label_1919f8:
    // 0x1919f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1919fc:
    if (ctx->pc == 0x1919FCu) {
        ctx->pc = 0x1919FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919F8u;
        // 0x1919fc: 0x2161004  sllv        $v0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A00u;
        goto label_191a00;
    }
    ctx->pc = 0x1919F8u;
    {
        const bool branch_taken_0x1919f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1919FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919F8u;
        // 0x1919fc: 0x2161004  sllv        $v0, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919f8) {
            ctx->pc = 0x191A04u;
            goto label_191a04;
        }
    }
    ctx->pc = 0x191A00u;
label_191a00:
    // 0x191a00: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x191a00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_191a04:
    // 0x191a04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x191a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_191a08:
    // 0x191a08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191a0c:
    // 0x191a0c: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x191a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_191a10:
    // 0x191a10: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
label_191a14:
    if (ctx->pc == 0x191A14u) {
        ctx->pc = 0x191A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A10u;
        // 0x191a14: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A18u;
        goto label_191a18;
    }
    ctx->pc = 0x191A10u;
    {
        const bool branch_taken_0x191a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191a10) {
            ctx->pc = 0x191A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191A10u;
            // 0x191a14: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191998;
        }
    }
    ctx->pc = 0x191A18u;
label_191a18:
    // 0x191a18: 0x1240ffcc  beqz        $s2, . + 4 + (-0x34 << 2)
label_191a1c:
    if (ctx->pc == 0x191A1Cu) {
        ctx->pc = 0x191A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A18u;
        // 0x191a1c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A20u;
        goto label_191a20;
    }
    ctx->pc = 0x191A18u;
    {
        const bool branch_taken_0x191a18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A18u;
        // 0x191a1c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a18) {
            ctx->pc = 0x19194Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19194c;
        }
    }
    ctx->pc = 0x191A20u;
label_191a20:
    // 0x191a20: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x191a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_191a24:
    // 0x191a24: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_191a28:
    if (ctx->pc == 0x191A28u) {
        ctx->pc = 0x191A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A24u;
        // 0x191a28: 0x2729824  and         $s3, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A2Cu;
        goto label_191a2c;
    }
    ctx->pc = 0x191A24u;
    {
        const bool branch_taken_0x191a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A24u;
        // 0x191a28: 0x2729824  and         $s3, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a24) {
            ctx->pc = 0x191978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191978;
        }
    }
    ctx->pc = 0x191A2Cu;
label_191a2c:
    // 0x191a2c: 0x2e620001  sltiu       $v0, $s3, 0x1
    ctx->pc = 0x191a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_191a30:
    // 0x191a30: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x191a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_191a34:
    // 0x191a34: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x191a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_191a38:
    // 0x191a38: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x191a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_191a3c:
    // 0x191a3c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x191a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_191a40:
    // 0x191a40: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x191a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_191a44:
    // 0x191a44: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x191a44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_191a48:
    // 0x191a48: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x191a48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_191a4c:
    // 0x191a4c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x191a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_191a50:
    // 0x191a50: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x191a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_191a54:
    // 0x191a54: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x191a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_191a58:
    // 0x191a58: 0x3e00008  jr          $ra
label_191a5c:
    if (ctx->pc == 0x191A5Cu) {
        ctx->pc = 0x191A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A58u;
        // 0x191a5c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A60u;
        goto label_fallthrough_0x191a58;
    }
    ctx->pc = 0x191A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A58u;
        // 0x191a5c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x191a58:
    ctx->pc = 0x191A60u;
}
