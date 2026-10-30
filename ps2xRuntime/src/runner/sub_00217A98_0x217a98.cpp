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

// Function: sub_00217A98
// Address: 0x217a98 - 0x217dd8
void sub_00217A98_0x217a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217A98_0x217a98");
#endif

    switch (ctx->pc) {
        case 0x217a98u: goto label_217a98;
        case 0x217a9cu: goto label_217a9c;
        case 0x217aa0u: goto label_217aa0;
        case 0x217aa4u: goto label_217aa4;
        case 0x217aa8u: goto label_217aa8;
        case 0x217aacu: goto label_217aac;
        case 0x217ab0u: goto label_217ab0;
        case 0x217ab4u: goto label_217ab4;
        case 0x217ab8u: goto label_217ab8;
        case 0x217abcu: goto label_217abc;
        case 0x217ac0u: goto label_217ac0;
        case 0x217ac4u: goto label_217ac4;
        case 0x217ac8u: goto label_217ac8;
        case 0x217accu: goto label_217acc;
        case 0x217ad0u: goto label_217ad0;
        case 0x217ad4u: goto label_217ad4;
        case 0x217ad8u: goto label_217ad8;
        case 0x217adcu: goto label_217adc;
        case 0x217ae0u: goto label_217ae0;
        case 0x217ae4u: goto label_217ae4;
        case 0x217ae8u: goto label_217ae8;
        case 0x217aecu: goto label_217aec;
        case 0x217af0u: goto label_217af0;
        case 0x217af4u: goto label_217af4;
        case 0x217af8u: goto label_217af8;
        case 0x217afcu: goto label_217afc;
        case 0x217b00u: goto label_217b00;
        case 0x217b04u: goto label_217b04;
        case 0x217b08u: goto label_217b08;
        case 0x217b0cu: goto label_217b0c;
        case 0x217b10u: goto label_217b10;
        case 0x217b14u: goto label_217b14;
        case 0x217b18u: goto label_217b18;
        case 0x217b1cu: goto label_217b1c;
        case 0x217b20u: goto label_217b20;
        case 0x217b24u: goto label_217b24;
        case 0x217b28u: goto label_217b28;
        case 0x217b2cu: goto label_217b2c;
        case 0x217b30u: goto label_217b30;
        case 0x217b34u: goto label_217b34;
        case 0x217b38u: goto label_217b38;
        case 0x217b3cu: goto label_217b3c;
        case 0x217b40u: goto label_217b40;
        case 0x217b44u: goto label_217b44;
        case 0x217b48u: goto label_217b48;
        case 0x217b4cu: goto label_217b4c;
        case 0x217b50u: goto label_217b50;
        case 0x217b54u: goto label_217b54;
        case 0x217b58u: goto label_217b58;
        case 0x217b5cu: goto label_217b5c;
        case 0x217b60u: goto label_217b60;
        case 0x217b64u: goto label_217b64;
        case 0x217b68u: goto label_217b68;
        case 0x217b6cu: goto label_217b6c;
        case 0x217b70u: goto label_217b70;
        case 0x217b74u: goto label_217b74;
        case 0x217b78u: goto label_217b78;
        case 0x217b7cu: goto label_217b7c;
        case 0x217b80u: goto label_217b80;
        case 0x217b84u: goto label_217b84;
        case 0x217b88u: goto label_217b88;
        case 0x217b8cu: goto label_217b8c;
        case 0x217b90u: goto label_217b90;
        case 0x217b94u: goto label_217b94;
        case 0x217b98u: goto label_217b98;
        case 0x217b9cu: goto label_217b9c;
        case 0x217ba0u: goto label_217ba0;
        case 0x217ba4u: goto label_217ba4;
        case 0x217ba8u: goto label_217ba8;
        case 0x217bacu: goto label_217bac;
        case 0x217bb0u: goto label_217bb0;
        case 0x217bb4u: goto label_217bb4;
        case 0x217bb8u: goto label_217bb8;
        case 0x217bbcu: goto label_217bbc;
        case 0x217bc0u: goto label_217bc0;
        case 0x217bc4u: goto label_217bc4;
        case 0x217bc8u: goto label_217bc8;
        case 0x217bccu: goto label_217bcc;
        case 0x217bd0u: goto label_217bd0;
        case 0x217bd4u: goto label_217bd4;
        case 0x217bd8u: goto label_217bd8;
        case 0x217bdcu: goto label_217bdc;
        case 0x217be0u: goto label_217be0;
        case 0x217be4u: goto label_217be4;
        case 0x217be8u: goto label_217be8;
        case 0x217becu: goto label_217bec;
        case 0x217bf0u: goto label_217bf0;
        case 0x217bf4u: goto label_217bf4;
        case 0x217bf8u: goto label_217bf8;
        case 0x217bfcu: goto label_217bfc;
        case 0x217c00u: goto label_217c00;
        case 0x217c04u: goto label_217c04;
        case 0x217c08u: goto label_217c08;
        case 0x217c0cu: goto label_217c0c;
        case 0x217c10u: goto label_217c10;
        case 0x217c14u: goto label_217c14;
        case 0x217c18u: goto label_217c18;
        case 0x217c1cu: goto label_217c1c;
        case 0x217c20u: goto label_217c20;
        case 0x217c24u: goto label_217c24;
        case 0x217c28u: goto label_217c28;
        case 0x217c2cu: goto label_217c2c;
        case 0x217c30u: goto label_217c30;
        case 0x217c34u: goto label_217c34;
        case 0x217c38u: goto label_217c38;
        case 0x217c3cu: goto label_217c3c;
        case 0x217c40u: goto label_217c40;
        case 0x217c44u: goto label_217c44;
        case 0x217c48u: goto label_217c48;
        case 0x217c4cu: goto label_217c4c;
        case 0x217c50u: goto label_217c50;
        case 0x217c54u: goto label_217c54;
        case 0x217c58u: goto label_217c58;
        case 0x217c5cu: goto label_217c5c;
        case 0x217c60u: goto label_217c60;
        case 0x217c64u: goto label_217c64;
        case 0x217c68u: goto label_217c68;
        case 0x217c6cu: goto label_217c6c;
        case 0x217c70u: goto label_217c70;
        case 0x217c74u: goto label_217c74;
        case 0x217c78u: goto label_217c78;
        case 0x217c7cu: goto label_217c7c;
        case 0x217c80u: goto label_217c80;
        case 0x217c84u: goto label_217c84;
        case 0x217c88u: goto label_217c88;
        case 0x217c8cu: goto label_217c8c;
        case 0x217c90u: goto label_217c90;
        case 0x217c94u: goto label_217c94;
        case 0x217c98u: goto label_217c98;
        case 0x217c9cu: goto label_217c9c;
        case 0x217ca0u: goto label_217ca0;
        case 0x217ca4u: goto label_217ca4;
        case 0x217ca8u: goto label_217ca8;
        case 0x217cacu: goto label_217cac;
        case 0x217cb0u: goto label_217cb0;
        case 0x217cb4u: goto label_217cb4;
        case 0x217cb8u: goto label_217cb8;
        case 0x217cbcu: goto label_217cbc;
        case 0x217cc0u: goto label_217cc0;
        case 0x217cc4u: goto label_217cc4;
        case 0x217cc8u: goto label_217cc8;
        case 0x217cccu: goto label_217ccc;
        case 0x217cd0u: goto label_217cd0;
        case 0x217cd4u: goto label_217cd4;
        case 0x217cd8u: goto label_217cd8;
        case 0x217cdcu: goto label_217cdc;
        case 0x217ce0u: goto label_217ce0;
        case 0x217ce4u: goto label_217ce4;
        case 0x217ce8u: goto label_217ce8;
        case 0x217cecu: goto label_217cec;
        case 0x217cf0u: goto label_217cf0;
        case 0x217cf4u: goto label_217cf4;
        case 0x217cf8u: goto label_217cf8;
        case 0x217cfcu: goto label_217cfc;
        case 0x217d00u: goto label_217d00;
        case 0x217d04u: goto label_217d04;
        case 0x217d08u: goto label_217d08;
        case 0x217d0cu: goto label_217d0c;
        case 0x217d10u: goto label_217d10;
        case 0x217d14u: goto label_217d14;
        case 0x217d18u: goto label_217d18;
        case 0x217d1cu: goto label_217d1c;
        case 0x217d20u: goto label_217d20;
        case 0x217d24u: goto label_217d24;
        case 0x217d28u: goto label_217d28;
        case 0x217d2cu: goto label_217d2c;
        case 0x217d30u: goto label_217d30;
        case 0x217d34u: goto label_217d34;
        case 0x217d38u: goto label_217d38;
        case 0x217d3cu: goto label_217d3c;
        case 0x217d40u: goto label_217d40;
        case 0x217d44u: goto label_217d44;
        case 0x217d48u: goto label_217d48;
        case 0x217d4cu: goto label_217d4c;
        case 0x217d50u: goto label_217d50;
        case 0x217d54u: goto label_217d54;
        case 0x217d58u: goto label_217d58;
        case 0x217d5cu: goto label_217d5c;
        case 0x217d60u: goto label_217d60;
        case 0x217d64u: goto label_217d64;
        case 0x217d68u: goto label_217d68;
        case 0x217d6cu: goto label_217d6c;
        case 0x217d70u: goto label_217d70;
        case 0x217d74u: goto label_217d74;
        case 0x217d78u: goto label_217d78;
        case 0x217d7cu: goto label_217d7c;
        case 0x217d80u: goto label_217d80;
        case 0x217d84u: goto label_217d84;
        case 0x217d88u: goto label_217d88;
        case 0x217d8cu: goto label_217d8c;
        case 0x217d90u: goto label_217d90;
        case 0x217d94u: goto label_217d94;
        case 0x217d98u: goto label_217d98;
        case 0x217d9cu: goto label_217d9c;
        case 0x217da0u: goto label_217da0;
        case 0x217da4u: goto label_217da4;
        case 0x217da8u: goto label_217da8;
        case 0x217dacu: goto label_217dac;
        case 0x217db0u: goto label_217db0;
        case 0x217db4u: goto label_217db4;
        case 0x217db8u: goto label_217db8;
        case 0x217dbcu: goto label_217dbc;
        case 0x217dc0u: goto label_217dc0;
        case 0x217dc4u: goto label_217dc4;
        case 0x217dc8u: goto label_217dc8;
        case 0x217dccu: goto label_217dcc;
        case 0x217dd0u: goto label_217dd0;
        case 0x217dd4u: goto label_217dd4;
        default: break;
    }

    ctx->pc = 0x217a98u;

