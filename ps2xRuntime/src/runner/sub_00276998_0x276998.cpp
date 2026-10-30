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

// Function: sub_00276998
// Address: 0x276998 - 0x276d98
void sub_00276998_0x276998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276998_0x276998");
#endif

    switch (ctx->pc) {
        case 0x276998u: goto label_276998;
        case 0x27699cu: goto label_27699c;
        case 0x2769a0u: goto label_2769a0;
        case 0x2769a4u: goto label_2769a4;
        case 0x2769a8u: goto label_2769a8;
        case 0x2769acu: goto label_2769ac;
        case 0x2769b0u: goto label_2769b0;
        case 0x2769b4u: goto label_2769b4;
        case 0x2769b8u: goto label_2769b8;
        case 0x2769bcu: goto label_2769bc;
        case 0x2769c0u: goto label_2769c0;
        case 0x2769c4u: goto label_2769c4;
        case 0x2769c8u: goto label_2769c8;
        case 0x2769ccu: goto label_2769cc;
        case 0x2769d0u: goto label_2769d0;
        case 0x2769d4u: goto label_2769d4;
        case 0x2769d8u: goto label_2769d8;
        case 0x2769dcu: goto label_2769dc;
        case 0x2769e0u: goto label_2769e0;
        case 0x2769e4u: goto label_2769e4;
        case 0x2769e8u: goto label_2769e8;
        case 0x2769ecu: goto label_2769ec;
        case 0x2769f0u: goto label_2769f0;
        case 0x2769f4u: goto label_2769f4;
        case 0x2769f8u: goto label_2769f8;
        case 0x2769fcu: goto label_2769fc;
        case 0x276a00u: goto label_276a00;
        case 0x276a04u: goto label_276a04;
        case 0x276a08u: goto label_276a08;
        case 0x276a0cu: goto label_276a0c;
        case 0x276a10u: goto label_276a10;
        case 0x276a14u: goto label_276a14;
        case 0x276a18u: goto label_276a18;
        case 0x276a1cu: goto label_276a1c;
        case 0x276a20u: goto label_276a20;
        case 0x276a24u: goto label_276a24;
        case 0x276a28u: goto label_276a28;
        case 0x276a2cu: goto label_276a2c;
        case 0x276a30u: goto label_276a30;
        case 0x276a34u: goto label_276a34;
        case 0x276a38u: goto label_276a38;
        case 0x276a3cu: goto label_276a3c;
        case 0x276a40u: goto label_276a40;
        case 0x276a44u: goto label_276a44;
        case 0x276a48u: goto label_276a48;
        case 0x276a4cu: goto label_276a4c;
        case 0x276a50u: goto label_276a50;
        case 0x276a54u: goto label_276a54;
        case 0x276a58u: goto label_276a58;
        case 0x276a5cu: goto label_276a5c;
        case 0x276a60u: goto label_276a60;
        case 0x276a64u: goto label_276a64;
        case 0x276a68u: goto label_276a68;
        case 0x276a6cu: goto label_276a6c;
        case 0x276a70u: goto label_276a70;
        case 0x276a74u: goto label_276a74;
        case 0x276a78u: goto label_276a78;
        case 0x276a7cu: goto label_276a7c;
        case 0x276a80u: goto label_276a80;
        case 0x276a84u: goto label_276a84;
        case 0x276a88u: goto label_276a88;
        case 0x276a8cu: goto label_276a8c;
        case 0x276a90u: goto label_276a90;
        case 0x276a94u: goto label_276a94;
        case 0x276a98u: goto label_276a98;
        case 0x276a9cu: goto label_276a9c;
        case 0x276aa0u: goto label_276aa0;
        case 0x276aa4u: goto label_276aa4;
        case 0x276aa8u: goto label_276aa8;
        case 0x276aacu: goto label_276aac;
        case 0x276ab0u: goto label_276ab0;
        case 0x276ab4u: goto label_276ab4;
        case 0x276ab8u: goto label_276ab8;
        case 0x276abcu: goto label_276abc;
        case 0x276ac0u: goto label_276ac0;
        case 0x276ac4u: goto label_276ac4;
        case 0x276ac8u: goto label_276ac8;
        case 0x276accu: goto label_276acc;
        case 0x276ad0u: goto label_276ad0;
        case 0x276ad4u: goto label_276ad4;
        case 0x276ad8u: goto label_276ad8;
        case 0x276adcu: goto label_276adc;
        case 0x276ae0u: goto label_276ae0;
        case 0x276ae4u: goto label_276ae4;
        case 0x276ae8u: goto label_276ae8;
        case 0x276aecu: goto label_276aec;
        case 0x276af0u: goto label_276af0;
        case 0x276af4u: goto label_276af4;
        case 0x276af8u: goto label_276af8;
        case 0x276afcu: goto label_276afc;
        case 0x276b00u: goto label_276b00;
        case 0x276b04u: goto label_276b04;
        case 0x276b08u: goto label_276b08;
        case 0x276b0cu: goto label_276b0c;
        case 0x276b10u: goto label_276b10;
        case 0x276b14u: goto label_276b14;
        case 0x276b18u: goto label_276b18;
        case 0x276b1cu: goto label_276b1c;
        case 0x276b20u: goto label_276b20;
        case 0x276b24u: goto label_276b24;
        case 0x276b28u: goto label_276b28;
        case 0x276b2cu: goto label_276b2c;
        case 0x276b30u: goto label_276b30;
        case 0x276b34u: goto label_276b34;
        case 0x276b38u: goto label_276b38;
        case 0x276b3cu: goto label_276b3c;
        case 0x276b40u: goto label_276b40;
        case 0x276b44u: goto label_276b44;
        case 0x276b48u: goto label_276b48;
        case 0x276b4cu: goto label_276b4c;
        case 0x276b50u: goto label_276b50;
        case 0x276b54u: goto label_276b54;
        case 0x276b58u: goto label_276b58;
        case 0x276b5cu: goto label_276b5c;
        case 0x276b60u: goto label_276b60;
        case 0x276b64u: goto label_276b64;
        case 0x276b68u: goto label_276b68;
        case 0x276b6cu: goto label_276b6c;
        case 0x276b70u: goto label_276b70;
        case 0x276b74u: goto label_276b74;
        case 0x276b78u: goto label_276b78;
        case 0x276b7cu: goto label_276b7c;
        case 0x276b80u: goto label_276b80;
        case 0x276b84u: goto label_276b84;
        case 0x276b88u: goto label_276b88;
        case 0x276b8cu: goto label_276b8c;
        case 0x276b90u: goto label_276b90;
        case 0x276b94u: goto label_276b94;
        case 0x276b98u: goto label_276b98;
        case 0x276b9cu: goto label_276b9c;
        case 0x276ba0u: goto label_276ba0;
        case 0x276ba4u: goto label_276ba4;
        case 0x276ba8u: goto label_276ba8;
        case 0x276bacu: goto label_276bac;
        case 0x276bb0u: goto label_276bb0;
        case 0x276bb4u: goto label_276bb4;
        case 0x276bb8u: goto label_276bb8;
        case 0x276bbcu: goto label_276bbc;
        case 0x276bc0u: goto label_276bc0;
        case 0x276bc4u: goto label_276bc4;
        case 0x276bc8u: goto label_276bc8;
        case 0x276bccu: goto label_276bcc;
        case 0x276bd0u: goto label_276bd0;
        case 0x276bd4u: goto label_276bd4;
        case 0x276bd8u: goto label_276bd8;
        case 0x276bdcu: goto label_276bdc;
        case 0x276be0u: goto label_276be0;
        case 0x276be4u: goto label_276be4;
        case 0x276be8u: goto label_276be8;
        case 0x276becu: goto label_276bec;
        case 0x276bf0u: goto label_276bf0;
        case 0x276bf4u: goto label_276bf4;
        case 0x276bf8u: goto label_276bf8;
        case 0x276bfcu: goto label_276bfc;
        case 0x276c00u: goto label_276c00;
        case 0x276c04u: goto label_276c04;
        case 0x276c08u: goto label_276c08;
        case 0x276c0cu: goto label_276c0c;
        case 0x276c10u: goto label_276c10;
        case 0x276c14u: goto label_276c14;
        case 0x276c18u: goto label_276c18;
        case 0x276c1cu: goto label_276c1c;
        case 0x276c20u: goto label_276c20;
        case 0x276c24u: goto label_276c24;
        case 0x276c28u: goto label_276c28;
        case 0x276c2cu: goto label_276c2c;
        case 0x276c30u: goto label_276c30;
        case 0x276c34u: goto label_276c34;
        case 0x276c38u: goto label_276c38;
        case 0x276c3cu: goto label_276c3c;
        case 0x276c40u: goto label_276c40;
        case 0x276c44u: goto label_276c44;
        case 0x276c48u: goto label_276c48;
        case 0x276c4cu: goto label_276c4c;
        case 0x276c50u: goto label_276c50;
        case 0x276c54u: goto label_276c54;
        case 0x276c58u: goto label_276c58;
        case 0x276c5cu: goto label_276c5c;
        case 0x276c60u: goto label_276c60;
        case 0x276c64u: goto label_276c64;
        case 0x276c68u: goto label_276c68;
        case 0x276c6cu: goto label_276c6c;
        case 0x276c70u: goto label_276c70;
        case 0x276c74u: goto label_276c74;
        case 0x276c78u: goto label_276c78;
        case 0x276c7cu: goto label_276c7c;
        case 0x276c80u: goto label_276c80;
        case 0x276c84u: goto label_276c84;
        case 0x276c88u: goto label_276c88;
        case 0x276c8cu: goto label_276c8c;
        case 0x276c90u: goto label_276c90;
        case 0x276c94u: goto label_276c94;
        case 0x276c98u: goto label_276c98;
        case 0x276c9cu: goto label_276c9c;
        case 0x276ca0u: goto label_276ca0;
        case 0x276ca4u: goto label_276ca4;
        case 0x276ca8u: goto label_276ca8;
        case 0x276cacu: goto label_276cac;
        case 0x276cb0u: goto label_276cb0;
        case 0x276cb4u: goto label_276cb4;
        case 0x276cb8u: goto label_276cb8;
        case 0x276cbcu: goto label_276cbc;
        case 0x276cc0u: goto label_276cc0;
        case 0x276cc4u: goto label_276cc4;
        case 0x276cc8u: goto label_276cc8;
        case 0x276cccu: goto label_276ccc;
        case 0x276cd0u: goto label_276cd0;
        case 0x276cd4u: goto label_276cd4;
        case 0x276cd8u: goto label_276cd8;
        case 0x276cdcu: goto label_276cdc;
        case 0x276ce0u: goto label_276ce0;
        case 0x276ce4u: goto label_276ce4;
        case 0x276ce8u: goto label_276ce8;
        case 0x276cecu: goto label_276cec;
        case 0x276cf0u: goto label_276cf0;
        case 0x276cf4u: goto label_276cf4;
        case 0x276cf8u: goto label_276cf8;
        case 0x276cfcu: goto label_276cfc;
        case 0x276d00u: goto label_276d00;
        case 0x276d04u: goto label_276d04;
        case 0x276d08u: goto label_276d08;
        case 0x276d0cu: goto label_276d0c;
        case 0x276d10u: goto label_276d10;
        case 0x276d14u: goto label_276d14;
        case 0x276d18u: goto label_276d18;
        case 0x276d1cu: goto label_276d1c;
        case 0x276d20u: goto label_276d20;
        case 0x276d24u: goto label_276d24;
        case 0x276d28u: goto label_276d28;
        case 0x276d2cu: goto label_276d2c;
        case 0x276d30u: goto label_276d30;
        case 0x276d34u: goto label_276d34;
        case 0x276d38u: goto label_276d38;
        case 0x276d3cu: goto label_276d3c;
        case 0x276d40u: goto label_276d40;
        case 0x276d44u: goto label_276d44;
        case 0x276d48u: goto label_276d48;
        case 0x276d4cu: goto label_276d4c;
        case 0x276d50u: goto label_276d50;
        case 0x276d54u: goto label_276d54;
        case 0x276d58u: goto label_276d58;
        case 0x276d5cu: goto label_276d5c;
        case 0x276d60u: goto label_276d60;
        case 0x276d64u: goto label_276d64;
        case 0x276d68u: goto label_276d68;
        case 0x276d6cu: goto label_276d6c;
        case 0x276d70u: goto label_276d70;
        case 0x276d74u: goto label_276d74;
        case 0x276d78u: goto label_276d78;
        case 0x276d7cu: goto label_276d7c;
        case 0x276d80u: goto label_276d80;
        case 0x276d84u: goto label_276d84;
        case 0x276d88u: goto label_276d88;
        case 0x276d8cu: goto label_276d8c;
        case 0x276d90u: goto label_276d90;
        case 0x276d94u: goto label_276d94;
        default: break;
    }

    ctx->pc = 0x276998u;

