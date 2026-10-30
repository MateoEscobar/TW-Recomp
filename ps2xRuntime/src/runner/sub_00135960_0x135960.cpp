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

// Function: sub_00135960
// Address: 0x135960 - 0x135ca8
void sub_00135960_0x135960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135960_0x135960");
#endif

    switch (ctx->pc) {
        case 0x135960u: goto label_135960;
        case 0x135964u: goto label_135964;
        case 0x135968u: goto label_135968;
        case 0x13596cu: goto label_13596c;
        case 0x135970u: goto label_135970;
        case 0x135974u: goto label_135974;
        case 0x135978u: goto label_135978;
        case 0x13597cu: goto label_13597c;
        case 0x135980u: goto label_135980;
        case 0x135984u: goto label_135984;
        case 0x135988u: goto label_135988;
        case 0x13598cu: goto label_13598c;
        case 0x135990u: goto label_135990;
        case 0x135994u: goto label_135994;
        case 0x135998u: goto label_135998;
        case 0x13599cu: goto label_13599c;
        case 0x1359a0u: goto label_1359a0;
        case 0x1359a4u: goto label_1359a4;
        case 0x1359a8u: goto label_1359a8;
        case 0x1359acu: goto label_1359ac;
        case 0x1359b0u: goto label_1359b0;
        case 0x1359b4u: goto label_1359b4;
        case 0x1359b8u: goto label_1359b8;
        case 0x1359bcu: goto label_1359bc;
        case 0x1359c0u: goto label_1359c0;
        case 0x1359c4u: goto label_1359c4;
        case 0x1359c8u: goto label_1359c8;
        case 0x1359ccu: goto label_1359cc;
        case 0x1359d0u: goto label_1359d0;
        case 0x1359d4u: goto label_1359d4;
        case 0x1359d8u: goto label_1359d8;
        case 0x1359dcu: goto label_1359dc;
        case 0x1359e0u: goto label_1359e0;
        case 0x1359e4u: goto label_1359e4;
        case 0x1359e8u: goto label_1359e8;
        case 0x1359ecu: goto label_1359ec;
        case 0x1359f0u: goto label_1359f0;
        case 0x1359f4u: goto label_1359f4;
        case 0x1359f8u: goto label_1359f8;
        case 0x1359fcu: goto label_1359fc;
        case 0x135a00u: goto label_135a00;
        case 0x135a04u: goto label_135a04;
        case 0x135a08u: goto label_135a08;
        case 0x135a0cu: goto label_135a0c;
        case 0x135a10u: goto label_135a10;
        case 0x135a14u: goto label_135a14;
        case 0x135a18u: goto label_135a18;
        case 0x135a1cu: goto label_135a1c;
        case 0x135a20u: goto label_135a20;
        case 0x135a24u: goto label_135a24;
        case 0x135a28u: goto label_135a28;
        case 0x135a2cu: goto label_135a2c;
        case 0x135a30u: goto label_135a30;
        case 0x135a34u: goto label_135a34;
        case 0x135a38u: goto label_135a38;
        case 0x135a3cu: goto label_135a3c;
        case 0x135a40u: goto label_135a40;
        case 0x135a44u: goto label_135a44;
        case 0x135a48u: goto label_135a48;
        case 0x135a4cu: goto label_135a4c;
        case 0x135a50u: goto label_135a50;
        case 0x135a54u: goto label_135a54;
        case 0x135a58u: goto label_135a58;
        case 0x135a5cu: goto label_135a5c;
        case 0x135a60u: goto label_135a60;
        case 0x135a64u: goto label_135a64;
        case 0x135a68u: goto label_135a68;
        case 0x135a6cu: goto label_135a6c;
        case 0x135a70u: goto label_135a70;
        case 0x135a74u: goto label_135a74;
        case 0x135a78u: goto label_135a78;
        case 0x135a7cu: goto label_135a7c;
        case 0x135a80u: goto label_135a80;
        case 0x135a84u: goto label_135a84;
        case 0x135a88u: goto label_135a88;
        case 0x135a8cu: goto label_135a8c;
        case 0x135a90u: goto label_135a90;
        case 0x135a94u: goto label_135a94;
        case 0x135a98u: goto label_135a98;
        case 0x135a9cu: goto label_135a9c;
        case 0x135aa0u: goto label_135aa0;
        case 0x135aa4u: goto label_135aa4;
        case 0x135aa8u: goto label_135aa8;
        case 0x135aacu: goto label_135aac;
        case 0x135ab0u: goto label_135ab0;
        case 0x135ab4u: goto label_135ab4;
        case 0x135ab8u: goto label_135ab8;
        case 0x135abcu: goto label_135abc;
        case 0x135ac0u: goto label_135ac0;
        case 0x135ac4u: goto label_135ac4;
        case 0x135ac8u: goto label_135ac8;
        case 0x135accu: goto label_135acc;
        case 0x135ad0u: goto label_135ad0;
        case 0x135ad4u: goto label_135ad4;
        case 0x135ad8u: goto label_135ad8;
        case 0x135adcu: goto label_135adc;
        case 0x135ae0u: goto label_135ae0;
        case 0x135ae4u: goto label_135ae4;
        case 0x135ae8u: goto label_135ae8;
        case 0x135aecu: goto label_135aec;
        case 0x135af0u: goto label_135af0;
        case 0x135af4u: goto label_135af4;
        case 0x135af8u: goto label_135af8;
        case 0x135afcu: goto label_135afc;
        case 0x135b00u: goto label_135b00;
        case 0x135b04u: goto label_135b04;
        case 0x135b08u: goto label_135b08;
        case 0x135b0cu: goto label_135b0c;
        case 0x135b10u: goto label_135b10;
        case 0x135b14u: goto label_135b14;
        case 0x135b18u: goto label_135b18;
        case 0x135b1cu: goto label_135b1c;
        case 0x135b20u: goto label_135b20;
        case 0x135b24u: goto label_135b24;
        case 0x135b28u: goto label_135b28;
        case 0x135b2cu: goto label_135b2c;
        case 0x135b30u: goto label_135b30;
        case 0x135b34u: goto label_135b34;
        case 0x135b38u: goto label_135b38;
        case 0x135b3cu: goto label_135b3c;
        case 0x135b40u: goto label_135b40;
        case 0x135b44u: goto label_135b44;
        case 0x135b48u: goto label_135b48;
        case 0x135b4cu: goto label_135b4c;
        case 0x135b50u: goto label_135b50;
        case 0x135b54u: goto label_135b54;
        case 0x135b58u: goto label_135b58;
        case 0x135b5cu: goto label_135b5c;
        case 0x135b60u: goto label_135b60;
        case 0x135b64u: goto label_135b64;
        case 0x135b68u: goto label_135b68;
        case 0x135b6cu: goto label_135b6c;
        case 0x135b70u: goto label_135b70;
        case 0x135b74u: goto label_135b74;
        case 0x135b78u: goto label_135b78;
        case 0x135b7cu: goto label_135b7c;
        case 0x135b80u: goto label_135b80;
        case 0x135b84u: goto label_135b84;
        case 0x135b88u: goto label_135b88;
        case 0x135b8cu: goto label_135b8c;
        case 0x135b90u: goto label_135b90;
        case 0x135b94u: goto label_135b94;
        case 0x135b98u: goto label_135b98;
        case 0x135b9cu: goto label_135b9c;
        case 0x135ba0u: goto label_135ba0;
        case 0x135ba4u: goto label_135ba4;
        case 0x135ba8u: goto label_135ba8;
        case 0x135bacu: goto label_135bac;
        case 0x135bb0u: goto label_135bb0;
        case 0x135bb4u: goto label_135bb4;
        case 0x135bb8u: goto label_135bb8;
        case 0x135bbcu: goto label_135bbc;
        case 0x135bc0u: goto label_135bc0;
        case 0x135bc4u: goto label_135bc4;
        case 0x135bc8u: goto label_135bc8;
        case 0x135bccu: goto label_135bcc;
        case 0x135bd0u: goto label_135bd0;
        case 0x135bd4u: goto label_135bd4;
        case 0x135bd8u: goto label_135bd8;
        case 0x135bdcu: goto label_135bdc;
        case 0x135be0u: goto label_135be0;
        case 0x135be4u: goto label_135be4;
        case 0x135be8u: goto label_135be8;
        case 0x135becu: goto label_135bec;
        case 0x135bf0u: goto label_135bf0;
        case 0x135bf4u: goto label_135bf4;
        case 0x135bf8u: goto label_135bf8;
        case 0x135bfcu: goto label_135bfc;
        case 0x135c00u: goto label_135c00;
        case 0x135c04u: goto label_135c04;
        case 0x135c08u: goto label_135c08;
        case 0x135c0cu: goto label_135c0c;
        case 0x135c10u: goto label_135c10;
        case 0x135c14u: goto label_135c14;
        case 0x135c18u: goto label_135c18;
        case 0x135c1cu: goto label_135c1c;
        case 0x135c20u: goto label_135c20;
        case 0x135c24u: goto label_135c24;
        case 0x135c28u: goto label_135c28;
        case 0x135c2cu: goto label_135c2c;
        case 0x135c30u: goto label_135c30;
        case 0x135c34u: goto label_135c34;
        case 0x135c38u: goto label_135c38;
        case 0x135c3cu: goto label_135c3c;
        case 0x135c40u: goto label_135c40;
        case 0x135c44u: goto label_135c44;
        case 0x135c48u: goto label_135c48;
        case 0x135c4cu: goto label_135c4c;
        case 0x135c50u: goto label_135c50;
        case 0x135c54u: goto label_135c54;
        case 0x135c58u: goto label_135c58;
        case 0x135c5cu: goto label_135c5c;
        case 0x135c60u: goto label_135c60;
        case 0x135c64u: goto label_135c64;
        case 0x135c68u: goto label_135c68;
        case 0x135c6cu: goto label_135c6c;
        case 0x135c70u: goto label_135c70;
        case 0x135c74u: goto label_135c74;
        case 0x135c78u: goto label_135c78;
        case 0x135c7cu: goto label_135c7c;
        case 0x135c80u: goto label_135c80;
        case 0x135c84u: goto label_135c84;
        case 0x135c88u: goto label_135c88;
        case 0x135c8cu: goto label_135c8c;
        case 0x135c90u: goto label_135c90;
        case 0x135c94u: goto label_135c94;
        case 0x135c98u: goto label_135c98;
        case 0x135c9cu: goto label_135c9c;
        case 0x135ca0u: goto label_135ca0;
        case 0x135ca4u: goto label_135ca4;
        default: break;
    }

    ctx->pc = 0x135960u;