label_217a98:
    // 0x217a98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x217a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_217a9c:
    // 0x217a9c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x217a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_217aa0:
    // 0x217aa0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x217aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_217aa4:
    // 0x217aa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217aa8:
    // 0x217aa8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x217aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_217aac:
    // 0x217aac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217ab0:
    // 0x217ab0: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x217ab0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_217ab4:
    // 0x217ab4: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x217ab4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_217ab8:
    // 0x217ab8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x217ab8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_217abc:
    // 0x217abc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x217abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_217ac0:
    // 0x217ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_217ac4:
    // 0x217ac4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x217ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_217ac8:
    // 0x217ac8: 0xae2500d8  sw          $a1, 0xD8($s1)
    ctx->pc = 0x217ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 5));
label_217acc:
    // 0x217acc: 0xacb102b8  sw          $s1, 0x2B8($a1)
    ctx->pc = 0x217accu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 696), GPR_U32(ctx, 17));
label_217ad0:
    // 0x217ad0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x217ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_217ad4:
    // 0x217ad4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x217ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_217ad8:
    // 0x217ad8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x217ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_217adc:
    // 0x217adc: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x217adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_217ae0:
    // 0x217ae0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x217ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_217ae4:
    // 0x217ae4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x217ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_217ae8:
    // 0x217ae8: 0xc09515a  jal         func_254568
