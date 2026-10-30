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

// Function: sub_003A9910
// Address: 0x3a9910 - 0x3a9b80
void sub_003A9910_0x3a9910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9910_0x3a9910");
#endif

    switch (ctx->pc) {
        case 0x3a9910u: goto label_3a9910;
        case 0x3a9914u: goto label_3a9914;
        case 0x3a9918u: goto label_3a9918;
        case 0x3a991cu: goto label_3a991c;
        case 0x3a9920u: goto label_3a9920;
        case 0x3a9924u: goto label_3a9924;
        case 0x3a9928u: goto label_3a9928;
        case 0x3a992cu: goto label_3a992c;
        case 0x3a9930u: goto label_3a9930;
        case 0x3a9934u: goto label_3a9934;
        case 0x3a9938u: goto label_3a9938;
        case 0x3a993cu: goto label_3a993c;
        case 0x3a9940u: goto label_3a9940;
        case 0x3a9944u: goto label_3a9944;
        case 0x3a9948u: goto label_3a9948;
        case 0x3a994cu: goto label_3a994c;
        case 0x3a9950u: goto label_3a9950;
        case 0x3a9954u: goto label_3a9954;
        case 0x3a9958u: goto label_3a9958;
        case 0x3a995cu: goto label_3a995c;
        case 0x3a9960u: goto label_3a9960;
        case 0x3a9964u: goto label_3a9964;
        case 0x3a9968u: goto label_3a9968;
        case 0x3a996cu: goto label_3a996c;
        case 0x3a9970u: goto label_3a9970;
        case 0x3a9974u: goto label_3a9974;
        case 0x3a9978u: goto label_3a9978;
        case 0x3a997cu: goto label_3a997c;
        case 0x3a9980u: goto label_3a9980;
        case 0x3a9984u: goto label_3a9984;
        case 0x3a9988u: goto label_3a9988;
        case 0x3a998cu: goto label_3a998c;
        case 0x3a9990u: goto label_3a9990;
        case 0x3a9994u: goto label_3a9994;
        case 0x3a9998u: goto label_3a9998;
        case 0x3a999cu: goto label_3a999c;
        case 0x3a99a0u: goto label_3a99a0;
        case 0x3a99a4u: goto label_3a99a4;
        case 0x3a99a8u: goto label_3a99a8;
        case 0x3a99acu: goto label_3a99ac;
        case 0x3a99b0u: goto label_3a99b0;
        case 0x3a99b4u: goto label_3a99b4;
        case 0x3a99b8u: goto label_3a99b8;
        case 0x3a99bcu: goto label_3a99bc;
        case 0x3a99c0u: goto label_3a99c0;
        case 0x3a99c4u: goto label_3a99c4;
        case 0x3a99c8u: goto label_3a99c8;
        case 0x3a99ccu: goto label_3a99cc;
        case 0x3a99d0u: goto label_3a99d0;
        case 0x3a99d4u: goto label_3a99d4;
        case 0x3a99d8u: goto label_3a99d8;
        case 0x3a99dcu: goto label_3a99dc;
        case 0x3a99e0u: goto label_3a99e0;
        case 0x3a99e4u: goto label_3a99e4;
        case 0x3a99e8u: goto label_3a99e8;
        case 0x3a99ecu: goto label_3a99ec;
        case 0x3a99f0u: goto label_3a99f0;
        case 0x3a99f4u: goto label_3a99f4;
        case 0x3a99f8u: goto label_3a99f8;
        case 0x3a99fcu: goto label_3a99fc;
        case 0x3a9a00u: goto label_3a9a00;
        case 0x3a9a04u: goto label_3a9a04;
        case 0x3a9a08u: goto label_3a9a08;
        case 0x3a9a0cu: goto label_3a9a0c;
        case 0x3a9a10u: goto label_3a9a10;
        case 0x3a9a14u: goto label_3a9a14;
        case 0x3a9a18u: goto label_3a9a18;
        case 0x3a9a1cu: goto label_3a9a1c;
        case 0x3a9a20u: goto label_3a9a20;
        case 0x3a9a24u: goto label_3a9a24;
        case 0x3a9a28u: goto label_3a9a28;
        case 0x3a9a2cu: goto label_3a9a2c;
        case 0x3a9a30u: goto label_3a9a30;
        case 0x3a9a34u: goto label_3a9a34;
        case 0x3a9a38u: goto label_3a9a38;
        case 0x3a9a3cu: goto label_3a9a3c;
        case 0x3a9a40u: goto label_3a9a40;
        case 0x3a9a44u: goto label_3a9a44;
        case 0x3a9a48u: goto label_3a9a48;
        case 0x3a9a4cu: goto label_3a9a4c;
        case 0x3a9a50u: goto label_3a9a50;
        case 0x3a9a54u: goto label_3a9a54;
        case 0x3a9a58u: goto label_3a9a58;
        case 0x3a9a5cu: goto label_3a9a5c;
        case 0x3a9a60u: goto label_3a9a60;
        case 0x3a9a64u: goto label_3a9a64;
        case 0x3a9a68u: goto label_3a9a68;
        case 0x3a9a6cu: goto label_3a9a6c;
        case 0x3a9a70u: goto label_3a9a70;
        case 0x3a9a74u: goto label_3a9a74;
        case 0x3a9a78u: goto label_3a9a78;
        case 0x3a9a7cu: goto label_3a9a7c;
        case 0x3a9a80u: goto label_3a9a80;
        case 0x3a9a84u: goto label_3a9a84;
        case 0x3a9a88u: goto label_3a9a88;
        case 0x3a9a8cu: goto label_3a9a8c;
        case 0x3a9a90u: goto label_3a9a90;
        case 0x3a9a94u: goto label_3a9a94;
        case 0x3a9a98u: goto label_3a9a98;
        case 0x3a9a9cu: goto label_3a9a9c;
        case 0x3a9aa0u: goto label_3a9aa0;
        case 0x3a9aa4u: goto label_3a9aa4;
        case 0x3a9aa8u: goto label_3a9aa8;
        case 0x3a9aacu: goto label_3a9aac;
        case 0x3a9ab0u: goto label_3a9ab0;
        case 0x3a9ab4u: goto label_3a9ab4;
        case 0x3a9ab8u: goto label_3a9ab8;
        case 0x3a9abcu: goto label_3a9abc;
        case 0x3a9ac0u: goto label_3a9ac0;
        case 0x3a9ac4u: goto label_3a9ac4;
        case 0x3a9ac8u: goto label_3a9ac8;
        case 0x3a9accu: goto label_3a9acc;
        case 0x3a9ad0u: goto label_3a9ad0;
        case 0x3a9ad4u: goto label_3a9ad4;
        case 0x3a9ad8u: goto label_3a9ad8;
        case 0x3a9adcu: goto label_3a9adc;
        case 0x3a9ae0u: goto label_3a9ae0;
        case 0x3a9ae4u: goto label_3a9ae4;
        case 0x3a9ae8u: goto label_3a9ae8;
        case 0x3a9aecu: goto label_3a9aec;
        case 0x3a9af0u: goto label_3a9af0;
        case 0x3a9af4u: goto label_3a9af4;
        case 0x3a9af8u: goto label_3a9af8;
        case 0x3a9afcu: goto label_3a9afc;
        case 0x3a9b00u: goto label_3a9b00;
        case 0x3a9b04u: goto label_3a9b04;
        case 0x3a9b08u: goto label_3a9b08;
        case 0x3a9b0cu: goto label_3a9b0c;
        case 0x3a9b10u: goto label_3a9b10;
        case 0x3a9b14u: goto label_3a9b14;
        case 0x3a9b18u: goto label_3a9b18;
        case 0x3a9b1cu: goto label_3a9b1c;
        case 0x3a9b20u: goto label_3a9b20;
        case 0x3a9b24u: goto label_3a9b24;
        case 0x3a9b28u: goto label_3a9b28;
        case 0x3a9b2cu: goto label_3a9b2c;
        case 0x3a9b30u: goto label_3a9b30;
        case 0x3a9b34u: goto label_3a9b34;
        case 0x3a9b38u: goto label_3a9b38;
        case 0x3a9b3cu: goto label_3a9b3c;
        case 0x3a9b40u: goto label_3a9b40;
        case 0x3a9b44u: goto label_3a9b44;
        case 0x3a9b48u: goto label_3a9b48;
        case 0x3a9b4cu: goto label_3a9b4c;
        case 0x3a9b50u: goto label_3a9b50;
        case 0x3a9b54u: goto label_3a9b54;
        case 0x3a9b58u: goto label_3a9b58;
        case 0x3a9b5cu: goto label_3a9b5c;
        case 0x3a9b60u: goto label_3a9b60;
        case 0x3a9b64u: goto label_3a9b64;
        case 0x3a9b68u: goto label_3a9b68;
        case 0x3a9b6cu: goto label_3a9b6c;
        case 0x3a9b70u: goto label_3a9b70;
        case 0x3a9b74u: goto label_3a9b74;
        case 0x3a9b78u: goto label_3a9b78;
        case 0x3a9b7cu: goto label_3a9b7c;
        default: break;
    }

    ctx->pc = 0x3a9910u;