label_135960:
    // 0x135960: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x135960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_135964:
    // 0x135964: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x135964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_135968:
    // 0x135968: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x135968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_13596c:
    // 0x13596c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13596cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135970:
    // 0x135970: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x135970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_135974:
    // 0x135974: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x135974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_135978:
    // 0x135978: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x135978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13597c:
    // 0x13597c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x13597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_135980:
    // 0x135980: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x135980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_135984:
    // 0x135984: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x135984u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_135988:
    // 0x135988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13598c:
    // 0x13598c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x13598cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_135990:
    // 0x135990: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x135990u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_135994:
    // 0x135994: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x135994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_135998:
    // 0x135998: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x135998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13599c:
    // 0x13599c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1359a0:
    // 0x1359a0: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x1359a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_1359a4:
    // 0x1359a4: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x1359a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_1359a8:
    // 0x1359a8: 0x40f809  jalr        $v0
label_1359ac:
    if (ctx->pc == 0x1359ACu) {
        ctx->pc = 0x1359ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359A8u;
        // 0x1359ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1359B0u;
        goto label_1359b0;
    }
    ctx->pc = 0x1359A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1359B0u);
        ctx->pc = 0x1359ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359A8u;
        // 0x1359ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1359A8u, 0x1359B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1359B0u;
label_1359b0:
    // 0x1359b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1359b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1359b4:
    // 0x1359b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1359b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1359b8:
    // 0x1359b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1359b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1359bc:
    // 0x1359bc: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_1359c0:
    // 0x1359c0: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x1359c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_1359c4:
    // 0x1359c4: 0x40f809  jalr        $v0
