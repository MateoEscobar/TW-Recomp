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

// Function: sub_003E0980
// Address: 0x3e0980 - 0x3e0b28
void sub_003E0980_0x3e0980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0980_0x3e0980");
#endif

    switch (ctx->pc) {
        case 0x3e0980u: goto label_3e0980;
        case 0x3e0984u: goto label_3e0984;
        case 0x3e0988u: goto label_3e0988;
        case 0x3e098cu: goto label_3e098c;
        case 0x3e0990u: goto label_3e0990;
        case 0x3e0994u: goto label_3e0994;
        case 0x3e0998u: goto label_3e0998;
        case 0x3e099cu: goto label_3e099c;
        case 0x3e09a0u: goto label_3e09a0;
        case 0x3e09a4u: goto label_3e09a4;
        case 0x3e09a8u: goto label_3e09a8;
        case 0x3e09acu: goto label_3e09ac;
        case 0x3e09b0u: goto label_3e09b0;
        case 0x3e09b4u: goto label_3e09b4;
        case 0x3e09b8u: goto label_3e09b8;
        case 0x3e09bcu: goto label_3e09bc;
        case 0x3e09c0u: goto label_3e09c0;
        case 0x3e09c4u: goto label_3e09c4;
        case 0x3e09c8u: goto label_3e09c8;
        case 0x3e09ccu: goto label_3e09cc;
        case 0x3e09d0u: goto label_3e09d0;
        case 0x3e09d4u: goto label_3e09d4;
        case 0x3e09d8u: goto label_3e09d8;
        case 0x3e09dcu: goto label_3e09dc;
        case 0x3e09e0u: goto label_3e09e0;
        case 0x3e09e4u: goto label_3e09e4;
        case 0x3e09e8u: goto label_3e09e8;
        case 0x3e09ecu: goto label_3e09ec;
        case 0x3e09f0u: goto label_3e09f0;
        case 0x3e09f4u: goto label_3e09f4;
        case 0x3e09f8u: goto label_3e09f8;
        case 0x3e09fcu: goto label_3e09fc;
        case 0x3e0a00u: goto label_3e0a00;
        case 0x3e0a04u: goto label_3e0a04;
        case 0x3e0a08u: goto label_3e0a08;
        case 0x3e0a0cu: goto label_3e0a0c;
        case 0x3e0a10u: goto label_3e0a10;
        case 0x3e0a14u: goto label_3e0a14;
        case 0x3e0a18u: goto label_3e0a18;
        case 0x3e0a1cu: goto label_3e0a1c;
        case 0x3e0a20u: goto label_3e0a20;
        case 0x3e0a24u: goto label_3e0a24;
        case 0x3e0a28u: goto label_3e0a28;
        case 0x3e0a2cu: goto label_3e0a2c;
        case 0x3e0a30u: goto label_3e0a30;
        case 0x3e0a34u: goto label_3e0a34;
        case 0x3e0a38u: goto label_3e0a38;
        case 0x3e0a3cu: goto label_3e0a3c;
        case 0x3e0a40u: goto label_3e0a40;
        case 0x3e0a44u: goto label_3e0a44;
        case 0x3e0a48u: goto label_3e0a48;
        case 0x3e0a4cu: goto label_3e0a4c;
        case 0x3e0a50u: goto label_3e0a50;
        case 0x3e0a54u: goto label_3e0a54;
        case 0x3e0a58u: goto label_3e0a58;
        case 0x3e0a5cu: goto label_3e0a5c;
        case 0x3e0a60u: goto label_3e0a60;
        case 0x3e0a64u: goto label_3e0a64;
        case 0x3e0a68u: goto label_3e0a68;
        case 0x3e0a6cu: goto label_3e0a6c;
        case 0x3e0a70u: goto label_3e0a70;
        case 0x3e0a74u: goto label_3e0a74;
        case 0x3e0a78u: goto label_3e0a78;
        case 0x3e0a7cu: goto label_3e0a7c;
        case 0x3e0a80u: goto label_3e0a80;
        case 0x3e0a84u: goto label_3e0a84;
        case 0x3e0a88u: goto label_3e0a88;
        case 0x3e0a8cu: goto label_3e0a8c;
        case 0x3e0a90u: goto label_3e0a90;
        case 0x3e0a94u: goto label_3e0a94;
        case 0x3e0a98u: goto label_3e0a98;
        case 0x3e0a9cu: goto label_3e0a9c;
        case 0x3e0aa0u: goto label_3e0aa0;
        case 0x3e0aa4u: goto label_3e0aa4;
        case 0x3e0aa8u: goto label_3e0aa8;
        case 0x3e0aacu: goto label_3e0aac;
        case 0x3e0ab0u: goto label_3e0ab0;
        case 0x3e0ab4u: goto label_3e0ab4;
        case 0x3e0ab8u: goto label_3e0ab8;
        case 0x3e0abcu: goto label_3e0abc;
        case 0x3e0ac0u: goto label_3e0ac0;
        case 0x3e0ac4u: goto label_3e0ac4;
        case 0x3e0ac8u: goto label_3e0ac8;
        case 0x3e0accu: goto label_3e0acc;
        case 0x3e0ad0u: goto label_3e0ad0;
        case 0x3e0ad4u: goto label_3e0ad4;
        case 0x3e0ad8u: goto label_3e0ad8;
        case 0x3e0adcu: goto label_3e0adc;
        case 0x3e0ae0u: goto label_3e0ae0;
        case 0x3e0ae4u: goto label_3e0ae4;
        case 0x3e0ae8u: goto label_3e0ae8;
        case 0x3e0aecu: goto label_3e0aec;
        case 0x3e0af0u: goto label_3e0af0;
        case 0x3e0af4u: goto label_3e0af4;
        case 0x3e0af8u: goto label_3e0af8;
        case 0x3e0afcu: goto label_3e0afc;
        case 0x3e0b00u: goto label_3e0b00;
        case 0x3e0b04u: goto label_3e0b04;
        case 0x3e0b08u: goto label_3e0b08;
        case 0x3e0b0cu: goto label_3e0b0c;
        case 0x3e0b10u: goto label_3e0b10;
        case 0x3e0b14u: goto label_3e0b14;
        case 0x3e0b18u: goto label_3e0b18;
        case 0x3e0b1cu: goto label_3e0b1c;
        case 0x3e0b20u: goto label_3e0b20;
        case 0x3e0b24u: goto label_3e0b24;
        default: break;
    }

    ctx->pc = 0x3e0980u;