label_276998:
    // 0x276998: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x276998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_27699c:
    // 0x27699c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x27699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_2769a0:
    // 0x2769a0: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2769a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_2769a4:
    // 0x2769a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2769a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2769a8:
    // 0x2769a8: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2769a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_2769ac:
    // 0x2769ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2769acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2769b0:
    // 0x2769b0: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2769b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_2769b4:
    // 0x2769b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2769b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2769b8:
    // 0x2769b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2769b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2769bc:
    // 0x2769bc: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2769bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_2769c0:
    // 0x2769c0: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2769c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_2769c4:
    // 0x2769c4: 0xe7b90168  swc1        $f25, 0x168($sp)
    ctx->pc = 0x2769c4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_2769c8:
    // 0x2769c8: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x2769c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2769cc:
    // 0x2769cc: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x2769ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_2769d0:
    // 0x2769d0: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x2769d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_2769d4:
    // 0x2769d4: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2769d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_2769d8:
    // 0x2769d8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2769d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_2769dc:
    // 0x2769dc: 0xc08a658  jal         func_229960
label_2769e0:
    if (ctx->pc == 0x2769E0u) {
        ctx->pc = 0x2769E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769DCu;
        // 0x2769e0: 0xe7b60150  swc1        $f22, 0x150($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2769E4u;
        goto label_2769e4;
    }
    ctx->pc = 0x2769DCu;
    SET_GPR_U32(ctx, 31, 0x2769E4u);
    ctx->pc = 0x2769E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769DCu;
    // 0x2769e0: 0xe7b60150  swc1        $f22, 0x150($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x2769DCu, 0x2769E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769E4u;