label_217aec:
    if (ctx->pc == 0x217AECu) {
        ctx->pc = 0x217AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AE8u;
        // 0x217aec: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217AF0u;
        goto label_217af0;
    }
    ctx->pc = 0x217AE8u;
    SET_GPR_U32(ctx, 31, 0x217AF0u);
    ctx->pc = 0x217AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AE8u;
    // 0x217aec: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254568u, 0x217AE8u, 0x217AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AF0u;
label_217af0:
    // 0x217af0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x217af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_217af4:
    // 0x217af4: 0x8e3300cc  lw          $s3, 0xCC($s1)
    ctx->pc = 0x217af4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_217af8:
    // 0x217af8: 0xc08a200  jal         func_228800
label_217afc:
    if (ctx->pc == 0x217AFCu) {
        ctx->pc = 0x217AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AF8u;
        // 0x217afc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B00u;
        goto label_217b00;
    }
    ctx->pc = 0x217AF8u;
    SET_GPR_U32(ctx, 31, 0x217B00u);
    ctx->pc = 0x217AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AF8u;
    // 0x217afc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x217AF8u, 0x217B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B00u;
label_217b00:
    // 0x217b00: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x217b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_217b04:
    // 0x217b04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217b08:
    // 0x217b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x217b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_217b0c:
    // 0x217b0c: 0xc08a200  jal         func_228800
label_217b10:
    if (ctx->pc == 0x217B10u) {
        ctx->pc = 0x217B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B0Cu;
        // 0x217b10: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B14u;
        goto label_217b14;
    }
    ctx->pc = 0x217B0Cu;
    SET_GPR_U32(ctx, 31, 0x217B14u);
    ctx->pc = 0x217B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B0Cu;
    // 0x217b10: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x217B0Cu, 0x217B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B14u;
label_217b14:
    // 0x217b14: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x217b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_217b18:
    // 0x217b18: 0x822301b0  lb          $v1, 0x1B0($s1)
    ctx->pc = 0x217b18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_217b1c:
    // 0x217b1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x217b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_217b20:
    // 0x217b20: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x217b20u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_217b24:
    // 0x217b24: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_217b28:
    if (ctx->pc == 0x217B28u) {
        ctx->pc = 0x217B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B24u;
        // 0x217b28: 0x945000b8  lhu         $s0, 0xB8($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B2Cu;
        goto label_217b2c;
    }
    ctx->pc = 0x217B24u;
    {
        const bool branch_taken_0x217b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B24u;
        // 0x217b28: 0x945000b8  lhu         $s0, 0xB8($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b24) {
            ctx->pc = 0x217B8Cu;
            goto label_217b8c;
        }
    }
    ctx->pc = 0x217B2Cu;
label_217b2c:
    // 0x217b2c: 0xc088ad6  jal         func_222B58
label_217b30:
    if (ctx->pc == 0x217B30u) {
        ctx->pc = 0x217B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B2Cu;
        // 0x217b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B34u;
        goto label_217b34;
    }
    ctx->pc = 0x217B2Cu;
    SET_GPR_U32(ctx, 31, 0x217B34u);
    ctx->pc = 0x217B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B2Cu;
    // 0x217b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x217B2Cu, 0x217B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B34u;
label_217b34:
    // 0x217b34: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x217b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_217b38:
    // 0x217b38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_217b3c:
    if (ctx->pc == 0x217B3Cu) {
        ctx->pc = 0x217B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B38u;
        // 0x217b3c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B40u;
        goto label_217b40;
    }
    ctx->pc = 0x217B38u;
    {
        const bool branch_taken_0x217b38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x217B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B38u;
        // 0x217b3c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b38) {
            ctx->pc = 0x217B54u;
            goto label_217b54;
        }
    }
    ctx->pc = 0x217B40u;
label_217b40:
    // 0x217b40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_217b44:
    // 0x217b44: 0x0  nop
    ctx->pc = 0x217b44u;
    // NOP
label_217b48:
    // 0x217b48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x217b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_217b4c:
    // 0x217b4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_217b50:
    if (ctx->pc == 0x217B50u) {
        ctx->pc = 0x217B54u;
        goto label_217b54;
    }
    ctx->pc = 0x217B4Cu;
    {
        const bool branch_taken_0x217b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b4c) {
            ctx->pc = 0x217B6Cu;
            goto label_217b6c;
        }
    }
    ctx->pc = 0x217B54u;