label_3e0980:
    // 0x3e0980: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x3e0980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
label_3e0984:
    // 0x3e0984: 0x7fb00470  sq          $s0, 0x470($sp)
    ctx->pc = 0x3e0984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 16));
label_3e0988:
    // 0x3e0988: 0x7fb10460  sq          $s1, 0x460($sp)
    ctx->pc = 0x3e0988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 17));
label_3e098c:
    // 0x3e098c: 0x7fb20450  sq          $s2, 0x450($sp)
    ctx->pc = 0x3e098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 18));
label_3e0990:
    // 0x3e0990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e0990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0994:
    // 0x3e0994: 0xffbf0440  sd          $ra, 0x440($sp)
    ctx->pc = 0x3e0994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 31));
label_3e0998:
    // 0x3e0998: 0xe7b70498  swc1        $f23, 0x498($sp)
    ctx->pc = 0x3e0998u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1176), bits); }
label_3e099c:
    // 0x3e099c: 0xe7b60490  swc1        $f22, 0x490($sp)
    ctx->pc = 0x3e099cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1168), bits); }
label_3e09a0:
    // 0x3e09a0: 0xe7b50488  swc1        $f21, 0x488($sp)
    ctx->pc = 0x3e09a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_3e09a4:
    // 0x3e09a4: 0xe7b40480  swc1        $f20, 0x480($sp)
    ctx->pc = 0x3e09a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_3e09a8:
    // 0x3e09a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e09ac:
    // 0x3e09ac: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e09acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e09b0:
    // 0x3e09b0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e09b4:
    // 0x3e09b4: 0x40f809  jalr        $v0
label_3e09b8:
    if (ctx->pc == 0x3E09B8u) {
        ctx->pc = 0x3E09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09B4u;
        // 0x3e09b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E09BCu;
        goto label_3e09bc;
    }
    ctx->pc = 0x3E09B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E09BCu);
        ctx->pc = 0x3E09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09B4u;
        // 0x3e09b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E09B4u, 0x3E09BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E09BCu;
label_3e09bc:
    // 0x3e09bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e09bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e09c0:
    // 0x3e09c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e09c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e09c4:
    // 0x3e09c4: 0x27b20430  addiu       $s2, $sp, 0x430
    ctx->pc = 0x3e09c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e09c8:
    // 0x3e09c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e09cc:
    // 0x3e09cc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e09ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e09d0:
    // 0x3e09d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e09d4:
    // 0x3e09d4: 0x0  nop
    ctx->pc = 0x3e09d4u;
    // NOP
label_3e09d8:
    // 0x3e09d8: 0x0  nop
    ctx->pc = 0x3e09d8u;
    // NOP
