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

// Function: sub_00340918
// Address: 0x340918 - 0x340b38
void sub_00340918_0x340918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340918_0x340918");
#endif

    switch (ctx->pc) {
        case 0x340918u: goto label_340918;
        case 0x34091cu: goto label_34091c;
        case 0x340920u: goto label_340920;
        case 0x340924u: goto label_340924;
        case 0x340928u: goto label_340928;
        case 0x34092cu: goto label_34092c;
        case 0x340930u: goto label_340930;
        case 0x340934u: goto label_340934;
        case 0x340938u: goto label_340938;
        case 0x34093cu: goto label_34093c;
        case 0x340940u: goto label_340940;
        case 0x340944u: goto label_340944;
        case 0x340948u: goto label_340948;
        case 0x34094cu: goto label_34094c;
        case 0x340950u: goto label_340950;
        case 0x340954u: goto label_340954;
        case 0x340958u: goto label_340958;
        case 0x34095cu: goto label_34095c;
        case 0x340960u: goto label_340960;
        case 0x340964u: goto label_340964;
        case 0x340968u: goto label_340968;
        case 0x34096cu: goto label_34096c;
        case 0x340970u: goto label_340970;
        case 0x340974u: goto label_340974;
        case 0x340978u: goto label_340978;
        case 0x34097cu: goto label_34097c;
        case 0x340980u: goto label_340980;
        case 0x340984u: goto label_340984;
        case 0x340988u: goto label_340988;
        case 0x34098cu: goto label_34098c;
        case 0x340990u: goto label_340990;
        case 0x340994u: goto label_340994;
        case 0x340998u: goto label_340998;
        case 0x34099cu: goto label_34099c;
        case 0x3409a0u: goto label_3409a0;
        case 0x3409a4u: goto label_3409a4;
        case 0x3409a8u: goto label_3409a8;
        case 0x3409acu: goto label_3409ac;
        case 0x3409b0u: goto label_3409b0;
        case 0x3409b4u: goto label_3409b4;
        case 0x3409b8u: goto label_3409b8;
        case 0x3409bcu: goto label_3409bc;
        case 0x3409c0u: goto label_3409c0;
        case 0x3409c4u: goto label_3409c4;
        case 0x3409c8u: goto label_3409c8;
        case 0x3409ccu: goto label_3409cc;
        case 0x3409d0u: goto label_3409d0;
        case 0x3409d4u: goto label_3409d4;
        case 0x3409d8u: goto label_3409d8;
        case 0x3409dcu: goto label_3409dc;
        case 0x3409e0u: goto label_3409e0;
        case 0x3409e4u: goto label_3409e4;
        case 0x3409e8u: goto label_3409e8;
        case 0x3409ecu: goto label_3409ec;
        case 0x3409f0u: goto label_3409f0;
        case 0x3409f4u: goto label_3409f4;
        case 0x3409f8u: goto label_3409f8;
        case 0x3409fcu: goto label_3409fc;
        case 0x340a00u: goto label_340a00;
        case 0x340a04u: goto label_340a04;
        case 0x340a08u: goto label_340a08;
        case 0x340a0cu: goto label_340a0c;
        case 0x340a10u: goto label_340a10;
        case 0x340a14u: goto label_340a14;
        case 0x340a18u: goto label_340a18;
        case 0x340a1cu: goto label_340a1c;
        case 0x340a20u: goto label_340a20;
        case 0x340a24u: goto label_340a24;
        case 0x340a28u: goto label_340a28;
        case 0x340a2cu: goto label_340a2c;
        case 0x340a30u: goto label_340a30;
        case 0x340a34u: goto label_340a34;
        case 0x340a38u: goto label_340a38;
        case 0x340a3cu: goto label_340a3c;
        case 0x340a40u: goto label_340a40;
        case 0x340a44u: goto label_340a44;
        case 0x340a48u: goto label_340a48;
        case 0x340a4cu: goto label_340a4c;
        case 0x340a50u: goto label_340a50;
        case 0x340a54u: goto label_340a54;
        case 0x340a58u: goto label_340a58;
        case 0x340a5cu: goto label_340a5c;
        case 0x340a60u: goto label_340a60;
        case 0x340a64u: goto label_340a64;
        case 0x340a68u: goto label_340a68;
        case 0x340a6cu: goto label_340a6c;
        case 0x340a70u: goto label_340a70;
        case 0x340a74u: goto label_340a74;
        case 0x340a78u: goto label_340a78;
        case 0x340a7cu: goto label_340a7c;
        case 0x340a80u: goto label_340a80;
        case 0x340a84u: goto label_340a84;
        case 0x340a88u: goto label_340a88;
        case 0x340a8cu: goto label_340a8c;
        case 0x340a90u: goto label_340a90;
        case 0x340a94u: goto label_340a94;
        case 0x340a98u: goto label_340a98;
        case 0x340a9cu: goto label_340a9c;
        case 0x340aa0u: goto label_340aa0;
        case 0x340aa4u: goto label_340aa4;
        case 0x340aa8u: goto label_340aa8;
        case 0x340aacu: goto label_340aac;
        case 0x340ab0u: goto label_340ab0;
        case 0x340ab4u: goto label_340ab4;
        case 0x340ab8u: goto label_340ab8;
        case 0x340abcu: goto label_340abc;
        case 0x340ac0u: goto label_340ac0;
        case 0x340ac4u: goto label_340ac4;
        case 0x340ac8u: goto label_340ac8;
        case 0x340accu: goto label_340acc;
        case 0x340ad0u: goto label_340ad0;
        case 0x340ad4u: goto label_340ad4;
        case 0x340ad8u: goto label_340ad8;
        case 0x340adcu: goto label_340adc;
        case 0x340ae0u: goto label_340ae0;
        case 0x340ae4u: goto label_340ae4;
        case 0x340ae8u: goto label_340ae8;
        case 0x340aecu: goto label_340aec;
        case 0x340af0u: goto label_340af0;
        case 0x340af4u: goto label_340af4;
        case 0x340af8u: goto label_340af8;
        case 0x340afcu: goto label_340afc;
        case 0x340b00u: goto label_340b00;
        case 0x340b04u: goto label_340b04;
        case 0x340b08u: goto label_340b08;
        case 0x340b0cu: goto label_340b0c;
        case 0x340b10u: goto label_340b10;
        case 0x340b14u: goto label_340b14;
        case 0x340b18u: goto label_340b18;
        case 0x340b1cu: goto label_340b1c;
        case 0x340b20u: goto label_340b20;
        case 0x340b24u: goto label_340b24;
        case 0x340b28u: goto label_340b28;
        case 0x340b2cu: goto label_340b2c;
        case 0x340b30u: goto label_340b30;
        case 0x340b34u: goto label_340b34;
        default: break;
    }

    ctx->pc = 0x340918u;