label_2769e4:
    // 0x2769e4: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x2769e4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_2769e8:
    // 0x2769e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2769e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2769ec:
    // 0x2769ec: 0xc095142  jal         func_254508
label_2769f0:
    if (ctx->pc == 0x2769F0u) {
        ctx->pc = 0x2769F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769ECu;
        // 0x2769f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2769F4u;
        goto label_2769f4;
    }
    ctx->pc = 0x2769ECu;
    SET_GPR_U32(ctx, 31, 0x2769F4u);
    ctx->pc = 0x2769F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769ECu;
    // 0x2769f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x2769ECu, 0x2769F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769F4u;
label_2769f4:
    // 0x2769f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2769f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2769f8:
    // 0x2769f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2769f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2769fc:
    // 0x2769fc: 0xc095128  jal         func_2544A0
label_276a00:
    if (ctx->pc == 0x276A00u) {
        ctx->pc = 0x276A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2769FCu;
        // 0x276a00: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A04u;
        goto label_276a04;
    }
    ctx->pc = 0x2769FCu;
    SET_GPR_U32(ctx, 31, 0x276A04u);
    ctx->pc = 0x276A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2769FCu;
    // 0x276a00: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2769FCu, 0x276A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A04u;
label_276a04:
    // 0x276a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x276a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_276a08:
    // 0x276a08: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x276a08u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_276a0c:
    // 0x276a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_276a10:
    // 0x276a10: 0xc040596  jal         func_101658