label_3a9910:
    // 0x3a9910: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x3a9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_3a9914:
    // 0x3a9914: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x3a9914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_3a9918:
    // 0x3a9918: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x3a9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_3a991c:
    // 0x3a991c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a991cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a9920:
    // 0x3a9920: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x3a9920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_3a9924:
    // 0x3a9924: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a9924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9928:
    // 0x3a9928: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x3a9928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_3a992c:
    // 0x3a992c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x3a992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_3a9930:
    // 0x3a9930: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x3a9930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_3a9934:
    // 0x3a9934: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x3a9934u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3a9938:
    // 0x3a9938: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x3a9938u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3a993c:
    // 0x3a993c: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x3a993cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3a9940:
    // 0x3a9940: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3a9940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a9944:
    // 0x3a9944: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a9944u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a9948:
    // 0x3a9948: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a9948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a994c:
    // 0x3a994c: 0x40f809  jalr        $v0
label_3a9950:
    if (ctx->pc == 0x3A9950u) {
        ctx->pc = 0x3A9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A994Cu;
        // 0x3a9950: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9954u;
        goto label_3a9954;
    }
    ctx->pc = 0x3A994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A9954u);
        ctx->pc = 0x3A9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A994Cu;
        // 0x3a9950: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A994Cu, 0x3A9954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A9954u;
