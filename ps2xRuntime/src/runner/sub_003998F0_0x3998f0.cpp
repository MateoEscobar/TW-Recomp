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

// Function: sub_003998F0
// Address: 0x3998f0 - 0x399b20
void sub_003998F0_0x3998f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003998F0_0x3998f0");
#endif

    switch (ctx->pc) {
        case 0x3998f0u: goto label_3998f0;
        case 0x3998f4u: goto label_3998f4;
        case 0x3998f8u: goto label_3998f8;
        case 0x3998fcu: goto label_3998fc;
        case 0x399900u: goto label_399900;
        case 0x399904u: goto label_399904;
        case 0x399908u: goto label_399908;
        case 0x39990cu: goto label_39990c;
        case 0x399910u: goto label_399910;
        case 0x399914u: goto label_399914;
        case 0x399918u: goto label_399918;
        case 0x39991cu: goto label_39991c;
        case 0x399920u: goto label_399920;
        case 0x399924u: goto label_399924;
        case 0x399928u: goto label_399928;
        case 0x39992cu: goto label_39992c;
        case 0x399930u: goto label_399930;
        case 0x399934u: goto label_399934;
        case 0x399938u: goto label_399938;
        case 0x39993cu: goto label_39993c;
        case 0x399940u: goto label_399940;
        case 0x399944u: goto label_399944;
        case 0x399948u: goto label_399948;
        case 0x39994cu: goto label_39994c;
        case 0x399950u: goto label_399950;
        case 0x399954u: goto label_399954;
        case 0x399958u: goto label_399958;
        case 0x39995cu: goto label_39995c;
        case 0x399960u: goto label_399960;
        case 0x399964u: goto label_399964;
        case 0x399968u: goto label_399968;
        case 0x39996cu: goto label_39996c;
        case 0x399970u: goto label_399970;
        case 0x399974u: goto label_399974;
        case 0x399978u: goto label_399978;
        case 0x39997cu: goto label_39997c;
        case 0x399980u: goto label_399980;
        case 0x399984u: goto label_399984;
        case 0x399988u: goto label_399988;
        case 0x39998cu: goto label_39998c;
        case 0x399990u: goto label_399990;
        case 0x399994u: goto label_399994;
        case 0x399998u: goto label_399998;
        case 0x39999cu: goto label_39999c;
        case 0x3999a0u: goto label_3999a0;
        case 0x3999a4u: goto label_3999a4;
        case 0x3999a8u: goto label_3999a8;
        case 0x3999acu: goto label_3999ac;
        case 0x3999b0u: goto label_3999b0;
        case 0x3999b4u: goto label_3999b4;
        case 0x3999b8u: goto label_3999b8;
        case 0x3999bcu: goto label_3999bc;
        case 0x3999c0u: goto label_3999c0;
        case 0x3999c4u: goto label_3999c4;
        case 0x3999c8u: goto label_3999c8;
        case 0x3999ccu: goto label_3999cc;
        case 0x3999d0u: goto label_3999d0;
        case 0x3999d4u: goto label_3999d4;
        case 0x3999d8u: goto label_3999d8;
        case 0x3999dcu: goto label_3999dc;
        case 0x3999e0u: goto label_3999e0;
        case 0x3999e4u: goto label_3999e4;
        case 0x3999e8u: goto label_3999e8;
        case 0x3999ecu: goto label_3999ec;
        case 0x3999f0u: goto label_3999f0;
        case 0x3999f4u: goto label_3999f4;
        case 0x3999f8u: goto label_3999f8;
        case 0x3999fcu: goto label_3999fc;
        case 0x399a00u: goto label_399a00;
        case 0x399a04u: goto label_399a04;
        case 0x399a08u: goto label_399a08;
        case 0x399a0cu: goto label_399a0c;
        case 0x399a10u: goto label_399a10;
        case 0x399a14u: goto label_399a14;
        case 0x399a18u: goto label_399a18;
        case 0x399a1cu: goto label_399a1c;
        case 0x399a20u: goto label_399a20;
        case 0x399a24u: goto label_399a24;
        case 0x399a28u: goto label_399a28;
        case 0x399a2cu: goto label_399a2c;
        case 0x399a30u: goto label_399a30;
        case 0x399a34u: goto label_399a34;
        case 0x399a38u: goto label_399a38;
        case 0x399a3cu: goto label_399a3c;
        case 0x399a40u: goto label_399a40;
        case 0x399a44u: goto label_399a44;
        case 0x399a48u: goto label_399a48;
        case 0x399a4cu: goto label_399a4c;
        case 0x399a50u: goto label_399a50;
        case 0x399a54u: goto label_399a54;
        case 0x399a58u: goto label_399a58;
        case 0x399a5cu: goto label_399a5c;
        case 0x399a60u: goto label_399a60;
        case 0x399a64u: goto label_399a64;
        case 0x399a68u: goto label_399a68;
        case 0x399a6cu: goto label_399a6c;
        case 0x399a70u: goto label_399a70;
        case 0x399a74u: goto label_399a74;
        case 0x399a78u: goto label_399a78;
        case 0x399a7cu: goto label_399a7c;
        case 0x399a80u: goto label_399a80;
        case 0x399a84u: goto label_399a84;
        case 0x399a88u: goto label_399a88;
        case 0x399a8cu: goto label_399a8c;
        case 0x399a90u: goto label_399a90;
        case 0x399a94u: goto label_399a94;
        case 0x399a98u: goto label_399a98;
        case 0x399a9cu: goto label_399a9c;
        case 0x399aa0u: goto label_399aa0;
        case 0x399aa4u: goto label_399aa4;
        case 0x399aa8u: goto label_399aa8;
        case 0x399aacu: goto label_399aac;
        case 0x399ab0u: goto label_399ab0;
        case 0x399ab4u: goto label_399ab4;
        case 0x399ab8u: goto label_399ab8;
        case 0x399abcu: goto label_399abc;
        case 0x399ac0u: goto label_399ac0;
        case 0x399ac4u: goto label_399ac4;
        case 0x399ac8u: goto label_399ac8;
        case 0x399accu: goto label_399acc;
        case 0x399ad0u: goto label_399ad0;
        case 0x399ad4u: goto label_399ad4;
        case 0x399ad8u: goto label_399ad8;
        case 0x399adcu: goto label_399adc;
        case 0x399ae0u: goto label_399ae0;
        case 0x399ae4u: goto label_399ae4;
        case 0x399ae8u: goto label_399ae8;
        case 0x399aecu: goto label_399aec;
        case 0x399af0u: goto label_399af0;
        case 0x399af4u: goto label_399af4;
        case 0x399af8u: goto label_399af8;
        case 0x399afcu: goto label_399afc;
        case 0x399b00u: goto label_399b00;
        case 0x399b04u: goto label_399b04;
        case 0x399b08u: goto label_399b08;
        case 0x399b0cu: goto label_399b0c;
        case 0x399b10u: goto label_399b10;
        case 0x399b14u: goto label_399b14;
        case 0x399b18u: goto label_399b18;
        case 0x399b1cu: goto label_399b1c;
        default: break;
    }

    ctx->pc = 0x3998f0u;