label_1359c8:
    if (ctx->pc == 0x1359C8u) {
        ctx->pc = 0x1359C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359C4u;
        // 0x1359c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1359CCu;
        goto label_1359cc;
    }
    ctx->pc = 0x1359C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1359CCu);
        ctx->pc = 0x1359C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359C4u;
        // 0x1359c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1359C4u, 0x1359CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1359CCu;
label_1359cc:
    // 0x1359cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1359ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1359d0:
    // 0x1359d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1359d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1359d4:
    // 0x1359d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1359d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1359d8:
    // 0x1359d8: 0xc136afa  jal         func_4DABE8
label_1359dc:
    if (ctx->pc == 0x1359DCu) {
        ctx->pc = 0x1359DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1359D8u;
        // 0x1359dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1359E0u;
        goto label_1359e0;
    }
    ctx->pc = 0x1359D8u;
    SET_GPR_U32(ctx, 31, 0x1359E0u);
    ctx->pc = 0x1359DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359D8u;
    // 0x1359dc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x1359D8u, 0x1359E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359E0u;
label_1359e0:
    // 0x1359e0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1359e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1359e4:
    // 0x1359e4: 0x7a640000  lq          $a0, 0x0($s3)
    ctx->pc = 0x1359e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1359e8:
    // 0x1359e8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1359e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1359ec:
    // 0x1359ec: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x1359ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1359f0:
    // 0x1359f0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1359f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_1359f4:
    // 0x1359f4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1359f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1359f8:
    // 0x1359f8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x1359f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1359fc:
    // 0x1359fc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1359fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135a00:
    // 0x135a00: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x135a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135a04:
    // 0x135a04: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x135a04u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_135a08:
    // 0x135a08: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x135a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135a0c:
    // 0x135a0c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x135a0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_135a10:
    // 0x135a10: 0x0  nop
    ctx->pc = 0x135a10u;
    // NOP