label_3a9954:
    // 0x3a9954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9958:
    // 0x3a9958: 0xc0ea14c  jal         func_3A8530
label_3a995c:
    if (ctx->pc == 0x3A995Cu) {
        ctx->pc = 0x3A995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9958u;
        // 0x3a995c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9960u;
        goto label_3a9960;
    }
    ctx->pc = 0x3A9958u;
    SET_GPR_U32(ctx, 31, 0x3A9960u);
    ctx->pc = 0x3A995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9958u;
    // 0x3a995c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3A9958u, 0x3A9960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9960u;
label_3a9960:
    // 0x3a9960: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9964:
    // 0x3a9964: 0xc0ea12a  jal         func_3A84A8
label_3a9968:
    if (ctx->pc == 0x3A9968u) {
        ctx->pc = 0x3A9968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9964u;
        // 0x3a9968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A996Cu;
        goto label_3a996c;
    }
    ctx->pc = 0x3A9964u;
    SET_GPR_U32(ctx, 31, 0x3A996Cu);
    ctx->pc = 0x3A9968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9964u;
    // 0x3a9968: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A9964u, 0x3A996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A996Cu;
label_3a996c:
    // 0x3a996c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a996cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9970:
    // 0x3a9970: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9974:
    // 0x3a9974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a9974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9978:
    // 0x3a9978: 0xc0ea12a  jal         func_3A84A8
label_3a997c:
    if (ctx->pc == 0x3A997Cu) {
        ctx->pc = 0x3A997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9978u;
        // 0x3a997c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9980u;
        goto label_3a9980;
    }
    ctx->pc = 0x3A9978u;
    SET_GPR_U32(ctx, 31, 0x3A9980u);
    ctx->pc = 0x3A997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9978u;
    // 0x3a997c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A9978u, 0x3A9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9980u;
label_3a9980:
    // 0x3a9980: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a9980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9984:
    // 0x3a9984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a9984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a9988:
    // 0x3a9988: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3a9988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3a998c:
    // 0x3a998c: 0xc0e858c  jal         func_3A1630
label_3a9990:
    if (ctx->pc == 0x3A9990u) {
        ctx->pc = 0x3A9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A998Cu;
        // 0x3a9990: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9994u;
        goto label_3a9994;
    }
    ctx->pc = 0x3A998Cu;
    SET_GPR_U32(ctx, 31, 0x3A9994u);
    ctx->pc = 0x3A9990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A998Cu;
    // 0x3a9990: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3A998Cu, 0x3A9994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9994u;