label_276a14:
    if (ctx->pc == 0x276A14u) {
        ctx->pc = 0x276A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A10u;
        // 0x276a14: 0x4615c641  sub.s       $f25, $f24, $f21 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A18u;
        goto label_276a18;
    }
    ctx->pc = 0x276A10u;
    SET_GPR_U32(ctx, 31, 0x276A18u);
    ctx->pc = 0x276A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A10u;
    // 0x276a14: 0x4615c641  sub.s       $f25, $f24, $f21 (Delay Slot)
    ctx->f[25] = FPU_SUB_S(ctx->f[24], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x101658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101658u, 0x276A10u, 0x276A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A18u;
label_276a18:
    // 0x276a18: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x276a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_276a1c:
    // 0x276a1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x276a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_276a20:
    // 0x276a20: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x276a20u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_276a24:
    // 0x276a24: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x276a24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_276a28:
    // 0x276a28: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x276a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_276a2c:
    // 0x276a2c: 0x40f809  jalr        $v0
label_276a30:
    if (ctx->pc == 0x276A30u) {
        ctx->pc = 0x276A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A2Cu;
        // 0x276a30: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A34u;
        goto label_276a34;
    }
    ctx->pc = 0x276A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x276A34u);
        ctx->pc = 0x276A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A2Cu;
        // 0x276a30: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276A2Cu, 0x276A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276A34u;
label_276a34:
    // 0x276a34: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x276a34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_276a38:
    // 0x276a38: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x276a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_276a3c:
    // 0x276a3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x276a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_276a40:
    // 0x276a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276a44:
    // 0x276a44: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x276a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_276a48:
    // 0x276a48: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x276a48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276a4c:
    // 0x276a4c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x276a4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_276a50:
    // 0x276a50: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x276a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_276a54:
    // 0x276a54: 0x60f809  jalr        $v1
label_276a58:
    if (ctx->pc == 0x276A58u) {
        ctx->pc = 0x276A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A54u;
        // 0x276a58: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A5Cu;
        goto label_276a5c;
    }
    ctx->pc = 0x276A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x276A5Cu);
        ctx->pc = 0x276A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A54u;
        // 0x276a58: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276A54u, 0x276A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276A5Cu;
label_276a5c:
    // 0x276a5c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x276a5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_276a60:
    // 0x276a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_276a64:
    // 0x276a64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x276a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_276a68:
    // 0x276a68: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x276a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_276a6c:
    // 0x276a6c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x276a6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_276a70:
    // 0x276a70: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x276a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_276a74:
    // 0x276a74: 0xc0f809  jalr        $a2
label_276a78:
    if (ctx->pc == 0x276A78u) {
        ctx->pc = 0x276A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A74u;
        // 0x276a78: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A7Cu;
        goto label_276a7c;
    }
    ctx->pc = 0x276A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x276A7Cu);
        ctx->pc = 0x276A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A74u;
        // 0x276a78: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276A74u, 0x276A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276A7Cu;
label_276a7c:
    // 0x276a7c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x276a7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_276a80:
    // 0x276a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_276a84:
    // 0x276a84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x276a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_276a88:
    // 0x276a88: 0xc08866e  jal         func_2219B8
label_276a8c:
    if (ctx->pc == 0x276A8Cu) {
        ctx->pc = 0x276A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A88u;
        // 0x276a8c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A90u;
        goto label_276a90;
    }
    ctx->pc = 0x276A88u;
    SET_GPR_U32(ctx, 31, 0x276A90u);
    ctx->pc = 0x276A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A88u;
    // 0x276a8c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2219B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2219B8u, 0x276A88u, 0x276A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A90u;
label_276a90:
    // 0x276a90: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_276a94:
    if (ctx->pc == 0x276A94u) {
        ctx->pc = 0x276A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A90u;
        // 0x276a94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276A98u;
        goto label_276a98;
    }
    ctx->pc = 0x276A90u;
    {
        const bool branch_taken_0x276a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A90u;
        // 0x276a94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276a90) {
            ctx->pc = 0x276AF4u;
            goto label_276af4;
        }
    }
    ctx->pc = 0x276A98u;