label_135a14:
    // 0x135a14: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x135a14u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_135a18:
    // 0x135a18: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x135a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135a1c:
    // 0x135a1c: 0x0  nop
    ctx->pc = 0x135a1cu;
    // NOP
label_135a20:
    // 0x135a20: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_135a24:
    if (ctx->pc == 0x135A24u) {
        ctx->pc = 0x135A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A20u;
        // 0x135a24: 0x7a030000  lq          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135A28u;
        goto label_135a28;
    }
    ctx->pc = 0x135A20u;
    {
        const bool branch_taken_0x135a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135a20) {
            ctx->pc = 0x135A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135A20u;
            // 0x135a24: 0x7a030000  lq          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135A90u;
            goto label_135a90;
        }
    }
    ctx->pc = 0x135A28u;
label_135a28:
    // 0x135a28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x135a28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_135a2c:
    // 0x135a2c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x135a2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_135a30:
    // 0x135a30: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x135a30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135a34:
    // 0x135a34: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x135a34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135a38:
    // 0x135a38: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x135a38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135a3c:
    // 0x135a3c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x135a3cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_135a40:
    // 0x135a40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x135a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135a44:
    // 0x135a44: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x135a44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_135a48:
    // 0x135a48: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x135a48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135a4c:
    // 0x135a4c: 0xc136b24  jal         func_4DAC90
label_135a50:
    if (ctx->pc == 0x135A50u) {
        ctx->pc = 0x135A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A4Cu;
        // 0x135a50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135A54u;
        goto label_135a54;
    }
    ctx->pc = 0x135A4Cu;
    SET_GPR_U32(ctx, 31, 0x135A54u);
    ctx->pc = 0x135A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A4Cu;
    // 0x135a50: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135A4Cu, 0x135A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A54u;
label_135a54:
    // 0x135a54: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x135a54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_135a58:
    // 0x135a58: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_135a5c:
    // 0x135a5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x135a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_135a60:
    // 0x135a60: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x135a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_135a64:
    // 0x135a64: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x135a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_135a68:
    // 0x135a68: 0xc136afa  jal         func_4DABE8
label_135a6c:
    if (ctx->pc == 0x135A6Cu) {
        ctx->pc = 0x135A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A68u;
        // 0x135a6c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135A70u;
        goto label_135a70;
    }
    ctx->pc = 0x135A68u;
    SET_GPR_U32(ctx, 31, 0x135A70u);
    ctx->pc = 0x135A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135A68u;
    // 0x135a6c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x135A68u, 0x135A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135A70u;
label_135a70:
    // 0x135a70: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x135a70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_135a74:
    // 0x135a74: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x135a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_135a78:
    // 0x135a78: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x135a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_135a7c:
    // 0x135a7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x135a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_135a80:
    // 0x135a80: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x135a80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_135a84:
    // 0x135a84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_135a88:
    // 0x135a88: 0x10000028  b           . + 4 + (0x28 << 2)
label_135a8c:
    if (ctx->pc == 0x135A8Cu) {
        ctx->pc = 0x135A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A88u;
        // 0x135a8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135A90u;
        goto label_135a90;
    }
    ctx->pc = 0x135A88u;
    {
        const bool branch_taken_0x135a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A88u;
        // 0x135a8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a88) {
            ctx->pc = 0x135B2Cu;
            goto label_135b2c;
        }
    }
    ctx->pc = 0x135A90u;