label_217b54:
    // 0x217b54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x217b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_217b58:
    // 0x217b58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x217b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_217b5c:
    // 0x217b5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_217b60:
    // 0x217b60: 0x0  nop
    ctx->pc = 0x217b60u;
    // NOP
label_217b64:
    // 0x217b64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x217b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_217b68:
    // 0x217b68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x217b68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_217b6c:
    // 0x217b6c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x217b6cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_217b70:
    // 0x217b70: 0x0  nop
    ctx->pc = 0x217b70u;
    // NOP
label_217b74:
    // 0x217b74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x217b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_217b78:
    // 0x217b78: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x217b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_217b7c:
    // 0x217b7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x217b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_217b80:
    // 0x217b80: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x217b80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_217b84:
    // 0x217b84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x217b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_217b88:
    // 0x217b88: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x217b88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_217b8c:
    // 0x217b8c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x217b8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_217b90:
    // 0x217b90: 0x0  nop
    ctx->pc = 0x217b90u;
    // NOP
label_217b94:
    // 0x217b94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_217b98:
    if (ctx->pc == 0x217B98u) {
        ctx->pc = 0x217B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B94u;
        // 0x217b98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x217B9Cu;
        goto label_217b9c;
    }
    ctx->pc = 0x217B94u;
    {
        const bool branch_taken_0x217b94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B94u;
        // 0x217b98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b94) {
            ctx->pc = 0x217BA8u;
            goto label_217ba8;
        }
    }
    ctx->pc = 0x217B9Cu;
label_217b9c:
    // 0x217b9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217ba0:
    // 0x217ba0: 0xc095178  jal         func_2545E0
label_217ba4:
    if (ctx->pc == 0x217BA4u) {
        ctx->pc = 0x217BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BA0u;
        // 0x217ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BA8u;
        goto label_217ba8;
    }
    ctx->pc = 0x217BA0u;
    SET_GPR_U32(ctx, 31, 0x217BA8u);
    ctx->pc = 0x217BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BA0u;
    // 0x217ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545E0u, 0x217BA0u, 0x217BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BA8u;
label_217ba8:
    // 0x217ba8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_217bac:
    if (ctx->pc == 0x217BACu) {
        ctx->pc = 0x217BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BA8u;
        // 0x217bac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BB0u;
        goto label_217bb0;
    }
    ctx->pc = 0x217BA8u;
    {
        const bool branch_taken_0x217ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x217BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BA8u;
        // 0x217bac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ba8) {
            ctx->pc = 0x217BBCu;
            goto label_217bbc;
        }
    }
    ctx->pc = 0x217BB0u;
label_217bb0:
    // 0x217bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217bb4:
    // 0x217bb4: 0xc09523c  jal         func_2548F0
label_217bb8:
    if (ctx->pc == 0x217BB8u) {
        ctx->pc = 0x217BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BB4u;
        // 0x217bb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BBCu;
        goto label_217bbc;
    }
    ctx->pc = 0x217BB4u;
    SET_GPR_U32(ctx, 31, 0x217BBCu);
    ctx->pc = 0x217BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BB4u;
    // 0x217bb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548F0u, 0x217BB4u, 0x217BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BBCu;
label_217bbc:
    // 0x217bbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x217bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_217bc0:
    // 0x217bc0: 0x2e42002d  sltiu       $v0, $s2, 0x2D
    ctx->pc = 0x217bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
label_217bc4:
    // 0x217bc4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_217bc8:
    if (ctx->pc == 0x217BC8u) {
        ctx->pc = 0x217BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BC4u;
        // 0x217bc8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BCCu;
        goto label_217bcc;
    }
    ctx->pc = 0x217BC4u;
    {
        const bool branch_taken_0x217bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BC4u;
        // 0x217bc8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217bc4) {
            ctx->pc = 0x217AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217af8;
        }
    }
    ctx->pc = 0x217BCCu;
label_217bcc:
    // 0x217bcc: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
label_217bd0:
    if (ctx->pc == 0x217BD0u) {
        ctx->pc = 0x217BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BCCu;
        // 0x217bd0: 0x24050285  addiu       $a1, $zero, 0x285 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BD4u;
        goto label_217bd4;
    }
    ctx->pc = 0x217BCCu;
    {
        const bool branch_taken_0x217bcc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x217BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BCCu;
        // 0x217bd0: 0x24050285  addiu       $a1, $zero, 0x285 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217bcc) {
            ctx->pc = 0x217BF0u;
            goto label_217bf0;
        }
    }
    ctx->pc = 0x217BD4u;
label_217bd4:
    // 0x217bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217bd8:
    // 0x217bd8: 0xc095232  jal         func_2548C8
label_217bdc:
    if (ctx->pc == 0x217BDCu) {
        ctx->pc = 0x217BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BD8u;
        // 0x217bdc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BE0u;
        goto label_217be0;
    }
    ctx->pc = 0x217BD8u;
    SET_GPR_U32(ctx, 31, 0x217BE0u);
    ctx->pc = 0x217BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BD8u;
    // 0x217bdc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x217BD8u, 0x217BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BE0u;
label_217be0:
    // 0x217be0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217be4:
    // 0x217be4: 0x24050287  addiu       $a1, $zero, 0x287
    ctx->pc = 0x217be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 647));
label_217be8:
    // 0x217be8: 0xc095232  jal         func_2548C8
label_217bec:
    if (ctx->pc == 0x217BECu) {
        ctx->pc = 0x217BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BE8u;
        // 0x217bec: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BF0u;
        goto label_217bf0;
    }
    ctx->pc = 0x217BE8u;
    SET_GPR_U32(ctx, 31, 0x217BF0u);
    ctx->pc = 0x217BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BE8u;
    // 0x217bec: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548C8u, 0x217BE8u, 0x217BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BF0u;