label_3e09dc:
    // 0x3e09dc: 0x0  nop
    ctx->pc = 0x3e09dcu;
    // NOP
label_3e09e0:
    // 0x3e09e0: 0x0  nop
    ctx->pc = 0x3e09e0u;
    // NOP
label_3e09e4:
    // 0x3e09e4: 0x0  nop
    ctx->pc = 0x3e09e4u;
    // NOP
label_3e09e8:
    // 0x3e09e8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e09ec:
    if (ctx->pc == 0x3E09ECu) {
        ctx->pc = 0x3E09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09E8u;
        // 0x3e09ec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E09F0u;
        goto label_3e09f0;
    }
    ctx->pc = 0x3E09E8u;
    {
        const bool branch_taken_0x3e09e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09E8u;
        // 0x3e09ec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09e8) {
            ctx->pc = 0x3E09D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e09d8;
        }
    }
    ctx->pc = 0x3E09F0u;
label_3e09f0:
    // 0x3e09f0: 0xc138ddc  jal         func_4E3770
label_3e09f4:
    if (ctx->pc == 0x3E09F4u) {
        ctx->pc = 0x3E09F8u;
        goto label_3e09f8;
    }
    ctx->pc = 0x3E09F0u;
    SET_GPR_U32(ctx, 31, 0x3E09F8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E09F0u, 0x3E09F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E09F8u;
label_3e09f8:
    // 0x3e09f8: 0xc12e310  jal         func_4B8C40
label_3e09fc:
    if (ctx->pc == 0x3E09FCu) {
        ctx->pc = 0x3E09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09F8u;
        // 0x3e09fc: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0A00u;
        goto label_3e0a00;
    }
    ctx->pc = 0x3E09F8u;
    SET_GPR_U32(ctx, 31, 0x3E0A00u);
    ctx->pc = 0x3E09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E09F8u;
    // 0x3e09fc: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3E09F8u, 0x3E0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0A00u;
label_3e0a00:
    // 0x3e0a00: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x3e0a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e0a04:
    // 0x3e0a04: 0xc12e310  jal         func_4B8C40
label_3e0a08:
    if (ctx->pc == 0x3E0A08u) {
        ctx->pc = 0x3E0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A04u;
        // 0x3e0a08: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0A0Cu;
        goto label_3e0a0c;
    }
    ctx->pc = 0x3E0A04u;
    SET_GPR_U32(ctx, 31, 0x3E0A0Cu);
    ctx->pc = 0x3E0A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0A04u;
    // 0x3e0a08: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3E0A04u, 0x3E0A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0A0Cu;
label_3e0a0c:
    // 0x3e0a0c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e0a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e0a10:
    // 0x3e0a10: 0xc12e29c  jal         func_4B8A70
label_3e0a14:
    if (ctx->pc == 0x3E0A14u) {
        ctx->pc = 0x3E0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A10u;
        // 0x3e0a14: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0A18u;
        goto label_3e0a18;
    }
    ctx->pc = 0x3E0A10u;
    SET_GPR_U32(ctx, 31, 0x3E0A18u);
    ctx->pc = 0x3E0A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0A10u;
    // 0x3e0a14: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3E0A10u, 0x3E0A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0A18u;
label_3e0a18:
    // 0x3e0a18: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x3e0a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e0a1c:
    // 0x3e0a1c: 0xc12e29c  jal         func_4B8A70
label_3e0a20:
    if (ctx->pc == 0x3E0A20u) {
        ctx->pc = 0x3E0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A1Cu;
        // 0x3e0a20: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0A24u;
        goto label_3e0a24;
    }
    ctx->pc = 0x3E0A1Cu;
    SET_GPR_U32(ctx, 31, 0x3E0A24u);
    ctx->pc = 0x3E0A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0A1Cu;
    // 0x3e0a20: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3E0A1Cu, 0x3E0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0A24u;
label_3e0a24:
    // 0x3e0a24: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x3e0a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e0a28:
    // 0x3e0a28: 0xc12e310  jal         func_4B8C40
label_3e0a2c:
    if (ctx->pc == 0x3E0A2Cu) {
        ctx->pc = 0x3E0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A28u;
        // 0x3e0a2c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0A30u;
        goto label_3e0a30;
    }
    ctx->pc = 0x3E0A28u;
    SET_GPR_U32(ctx, 31, 0x3E0A30u);
    ctx->pc = 0x3E0A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0A28u;
    // 0x3e0a2c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3E0A28u, 0x3E0A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0A30u;
label_3e0a30:
    // 0x3e0a30: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x3e0a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e0a34:
    // 0x3e0a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e0a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e0a38:
    // 0x3e0a38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e0a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e0a3c:
    // 0x3e0a3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e0a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e0a40:
    // 0x3e0a40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e0a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e0a44:
    // 0x3e0a44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3e0a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3e0a48:
    // 0x3e0a48: 0x27a60420  addiu       $a2, $sp, 0x420
    ctx->pc = 0x3e0a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3e0a4c:
    // 0x3e0a4c: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x3e0a4cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3e0a50:
    // 0x3e0a50: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x3e0a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_3e0a54:
    // 0x3e0a54: 0x4615a542  mul.s       $f21, $f20, $f21
    ctx->pc = 0x3e0a54u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_3e0a58:
    // 0x3e0a58: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x3e0a58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_3e0a5c:
    // 0x3e0a5c: 0xe7a10438  swc1        $f1, 0x438($sp)
    ctx->pc = 0x3e0a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_3e0a60:
    // 0x3e0a60: 0xe7b50434  swc1        $f21, 0x434($sp)
    ctx->pc = 0x3e0a60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1076), bits); }