label_340918:
    // 0x340918: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x340918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_34091c:
    // 0x34091c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x34091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_340920:
    // 0x340920: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x340920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_340924:
    // 0x340924: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x340924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_340928:
    // 0x340928: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x340928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_34092c:
    // 0x34092c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x34092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_340930:
    // 0x340930: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x340930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_340934:
    // 0x340934: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x340934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_340938:
    // 0x340938: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x340938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_34093c:
    // 0x34093c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x34093cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_340940:
    // 0x340940: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x340940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_340944:
    // 0x340944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x340944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_340948:
    // 0x340948: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x340948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_34094c:
    // 0x34094c: 0x2c630078  sltiu       $v1, $v1, 0x78
    ctx->pc = 0x34094cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
label_340950:
    // 0x340950: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_340954:
    if (ctx->pc == 0x340954u) {
        ctx->pc = 0x340954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340950u;
        // 0x340954: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340958u;
        goto label_340958;
    }
    ctx->pc = 0x340950u;
    {
        const bool branch_taken_0x340950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x340954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340950u;
        // 0x340954: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340950) {
            ctx->pc = 0x340998u;
            goto label_340998;
        }
    }
    ctx->pc = 0x340958u;
label_340958:
    // 0x340958: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x340958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_34095c:
    // 0x34095c: 0xa6200012  sh          $zero, 0x12($s1)
    ctx->pc = 0x34095cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