label_3998f0:
    // 0x3998f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3998f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3998f4:
    // 0x3998f4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3998f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3998f8:
    // 0x3998f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3998f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3998fc:
    // 0x3998fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3998fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399900:
    // 0x399900: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x399900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_399904:
    // 0x399904: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x399904u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_399908:
    // 0x399908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x399908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39990c:
    // 0x39990c: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x39990cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_399910:
    // 0x399910: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x399910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_399914:
    // 0x399914: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x399914u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_399918:
    // 0x399918: 0xc456124c  lwc1        $f22, 0x124C($v0)
    ctx->pc = 0x399918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_39991c:
    // 0x39991c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x39991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_399920:
    // 0x399920: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x399920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_399924:
    // 0x399924: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x399924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_399928:
    // 0x399928: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x399928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_39992c:
    // 0x39992c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x39992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_399930:
    // 0x399930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_399934:
    // 0x399934: 0xc047e6c  jal         func_11F9B0
label_399938:
    if (ctx->pc == 0x399938u) {
        ctx->pc = 0x399938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399934u;
        // 0x399938: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x39993Cu;
        goto label_39993c;
    }
    ctx->pc = 0x399934u;
    SET_GPR_U32(ctx, 31, 0x39993Cu);
    ctx->pc = 0x399938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399934u;
    // 0x399938: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x399934u, 0x39993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39993Cu;