label_276a98:
    // 0x276a98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x276a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_276a9c:
    // 0x276a9c: 0xc040556  jal         func_101558
label_276aa0:
    if (ctx->pc == 0x276AA0u) {
        ctx->pc = 0x276AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276A9Cu;
        // 0x276aa0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276AA4u;
        goto label_276aa4;
    }
    ctx->pc = 0x276A9Cu;
    SET_GPR_U32(ctx, 31, 0x276AA4u);
    ctx->pc = 0x276AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276A9Cu;
    // 0x276aa0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101558u, 0x276A9Cu, 0x276AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AA4u;
label_276aa4:
    // 0x276aa4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x276aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_276aa8:
    // 0x276aa8: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x276aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_276aac:
    // 0x276aac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276aacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276ab0:
    // 0x276ab0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x276ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276ab4:
    // 0x276ab4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x276ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276ab8:
    // 0x276ab8: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x276ab8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_276abc:
    // 0x276abc: 0x4a0003bf  vwaitq
    ctx->pc = 0x276abcu;
    // VWAITQ (Q already resolved in this runtime)
label_276ac0:
    // 0x276ac0: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x276ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276ac4:
    // 0x276ac4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x276ac4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_276ac8:
    // 0x276ac8: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x276ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_276acc:
    // 0x276acc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x276accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_276ad0:
    // 0x276ad0: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x276ad0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_276ad4:
    // 0x276ad4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x276ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_276ad8:
    // 0x276ad8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276adc:
    // 0x276adc: 0xc461563c  lwc1        $f1, 0x563C($v1)
    ctx->pc = 0x276adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 22076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276ae0:
    // 0x276ae0: 0x4603a882  mul.s       $f2, $f21, $f3
    ctx->pc = 0x276ae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[3]);
label_276ae4:
    // 0x276ae4: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x276ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_276ae8:
    // 0x276ae8: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x276ae8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
label_276aec:
    // 0x276aec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x276aecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_276af0:
    // 0x276af0: 0x46000d28  max.s       $f20, $f1, $f0
    ctx->pc = 0x276af0u;
    ctx->f[20] = std::max(ctx->f[1], ctx->f[0]);
label_276af4:
    // 0x276af4: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x276af4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_276af8:
    // 0x276af8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x276af8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_276afc:
    // 0x276afc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276b00:
    // 0x276b00: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x276b00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_276b04:
    // 0x276b04: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x276b04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276b08:
    // 0x276b08: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x276b08u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_276b0c:
    // 0x276b0c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x276b0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_276b10:
    // 0x276b10: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276b10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276b14:
    // 0x276b14: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x276b14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276b18:
    // 0x276b18: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x276b18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276b1c:
    // 0x276b1c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x276b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276b20:
    // 0x276b20: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x276b20u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_276b24:
    // 0x276b24: 0x4a0003bf  vwaitq
    ctx->pc = 0x276b24u;
    // VWAITQ (Q already resolved in this runtime)
label_276b28:
    // 0x276b28: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x276b28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_276b2c:
    // 0x276b2c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x276b2cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_276b30:
    // 0x276b30: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x276b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_276b34:
    // 0x276b34: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x276b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_276b38:
    // 0x276b38: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x276b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_276b3c:
    // 0x276b3c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x276b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_276b40:
    // 0x276b40: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x276b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_276b44:
    // 0x276b44: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x276b44u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_276b48:
    // 0x276b48: 0xc0cd5ea  jal         func_3357A8
label_276b4c:
    if (ctx->pc == 0x276B4Cu) {
        ctx->pc = 0x276B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B48u;
        // 0x276b4c: 0x7fa40040  sq          $a0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B50u;
        goto label_276b50;
    }
    ctx->pc = 0x276B48u;
    SET_GPR_U32(ctx, 31, 0x276B50u);
    ctx->pc = 0x276B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B48u;
    // 0x276b4c: 0x7fa40040  sq          $a0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x276B48u, 0x276B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B50u;
label_276b50:
    // 0x276b50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x276b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_276b54:
    // 0x276b54: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x276b54u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_276b58:
    // 0x276b58: 0xc0cd940  jal         func_336500
label_276b5c:
    if (ctx->pc == 0x276B5Cu) {
        ctx->pc = 0x276B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B58u;
        // 0x276b5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B60u;
        goto label_276b60;
    }
    ctx->pc = 0x276B58u;
    SET_GPR_U32(ctx, 31, 0x276B60u);
    ctx->pc = 0x276B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B58u;
    // 0x276b5c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x276B58u, 0x276B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B60u;
label_276b60:
    // 0x276b60: 0xc087502  jal         func_21D408
label_276b64:
    if (ctx->pc == 0x276B64u) {
        ctx->pc = 0x276B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B60u;
        // 0x276b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B68u;
        goto label_276b68;
    }
    ctx->pc = 0x276B60u;
    SET_GPR_U32(ctx, 31, 0x276B68u);
    ctx->pc = 0x276B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276B60u;
    // 0x276b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x276B60u, 0x276B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B68u;