label_340960:
    // 0x340960: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_340964:
    if (ctx->pc == 0x340964u) {
        ctx->pc = 0x340964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340960u;
        // 0x340964: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340968u;
        goto label_340968;
    }
    ctx->pc = 0x340960u;
    {
        const bool branch_taken_0x340960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340960u;
        // 0x340964: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340960) {
            ctx->pc = 0x340998u;
            goto label_340998;
        }
    }
    ctx->pc = 0x340968u;
label_340968:
    // 0x340968: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x340968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34096c:
    // 0x34096c: 0x0  nop
    ctx->pc = 0x34096cu;
    // NOP
label_340970:
    // 0x340970: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x340970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_340974:
    // 0x340974: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x340974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_340978:
    // 0x340978: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x340978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_34097c:
    // 0x34097c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x34097cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_340980:
    // 0x340980: 0x0  nop
    ctx->pc = 0x340980u;
    // NOP
label_340984:
    // 0x340984: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_340988:
    if (ctx->pc == 0x340988u) {
        ctx->pc = 0x340988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340984u;
        // 0x340988: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34098Cu;
        goto label_34098c;
    }
    ctx->pc = 0x340984u;
    {
        const bool branch_taken_0x340984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x340984) {
            ctx->pc = 0x340988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340984u;
            // 0x340988: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x34098Cu;
            goto label_34098c;
        }
    }
    ctx->pc = 0x34098Cu;
label_34098c:
    // 0x34098c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x34098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_340990:
    // 0x340990: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_340994:
    if (ctx->pc == 0x340994u) {
        ctx->pc = 0x340994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340990u;
        // 0x340994: 0xc4400010  lwc1        $f0, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x340998u;
        goto label_340998;
    }
    ctx->pc = 0x340990u;
    {
        const bool branch_taken_0x340990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340990) {
            ctx->pc = 0x340994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340990u;
            // 0x340994: 0xc4400010  lwc1        $f0, 0x10($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x340970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340970;
        }
    }
    ctx->pc = 0x340998u;
label_340998:
    // 0x340998: 0x3c13fffb  lui         $s3, 0xFFFB
    ctx->pc = 0x340998u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65531 << 16));
label_34099c:
    // 0x34099c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34099cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3409a0:
    // 0x3409a0: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x3409a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_3409a4:
    // 0x3409a4: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x3409a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_3409a8:
    // 0x3409a8: 0x3c140800  lui         $s4, 0x800
    ctx->pc = 0x3409a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2048 << 16));
label_3409ac:
    // 0x3409ac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3409acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3409b0:
    // 0x3409b0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3409b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3409b4:
    // 0x3409b4: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x3409b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3409b8:
    // 0x3409b8: 0x3442e6a0  ori         $v0, $v0, 0xE6A0
    ctx->pc = 0x3409b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59040);
label_3409bc:
    // 0x3409bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3409bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3409c0:
    // 0x3409c0: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x3409c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3409c4:
    // 0x3409c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3409c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3409c8:
    // 0x3409c8: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
label_3409cc:
    if (ctx->pc == 0x3409CCu) {
        ctx->pc = 0x3409CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409C8u;
        // 0x3409cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3409D0u;
        goto label_3409d0;
    }
    ctx->pc = 0x3409C8u;
    {
        const bool branch_taken_0x3409c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3409c8) {
            ctx->pc = 0x3409CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3409C8u;
            // 0x3409cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340B04u;
            goto label_340b04;
        }
    }
    ctx->pc = 0x3409D0u;
label_3409d0:
    // 0x3409d0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3409d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3409d4:
    // 0x3409d4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3409d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3409d8:
    // 0x3409d8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x3409d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3409dc:
    // 0x3409dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3409dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3409e0:
    // 0x3409e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3409e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3409e4:
    // 0x3409e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3409e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3409e8:
    // 0x3409e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3409e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3409ec:
    // 0x3409ec: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3409ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3409f0:
    // 0x3409f0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x3409f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3409f4:
    // 0x3409f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3409f8:
    if (ctx->pc == 0x3409F8u) {
        ctx->pc = 0x3409F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409F4u;
        // 0x3409f8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3409FCu;
        goto label_3409fc;
    }
    ctx->pc = 0x3409F4u;
    {
        const bool branch_taken_0x3409f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3409F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3409F4u;
        // 0x3409f8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3409f4) {
            ctx->pc = 0x340A00u;
            goto label_340a00;
        }
    }
    ctx->pc = 0x3409FCu;