label_39993c:
    // 0x39993c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_399940:
    if (ctx->pc == 0x399940u) {
        ctx->pc = 0x399940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39993Cu;
        // 0x399940: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399944u;
        goto label_399944;
    }
    ctx->pc = 0x39993Cu;
    {
        const bool branch_taken_0x39993c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39993c) {
            ctx->pc = 0x399940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39993Cu;
            // 0x399940: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39996Cu;
            goto label_39996c;
        }
    }
    ctx->pc = 0x399944u;
label_399944:
    // 0x399944: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x399944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_399948:
    // 0x399948: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x399948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_39994c:
    // 0x39994c: 0x60f809  jalr        $v1
label_399950:
    if (ctx->pc == 0x399950u) {
        ctx->pc = 0x399950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39994Cu;
        // 0x399950: 0x84440210  lh          $a0, 0x210($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399954u;
        goto label_399954;
    }
    ctx->pc = 0x39994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x399954u);
        ctx->pc = 0x399950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39994Cu;
        // 0x399950: 0x84440210  lh          $a0, 0x210($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39994Cu, 0x399954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399954u;
label_399954:
    // 0x399954: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x399954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_399958:
    // 0x399958: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x399958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39995c:
    // 0x39995c: 0x0  nop
    ctx->pc = 0x39995cu;
    // NOP
label_399960:
    // 0x399960: 0x46010580  add.s       $f22, $f0, $f1
    ctx->pc = 0x399960u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_399964:
    // 0x399964: 0x4616b582  mul.s       $f22, $f22, $f22
    ctx->pc = 0x399964u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
label_399968:
    // 0x399968: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x399968u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_39996c:
    // 0x39996c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_399970:
    if (ctx->pc == 0x399970u) {
        ctx->pc = 0x399970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39996Cu;
        // 0x399970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399974u;
        goto label_399974;
    }
    ctx->pc = 0x39996Cu;
    {
        const bool branch_taken_0x39996c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39996Cu;
        // 0x399970: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39996c) {
            ctx->pc = 0x399A68u;
            goto label_399a68;
        }
    }
    ctx->pc = 0x399974u;
label_399974:
    // 0x399974: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x399974u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399978:
    // 0x399978: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x399978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39997c:
    // 0x39997c: 0x0  nop
    ctx->pc = 0x39997cu;
    // NOP
label_399980:
    // 0x399980: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x399980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_399984:
    // 0x399984: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x399984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_399988:
    // 0x399988: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x399988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_39998c:
    // 0x39998c: 0x31442  srl         $v0, $v1, 17
    ctx->pc = 0x39998cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
label_399990:
    // 0x399990: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399994:
    // 0x399994: 0x54560030  bnel        $v0, $s6, . + 4 + (0x30 << 2)
label_399998:
    if (ctx->pc == 0x399998u) {
        ctx->pc = 0x399998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399994u;
        // 0x399998: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39999Cu;
        goto label_39999c;
    }
    ctx->pc = 0x399994u;
    {
        const bool branch_taken_0x399994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x399994) {
            ctx->pc = 0x399998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399994u;
            // 0x399998: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399A58u;
            goto label_399a58;
        }
    }
    ctx->pc = 0x39999Cu;
label_39999c:
    // 0x39999c: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x39999cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_3999a0:
    // 0x3999a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3999a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3999a4:
    // 0x3999a4: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_3999a8:
    if (ctx->pc == 0x3999A8u) {
        ctx->pc = 0x3999A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999A4u;
        // 0x3999a8: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3999ACu;
        goto label_3999ac;
    }
    ctx->pc = 0x3999A4u;
    {
        const bool branch_taken_0x3999a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3999a4) {
            ctx->pc = 0x3999A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3999A4u;
            // 0x3999a8: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399A58u;
            goto label_399a58;
        }
    }
    ctx->pc = 0x3999ACu;
label_3999ac:
    // 0x3999ac: 0xc0e404c  jal         func_390130