label_276b68:
    // 0x276b68: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x276b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_276b6c:
    // 0x276b6c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_276b70:
    if (ctx->pc == 0x276B70u) {
        ctx->pc = 0x276B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B6Cu;
        // 0x276b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B74u;
        goto label_276b74;
    }
    ctx->pc = 0x276B6Cu;
    {
        const bool branch_taken_0x276b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B6Cu;
        // 0x276b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b6c) {
            ctx->pc = 0x276B84u;
            goto label_276b84;
        }
    }
    ctx->pc = 0x276B74u;
label_276b74:
    // 0x276b74: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x276b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_276b78:
    // 0x276b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276b7c:
    // 0x276b7c: 0x0  nop
    ctx->pc = 0x276b7cu;
    // NOP
label_276b80:
    // 0x276b80: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x276b80u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_276b84:
    // 0x276b84: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_276b88:
    if (ctx->pc == 0x276B88u) {
        ctx->pc = 0x276B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B84u;
        // 0x276b88: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276B8Cu;
        goto label_276b8c;
    }
    ctx->pc = 0x276B84u;
    {
        const bool branch_taken_0x276b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x276B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276B84u;
        // 0x276b88: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276b84) {
            ctx->pc = 0x276BA4u;
            goto label_276ba4;
        }
    }
    ctx->pc = 0x276B8Cu;
label_276b8c:
    // 0x276b8c: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
label_276b90:
    if (ctx->pc == 0x276B90u) {
        ctx->pc = 0x276B94u;
        goto label_276b94;
    }
    ctx->pc = 0x276B8Cu;
    {
        const bool branch_taken_0x276b8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x276b8c) {
            ctx->pc = 0x276BA4u;
            goto label_276ba4;
        }
    }
    ctx->pc = 0x276B94u;
label_276b94:
    // 0x276b94: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x276b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_276b98:
    // 0x276b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276b9c:
    // 0x276b9c: 0x0  nop
    ctx->pc = 0x276b9cu;
    // NOP
label_276ba0:
    // 0x276ba0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x276ba0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_276ba4:
    // 0x276ba4: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x276ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276ba8:
    // 0x276ba8: 0x0  nop
    ctx->pc = 0x276ba8u;
    // NOP
label_276bac:
    // 0x276bac: 0x4501006b  bc1t        . + 4 + (0x6B << 2)
label_276bb0:
    if (ctx->pc == 0x276BB0u) {
        ctx->pc = 0x276BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BACu;
        // 0x276bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BB4u;
        goto label_276bb4;
    }
    ctx->pc = 0x276BACu;
    {
        const bool branch_taken_0x276bac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x276BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BACu;
        // 0x276bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276bac) {
            ctx->pc = 0x276D5Cu;
            goto label_276d5c;
        }
    }
    ctx->pc = 0x276BB4u;
label_276bb4:
    // 0x276bb4: 0xc08f3dc  jal         func_23CF70
label_276bb8:
    if (ctx->pc == 0x276BB8u) {
        ctx->pc = 0x276BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BB4u;
        // 0x276bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BBCu;
        goto label_276bbc;
    }
    ctx->pc = 0x276BB4u;
    SET_GPR_U32(ctx, 31, 0x276BBCu);
    ctx->pc = 0x276BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276BB4u;
    // 0x276bb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x276BB4u, 0x276BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BBCu;
label_276bbc:
    // 0x276bbc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x276bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_276bc0:
    // 0x276bc0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x276bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_276bc4:
    // 0x276bc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276bc8:
    // 0x276bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_276bcc:
    // 0x276bcc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x276bccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_276bd0:
    // 0x276bd0: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x276bd0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_276bd4:
    // 0x276bd4: 0xc08f3e2  jal         func_23CF88
label_276bd8:
    if (ctx->pc == 0x276BD8u) {
        ctx->pc = 0x276BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BD4u;
        // 0x276bd8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BDCu;
        goto label_276bdc;
    }
    ctx->pc = 0x276BD4u;
    SET_GPR_U32(ctx, 31, 0x276BDCu);
    ctx->pc = 0x276BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276BD4u;
    // 0x276bd8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x276BD4u, 0x276BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BDCu;
label_276bdc:
    // 0x276bdc: 0xc08f3dc  jal         func_23CF70
label_276be0:
    if (ctx->pc == 0x276BE0u) {
        ctx->pc = 0x276BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BDCu;
        // 0x276be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BE4u;
        goto label_276be4;
    }
    ctx->pc = 0x276BDCu;
    SET_GPR_U32(ctx, 31, 0x276BE4u);
    ctx->pc = 0x276BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276BDCu;
    // 0x276be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x276BDCu, 0x276BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BE4u;
label_276be4:
    // 0x276be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x276be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_276be8:
    // 0x276be8: 0x0  nop
    ctx->pc = 0x276be8u;
    // NOP
label_276bec:
    // 0x276bec: 0x4600c832  c.eq.s      $f25, $f0
    ctx->pc = 0x276becu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276bf0:
    // 0x276bf0: 0x0  nop
    ctx->pc = 0x276bf0u;
    // NOP