label_135a90:
    // 0x135a90: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x135a90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_135a94:
    // 0x135a94: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x135a94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_135a98:
    // 0x135a98: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x135a98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135a9c:
    // 0x135a9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x135a9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135aa0:
    // 0x135aa0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x135aa0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135aa4:
    // 0x135aa4: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x135aa4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_135aa8:
    // 0x135aa8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x135aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135aac:
    // 0x135aac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x135aacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_135ab0:
    // 0x135ab0: 0x0  nop
    ctx->pc = 0x135ab0u;
    // NOP
label_135ab4:
    // 0x135ab4: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x135ab4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_135ab8:
    // 0x135ab8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x135ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135abc:
    // 0x135abc: 0x0  nop
    ctx->pc = 0x135abcu;
    // NOP
label_135ac0:
    // 0x135ac0: 0x45000031  bc1f        . + 4 + (0x31 << 2)
label_135ac4:
    if (ctx->pc == 0x135AC4u) {
        ctx->pc = 0x135AC8u;
        goto label_135ac8;
    }
    ctx->pc = 0x135AC0u;
    {
        const bool branch_taken_0x135ac0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135ac0) {
            ctx->pc = 0x135B88u;
            goto label_135b88;
        }
    }
    ctx->pc = 0x135AC8u;
label_135ac8:
    // 0x135ac8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x135ac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_135acc:
    // 0x135acc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x135accu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_135ad0:
    // 0x135ad0: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x135ad0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135ad4:
    // 0x135ad4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x135ad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135ad8:
    // 0x135ad8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x135ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135adc:
    // 0x135adc: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x135adcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_135ae0:
    // 0x135ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135ae4:
    // 0x135ae4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x135ae4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_135ae8:
    // 0x135ae8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x135ae8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135aec:
    // 0x135aec: 0xc136b24  jal         func_4DAC90
label_135af0:
    if (ctx->pc == 0x135AF0u) {
        ctx->pc = 0x135AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AECu;
        // 0x135af0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135AF4u;
        goto label_135af4;
    }
    ctx->pc = 0x135AECu;
    SET_GPR_U32(ctx, 31, 0x135AF4u);
    ctx->pc = 0x135AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135AECu;
    // 0x135af0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135AECu, 0x135AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AF4u;
label_135af4:
    // 0x135af4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x135af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_135af8:
    // 0x135af8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_135afc:
    // 0x135afc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x135afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_135b00:
    // 0x135b00: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x135b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_135b04:
    // 0x135b04: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x135b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_135b08:
    // 0x135b08: 0xc136afa  jal         func_4DABE8
label_135b0c:
    if (ctx->pc == 0x135B0Cu) {
        ctx->pc = 0x135B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B08u;
        // 0x135b0c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B10u;
        goto label_135b10;
    }
    ctx->pc = 0x135B08u;
    SET_GPR_U32(ctx, 31, 0x135B10u);
    ctx->pc = 0x135B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B08u;
    // 0x135b0c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x135B08u, 0x135B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B10u;
label_135b10:
    // 0x135b10: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x135b10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_135b14:
    // 0x135b14: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x135b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_135b18:
    // 0x135b18: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x135b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_135b1c:
    // 0x135b1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x135b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_135b20:
    // 0x135b20: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x135b20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_135b24:
    // 0x135b24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_135b28:
    // 0x135b28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135b2c:
    // 0x135b2c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x135b2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_135b30:
    // 0x135b30: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x135b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_135b34:
    // 0x135b34: 0xc136b24  jal         func_4DAC90
label_135b38:
    if (ctx->pc == 0x135B38u) {
        ctx->pc = 0x135B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B34u;
        // 0x135b38: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B3Cu;
        goto label_135b3c;
    }
    ctx->pc = 0x135B34u;
    SET_GPR_U32(ctx, 31, 0x135B3Cu);
    ctx->pc = 0x135B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B34u;
    // 0x135b38: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135B34u, 0x135B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B3Cu;
label_135b3c:
    // 0x135b3c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x135b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_135b40:
    // 0x135b40: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x135b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_135b44:
    // 0x135b44: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x135b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_135b48:
    // 0x135b48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x135b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135b4c:
    // 0x135b4c: 0xc136b18  jal         func_4DAC60