label_3999b0:
    if (ctx->pc == 0x3999B0u) {
        ctx->pc = 0x3999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999ACu;
        // 0x3999b0: 0x84840024  lh          $a0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3999B4u;
        goto label_3999b4;
    }
    ctx->pc = 0x3999ACu;
    SET_GPR_U32(ctx, 31, 0x3999B4u);
    ctx->pc = 0x3999B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3999ACu;
    // 0x3999b0: 0x84840024  lh          $a0, 0x24($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x3999ACu, 0x3999B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3999B4u;
label_3999b4:
    // 0x3999b4: 0xc0e57ce  jal         func_395F38
label_3999b8:
    if (ctx->pc == 0x3999B8u) {
        ctx->pc = 0x3999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999B4u;
        // 0x3999b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3999BCu;
        goto label_3999bc;
    }
    ctx->pc = 0x3999B4u;
    SET_GPR_U32(ctx, 31, 0x3999BCu);
    ctx->pc = 0x3999B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3999B4u;
    // 0x3999b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3999B4u, 0x3999BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3999BCu;
label_3999bc:
    // 0x3999bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3999bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3999c0:
    // 0x3999c0: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
label_3999c4:
    if (ctx->pc == 0x3999C4u) {
        ctx->pc = 0x3999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999C0u;
        // 0x3999c4: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3999C8u;
        goto label_3999c8;
    }
    ctx->pc = 0x3999C0u;
    {
        const bool branch_taken_0x3999c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3999c0) {
            ctx->pc = 0x3999C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3999C0u;
            // 0x3999c4: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399A58u;
            goto label_399a58;
        }
    }
    ctx->pc = 0x3999C8u;
label_3999c8:
    // 0x3999c8: 0xc0e541e  jal         func_395078
label_3999cc:
    if (ctx->pc == 0x3999CCu) {
        ctx->pc = 0x3999CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999C8u;
        // 0x3999cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3999D0u;
        goto label_3999d0;
    }
    ctx->pc = 0x3999C8u;
    SET_GPR_U32(ctx, 31, 0x3999D0u);
    ctx->pc = 0x3999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3999C8u;
    // 0x3999cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395078u, 0x3999C8u, 0x3999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3999D0u;
label_3999d0:
    // 0x3999d0: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_3999d4:
    if (ctx->pc == 0x3999D4u) {
        ctx->pc = 0x3999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999D0u;
        // 0x3999d4: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3999D8u;
        goto label_3999d8;
    }
    ctx->pc = 0x3999D0u;
    {
        const bool branch_taken_0x3999d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3999d0) {
            ctx->pc = 0x3999D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3999D0u;
            // 0x3999d4: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399A58u;
            goto label_399a58;
        }
    }
    ctx->pc = 0x3999D8u;
label_3999d8:
    // 0x3999d8: 0xc6140134  lwc1        $f20, 0x134($s0)
    ctx->pc = 0x3999d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3999dc:
    // 0x3999dc: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x3999dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3999e0:
    // 0x3999e0: 0x0  nop
    ctx->pc = 0x3999e0u;
    // NOP
label_3999e4:
    // 0x3999e4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_3999e8:
    if (ctx->pc == 0x3999E8u) {
        ctx->pc = 0x3999ECu;
        goto label_3999ec;
    }
    ctx->pc = 0x3999E4u;
    {
        const bool branch_taken_0x3999e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3999e4) {
            ctx->pc = 0x399A40u;
            goto label_399a40;
        }
    }
    ctx->pc = 0x3999ECu;
label_3999ec:
    // 0x3999ec: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3999ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3999f0:
    // 0x3999f0: 0x548821  addu        $s1, $v0, $s4
    ctx->pc = 0x3999f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_3999f4:
    // 0x3999f4: 0xc0e404c  jal         func_390130
label_3999f8:
    if (ctx->pc == 0x3999F8u) {
        ctx->pc = 0x3999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999F4u;
        // 0x3999f8: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3999FCu;
        goto label_3999fc;
    }
    ctx->pc = 0x3999F4u;
    SET_GPR_U32(ctx, 31, 0x3999FCu);
    ctx->pc = 0x3999F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3999F4u;
    // 0x3999f8: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x3999F4u, 0x3999FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3999FCu;