label_3e0a64:
    // 0x3e0a64: 0xe7b40430  swc1        $f20, 0x430($sp)
    ctx->pc = 0x3e0a64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3e0a68:
    // 0x3e0a68: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x3e0a68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3e0a6c:
    // 0x3e0a6c: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e0a6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e0a70:
    // 0x3e0a70: 0xc136b18  jal         func_4DAC60
label_3e0a74:
    if (ctx->pc == 0x3E0A74u) {
        ctx->pc = 0x3E0A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0A70u;
        // 0x3e0a74: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0A78u;
        goto label_3e0a78;
    }
    ctx->pc = 0x3E0A70u;
    SET_GPR_U32(ctx, 31, 0x3E0A78u);
    ctx->pc = 0x3E0A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0A70u;
    // 0x3e0a74: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E0A70u, 0x3E0A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0A78u;
label_3e0a78:
    // 0x3e0a78: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3e0a78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3e0a7c:
    // 0x3e0a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e0a80:
    // 0x3e0a80: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x3e0a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
label_3e0a84:
    // 0x3e0a84: 0x3421d973  ori         $at, $at, 0xD973
    ctx->pc = 0x3e0a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55667);
label_3e0a88:
    // 0x3e0a88: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3e0a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3e0a8c:
    // 0x3e0a8c: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x3e0a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_3e0a90:
    // 0x3e0a90: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3e0a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3e0a94:
    // 0x3e0a94: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x3e0a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_3e0a98:
    // 0x3e0a98: 0x3421d973  ori         $at, $at, 0xD973
    ctx->pc = 0x3e0a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55667);
label_3e0a9c:
    // 0x3e0a9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e0a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e0aa0:
    // 0x3e0aa0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x3e0aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e0aa4:
    // 0x3e0aa4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x3e0aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e0aa8:
    // 0x3e0aa8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3e0aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3e0aac:
    // 0x3e0aac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3e0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3e0ab0:
    // 0x3e0ab0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3e0ab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3e0ab4:
    // 0x3e0ab4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x3e0ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_3e0ab8:
    // 0x3e0ab8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3e0abc:
    if (ctx->pc == 0x3E0ABCu) {
        ctx->pc = 0x3E0ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AB8u;
        // 0x3e0abc: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0AC0u;
        goto label_3e0ac0;
    }
    ctx->pc = 0x3E0AB8u;
    {
        const bool branch_taken_0x3e0ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E0ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AB8u;
        // 0x3e0abc: 0xe601001c  swc1        $f1, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ab8) {
            ctx->pc = 0x3E0AC8u;
            goto label_3e0ac8;
        }
    }
    ctx->pc = 0x3E0AC0u;
label_3e0ac0:
    // 0x3e0ac0: 0x1000000f  b           . + 4 + (0xF << 2)
label_3e0ac4:
    if (ctx->pc == 0x3E0AC4u) {
        ctx->pc = 0x3E0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AC0u;
        // 0x3e0ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0AC8u;
        goto label_3e0ac8;
    }
    ctx->pc = 0x3E0AC0u;
    {
        const bool branch_taken_0x3e0ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AC0u;
        // 0x3e0ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ac0) {
            ctx->pc = 0x3E0B00u;
            goto label_3e0b00;
        }
    }
    ctx->pc = 0x3E0AC8u;
label_3e0ac8:
    // 0x3e0ac8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3e0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3e0acc:
    // 0x3e0acc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3e0accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e0ad0:
    // 0x3e0ad0: 0xc0cd4ee  jal         func_3353B8