label_3a9994:
    // 0x3a9994: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a9994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a9998:
    // 0x3a9998: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a9998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3a999c:
    // 0x3a999c: 0x2453b8b8  addiu       $s3, $v0, -0x4748
    ctx->pc = 0x3a999cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3a99a0:
    // 0x3a99a0: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3a99a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
label_3a99a4:
    // 0x3a99a4: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x3a99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3a99a8:
    // 0x3a99a8: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3a99a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3a99ac:
    // 0x3a99ac: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3a99acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3a99b0:
    // 0x3a99b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a99b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a99b4:
    // 0x3a99b4: 0x26102ca8  addiu       $s0, $s0, 0x2CA8
    ctx->pc = 0x3a99b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11432));
label_3a99b8:
    // 0x3a99b8: 0xae4300b0  sw          $v1, 0xB0($s2)
    ctx->pc = 0x3a99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
label_3a99bc:
    // 0x3a99bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a99bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a99c0:
    // 0x3a99c0: 0xc0cd4ee  jal         func_3353B8
label_3a99c4:
    if (ctx->pc == 0x3A99C4u) {
        ctx->pc = 0x3A99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99C0u;
        // 0x3a99c4: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99C8u;
        goto label_3a99c8;
    }
    ctx->pc = 0x3A99C0u;
    SET_GPR_U32(ctx, 31, 0x3A99C8u);
    ctx->pc = 0x3A99C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A99C0u;
    // 0x3a99c4: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A99C0u, 0x3A99C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A99C8u;
label_3a99c8:
    // 0x3a99c8: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x3a99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_3a99cc:
    // 0x3a99cc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3a99ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3a99d0:
    // 0x3a99d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a99d4:
    // 0x3a99d4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3a99d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3a99d8:
    // 0x3a99d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a99d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a99dc:
    // 0x3a99dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3a99e0:
    // 0x3a99e0: 0x24a51770  addiu       $a1, $a1, 0x1770
    ctx->pc = 0x3a99e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6000));
label_3a99e4:
    // 0x3a99e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a99e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a99e8:
    // 0x3a99e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a99e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a99ec:
    // 0x3a99ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a99ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a99f0:
    // 0x3a99f0: 0xc0e8db8  jal         func_3A36E0
label_3a99f4:
    if (ctx->pc == 0x3A99F4u) {
        ctx->pc = 0x3A99F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99F0u;
        // 0x3a99f4: 0xae4300b4  sw          $v1, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99F8u;
        goto label_3a99f8;
    }
    ctx->pc = 0x3A99F0u;
    SET_GPR_U32(ctx, 31, 0x3A99F8u);
    ctx->pc = 0x3A99F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A99F0u;
    // 0x3a99f4: 0xae4300b4  sw          $v1, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3A99F0u, 0x3A99F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A99F8u;
label_3a99f8:
    // 0x3a99f8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3a99fc:
    if (ctx->pc == 0x3A99FCu) {
        ctx->pc = 0x3A99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99F8u;
        // 0x3a99fc: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A00u;
        goto label_3a9a00;
    }
    ctx->pc = 0x3A99F8u;
    {
        const bool branch_taken_0x3a99f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99F8u;
        // 0x3a99fc: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99f8) {
            ctx->pc = 0x3A9B28u;
            goto label_3a9b28;
        }
    }
    ctx->pc = 0x3A9A00u;
label_3a9a00:
    // 0x3a9a00: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x3a9a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9a04:
    // 0x3a9a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a08:
    // 0x3a9a08: 0xc0e8f5c  jal         func_3A3D70
label_3a9a0c:
    if (ctx->pc == 0x3A9A0Cu) {
        ctx->pc = 0x3A9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A08u;
        // 0x3a9a0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A10u;
        goto label_3a9a10;
    }
    ctx->pc = 0x3A9A08u;
    SET_GPR_U32(ctx, 31, 0x3A9A10u);
    ctx->pc = 0x3A9A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A08u;
    // 0x3a9a0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3A9A08u, 0x3A9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A10u;
label_3a9a10:
    // 0x3a9a10: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3a9a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3a9a14:
    // 0x3a9a14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a9a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a18:
    // 0x3a9a18: 0xc0e9364  jal         func_3A4D90