label_3999fc:
    // 0x3999fc: 0xc0e57ce  jal         func_395F38
label_399a00:
    if (ctx->pc == 0x399A00u) {
        ctx->pc = 0x399A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999FCu;
        // 0x399a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A04u;
        goto label_399a04;
    }
    ctx->pc = 0x3999FCu;
    SET_GPR_U32(ctx, 31, 0x399A04u);
    ctx->pc = 0x399A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3999FCu;
    // 0x399a00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3999FCu, 0x399A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A04u;
label_399a04:
    // 0x399a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x399a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399a08:
    // 0x399a08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_399a0c:
    // 0x399a0c: 0xc0e65c6  jal         func_399718
label_399a10:
    if (ctx->pc == 0x399A10u) {
        ctx->pc = 0x399A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A0Cu;
        // 0x399a10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A14u;
        goto label_399a14;
    }
    ctx->pc = 0x399A0Cu;
    SET_GPR_U32(ctx, 31, 0x399A14u);
    ctx->pc = 0x399A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A0Cu;
    // 0x399a10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399718u, 0x399A0Cu, 0x399A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A14u;
label_399a14:
    // 0x399a14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_399a18:
    if (ctx->pc == 0x399A18u) {
        ctx->pc = 0x399A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A14u;
        // 0x399a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A1Cu;
        goto label_399a1c;
    }
    ctx->pc = 0x399A14u;
    {
        const bool branch_taken_0x399a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A14u;
        // 0x399a18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a14) {
            ctx->pc = 0x399A38u;
            goto label_399a38;
        }
    }
    ctx->pc = 0x399A1Cu;
label_399a1c:
    // 0x399a1c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x399a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_399a20:
    // 0x399a20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_399a24:
    if (ctx->pc == 0x399A24u) {
        ctx->pc = 0x399A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A20u;
        // 0x399a24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A28u;
        goto label_399a28;
    }
    ctx->pc = 0x399A20u;
    {
        const bool branch_taken_0x399a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A20u;
        // 0x399a24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a20) {
            ctx->pc = 0x399A38u;
            goto label_399a38;
        }
    }
    ctx->pc = 0x399A28u;
label_399a28:
    // 0x399a28: 0xc0e650a  jal         func_399428
label_399a2c:
    if (ctx->pc == 0x399A2Cu) {
        ctx->pc = 0x399A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A28u;
        // 0x399a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A30u;
        goto label_399a30;
    }
    ctx->pc = 0x399A28u;
    SET_GPR_U32(ctx, 31, 0x399A30u);
    ctx->pc = 0x399A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A28u;
    // 0x399a2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399428u, 0x399A28u, 0x399A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A30u;
label_399a30:
    // 0x399a30: 0x10000003  b           . + 4 + (0x3 << 2)
label_399a34:
    if (ctx->pc == 0x399A34u) {
        ctx->pc = 0x399A38u;
        goto label_399a38;
    }
    ctx->pc = 0x399A30u;
    {
        const bool branch_taken_0x399a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399a30) {
            ctx->pc = 0x399A40u;
            goto label_399a40;
        }
    }
    ctx->pc = 0x399A38u;
label_399a38:
    // 0x399a38: 0xc0e65a8  jal         func_3996A0
label_399a3c:
    if (ctx->pc == 0x399A3Cu) {
        ctx->pc = 0x399A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A38u;
        // 0x399a3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A40u;
        goto label_399a40;
    }
    ctx->pc = 0x399A38u;
    SET_GPR_U32(ctx, 31, 0x399A40u);
    ctx->pc = 0x399A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A38u;
    // 0x399a3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3996A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3996A0u, 0x399A38u, 0x399A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A40u;
label_399a40:
    // 0x399a40: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x399a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_399a44:
    // 0x399a44: 0x0  nop
    ctx->pc = 0x399a44u;
    // NOP
label_399a48:
    // 0x399a48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_399a4c:
    if (ctx->pc == 0x399A4Cu) {
        ctx->pc = 0x399A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A48u;
        // 0x399a4c: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A50u;
        goto label_399a50;
    }
    ctx->pc = 0x399A48u;
    {
        const bool branch_taken_0x399a48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x399A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A48u;
        // 0x399a4c: 0x96420018  lhu         $v0, 0x18($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a48) {
            ctx->pc = 0x399A58u;
            goto label_399a58;
        }
    }
    ctx->pc = 0x399A50u;