label_3409fc:
    // 0x3409fc: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x3409fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_340a00:
    // 0x340a00: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x340a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_340a04:
    // 0x340a04: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x340a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_340a08:
    // 0x340a08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x340a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_340a0c:
    // 0x340a0c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x340a0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_340a10:
    // 0x340a10: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x340a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_340a14:
    // 0x340a14: 0x60f809  jalr        $v1
label_340a18:
    if (ctx->pc == 0x340A18u) {
        ctx->pc = 0x340A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A14u;
        // 0x340a18: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A1Cu;
        goto label_340a1c;
    }
    ctx->pc = 0x340A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x340A1Cu);
        ctx->pc = 0x340A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A14u;
        // 0x340a18: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A14u, 0x340A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340A1Cu;
label_340a1c:
    // 0x340a1c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x340a1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_340a20:
    // 0x340a20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x340a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_340a24:
    // 0x340a24: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x340a24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_340a28:
    // 0x340a28: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x340a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_340a2c:
    // 0x340a2c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x340a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_340a30:
    // 0x340a30: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x340a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_340a34:
    // 0x340a34: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x340a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_340a38:
    // 0x340a38: 0xc0cda80  jal         func_336A00
label_340a3c:
    if (ctx->pc == 0x340A3Cu) {
        ctx->pc = 0x340A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A38u;
        // 0x340a3c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A40u;
        goto label_340a40;
    }
    ctx->pc = 0x340A38u;
    SET_GPR_U32(ctx, 31, 0x340A40u);
    ctx->pc = 0x340A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A38u;
    // 0x340a3c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A00u, 0x340A38u, 0x340A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340A40u;
label_340a40:
    // 0x340a40: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x340a40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_340a44:
    // 0x340a44: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x340a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_340a48:
    // 0x340a48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x340a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_340a4c:
    // 0x340a4c: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x340a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_340a50:
    // 0x340a50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x340a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_340a54:
    // 0x340a54: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x340a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_340a58:
    // 0x340a58: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x340a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_340a5c:
    // 0x340a5c: 0x60f809  jalr        $v1
label_340a60:
    if (ctx->pc == 0x340A60u) {
        ctx->pc = 0x340A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A5Cu;
        // 0x340a60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A64u;
        goto label_340a64;
    }
    ctx->pc = 0x340A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x340A64u);
        ctx->pc = 0x340A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A5Cu;
        // 0x340a60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A5Cu, 0x340A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340A64u;
label_340a64:
    // 0x340a64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x340a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_340a68:
    // 0x340a68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x340a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_340a6c:
    // 0x340a6c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x340a6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_340a70:
    // 0x340a70: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x340a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_340a74:
    // 0x340a74: 0x40f809  jalr        $v0
label_340a78:
    if (ctx->pc == 0x340A78u) {
        ctx->pc = 0x340A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A74u;
        // 0x340a78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A7Cu;
        goto label_340a7c;
    }
    ctx->pc = 0x340A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340A7Cu);
        ctx->pc = 0x340A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A74u;
        // 0x340a78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A74u, 0x340A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340A7Cu;
label_340a7c:
    // 0x340a7c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_340a80:
    if (ctx->pc == 0x340A80u) {
        ctx->pc = 0x340A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A7Cu;
        // 0x340a80: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A84u;
        goto label_340a84;
    }
    ctx->pc = 0x340A7Cu;
    {
        const bool branch_taken_0x340a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x340a7c) {
            ctx->pc = 0x340A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340A7Cu;
            // 0x340a80: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x340ADCu;
            goto label_340adc;
        }
    }
    ctx->pc = 0x340A84u;
label_340a84:
    // 0x340a84: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x340a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_340a88:
    // 0x340a88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x340a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_340a8c:
    // 0x340a8c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x340a8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_340a90:
    // 0x340a90: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x340a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_340a94:
    // 0x340a94: 0x40f809  jalr        $v0