label_3a9a1c:
    if (ctx->pc == 0x3A9A1Cu) {
        ctx->pc = 0x3A9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A18u;
        // 0x3a9a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A20u;
        goto label_3a9a20;
    }
    ctx->pc = 0x3A9A18u;
    SET_GPR_U32(ctx, 31, 0x3A9A20u);
    ctx->pc = 0x3A9A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A18u;
    // 0x3a9a1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x3A9A18u, 0x3A9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A20u;
label_3a9a20:
    // 0x3a9a20: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x3a9a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3a9a24:
    // 0x3a9a24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3a9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a9a28:
    // 0x3a9a28: 0xc0e8f5c  jal         func_3A3D70
label_3a9a2c:
    if (ctx->pc == 0x3A9A2Cu) {
        ctx->pc = 0x3A9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A28u;
        // 0x3a9a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A30u;
        goto label_3a9a30;
    }
    ctx->pc = 0x3A9A28u;
    SET_GPR_U32(ctx, 31, 0x3A9A30u);
    ctx->pc = 0x3A9A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A28u;
    // 0x3a9a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3A9A28u, 0x3A9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A30u;
label_3a9a30:
    // 0x3a9a30: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3a9a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_3a9a34:
    // 0x3a9a34: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3a9a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3a9a38:
    // 0x3a9a38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a9a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a9a3c:
    // 0x3a9a3c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3a9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3a9a40:
    // 0x3a9a40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a9a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a9a44:
    // 0x3a9a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a9a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a9a48:
    // 0x3a9a48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a9a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a4c:
    // 0x3a9a4c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x3a9a4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3a9a50:
    // 0x3a9a50: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a9a50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3a9a54:
    // 0x3a9a54: 0xe7b60064  swc1        $f22, 0x64($sp)
    ctx->pc = 0x3a9a54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3a9a58:
    // 0x3a9a58: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3a9a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3a9a5c:
    // 0x3a9a5c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3a9a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3a9a60:
    // 0x3a9a60: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3a9a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3a9a64:
    // 0x3a9a64: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a9a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3a9a68:
    // 0x3a9a68: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a9a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a9a6c:
    // 0x3a9a6c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3a9a6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a9a70:
    // 0x3a9a70: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3a9a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a9a74:
    // 0x3a9a74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a9a74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a9a78:
    // 0x3a9a78: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a9a78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a9a7c:
    // 0x3a9a7c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a9a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a9a80:
    // 0x3a9a80: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a9a80u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a9a84:
    // 0x3a9a84: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a9a84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3a9a88:
    // 0x3a9a88: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3a9a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3a9a8c:
    // 0x3a9a8c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3a9a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3a9a90:
    // 0x3a9a90: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3a9a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3a9a94:
    // 0x3a9a94: 0xc0cd518  jal         func_335460
label_3a9a98:
    if (ctx->pc == 0x3A9A98u) {
        ctx->pc = 0x3A9A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A94u;
        // 0x3a9a98: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A9Cu;
        goto label_3a9a9c;
    }
    ctx->pc = 0x3A9A94u;
    SET_GPR_U32(ctx, 31, 0x3A9A9Cu);
    ctx->pc = 0x3A9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A94u;
    // 0x3a9a98: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A9A94u, 0x3A9A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A9Cu;
label_3a9a9c:
    // 0x3a9a9c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3a9a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a9aa0:
    // 0x3a9aa0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a9aa0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3a9aa4:
    // 0x3a9aa4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a9aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a9aa8:
    // 0x3a9aa8: 0xc12e310  jal         func_4B8C40
label_3a9aac:
    if (ctx->pc == 0x3A9AACu) {
        ctx->pc = 0x3A9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AA8u;
        // 0x3a9aac: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9AB0u;
        goto label_3a9ab0;
    }
    ctx->pc = 0x3A9AA8u;
    SET_GPR_U32(ctx, 31, 0x3A9AB0u);
    ctx->pc = 0x3A9AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9AA8u;
    // 0x3a9aac: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3A9AA8u, 0x3A9AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9AB0u;
label_3a9ab0:
    // 0x3a9ab0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3a9ab0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3a9ab4:
    // 0x3a9ab4: 0xc12e29c  jal         func_4B8A70