label_3e0ad4:
    if (ctx->pc == 0x3E0AD4u) {
        ctx->pc = 0x3E0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AD0u;
        // 0x3e0ad4: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0AD8u;
        goto label_3e0ad8;
    }
    ctx->pc = 0x3E0AD0u;
    SET_GPR_U32(ctx, 31, 0x3E0AD8u);
    ctx->pc = 0x3E0AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0AD0u;
    // 0x3e0ad4: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E0AD0u, 0x3E0AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0AD8u;
label_3e0ad8:
    // 0x3e0ad8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3e0ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_3e0adc:
    // 0x3e0adc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3e0ae0:
    if (ctx->pc == 0x3E0AE0u) {
        ctx->pc = 0x3E0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0ADCu;
        // 0x3e0ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0AE4u;
        goto label_3e0ae4;
    }
    ctx->pc = 0x3E0ADCu;
    {
        const bool branch_taken_0x3e0adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0ADCu;
        // 0x3e0ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0adc) {
            ctx->pc = 0x3E0AF4u;
            goto label_3e0af4;
        }
    }
    ctx->pc = 0x3E0AE4u;
label_3e0ae4:
    // 0x3e0ae4: 0xc0e858c  jal         func_3A1630
label_3e0ae8:
    if (ctx->pc == 0x3E0AE8u) {
        ctx->pc = 0x3E0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AE4u;
        // 0x3e0ae8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0AECu;
        goto label_3e0aec;
    }
    ctx->pc = 0x3E0AE4u;
    SET_GPR_U32(ctx, 31, 0x3E0AECu);
    ctx->pc = 0x3E0AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0AE4u;
    // 0x3e0ae8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E0AE4u, 0x3E0AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0AECu;
label_3e0aec:
    // 0x3e0aec: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e0af0:
    if (ctx->pc == 0x3E0AF0u) {
        ctx->pc = 0x3E0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AECu;
        // 0x3e0af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0AF4u;
        goto label_3e0af4;
    }
    ctx->pc = 0x3E0AECu;
    {
        const bool branch_taken_0x3e0aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AECu;
        // 0x3e0af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0aec) {
            ctx->pc = 0x3E0B00u;
            goto label_3e0b00;
        }
    }
    ctx->pc = 0x3E0AF4u;
label_3e0af4:
    // 0x3e0af4: 0xc0e858c  jal         func_3A1630
label_3e0af8:
    if (ctx->pc == 0x3E0AF8u) {
        ctx->pc = 0x3E0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AF4u;
        // 0x3e0af8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0AFCu;
        goto label_3e0afc;
    }
    ctx->pc = 0x3E0AF4u;
    SET_GPR_U32(ctx, 31, 0x3E0AFCu);
    ctx->pc = 0x3E0AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0AF4u;
    // 0x3e0af8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E0AF4u, 0x3E0AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0AFCu;
label_3e0afc:
    // 0x3e0afc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e0afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e0b00:
    // 0x3e0b00: 0x7bb00470  lq          $s0, 0x470($sp)
    ctx->pc = 0x3e0b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3e0b04:
    // 0x3e0b04: 0x7bb10460  lq          $s1, 0x460($sp)
    ctx->pc = 0x3e0b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e0b08:
    // 0x3e0b08: 0x7bb20450  lq          $s2, 0x450($sp)
    ctx->pc = 0x3e0b08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e0b0c:
    // 0x3e0b0c: 0xdfbf0440  ld          $ra, 0x440($sp)
    ctx->pc = 0x3e0b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e0b10:
    // 0x3e0b10: 0xc7b70498  lwc1        $f23, 0x498($sp)
    ctx->pc = 0x3e0b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e0b14:
    // 0x3e0b14: 0xc7b60490  lwc1        $f22, 0x490($sp)
    ctx->pc = 0x3e0b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e0b18:
    // 0x3e0b18: 0xc7b50488  lwc1        $f21, 0x488($sp)
    ctx->pc = 0x3e0b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e0b1c:
    // 0x3e0b1c: 0xc7b40480  lwc1        $f20, 0x480($sp)
    ctx->pc = 0x3e0b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e0b20:
    // 0x3e0b20: 0x3e00008  jr          $ra
label_3e0b24:
    if (ctx->pc == 0x3E0B24u) {
        ctx->pc = 0x3E0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B20u;
        // 0x3e0b24: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0B28u;
        goto label_fallthrough_0x3e0b20;
    }
    ctx->pc = 0x3E0B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B20u;
        // 0x3e0b24: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0b20:
    ctx->pc = 0x3E0B28u;
}