label_276bf4:
    // 0x276bf4: 0x45010041  bc1t        . + 4 + (0x41 << 2)
label_276bf8:
    if (ctx->pc == 0x276BF8u) {
        ctx->pc = 0x276BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BF4u;
        // 0x276bf8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276BFCu;
        goto label_276bfc;
    }
    ctx->pc = 0x276BF4u;
    {
        const bool branch_taken_0x276bf4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x276BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276BF4u;
        // 0x276bf8: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276bf4) {
            ctx->pc = 0x276CFCu;
            goto label_276cfc;
        }
    }
    ctx->pc = 0x276BFCu;
label_276bfc:
    // 0x276bfc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x276bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_276c00:
    // 0x276c00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x276c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_276c04:
    // 0x276c04: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x276c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_276c08:
    // 0x276c08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x276c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_276c0c:
    // 0x276c0c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x276c0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_276c10:
    // 0x276c10: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x276c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_276c14:
    // 0x276c14: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x276c14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_276c18:
    // 0x276c18: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x276c18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_276c1c:
    // 0x276c1c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x276c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_276c20:
    // 0x276c20: 0xe7b50044  swc1        $f21, 0x44($sp)
    ctx->pc = 0x276c20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_276c24:
    // 0x276c24: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x276c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_276c28:
    // 0x276c28: 0xc12e310  jal         func_4B8C40
label_276c2c:
    if (ctx->pc == 0x276C2Cu) {
        ctx->pc = 0x276C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C28u;
        // 0x276c2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C30u;
        goto label_276c30;
    }
    ctx->pc = 0x276C28u;
    SET_GPR_U32(ctx, 31, 0x276C30u);
    ctx->pc = 0x276C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C28u;
    // 0x276c2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x276C28u, 0x276C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C30u;
label_276c30:
    // 0x276c30: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x276c30u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_276c34:
    // 0x276c34: 0xc12e29c  jal         func_4B8A70
label_276c38:
    if (ctx->pc == 0x276C38u) {
        ctx->pc = 0x276C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276C34u;
        // 0x276c38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276C3Cu;
        goto label_276c3c;
    }
    ctx->pc = 0x276C34u;
    SET_GPR_U32(ctx, 31, 0x276C3Cu);
    ctx->pc = 0x276C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276C34u;
    // 0x276c38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x276C34u, 0x276C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C3Cu;
label_276c3c:
    // 0x276c3c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x276c3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_276c40:
    // 0x276c40: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x276c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_276c44:
    // 0x276c44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276c48:
    // 0x276c48: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x276c48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_276c4c:
    // 0x276c4c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x276c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_276c50:
    // 0x276c50: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x276c50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_276c54:
    // 0x276c54: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x276c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_276c58:
    // 0x276c58: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x276c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_276c5c:
    // 0x276c5c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x276c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_276c60:
    // 0x276c60: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x276c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276c64:
    // 0x276c64: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x276c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276c68:
    // 0x276c68: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x276c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276c6c:
    // 0x276c6c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x276c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_276c70:
    // 0x276c70: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x276c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_276c74:
    // 0x276c74: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x276c74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_276c78:
    // 0x276c78: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x276c78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_276c7c:
    // 0x276c7c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x276c7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_276c80:
    // 0x276c80: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x276c80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276c84:
    // 0x276c84: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x276c84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_276c88:
    // 0x276c88: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x276c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276c8c:
    // 0x276c8c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x276c8cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_276c90:
    // 0x276c90: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x276c90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_276c94:
    // 0x276c94: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x276c94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276c98:
    // 0x276c98: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x276c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_276c9c:
    // 0x276c9c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x276c9cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_276ca0:
    // 0x276ca0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x276ca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276ca4:
    // 0x276ca4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x276ca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_276ca8:
    // 0x276ca8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x276ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276cac:
    // 0x276cac: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x276cacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_276cb0:
    // 0x276cb0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x276cb0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_276cb4:
    // 0x276cb4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x276cb4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_276cb8:
    // 0x276cb8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x276cb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_276cbc:
    // 0x276cbc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x276cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_276cc0:
    // 0x276cc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x276cc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_276cc4:
    // 0x276cc4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x276cc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_276cc8:
    // 0x276cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_276ccc:
    // 0x276ccc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x276cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_276cd0:
    // 0x276cd0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x276cd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_276cd4:
    // 0x276cd4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x276cd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_276cd8:
    // 0x276cd8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x276cd8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_276cdc:
    // 0x276cdc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x276cdcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_276ce0:
    // 0x276ce0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x276ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_276ce4:
    // 0x276ce4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x276ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_276ce8:
    // 0x276ce8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x276ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_276cec:
    // 0x276cec: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x276cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_276cf0:
    // 0x276cf0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x276cf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_276cf4:
    // 0x276cf4: 0xc08f4ae  jal         func_23D2B8