label_135b50:
    if (ctx->pc == 0x135B50u) {
        ctx->pc = 0x135B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B4Cu;
        // 0x135b50: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B54u;
        goto label_135b54;
    }
    ctx->pc = 0x135B4Cu;
    SET_GPR_U32(ctx, 31, 0x135B54u);
    ctx->pc = 0x135B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B4Cu;
    // 0x135b50: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x135B4Cu, 0x135B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B54u;
label_135b54:
    // 0x135b54: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x135b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_135b58:
    // 0x135b58: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x135b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_135b5c:
    // 0x135b5c: 0xc136b18  jal         func_4DAC60
label_135b60:
    if (ctx->pc == 0x135B60u) {
        ctx->pc = 0x135B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B5Cu;
        // 0x135b60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B64u;
        goto label_135b64;
    }
    ctx->pc = 0x135B5Cu;
    SET_GPR_U32(ctx, 31, 0x135B64u);
    ctx->pc = 0x135B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B5Cu;
    // 0x135b60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x135B5Cu, 0x135B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B64u;
label_135b64:
    // 0x135b64: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x135b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_135b68:
    // 0x135b68: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x135b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_135b6c:
    // 0x135b6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x135b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_135b70:
    // 0x135b70: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x135b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_135b74:
    // 0x135b74: 0xc136b18  jal         func_4DAC60
label_135b78:
    if (ctx->pc == 0x135B78u) {
        ctx->pc = 0x135B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B74u;
        // 0x135b78: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B7Cu;
        goto label_135b7c;
    }
    ctx->pc = 0x135B74u;
    SET_GPR_U32(ctx, 31, 0x135B7Cu);
    ctx->pc = 0x135B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135B74u;
    // 0x135b78: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x135B74u, 0x135B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B7Cu;
label_135b7c:
    // 0x135b7c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x135b7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_135b80:
    // 0x135b80: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x135b80u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_135b84:
    // 0x135b84: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x135b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_135b88:
    // 0x135b88: 0x1280003c  beqz        $s4, . + 4 + (0x3C << 2)
label_135b8c:
    if (ctx->pc == 0x135B8Cu) {
        ctx->pc = 0x135B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B88u;
        // 0x135b8c: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135B90u;
        goto label_135b90;
    }
    ctx->pc = 0x135B88u;
    {
        const bool branch_taken_0x135b88 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x135B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B88u;
        // 0x135b8c: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b88) {
            ctx->pc = 0x135C7Cu;
            goto label_135c7c;
        }
    }
    ctx->pc = 0x135B90u;
label_135b90:
    // 0x135b90: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x135b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_135b94:
    // 0x135b94: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x135b94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_135b98:
    // 0x135b98: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x135b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135b9c:
    // 0x135b9c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x135b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135ba0:
    // 0x135ba0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x135ba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135ba4:
    // 0x135ba4: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x135ba4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_135ba8:
    // 0x135ba8: 0x4a0003bf  vwaitq
    ctx->pc = 0x135ba8u;
    // VWAITQ (Q already resolved in this runtime)
label_135bac:
    // 0x135bac: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x135bacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135bb0:
    // 0x135bb0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x135bb0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_135bb4:
    // 0x135bb4: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x135bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
label_135bb8:
    // 0x135bb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x135bb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_135bbc:
    // 0x135bbc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x135bbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_135bc0:
    // 0x135bc0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x135bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_135bc4:
    // 0x135bc4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x135bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_135bc8:
    // 0x135bc8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x135bc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_135bcc:
    // 0x135bcc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x135bccu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_135bd0:
    // 0x135bd0: 0x4a0003bf  vwaitq
    ctx->pc = 0x135bd0u;
    // VWAITQ (Q already resolved in this runtime)
label_135bd4:
    // 0x135bd4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x135bd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_135bd8:
    // 0x135bd8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x135bd8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_135bdc:
    // 0x135bdc: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x135bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_135be0:
    // 0x135be0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x135be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_135be4:
    // 0x135be4: 0x46150040  add.s       $f1, $f0, $f21
    ctx->pc = 0x135be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_135be8:
    // 0x135be8: 0x7a490000  lq          $t1, 0x0($s2)
    ctx->pc = 0x135be8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_135bec:
    // 0x135bec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x135becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_135bf0:
    // 0x135bf0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x135bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_135bf4:
    // 0x135bf4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x135bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_135bf8:
    // 0x135bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x135bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135bfc:
    // 0x135bfc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x135bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_135c00:
    // 0x135c00: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x135c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_135c04:
    // 0x135c04: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x135c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_135c08:
    // 0x135c08: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x135c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