label_217bf0:
    // 0x217bf0: 0xc087502  jal         func_21D408
label_217bf4:
    if (ctx->pc == 0x217BF4u) {
        ctx->pc = 0x217BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BF0u;
        // 0x217bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217BF8u;
        goto label_217bf8;
    }
    ctx->pc = 0x217BF0u;
    SET_GPR_U32(ctx, 31, 0x217BF8u);
    ctx->pc = 0x217BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BF0u;
    // 0x217bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x217BF0u, 0x217BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BF8u;
label_217bf8:
    // 0x217bf8: 0xc0a30e0  jal         func_28C380
label_217bfc:
    if (ctx->pc == 0x217BFCu) {
        ctx->pc = 0x217BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BF8u;
        // 0x217bfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C00u;
        goto label_217c00;
    }
    ctx->pc = 0x217BF8u;
    SET_GPR_U32(ctx, 31, 0x217C00u);
    ctx->pc = 0x217BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BF8u;
    // 0x217bfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C380u, 0x217BF8u, 0x217C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C00u;
label_217c00:
    // 0x217c00: 0xc09501e  jal         func_254078
label_217c04:
    if (ctx->pc == 0x217C04u) {
        ctx->pc = 0x217C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C00u;
        // 0x217c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C08u;
        goto label_217c08;
    }
    ctx->pc = 0x217C00u;
    SET_GPR_U32(ctx, 31, 0x217C08u);
    ctx->pc = 0x217C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C00u;
    // 0x217c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254078u, 0x217C00u, 0x217C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C08u;
label_217c08:
    // 0x217c08: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x217c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_217c0c:
    // 0x217c0c: 0xc041532  jal         func_1054C8
label_217c10:
    if (ctx->pc == 0x217C10u) {
        ctx->pc = 0x217C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C0Cu;
        // 0x217c10: 0x2484a530  addiu       $a0, $a0, -0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C14u;
        goto label_217c14;
    }
    ctx->pc = 0x217C0Cu;
    SET_GPR_U32(ctx, 31, 0x217C14u);
    ctx->pc = 0x217C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C0Cu;
    // 0x217c10: 0x2484a530  addiu       $a0, $a0, -0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x217C0Cu, 0x217C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C14u;
label_217c14:
    // 0x217c14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217c18:
    // 0x217c18: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_217c1c:
    if (ctx->pc == 0x217C1Cu) {
        ctx->pc = 0x217C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C18u;
        // 0x217c1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C20u;
        goto label_217c20;
    }
    ctx->pc = 0x217C18u;
    {
        const bool branch_taken_0x217c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C18u;
        // 0x217c1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c18) {
            ctx->pc = 0x217C3Cu;
            goto label_217c3c;
        }
    }
    ctx->pc = 0x217C20u;
label_217c20:
    // 0x217c20: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x217c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_217c24:
    // 0x217c24: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x217c24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_217c28:
    // 0x217c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217c2c:
    // 0x217c2c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x217c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_217c30:
    // 0x217c30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x217c30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217c34:
    // 0x217c34: 0xc04159e  jal         func_105678
label_217c38:
    if (ctx->pc == 0x217C38u) {
        ctx->pc = 0x217C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C34u;
        // 0x217c38: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C3Cu;
        goto label_217c3c;
    }
    ctx->pc = 0x217C34u;
    SET_GPR_U32(ctx, 31, 0x217C3Cu);
    ctx->pc = 0x217C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C34u;
    // 0x217c38: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x217C34u, 0x217C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C3Cu;
label_217c3c:
    // 0x217c3c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x217c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_217c40:
    // 0x217c40: 0xc05d4f6  jal         func_1753D8
label_217c44:
    if (ctx->pc == 0x217C44u) {
        ctx->pc = 0x217C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C40u;
        // 0x217c44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C48u;
        goto label_217c48;
    }
    ctx->pc = 0x217C40u;
    SET_GPR_U32(ctx, 31, 0x217C48u);
    ctx->pc = 0x217C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C40u;
    // 0x217c44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x217C40u, 0x217C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C48u;
label_217c48:
    // 0x217c48: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x217c48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_217c4c:
    // 0x217c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x217c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217c50:
    // 0x217c50: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x217c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_217c54:
    // 0x217c54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x217c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_217c58:
    // 0x217c58: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_217c5c:
    if (ctx->pc == 0x217C5Cu) {
        ctx->pc = 0x217C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C58u;
        // 0x217c5c: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C60u;
        goto label_217c60;
    }
    ctx->pc = 0x217C58u;
    {
        const bool branch_taken_0x217c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C58u;
        // 0x217c5c: 0xfe2200e0  sd          $v0, 0xE0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c58) {
            ctx->pc = 0x217D28u;
            goto label_217d28;
        }
    }
    ctx->pc = 0x217C60u;
label_217c60:
    // 0x217c60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x217c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_217c64:
    // 0x217c64: 0xc05d584  jal         func_175610
label_217c68:
    if (ctx->pc == 0x217C68u) {
        ctx->pc = 0x217C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C64u;
        // 0x217c68: 0xc44c02cc  lwc1        $f12, 0x2CC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C6Cu;
        goto label_217c6c;
    }
    ctx->pc = 0x217C64u;
    SET_GPR_U32(ctx, 31, 0x217C6Cu);
    ctx->pc = 0x217C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C64u;
    // 0x217c68: 0xc44c02cc  lwc1        $f12, 0x2CC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175610u, 0x217C64u, 0x217C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C6Cu;