label_399a50:
    // 0x399a50: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x399a50u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_399a54:
    // 0x399a54: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x399a54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_399a58:
    // 0x399a58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x399a58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_399a5c:
    // 0x399a5c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x399a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_399a60:
    // 0x399a60: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
label_399a64:
    if (ctx->pc == 0x399A64u) {
        ctx->pc = 0x399A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A60u;
        // 0x399a64: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A68u;
        goto label_399a68;
    }
    ctx->pc = 0x399A60u;
    {
        const bool branch_taken_0x399a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A60u;
        // 0x399a64: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a60) {
            ctx->pc = 0x399980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399980;
        }
    }
    ctx->pc = 0x399A68u;
label_399a68:
    // 0x399a68: 0x6a00019  bltz        $s5, . + 4 + (0x19 << 2)
label_399a6c:
    if (ctx->pc == 0x399A6Cu) {
        ctx->pc = 0x399A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A68u;
        // 0x399a6c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A70u;
        goto label_399a70;
    }
    ctx->pc = 0x399A68u;
    {
        const bool branch_taken_0x399a68 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x399A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A68u;
        // 0x399a6c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a68) {
            ctx->pc = 0x399AD0u;
            goto label_399ad0;
        }
    }
    ctx->pc = 0x399A70u;
label_399a70:
    // 0x399a70: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x399a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_399a74:
    // 0x399a74: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x399a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_399a78:
    // 0x399a78: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x399a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_399a7c:
    // 0x399a7c: 0xc0e404c  jal         func_390130
label_399a80:
    if (ctx->pc == 0x399A80u) {
        ctx->pc = 0x399A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A7Cu;
        // 0x399a80: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A84u;
        goto label_399a84;
    }
    ctx->pc = 0x399A7Cu;
    SET_GPR_U32(ctx, 31, 0x399A84u);
    ctx->pc = 0x399A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A7Cu;
    // 0x399a80: 0x86240024  lh          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x399A7Cu, 0x399A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A84u;
label_399a84:
    // 0x399a84: 0xc0e57ce  jal         func_395F38
label_399a88:
    if (ctx->pc == 0x399A88u) {
        ctx->pc = 0x399A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A84u;
        // 0x399a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A8Cu;
        goto label_399a8c;
    }
    ctx->pc = 0x399A84u;
    SET_GPR_U32(ctx, 31, 0x399A8Cu);
    ctx->pc = 0x399A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A84u;
    // 0x399a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x399A84u, 0x399A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A8Cu;
label_399a8c:
    // 0x399a8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x399a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399a90:
    // 0x399a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_399a94:
    // 0x399a94: 0xc0e65c6  jal         func_399718
label_399a98:
    if (ctx->pc == 0x399A98u) {
        ctx->pc = 0x399A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A94u;
        // 0x399a98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A9Cu;
        goto label_399a9c;
    }
    ctx->pc = 0x399A94u;
    SET_GPR_U32(ctx, 31, 0x399A9Cu);
    ctx->pc = 0x399A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A94u;
    // 0x399a98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399718u, 0x399A94u, 0x399A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A9Cu;
label_399a9c:
    // 0x399a9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_399aa0:
    if (ctx->pc == 0x399AA0u) {
        ctx->pc = 0x399AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A9Cu;
        // 0x399aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399AA4u;
        goto label_399aa4;
    }
    ctx->pc = 0x399A9Cu;
    {
        const bool branch_taken_0x399a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A9Cu;
        // 0x399aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a9c) {
            ctx->pc = 0x399AC0u;
            goto label_399ac0;
        }
    }
    ctx->pc = 0x399AA4u;
label_399aa4:
    // 0x399aa4: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x399aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_399aa8:
    // 0x399aa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_399aac:
    if (ctx->pc == 0x399AACu) {
        ctx->pc = 0x399AB0u;
        goto label_399ab0;
    }
    ctx->pc = 0x399AA8u;
    {
        const bool branch_taken_0x399aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399aa8) {
            ctx->pc = 0x399AC0u;
            goto label_399ac0;
        }
    }
    ctx->pc = 0x399AB0u;