label_135c0c:
    // 0x135c0c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x135c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_135c10:
    // 0x135c10: 0xc0d4336  jal         func_350CD8
label_135c14:
    if (ctx->pc == 0x135C14u) {
        ctx->pc = 0x135C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C10u;
        // 0x135c14: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C18u;
        goto label_135c18;
    }
    ctx->pc = 0x135C10u;
    SET_GPR_U32(ctx, 31, 0x135C18u);
    ctx->pc = 0x135C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C10u;
    // 0x135c14: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x135C10u, 0x135C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C18u;
label_135c18:
    // 0x135c18: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x135c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_135c1c:
    // 0x135c1c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x135c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_135c20:
    // 0x135c20: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x135c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_135c24:
    // 0x135c24: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x135c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_135c28:
    // 0x135c28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_135c2c:
    // 0x135c2c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x135c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_135c30:
    // 0x135c30: 0x46156301  sub.s       $f12, $f12, $f21
    ctx->pc = 0x135c30u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
label_135c34:
    // 0x135c34: 0xc136b24  jal         func_4DAC90
label_135c38:
    if (ctx->pc == 0x135C38u) {
        ctx->pc = 0x135C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C34u;
        // 0x135c38: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C3Cu;
        goto label_135c3c;
    }
    ctx->pc = 0x135C34u;
    SET_GPR_U32(ctx, 31, 0x135C3Cu);
    ctx->pc = 0x135C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C34u;
    // 0x135c38: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135C34u, 0x135C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C3Cu;
label_135c3c:
    // 0x135c3c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x135c3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_135c40:
    // 0x135c40: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x135c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_135c44:
    // 0x135c44: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x135c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_135c48:
    // 0x135c48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x135c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135c4c:
    // 0x135c4c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x135c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_135c50:
    // 0x135c50: 0xc136b18  jal         func_4DAC60
label_135c54:
    if (ctx->pc == 0x135C54u) {
        ctx->pc = 0x135C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C50u;
        // 0x135c54: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C58u;
        goto label_135c58;
    }
    ctx->pc = 0x135C50u;
    SET_GPR_U32(ctx, 31, 0x135C58u);
    ctx->pc = 0x135C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C50u;
    // 0x135c54: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x135C50u, 0x135C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C58u;
label_135c58:
    // 0x135c58: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x135c58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_135c5c:
    // 0x135c5c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x135c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_135c60:
    // 0x135c60: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x135c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_135c64:
    // 0x135c64: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x135c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_135c68:
    // 0x135c68: 0xc136b18  jal         func_4DAC60
label_135c6c:
    if (ctx->pc == 0x135C6Cu) {
        ctx->pc = 0x135C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C68u;
        // 0x135c6c: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C70u;
        goto label_135c70;
    }
    ctx->pc = 0x135C68u;
    SET_GPR_U32(ctx, 31, 0x135C70u);
    ctx->pc = 0x135C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C68u;
    // 0x135c6c: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x135C68u, 0x135C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C70u;
label_135c70:
    // 0x135c70: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x135c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_135c74:
    // 0x135c74: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x135c74u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_135c78:
    // 0x135c78: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x135c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_135c7c:
    // 0x135c7c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x135c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_135c80:
    // 0x135c80: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x135c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_135c84:
    // 0x135c84: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x135c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_135c88:
    // 0x135c88: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x135c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_135c8c:
    // 0x135c8c: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x135c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_135c90:
    // 0x135c90: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x135c90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_135c94:
    // 0x135c94: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x135c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_135c98:
    // 0x135c98: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x135c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_135c9c:
    // 0x135c9c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x135c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_135ca0:
    // 0x135ca0: 0x3e00008  jr          $ra
label_135ca4:
    if (ctx->pc == 0x135CA4u) {
        ctx->pc = 0x135CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CA0u;
        // 0x135ca4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135CA8u;
        goto label_fallthrough_0x135ca0;
    }
    ctx->pc = 0x135CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CA0u;
        // 0x135ca4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135ca0:
    ctx->pc = 0x135CA8u;
}