label_217c6c:
    // 0x217c6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x217c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_217c70:
    // 0x217c70: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x217c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_217c74:
    // 0x217c74: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x217c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_217c78:
    // 0x217c78: 0x40f809  jalr        $v0
label_217c7c:
    if (ctx->pc == 0x217C7Cu) {
        ctx->pc = 0x217C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C78u;
        // 0x217c7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C80u;
        goto label_217c80;
    }
    ctx->pc = 0x217C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217C80u);
        ctx->pc = 0x217C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C78u;
        // 0x217c7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217C78u, 0x217C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217C80u;
label_217c80:
    // 0x217c80: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x217c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_217c84:
    // 0x217c84: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x217c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_217c88:
    // 0x217c88: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x217c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_217c8c:
    // 0x217c8c: 0x40f809  jalr        $v0
label_217c90:
    if (ctx->pc == 0x217C90u) {
        ctx->pc = 0x217C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C8Cu;
        // 0x217c90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C94u;
        goto label_217c94;
    }
    ctx->pc = 0x217C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217C94u);
        ctx->pc = 0x217C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C8Cu;
        // 0x217c90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217C8Cu, 0x217C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217C94u;
label_217c94:
    // 0x217c94: 0xc089bfc  jal         func_226FF0
label_217c98:
    if (ctx->pc == 0x217C98u) {
        ctx->pc = 0x217C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C94u;
        // 0x217c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217C9Cu;
        goto label_217c9c;
    }
    ctx->pc = 0x217C94u;
    SET_GPR_U32(ctx, 31, 0x217C9Cu);
    ctx->pc = 0x217C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C94u;
    // 0x217c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x217C94u, 0x217C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C9Cu;
label_217c9c:
    // 0x217c9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_217ca0:
    if (ctx->pc == 0x217CA0u) {
        ctx->pc = 0x217CA4u;
        goto label_217ca4;
    }
    ctx->pc = 0x217C9Cu;
    {
        const bool branch_taken_0x217c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217c9c) {
            ctx->pc = 0x217CD4u;
            goto label_217cd4;
        }
    }
    ctx->pc = 0x217CA4u;
label_217ca4:
    // 0x217ca4: 0xc089c18  jal         func_227060
label_217ca8:
    if (ctx->pc == 0x217CA8u) {
        ctx->pc = 0x217CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CA4u;
        // 0x217ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CACu;
        goto label_217cac;
    }
    ctx->pc = 0x217CA4u;
    SET_GPR_U32(ctx, 31, 0x217CACu);
    ctx->pc = 0x217CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CA4u;
    // 0x217ca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x217CA4u, 0x217CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CACu;
label_217cac:
    // 0x217cac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217cb0:
    // 0x217cb0: 0xc089bfc  jal         func_226FF0
label_217cb4:
    if (ctx->pc == 0x217CB4u) {
        ctx->pc = 0x217CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CB0u;
        // 0x217cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CB8u;
        goto label_217cb8;
    }
    ctx->pc = 0x217CB0u;
    SET_GPR_U32(ctx, 31, 0x217CB8u);
    ctx->pc = 0x217CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CB0u;
    // 0x217cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x217CB0u, 0x217CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CB8u;
label_217cb8:
    // 0x217cb8: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_217cbc:
    if (ctx->pc == 0x217CBCu) {
        ctx->pc = 0x217CC0u;
        goto label_217cc0;
    }
    ctx->pc = 0x217CB8u;
    {
        const bool branch_taken_0x217cb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x217cb8) {
            ctx->pc = 0x217CD4u;
            goto label_217cd4;
        }
    }
    ctx->pc = 0x217CC0u;
label_217cc0:
    // 0x217cc0: 0xc089c18  jal         func_227060
label_217cc4:
    if (ctx->pc == 0x217CC4u) {
        ctx->pc = 0x217CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CC0u;
        // 0x217cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CC8u;
        goto label_217cc8;
    }
    ctx->pc = 0x217CC0u;
    SET_GPR_U32(ctx, 31, 0x217CC8u);
    ctx->pc = 0x217CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CC0u;
    // 0x217cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x217CC0u, 0x217CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CC8u;
label_217cc8:
    // 0x217cc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x217cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217ccc:
    // 0x217ccc: 0xc093158  jal         func_24C560
label_217cd0:
    if (ctx->pc == 0x217CD0u) {
        ctx->pc = 0x217CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CCCu;
        // 0x217cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CD4u;
        goto label_217cd4;
    }
    ctx->pc = 0x217CCCu;
    SET_GPR_U32(ctx, 31, 0x217CD4u);
    ctx->pc = 0x217CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CCCu;
    // 0x217cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C560u, 0x217CCCu, 0x217CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CD4u;
label_217cd4:
    // 0x217cd4: 0xc08a200  jal         func_228800
label_217cd8:
    if (ctx->pc == 0x217CD8u) {
        ctx->pc = 0x217CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CD4u;
        // 0x217cd8: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CDCu;
        goto label_217cdc;
    }
    ctx->pc = 0x217CD4u;
    SET_GPR_U32(ctx, 31, 0x217CDCu);
    ctx->pc = 0x217CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CD4u;
    // 0x217cd8: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x217CD4u, 0x217CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CDCu;
label_217cdc:
    // 0x217cdc: 0x2450014c  addiu       $s0, $v0, 0x14C
    ctx->pc = 0x217cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