label_276cf8:
    if (ctx->pc == 0x276CF8u) {
        ctx->pc = 0x276CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CF4u;
        // 0x276cf8: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276CFCu;
        goto label_276cfc;
    }
    ctx->pc = 0x276CF4u;
    SET_GPR_U32(ctx, 31, 0x276CFCu);
    ctx->pc = 0x276CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276CF4u;
    // 0x276cf8: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x276CF4u, 0x276CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CFCu;
label_276cfc:
    // 0x276cfc: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
label_276d00:
    if (ctx->pc == 0x276D00u) {
        ctx->pc = 0x276D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CFCu;
        // 0x276d00: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D04u;
        goto label_276d04;
    }
    ctx->pc = 0x276CFCu;
    {
        const bool branch_taken_0x276cfc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x276D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276CFCu;
        // 0x276d00: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276cfc) {
            ctx->pc = 0x276D38u;
            goto label_276d38;
        }
    }
    ctx->pc = 0x276D04u;
label_276d04:
    // 0x276d04: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x276d04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_276d08:
    // 0x276d08: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x276d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_276d0c:
    // 0x276d0c: 0x60f809  jalr        $v1
label_276d10:
    if (ctx->pc == 0x276D10u) {
        ctx->pc = 0x276D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D0Cu;
        // 0x276d10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D14u;
        goto label_276d14;
    }
    ctx->pc = 0x276D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x276D14u);
        ctx->pc = 0x276D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D0Cu;
        // 0x276d10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276D0Cu, 0x276D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276D14u;
label_276d14:
    // 0x276d14: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x276d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_276d18:
    // 0x276d18: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x276d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_276d1c:
    // 0x276d1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x276d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_276d20:
    // 0x276d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_276d24:
    // 0x276d24: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x276d24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_276d28:
    // 0x276d28: 0xc08f3e2  jal         func_23CF88
label_276d2c:
    if (ctx->pc == 0x276D2Cu) {
        ctx->pc = 0x276D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D28u;
        // 0x276d2c: 0x460cb300  add.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D30u;
        goto label_276d30;
    }
    ctx->pc = 0x276D28u;
    SET_GPR_U32(ctx, 31, 0x276D30u);
    ctx->pc = 0x276D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D28u;
    // 0x276d2c: 0x460cb300  add.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x276D28u, 0x276D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D30u;
label_276d30:
    // 0x276d30: 0x1000000a  b           . + 4 + (0xA << 2)
label_276d34:
    if (ctx->pc == 0x276D34u) {
        ctx->pc = 0x276D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D30u;
        // 0x276d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D38u;
        goto label_276d38;
    }
    ctx->pc = 0x276D30u;
    {
        const bool branch_taken_0x276d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D30u;
        // 0x276d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276d30) {
            ctx->pc = 0x276D5Cu;
            goto label_276d5c;
        }
    }
    ctx->pc = 0x276D38u;
label_276d38:
    // 0x276d38: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x276d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_276d3c:
    // 0x276d3c: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x276d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_276d40:
    // 0x276d40: 0x60f809  jalr        $v1
label_276d44:
    if (ctx->pc == 0x276D44u) {
        ctx->pc = 0x276D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D40u;
        // 0x276d44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D48u;
        goto label_276d48;
    }
    ctx->pc = 0x276D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x276D48u);
        ctx->pc = 0x276D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D40u;
        // 0x276d44: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276D40u, 0x276D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276D48u;
label_276d48:
    // 0x276d48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_276d4c:
    // 0x276d4c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x276d4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_276d50:
    // 0x276d50: 0xc08f3e2  jal         func_23CF88
label_276d54:
    if (ctx->pc == 0x276D54u) {
        ctx->pc = 0x276D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D50u;
        // 0x276d54: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D58u;
        goto label_276d58;
    }
    ctx->pc = 0x276D50u;
    SET_GPR_U32(ctx, 31, 0x276D58u);
    ctx->pc = 0x276D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276D50u;
    // 0x276d54: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x276D50u, 0x276D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D58u;
label_276d58:
    // 0x276d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276d5c:
    // 0x276d5c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x276d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_276d60:
    // 0x276d60: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x276d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_276d64:
    // 0x276d64: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x276d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_276d68:
    // 0x276d68: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x276d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_276d6c:
    // 0x276d6c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x276d6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_276d70:
    // 0x276d70: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x276d70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_276d74:
    // 0x276d74: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x276d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_276d78:
    // 0x276d78: 0xc7b90168  lwc1        $f25, 0x168($sp)
    ctx->pc = 0x276d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_276d7c:
    // 0x276d7c: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x276d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_276d80:
    // 0x276d80: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x276d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_276d84:
    // 0x276d84: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x276d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_276d88:
    // 0x276d88: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x276d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_276d8c:
    // 0x276d8c: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x276d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_276d90:
    // 0x276d90: 0x3e00008  jr          $ra
label_276d94:
    if (ctx->pc == 0x276D94u) {
        ctx->pc = 0x276D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D90u;
        // 0x276d94: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276D98u;
        goto label_fallthrough_0x276d90;
    }
    ctx->pc = 0x276D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276D90u;
        // 0x276d94: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x276d90:
    ctx->pc = 0x276D98u;
}