label_340a98:
    if (ctx->pc == 0x340A98u) {
        ctx->pc = 0x340A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A94u;
        // 0x340a98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340A9Cu;
        goto label_340a9c;
    }
    ctx->pc = 0x340A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340A9Cu);
        ctx->pc = 0x340A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A94u;
        // 0x340a98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340A94u, 0x340A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340A9Cu;
label_340a9c:
    // 0x340a9c: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x340a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_340aa0:
    // 0x340aa0: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x340aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
label_340aa4:
    // 0x340aa4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x340aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_340aa8:
    // 0x340aa8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x340aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_340aac:
    // 0x340aac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x340aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_340ab0:
    // 0x340ab0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x340ab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_340ab4:
    // 0x340ab4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x340ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_340ab8:
    // 0x340ab8: 0x40f809  jalr        $v0
label_340abc:
    if (ctx->pc == 0x340ABCu) {
        ctx->pc = 0x340ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AB8u;
        // 0x340abc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340AC0u;
        goto label_340ac0;
    }
    ctx->pc = 0x340AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x340AC0u);
        ctx->pc = 0x340ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AB8u;
        // 0x340abc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340AB8u, 0x340AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340AC0u;
label_340ac0:
    // 0x340ac0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x340ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_340ac4:
    // 0x340ac4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x340ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_340ac8:
    // 0x340ac8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x340ac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_340acc:
    // 0x340acc: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x340accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_340ad0:
    // 0x340ad0: 0xc0f809  jalr        $a2
label_340ad4:
    if (ctx->pc == 0x340AD4u) {
        ctx->pc = 0x340AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AD0u;
        // 0x340ad4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340AD8u;
        goto label_340ad8;
    }
    ctx->pc = 0x340AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x340AD8u);
        ctx->pc = 0x340AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AD0u;
        // 0x340ad4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340AD0u, 0x340AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x340AD8u;
label_340ad8:
    // 0x340ad8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x340ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_340adc:
    // 0x340adc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x340adcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_340ae0:
    // 0x340ae0: 0x0  nop
    ctx->pc = 0x340ae0u;
    // NOP
label_340ae4:
    // 0x340ae4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_340ae8:
    if (ctx->pc == 0x340AE8u) {
        ctx->pc = 0x340AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AE4u;
        // 0x340ae8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340AECu;
        goto label_340aec;
    }
    ctx->pc = 0x340AE4u;
    {
        const bool branch_taken_0x340ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x340AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AE4u;
        // 0x340ae8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ae4) {
            ctx->pc = 0x340B04u;
            goto label_340b04;
        }
    }
    ctx->pc = 0x340AECu;
label_340aec:
    // 0x340aec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x340aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_340af0:
    // 0x340af0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x340af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_340af4:
    // 0x340af4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x340af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_340af8:
    // 0x340af8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x340af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_340afc:
    // 0x340afc: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x340afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_340b00:
    // 0x340b00: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x340b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_340b04:
    // 0x340b04: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x340b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_340b08:
    // 0x340b08: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_340b0c:
    if (ctx->pc == 0x340B0Cu) {
        ctx->pc = 0x340B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B08u;
        // 0x340b0c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340B10u;
        goto label_340b10;
    }
    ctx->pc = 0x340B08u;
    {
        const bool branch_taken_0x340b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B08u;
        // 0x340b0c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340b08) {
            ctx->pc = 0x3409B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3409b0;
        }
    }
    ctx->pc = 0x340B10u;
label_340b10:
    // 0x340b10: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x340b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_340b14:
    // 0x340b14: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x340b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_340b18:
    // 0x340b18: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x340b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_340b1c:
    // 0x340b1c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x340b1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_340b20:
    // 0x340b20: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x340b20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_340b24:
    // 0x340b24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x340b24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_340b28:
    // 0x340b28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x340b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_340b2c:
    // 0x340b2c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x340b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_340b30:
    // 0x340b30: 0x3e00008  jr          $ra
label_340b34:
    if (ctx->pc == 0x340B34u) {
        ctx->pc = 0x340B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B30u;
        // 0x340b34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x340B38u;
        goto label_fallthrough_0x340b30;
    }
    ctx->pc = 0x340B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340B30u;
        // 0x340b34: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x340b30:
    ctx->pc = 0x340B38u;
}