label_399ab0:
    // 0x399ab0: 0xc0e650a  jal         func_399428
label_399ab4:
    if (ctx->pc == 0x399AB4u) {
        ctx->pc = 0x399AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AB0u;
        // 0x399ab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399AB8u;
        goto label_399ab8;
    }
    ctx->pc = 0x399AB0u;
    SET_GPR_U32(ctx, 31, 0x399AB8u);
    ctx->pc = 0x399AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399AB0u;
    // 0x399ab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399428u, 0x399AB0u, 0x399AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399AB8u;
label_399ab8:
    // 0x399ab8: 0x1000000b  b           . + 4 + (0xB << 2)
label_399abc:
    if (ctx->pc == 0x399ABCu) {
        ctx->pc = 0x399ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AB8u;
        // 0x399abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399AC0u;
        goto label_399ac0;
    }
    ctx->pc = 0x399AB8u;
    {
        const bool branch_taken_0x399ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AB8u;
        // 0x399abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ab8) {
            ctx->pc = 0x399AE8u;
            goto label_399ae8;
        }
    }
    ctx->pc = 0x399AC0u;
label_399ac0:
    // 0x399ac0: 0xc0e65a8  jal         func_3996A0
label_399ac4:
    if (ctx->pc == 0x399AC4u) {
        ctx->pc = 0x399AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AC0u;
        // 0x399ac4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399AC8u;
        goto label_399ac8;
    }
    ctx->pc = 0x399AC0u;
    SET_GPR_U32(ctx, 31, 0x399AC8u);
    ctx->pc = 0x399AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399AC0u;
    // 0x399ac4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3996A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3996A0u, 0x399AC0u, 0x399AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399AC8u;
label_399ac8:
    // 0x399ac8: 0x10000007  b           . + 4 + (0x7 << 2)
label_399acc:
    if (ctx->pc == 0x399ACCu) {
        ctx->pc = 0x399ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AC8u;
        // 0x399acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399AD0u;
        goto label_399ad0;
    }
    ctx->pc = 0x399AC8u;
    {
        const bool branch_taken_0x399ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AC8u;
        // 0x399acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399ac8) {
            ctx->pc = 0x399AE8u;
            goto label_399ae8;
        }
    }
    ctx->pc = 0x399AD0u;
label_399ad0:
    // 0x399ad0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x399ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_399ad4:
    // 0x399ad4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x399ad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_399ad8:
    // 0x399ad8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x399ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_399adc:
    // 0x399adc: 0x40f809  jalr        $v0
label_399ae0:
    if (ctx->pc == 0x399AE0u) {
        ctx->pc = 0x399AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399ADCu;
        // 0x399ae0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399AE4u;
        goto label_399ae4;
    }
    ctx->pc = 0x399ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399AE4u);
        ctx->pc = 0x399AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399ADCu;
        // 0x399ae0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399ADCu, 0x399AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399AE4u;
label_399ae4:
    // 0x399ae4: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x399ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_399ae8:
    // 0x399ae8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x399ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_399aec:
    // 0x399aec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x399aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_399af0:
    // 0x399af0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x399af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_399af4:
    // 0x399af4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x399af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_399af8:
    // 0x399af8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x399af8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_399afc:
    // 0x399afc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x399afcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_399b00:
    // 0x399b00: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x399b00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399b04:
    // 0x399b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_399b08:
    // 0x399b08: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x399b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_399b0c:
    // 0x399b0c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x399b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_399b10:
    // 0x399b10: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x399b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_399b14:
    // 0x399b14: 0x3e00008  jr          $ra
label_399b18:
    if (ctx->pc == 0x399B18u) {
        ctx->pc = 0x399B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B14u;
        // 0x399b18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399B1Cu;
        goto label_399b1c;
    }
    ctx->pc = 0x399B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B14u;
        // 0x399b18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399B1Cu;
label_399b1c:
    // 0x399b1c: 0x0  nop
    ctx->pc = 0x399b1cu;
    // NOP
    ctx->pc = 0x399b20u;
}