label_217ce0:
    // 0x217ce0: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x217ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_217ce4:
    // 0x217ce4: 0x24a5a540  addiu       $a1, $a1, -0x5AC0
    ctx->pc = 0x217ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944064));
label_217ce8:
    // 0x217ce8: 0xc10c313  jal         func_430C4C
label_217cec:
    if (ctx->pc == 0x217CECu) {
        ctx->pc = 0x217CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CE8u;
        // 0x217cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CF0u;
        goto label_217cf0;
    }
    ctx->pc = 0x217CE8u;
    SET_GPR_U32(ctx, 31, 0x217CF0u);
    ctx->pc = 0x217CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CE8u;
    // 0x217cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x217CE8u, 0x217CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CF0u;
label_217cf0:
    // 0x217cf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_217cf4:
    if (ctx->pc == 0x217CF4u) {
        ctx->pc = 0x217CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CF0u;
        // 0x217cf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217CF8u;
        goto label_217cf8;
    }
    ctx->pc = 0x217CF0u;
    {
        const bool branch_taken_0x217cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CF0u;
        // 0x217cf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cf0) {
            ctx->pc = 0x217D00u;
            goto label_217d00;
        }
    }
    ctx->pc = 0x217CF8u;
label_217cf8:
    // 0x217cf8: 0xc092ff0  jal         func_24BFC0
label_217cfc:
    if (ctx->pc == 0x217CFCu) {
        ctx->pc = 0x217CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CF8u;
        // 0x217cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D00u;
        goto label_217d00;
    }
    ctx->pc = 0x217CF8u;
    SET_GPR_U32(ctx, 31, 0x217D00u);
    ctx->pc = 0x217CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217CF8u;
    // 0x217cfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC0u, 0x217CF8u, 0x217D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D00u;
label_217d00:
    // 0x217d00: 0xc0e4060  jal         func_390180
label_217d04:
    if (ctx->pc == 0x217D04u) {
        ctx->pc = 0x217D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D00u;
        // 0x217d04: 0x26240348  addiu       $a0, $s1, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D08u;
        goto label_217d08;
    }
    ctx->pc = 0x217D00u;
    SET_GPR_U32(ctx, 31, 0x217D08u);
    ctx->pc = 0x217D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D00u;
    // 0x217d04: 0x26240348  addiu       $a0, $s1, 0x348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x217D00u, 0x217D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D08u;
label_217d08:
    // 0x217d08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_217d0c:
    if (ctx->pc == 0x217D0Cu) {
        ctx->pc = 0x217D10u;
        goto label_217d10;
    }
    ctx->pc = 0x217D08u;
    {
        const bool branch_taken_0x217d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217d08) {
            ctx->pc = 0x217D28u;
            goto label_217d28;
        }
    }
    ctx->pc = 0x217D10u;
label_217d10:
    // 0x217d10: 0xc0e4060  jal         func_390180
label_217d14:
    if (ctx->pc == 0x217D14u) {
        ctx->pc = 0x217D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D10u;
        // 0x217d14: 0x2624034c  addiu       $a0, $s1, 0x34C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 844));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D18u;
        goto label_217d18;
    }
    ctx->pc = 0x217D10u;
    SET_GPR_U32(ctx, 31, 0x217D18u);
    ctx->pc = 0x217D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D10u;
    // 0x217d14: 0x2624034c  addiu       $a0, $s1, 0x34C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 844));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x217D10u, 0x217D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D18u;
label_217d18:
    // 0x217d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_217d1c:
    if (ctx->pc == 0x217D1Cu) {
        ctx->pc = 0x217D20u;
        goto label_217d20;
    }
    ctx->pc = 0x217D18u;
    {
        const bool branch_taken_0x217d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217d18) {
            ctx->pc = 0x217D28u;
            goto label_217d28;
        }
    }
    ctx->pc = 0x217D20u;
label_217d20:
    // 0x217d20: 0xc09334c  jal         func_24CD30
label_217d24:
    if (ctx->pc == 0x217D24u) {
        ctx->pc = 0x217D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D20u;
        // 0x217d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D28u;
        goto label_217d28;
    }
    ctx->pc = 0x217D20u;
    SET_GPR_U32(ctx, 31, 0x217D28u);
    ctx->pc = 0x217D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D20u;
    // 0x217d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CD30u, 0x217D20u, 0x217D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D28u;
label_217d28:
    // 0x217d28: 0xc087382  jal         func_21CE08
label_217d2c:
    if (ctx->pc == 0x217D2Cu) {
        ctx->pc = 0x217D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D28u;
        // 0x217d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D30u;
        goto label_217d30;
    }
    ctx->pc = 0x217D28u;
    SET_GPR_U32(ctx, 31, 0x217D30u);
    ctx->pc = 0x217D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D28u;
    // 0x217d2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE08u, 0x217D28u, 0x217D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D30u;
label_217d30:
    // 0x217d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217d34:
    // 0x217d34: 0xc08c166  jal         func_230598
label_217d38:
    if (ctx->pc == 0x217D38u) {
        ctx->pc = 0x217D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D34u;
        // 0x217d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D3Cu;
        goto label_217d3c;
    }
    ctx->pc = 0x217D34u;
    SET_GPR_U32(ctx, 31, 0x217D3Cu);
    ctx->pc = 0x217D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D34u;
    // 0x217d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230598u, 0x217D34u, 0x217D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D3Cu;
label_217d3c:
    // 0x217d3c: 0xc088edc  jal         func_223B70