label_3a9ab8:
    if (ctx->pc == 0x3A9AB8u) {
        ctx->pc = 0x3A9AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AB4u;
        // 0x3a9ab8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9ABCu;
        goto label_3a9abc;
    }
    ctx->pc = 0x3A9AB4u;
    SET_GPR_U32(ctx, 31, 0x3A9ABCu);
    ctx->pc = 0x3A9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9AB4u;
    // 0x3a9ab8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3A9AB4u, 0x3A9ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9ABCu;
label_3a9abc:
    // 0x3a9abc: 0xe7b60064  swc1        $f22, 0x64($sp)
    ctx->pc = 0x3a9abcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3a9ac0:
    // 0x3a9ac0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3a9ac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3a9ac4:
    // 0x3a9ac4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3a9ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3a9ac8:
    // 0x3a9ac8: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x3a9ac8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3a9acc:
    // 0x3a9acc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3a9accu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9ad0:
    // 0x3a9ad0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3a9ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a9ad4:
    // 0x3a9ad4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3a9ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3a9ad8:
    // 0x3a9ad8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3a9ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3a9adc:
    // 0x3a9adc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3a9adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3a9ae0:
    // 0x3a9ae0: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x3a9ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
label_3a9ae4:
    // 0x3a9ae4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a9ae4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a9ae8:
    // 0x3a9ae8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a9ae8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a9aec:
    // 0x3a9aec: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3a9aecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9af0:
    // 0x3a9af0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a9af0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a9af4:
    // 0x3a9af4: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3a9af4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a9af8:
    // 0x3a9af8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a9af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9afc:
    // 0x3a9afc: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3a9afcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a9b00:
    // 0x3a9b00: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3a9b00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9b04:
    // 0x3a9b04: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a9b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a9b08:
    // 0x3a9b08: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3a9b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9b0c:
    // 0x3a9b0c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3a9b0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a9b10:
    // 0x3a9b10: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3a9b10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3a9b14:
    // 0x3a9b14: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3a9b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3a9b18:
    // 0x3a9b18: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3a9b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3a9b1c:
    // 0x3a9b1c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3a9b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3a9b20:
    // 0x3a9b20: 0x10000006  b           . + 4 + (0x6 << 2)
label_3a9b24:
    if (ctx->pc == 0x3A9B24u) {
        ctx->pc = 0x3A9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B20u;
        // 0x3a9b24: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B28u;
        goto label_3a9b28;
    }
    ctx->pc = 0x3A9B20u;
    {
        const bool branch_taken_0x3a9b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B20u;
        // 0x3a9b24: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b20) {
            ctx->pc = 0x3A9B3Cu;
            goto label_3a9b3c;
        }
    }
    ctx->pc = 0x3A9B28u;
label_3a9b28:
    // 0x3a9b28: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3a9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3a9b2c:
    // 0x3a9b2c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a9b2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9b30:
    // 0x3a9b30: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3a9b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3a9b34:
    // 0x3a9b34: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x3a9b34u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_3a9b38:
    // 0x3a9b38: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3a9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3a9b3c:
    // 0x3a9b3c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3a9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3a9b40:
    // 0x3a9b40: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x3a9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_3a9b44:
    // 0x3a9b44: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x3a9b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_3a9b48:
    // 0x3a9b48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a9b4c:
    // 0x3a9b4c: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3a9b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3a9b50:
    // 0x3a9b50: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x3a9b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3a9b54:
    // 0x3a9b54: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x3a9b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3a9b58:
    // 0x3a9b58: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x3a9b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3a9b5c:
    // 0x3a9b5c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x3a9b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3a9b60:
    // 0x3a9b60: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x3a9b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3a9b64:
    // 0x3a9b64: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x3a9b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_3a9b68:
    // 0x3a9b68: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x3a9b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a9b6c:
    // 0x3a9b6c: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x3a9b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a9b70:
    // 0x3a9b70: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x3a9b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a9b74:
    // 0x3a9b74: 0x3e00008  jr          $ra
label_3a9b78:
    if (ctx->pc == 0x3A9B78u) {
        ctx->pc = 0x3A9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B74u;
        // 0x3a9b78: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9B7Cu;
        goto label_3a9b7c;
    }
    ctx->pc = 0x3A9B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B74u;
        // 0x3a9b78: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9B7Cu;
label_3a9b7c:
    // 0x3a9b7c: 0x0  nop
    ctx->pc = 0x3a9b7cu;
    // NOP
    ctx->pc = 0x3a9b80u;
}