label_217d40:
    if (ctx->pc == 0x217D40u) {
        ctx->pc = 0x217D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D3Cu;
        // 0x217d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D44u;
        goto label_217d44;
    }
    ctx->pc = 0x217D3Cu;
    SET_GPR_U32(ctx, 31, 0x217D44u);
    ctx->pc = 0x217D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D3Cu;
    // 0x217d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x217D3Cu, 0x217D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D44u;
label_217d44:
    // 0x217d44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_217d48:
    if (ctx->pc == 0x217D48u) {
        ctx->pc = 0x217D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D44u;
        // 0x217d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D4Cu;
        goto label_217d4c;
    }
    ctx->pc = 0x217D44u;
    {
        const bool branch_taken_0x217d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D44u;
        // 0x217d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d44) {
            ctx->pc = 0x217D68u;
            goto label_217d68;
        }
    }
    ctx->pc = 0x217D4Cu;
label_217d4c:
    // 0x217d4c: 0xc094fde  jal         func_253F78
label_217d50:
    if (ctx->pc == 0x217D50u) {
        ctx->pc = 0x217D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D4Cu;
        // 0x217d50: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D54u;
        goto label_217d54;
    }
    ctx->pc = 0x217D4Cu;
    SET_GPR_U32(ctx, 31, 0x217D54u);
    ctx->pc = 0x217D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D4Cu;
    // 0x217d50: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x217D4Cu, 0x217D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D54u;
label_217d54:
    // 0x217d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_217d58:
    // 0x217d58: 0xc089988  jal         func_226620
label_217d5c:
    if (ctx->pc == 0x217D5Cu) {
        ctx->pc = 0x217D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D58u;
        // 0x217d5c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D60u;
        goto label_217d60;
    }
    ctx->pc = 0x217D58u;
    SET_GPR_U32(ctx, 31, 0x217D60u);
    ctx->pc = 0x217D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D58u;
    // 0x217d5c: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x217D58u, 0x217D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D60u;
label_217d60:
    // 0x217d60: 0xc08bb06  jal         func_22EC18
label_217d64:
    if (ctx->pc == 0x217D64u) {
        ctx->pc = 0x217D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D60u;
        // 0x217d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D68u;
        goto label_217d68;
    }
    ctx->pc = 0x217D60u;
    SET_GPR_U32(ctx, 31, 0x217D68u);
    ctx->pc = 0x217D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D60u;
    // 0x217d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EC18u, 0x217D60u, 0x217D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D68u;
label_217d68:
    // 0x217d68: 0xc08658e  jal         func_219638
label_217d6c:
    if (ctx->pc == 0x217D6Cu) {
        ctx->pc = 0x217D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D68u;
        // 0x217d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D70u;
        goto label_217d70;
    }
    ctx->pc = 0x217D68u;
    SET_GPR_U32(ctx, 31, 0x217D70u);
    ctx->pc = 0x217D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D68u;
    // 0x217d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219638u, 0x217D68u, 0x217D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D70u;
label_217d70:
    // 0x217d70: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x217d70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_217d74:
    // 0x217d74: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x217d74u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_217d78:
    // 0x217d78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_217d7c:
    if (ctx->pc == 0x217D7Cu) {
        ctx->pc = 0x217D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D78u;
        // 0x217d7c: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D80u;
        goto label_217d80;
    }
    ctx->pc = 0x217D78u;
    {
        const bool branch_taken_0x217d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217d78) {
            ctx->pc = 0x217D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217D78u;
            // 0x217d7c: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217D8Cu;
            goto label_217d8c;
        }
    }
    ctx->pc = 0x217D80u;
label_217d80:
    // 0x217d80: 0xc0933bc  jal         func_24CEF0
label_217d84:
    if (ctx->pc == 0x217D84u) {
        ctx->pc = 0x217D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D80u;
        // 0x217d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217D88u;
        goto label_217d88;
    }
    ctx->pc = 0x217D80u;
    SET_GPR_U32(ctx, 31, 0x217D88u);
    ctx->pc = 0x217D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D80u;
    // 0x217d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CEF0u, 0x217D80u, 0x217D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D88u;
label_217d88:
    // 0x217d88: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x217d88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_217d8c:
    // 0x217d8c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x217d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_217d90:
    // 0x217d90: 0x24845390  addiu       $a0, $a0, 0x5390
    ctx->pc = 0x217d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21392));
label_217d94:
    // 0x217d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x217d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217d98:
    // 0x217d98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x217d98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_217d9c:
    // 0x217d9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x217d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_217da0:
    // 0x217da0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x217da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_217da4:
    // 0x217da4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x217da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_217da8:
    // 0x217da8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x217da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_217dac:
    // 0x217dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217db0:
    // 0x217db0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x217db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_217db4:
    // 0x217db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217db8:
    // 0x217db8: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x217db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_217dbc:
    // 0x217dbc: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x217dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_217dc0:
    // 0x217dc0: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x217dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_217dc4:
    // 0x217dc4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x217dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_217dc8:
    // 0x217dc8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x217dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_217dcc:
    // 0x217dcc: 0x3e00008  jr          $ra
label_217dd0:
    if (ctx->pc == 0x217DD0u) {
        ctx->pc = 0x217DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DCCu;
        // 0x217dd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217DD4u;
        goto label_217dd4;
    }
    ctx->pc = 0x217DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DCCu;
        // 0x217dd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217DD4u;
label_217dd4:
    // 0x217dd4: 0x0  nop
    ctx->pc = 0x217dd4u;
    // NOP
    ctx->pc = 0x217dd8u;
}
