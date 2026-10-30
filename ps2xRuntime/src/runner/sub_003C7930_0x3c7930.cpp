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

// Function: sub_003C7930
// Address: 0x3c7930 - 0x3c7cf8
void sub_003C7930_0x3c7930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7930_0x3c7930");
#endif

    switch (ctx->pc) {
        case 0x3c7930u: goto label_3c7930;
        case 0x3c7934u: goto label_3c7934;
        case 0x3c7938u: goto label_3c7938;
        case 0x3c793cu: goto label_3c793c;
        case 0x3c7940u: goto label_3c7940;
        case 0x3c7944u: goto label_3c7944;
        case 0x3c7948u: goto label_3c7948;
        case 0x3c794cu: goto label_3c794c;
        case 0x3c7950u: goto label_3c7950;
        case 0x3c7954u: goto label_3c7954;
        case 0x3c7958u: goto label_3c7958;
        case 0x3c795cu: goto label_3c795c;
        case 0x3c7960u: goto label_3c7960;
        case 0x3c7964u: goto label_3c7964;
        case 0x3c7968u: goto label_3c7968;
        case 0x3c796cu: goto label_3c796c;
        case 0x3c7970u: goto label_3c7970;
        case 0x3c7974u: goto label_3c7974;
        case 0x3c7978u: goto label_3c7978;
        case 0x3c797cu: goto label_3c797c;
        case 0x3c7980u: goto label_3c7980;
        case 0x3c7984u: goto label_3c7984;
        case 0x3c7988u: goto label_3c7988;
        case 0x3c798cu: goto label_3c798c;
        case 0x3c7990u: goto label_3c7990;
        case 0x3c7994u: goto label_3c7994;
        case 0x3c7998u: goto label_3c7998;
        case 0x3c799cu: goto label_3c799c;
        case 0x3c79a0u: goto label_3c79a0;
        case 0x3c79a4u: goto label_3c79a4;
        case 0x3c79a8u: goto label_3c79a8;
        case 0x3c79acu: goto label_3c79ac;
        case 0x3c79b0u: goto label_3c79b0;
        case 0x3c79b4u: goto label_3c79b4;
        case 0x3c79b8u: goto label_3c79b8;
        case 0x3c79bcu: goto label_3c79bc;
        case 0x3c79c0u: goto label_3c79c0;
        case 0x3c79c4u: goto label_3c79c4;
        case 0x3c79c8u: goto label_3c79c8;
        case 0x3c79ccu: goto label_3c79cc;
        case 0x3c79d0u: goto label_3c79d0;
        case 0x3c79d4u: goto label_3c79d4;
        case 0x3c79d8u: goto label_3c79d8;
        case 0x3c79dcu: goto label_3c79dc;
        case 0x3c79e0u: goto label_3c79e0;
        case 0x3c79e4u: goto label_3c79e4;
        case 0x3c79e8u: goto label_3c79e8;
        case 0x3c79ecu: goto label_3c79ec;
        case 0x3c79f0u: goto label_3c79f0;
        case 0x3c79f4u: goto label_3c79f4;
        case 0x3c79f8u: goto label_3c79f8;
        case 0x3c79fcu: goto label_3c79fc;
        case 0x3c7a00u: goto label_3c7a00;
        case 0x3c7a04u: goto label_3c7a04;
        case 0x3c7a08u: goto label_3c7a08;
        case 0x3c7a0cu: goto label_3c7a0c;
        case 0x3c7a10u: goto label_3c7a10;
        case 0x3c7a14u: goto label_3c7a14;
        case 0x3c7a18u: goto label_3c7a18;
        case 0x3c7a1cu: goto label_3c7a1c;
        case 0x3c7a20u: goto label_3c7a20;
        case 0x3c7a24u: goto label_3c7a24;
        case 0x3c7a28u: goto label_3c7a28;
        case 0x3c7a2cu: goto label_3c7a2c;
        case 0x3c7a30u: goto label_3c7a30;
        case 0x3c7a34u: goto label_3c7a34;
        case 0x3c7a38u: goto label_3c7a38;
        case 0x3c7a3cu: goto label_3c7a3c;
        case 0x3c7a40u: goto label_3c7a40;
        case 0x3c7a44u: goto label_3c7a44;
        case 0x3c7a48u: goto label_3c7a48;
        case 0x3c7a4cu: goto label_3c7a4c;
        case 0x3c7a50u: goto label_3c7a50;
        case 0x3c7a54u: goto label_3c7a54;
        case 0x3c7a58u: goto label_3c7a58;
        case 0x3c7a5cu: goto label_3c7a5c;
        case 0x3c7a60u: goto label_3c7a60;
        case 0x3c7a64u: goto label_3c7a64;
        case 0x3c7a68u: goto label_3c7a68;
        case 0x3c7a6cu: goto label_3c7a6c;
        case 0x3c7a70u: goto label_3c7a70;
        case 0x3c7a74u: goto label_3c7a74;
        case 0x3c7a78u: goto label_3c7a78;
        case 0x3c7a7cu: goto label_3c7a7c;
        case 0x3c7a80u: goto label_3c7a80;
        case 0x3c7a84u: goto label_3c7a84;
        case 0x3c7a88u: goto label_3c7a88;
        case 0x3c7a8cu: goto label_3c7a8c;
        case 0x3c7a90u: goto label_3c7a90;
        case 0x3c7a94u: goto label_3c7a94;
        case 0x3c7a98u: goto label_3c7a98;
        case 0x3c7a9cu: goto label_3c7a9c;
        case 0x3c7aa0u: goto label_3c7aa0;
        case 0x3c7aa4u: goto label_3c7aa4;
        case 0x3c7aa8u: goto label_3c7aa8;
        case 0x3c7aacu: goto label_3c7aac;
        case 0x3c7ab0u: goto label_3c7ab0;
        case 0x3c7ab4u: goto label_3c7ab4;
        case 0x3c7ab8u: goto label_3c7ab8;
        case 0x3c7abcu: goto label_3c7abc;
        case 0x3c7ac0u: goto label_3c7ac0;
        case 0x3c7ac4u: goto label_3c7ac4;
        case 0x3c7ac8u: goto label_3c7ac8;
        case 0x3c7accu: goto label_3c7acc;
        case 0x3c7ad0u: goto label_3c7ad0;
        case 0x3c7ad4u: goto label_3c7ad4;
        case 0x3c7ad8u: goto label_3c7ad8;
        case 0x3c7adcu: goto label_3c7adc;
        case 0x3c7ae0u: goto label_3c7ae0;
        case 0x3c7ae4u: goto label_3c7ae4;
        case 0x3c7ae8u: goto label_3c7ae8;
        case 0x3c7aecu: goto label_3c7aec;
        case 0x3c7af0u: goto label_3c7af0;
        case 0x3c7af4u: goto label_3c7af4;
        case 0x3c7af8u: goto label_3c7af8;
        case 0x3c7afcu: goto label_3c7afc;
        case 0x3c7b00u: goto label_3c7b00;
        case 0x3c7b04u: goto label_3c7b04;
        case 0x3c7b08u: goto label_3c7b08;
        case 0x3c7b0cu: goto label_3c7b0c;
        case 0x3c7b10u: goto label_3c7b10;
        case 0x3c7b14u: goto label_3c7b14;
        case 0x3c7b18u: goto label_3c7b18;
        case 0x3c7b1cu: goto label_3c7b1c;
        case 0x3c7b20u: goto label_3c7b20;
        case 0x3c7b24u: goto label_3c7b24;
        case 0x3c7b28u: goto label_3c7b28;
        case 0x3c7b2cu: goto label_3c7b2c;
        case 0x3c7b30u: goto label_3c7b30;
        case 0x3c7b34u: goto label_3c7b34;
        case 0x3c7b38u: goto label_3c7b38;
        case 0x3c7b3cu: goto label_3c7b3c;
        case 0x3c7b40u: goto label_3c7b40;
        case 0x3c7b44u: goto label_3c7b44;
        case 0x3c7b48u: goto label_3c7b48;
        case 0x3c7b4cu: goto label_3c7b4c;
        case 0x3c7b50u: goto label_3c7b50;
        case 0x3c7b54u: goto label_3c7b54;
        case 0x3c7b58u: goto label_3c7b58;
        case 0x3c7b5cu: goto label_3c7b5c;
        case 0x3c7b60u: goto label_3c7b60;
        case 0x3c7b64u: goto label_3c7b64;
        case 0x3c7b68u: goto label_3c7b68;
        case 0x3c7b6cu: goto label_3c7b6c;
        case 0x3c7b70u: goto label_3c7b70;
        case 0x3c7b74u: goto label_3c7b74;
        case 0x3c7b78u: goto label_3c7b78;
        case 0x3c7b7cu: goto label_3c7b7c;
        case 0x3c7b80u: goto label_3c7b80;
        case 0x3c7b84u: goto label_3c7b84;
        case 0x3c7b88u: goto label_3c7b88;
        case 0x3c7b8cu: goto label_3c7b8c;
        case 0x3c7b90u: goto label_3c7b90;
        case 0x3c7b94u: goto label_3c7b94;
        case 0x3c7b98u: goto label_3c7b98;
        case 0x3c7b9cu: goto label_3c7b9c;
        case 0x3c7ba0u: goto label_3c7ba0;
        case 0x3c7ba4u: goto label_3c7ba4;
        case 0x3c7ba8u: goto label_3c7ba8;
        case 0x3c7bacu: goto label_3c7bac;
        case 0x3c7bb0u: goto label_3c7bb0;
        case 0x3c7bb4u: goto label_3c7bb4;
        case 0x3c7bb8u: goto label_3c7bb8;
        case 0x3c7bbcu: goto label_3c7bbc;
        case 0x3c7bc0u: goto label_3c7bc0;
        case 0x3c7bc4u: goto label_3c7bc4;
        case 0x3c7bc8u: goto label_3c7bc8;
        case 0x3c7bccu: goto label_3c7bcc;
        case 0x3c7bd0u: goto label_3c7bd0;
        case 0x3c7bd4u: goto label_3c7bd4;
        case 0x3c7bd8u: goto label_3c7bd8;
        case 0x3c7bdcu: goto label_3c7bdc;
        case 0x3c7be0u: goto label_3c7be0;
        case 0x3c7be4u: goto label_3c7be4;
        case 0x3c7be8u: goto label_3c7be8;
        case 0x3c7becu: goto label_3c7bec;
        case 0x3c7bf0u: goto label_3c7bf0;
        case 0x3c7bf4u: goto label_3c7bf4;
        case 0x3c7bf8u: goto label_3c7bf8;
        case 0x3c7bfcu: goto label_3c7bfc;
        case 0x3c7c00u: goto label_3c7c00;
        case 0x3c7c04u: goto label_3c7c04;
        case 0x3c7c08u: goto label_3c7c08;
        case 0x3c7c0cu: goto label_3c7c0c;
        case 0x3c7c10u: goto label_3c7c10;
        case 0x3c7c14u: goto label_3c7c14;
        case 0x3c7c18u: goto label_3c7c18;
        case 0x3c7c1cu: goto label_3c7c1c;
        case 0x3c7c20u: goto label_3c7c20;
        case 0x3c7c24u: goto label_3c7c24;
        case 0x3c7c28u: goto label_3c7c28;
        case 0x3c7c2cu: goto label_3c7c2c;
        case 0x3c7c30u: goto label_3c7c30;
        case 0x3c7c34u: goto label_3c7c34;
        case 0x3c7c38u: goto label_3c7c38;
        case 0x3c7c3cu: goto label_3c7c3c;
        case 0x3c7c40u: goto label_3c7c40;
        case 0x3c7c44u: goto label_3c7c44;
        case 0x3c7c48u: goto label_3c7c48;
        case 0x3c7c4cu: goto label_3c7c4c;
        case 0x3c7c50u: goto label_3c7c50;
        case 0x3c7c54u: goto label_3c7c54;
        case 0x3c7c58u: goto label_3c7c58;
        case 0x3c7c5cu: goto label_3c7c5c;
        case 0x3c7c60u: goto label_3c7c60;
        case 0x3c7c64u: goto label_3c7c64;
        case 0x3c7c68u: goto label_3c7c68;
        case 0x3c7c6cu: goto label_3c7c6c;
        case 0x3c7c70u: goto label_3c7c70;
        case 0x3c7c74u: goto label_3c7c74;
        case 0x3c7c78u: goto label_3c7c78;
        case 0x3c7c7cu: goto label_3c7c7c;
        case 0x3c7c80u: goto label_3c7c80;
        case 0x3c7c84u: goto label_3c7c84;
        case 0x3c7c88u: goto label_3c7c88;
        case 0x3c7c8cu: goto label_3c7c8c;
        case 0x3c7c90u: goto label_3c7c90;
        case 0x3c7c94u: goto label_3c7c94;
        case 0x3c7c98u: goto label_3c7c98;
        case 0x3c7c9cu: goto label_3c7c9c;
        case 0x3c7ca0u: goto label_3c7ca0;
        case 0x3c7ca4u: goto label_3c7ca4;
        case 0x3c7ca8u: goto label_3c7ca8;
        case 0x3c7cacu: goto label_3c7cac;
        case 0x3c7cb0u: goto label_3c7cb0;
        case 0x3c7cb4u: goto label_3c7cb4;
        case 0x3c7cb8u: goto label_3c7cb8;
        case 0x3c7cbcu: goto label_3c7cbc;
        case 0x3c7cc0u: goto label_3c7cc0;
        case 0x3c7cc4u: goto label_3c7cc4;
        case 0x3c7cc8u: goto label_3c7cc8;
        case 0x3c7cccu: goto label_3c7ccc;
        case 0x3c7cd0u: goto label_3c7cd0;
        case 0x3c7cd4u: goto label_3c7cd4;
        case 0x3c7cd8u: goto label_3c7cd8;
        case 0x3c7cdcu: goto label_3c7cdc;
        case 0x3c7ce0u: goto label_3c7ce0;
        case 0x3c7ce4u: goto label_3c7ce4;
        case 0x3c7ce8u: goto label_3c7ce8;
        case 0x3c7cecu: goto label_3c7cec;
        case 0x3c7cf0u: goto label_3c7cf0;
        case 0x3c7cf4u: goto label_3c7cf4;
        default: break;
    }

    ctx->pc = 0x3c7930u;

label_3c7930:
    // 0x3c7930: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c7930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3c7934:
    // 0x3c7934: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3c7934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3c7938:
    // 0x3c7938: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3c7938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3c793c:
    // 0x3c793c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3c7940:
    // 0x3c7940: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c7940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7944:
    // 0x3c7944: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c7944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c7948:
    // 0x3c7948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c7948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3c794c:
    // 0x3c794c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c7950:
    // 0x3c7950: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x3c7950u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3c7954:
    // 0x3c7954: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3c7954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3c7958:
    // 0x3c7958: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c7958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c795c:
    // 0x3c795c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c795cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c7960:
    // 0x3c7960: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c7960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c7964:
    // 0x3c7964: 0x40f809  jalr        $v0
label_3c7968:
    if (ctx->pc == 0x3C7968u) {
        ctx->pc = 0x3C7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7964u;
        // 0x3c7968: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C796Cu;
        goto label_3c796c;
    }
    ctx->pc = 0x3C7964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C796Cu);
        ctx->pc = 0x3C7968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7964u;
        // 0x3c7968: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7964u, 0x3C796Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C796Cu;
label_3c796c:
    // 0x3c796c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c796cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7970:
    // 0x3c7970: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c7970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c7974:
    // 0x3c7974: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3c7978:
    // 0x3c7978: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_3c797c:
    if (ctx->pc == 0x3C797Cu) {
        ctx->pc = 0x3C797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7978u;
        // 0x3c797c: 0x924200b4  lbu         $v0, 0xB4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7980u;
        goto label_3c7980;
    }
    ctx->pc = 0x3C7978u;
    {
        const bool branch_taken_0x3c7978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3c7978) {
            ctx->pc = 0x3C797Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7978u;
            // 0x3c797c: 0x924200b4  lbu         $v0, 0xB4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7990u;
            goto label_3c7990;
        }
    }
    ctx->pc = 0x3C7980u;
label_3c7980:
    // 0x3c7980: 0x8e4200b0  lw          $v0, 0xB0($s2)
    ctx->pc = 0x3c7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3c7984:
    // 0x3c7984: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3c7984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3c7988:
    // 0x3c7988: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x3c7988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_3c798c:
    // 0x3c798c: 0x924200b4  lbu         $v0, 0xB4($s2)
    ctx->pc = 0x3c798cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 180)));
label_3c7990:
    // 0x3c7990: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x3c7990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_3c7994:
    // 0x3c7994: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
label_3c7998:
    if (ctx->pc == 0x3C7998u) {
        ctx->pc = 0x3C7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7994u;
        // 0x3c7998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C799Cu;
        goto label_3c799c;
    }
    ctx->pc = 0x3C7994u;
    {
        const bool branch_taken_0x3c7994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7994u;
        // 0x3c7998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7994) {
            ctx->pc = 0x3C7CCCu;
            goto label_3c7ccc;
        }
    }
    ctx->pc = 0x3C799Cu;
label_3c799c:
    // 0x3c799c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c79a0:
    // 0x3c79a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c79a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c79a4:
    // 0x3c79a4: 0x2454b8b8  addiu       $s4, $v0, -0x4748
    ctx->pc = 0x3c79a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3c79a8:
    // 0x3c79a8: 0xc0cd4ee  jal         func_3353B8
label_3c79ac:
    if (ctx->pc == 0x3C79ACu) {
        ctx->pc = 0x3C79ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C79A8u;
        // 0x3c79ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C79B0u;
        goto label_3c79b0;
    }
    ctx->pc = 0x3C79A8u;
    SET_GPR_U32(ctx, 31, 0x3C79B0u);
    ctx->pc = 0x3C79ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C79A8u;
    // 0x3c79ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C79A8u, 0x3C79B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C79B0u;
label_3c79b0:
    // 0x3c79b0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x3c79b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3c79b4:
    // 0x3c79b4: 0xc0e858c  jal         func_3A1630
label_3c79b8:
    if (ctx->pc == 0x3C79B8u) {
        ctx->pc = 0x3C79B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C79B4u;
        // 0x3c79b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C79BCu;
        goto label_3c79bc;
    }
    ctx->pc = 0x3C79B4u;
    SET_GPR_U32(ctx, 31, 0x3C79BCu);
    ctx->pc = 0x3C79B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C79B4u;
    // 0x3c79b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C79B4u, 0x3C79BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C79BCu;
label_3c79bc:
    // 0x3c79bc: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x3c79bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_3c79c0:
    // 0x3c79c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c79c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c79c4:
    // 0x3c79c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c79c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c79c8:
    // 0x3c79c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3c79c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3c79cc:
    // 0x3c79cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c79ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c79d0:
    // 0x3c79d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c79d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c79d4:
    // 0x3c79d4: 0xc0cd508  jal         func_335420
label_3c79d8:
    if (ctx->pc == 0x3C79D8u) {
        ctx->pc = 0x3C79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C79D4u;
        // 0x3c79d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C79DCu;
        goto label_3c79dc;
    }
    ctx->pc = 0x3C79D4u;
    SET_GPR_U32(ctx, 31, 0x3C79DCu);
    ctx->pc = 0x3C79D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C79D4u;
    // 0x3c79d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C79D4u, 0x3C79DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C79DCu;
label_3c79dc:
    // 0x3c79dc: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x3c79dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c79e0:
    // 0x3c79e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c79e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c79e4:
    // 0x3c79e4: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x3c79e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c79e8:
    // 0x3c79e8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3c79e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3c79ec:
    // 0x3c79ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c79ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c79f0:
    // 0x3c79f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c79f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c79f4:
    // 0x3c79f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c79f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3c79f8:
    // 0x3c79f8: 0xe64100c0  swc1        $f1, 0xC0($s2)
    ctx->pc = 0x3c79f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3c79fc:
    // 0x3c79fc: 0xc6340010  lwc1        $f20, 0x10($s1)
    ctx->pc = 0x3c79fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c7a00:
    // 0x3c7a00: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3c7a00u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c7a04:
    // 0x3c7a04: 0x4600a547  neg.s       $f21, $f20
    ctx->pc = 0x3c7a04u;
    ctx->f[21] = FPU_NEG_S(ctx->f[20]);
label_3c7a08:
    // 0x3c7a08: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3c7a08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3c7a0c:
    // 0x3c7a0c: 0xc0cd508  jal         func_335420
label_3c7a10:
    if (ctx->pc == 0x3C7A10u) {
        ctx->pc = 0x3C7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A0Cu;
        // 0x3c7a10: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7A14u;
        goto label_3c7a14;
    }
    ctx->pc = 0x3C7A0Cu;
    SET_GPR_U32(ctx, 31, 0x3C7A14u);
    ctx->pc = 0x3C7A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7A0Cu;
    // 0x3c7a10: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C7A0Cu, 0x3C7A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7A14u;
label_3c7a14:
    // 0x3c7a14: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3c7a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c7a18:
    // 0x3c7a18: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3c7a18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3c7a1c:
    // 0x3c7a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7a20:
    // 0x3c7a20: 0xc0cd508  jal         func_335420
label_3c7a24:
    if (ctx->pc == 0x3C7A24u) {
        ctx->pc = 0x3C7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A20u;
        // 0x3c7a24: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7A28u;
        goto label_3c7a28;
    }
    ctx->pc = 0x3C7A20u;
    SET_GPR_U32(ctx, 31, 0x3C7A28u);
    ctx->pc = 0x3C7A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7A20u;
    // 0x3c7a24: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C7A20u, 0x3C7A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7A28u;
label_3c7a28:
    // 0x3c7a28: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3c7a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3c7a2c:
    // 0x3c7a2c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3c7a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3c7a30:
    // 0x3c7a30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7a34:
    // 0x3c7a34: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3c7a34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3c7a38:
    // 0x3c7a38: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3c7a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3c7a3c:
    // 0x3c7a3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7a40:
    // 0x3c7a40: 0xc0cd508  jal         func_335420
label_3c7a44:
    if (ctx->pc == 0x3C7A44u) {
        ctx->pc = 0x3C7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A40u;
        // 0x3c7a44: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7A48u;
        goto label_3c7a48;
    }
    ctx->pc = 0x3C7A40u;
    SET_GPR_U32(ctx, 31, 0x3C7A48u);
    ctx->pc = 0x3C7A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7A40u;
    // 0x3c7a44: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C7A40u, 0x3C7A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7A48u;
label_3c7a48:
    // 0x3c7a48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3c7a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7a4c:
    // 0x3c7a4c: 0xc0e9694  jal         func_3A5A50
label_3c7a50:
    if (ctx->pc == 0x3C7A50u) {
        ctx->pc = 0x3C7A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A4Cu;
        // 0x3c7a50: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7A54u;
        goto label_3c7a54;
    }
    ctx->pc = 0x3C7A4Cu;
    SET_GPR_U32(ctx, 31, 0x3C7A54u);
    ctx->pc = 0x3C7A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7A4Cu;
    // 0x3c7a50: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C7A4Cu, 0x3C7A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7A54u;
label_3c7a54:
    // 0x3c7a54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c7a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7a58:
    // 0x3c7a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c7a5c:
    // 0x3c7a5c: 0x5662008e  bnel        $s3, $v0, . + 4 + (0x8E << 2)
label_3c7a60:
    if (ctx->pc == 0x3C7A60u) {
        ctx->pc = 0x3C7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A5Cu;
        // 0x3c7a60: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7A64u;
        goto label_3c7a64;
    }
    ctx->pc = 0x3C7A5Cu;
    {
        const bool branch_taken_0x3c7a5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c7a5c) {
            ctx->pc = 0x3C7A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7A5Cu;
            // 0x3c7a60: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7C98u;
            goto label_3c7c98;
        }
    }
    ctx->pc = 0x3C7A64u;
label_3c7a64:
    // 0x3c7a64: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3c7a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7a68:
    // 0x3c7a68: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3c7a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3c7a6c:
    // 0x3c7a6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c7a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c7a70:
    // 0x3c7a70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c7a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c7a74:
    // 0x3c7a74: 0xc64200c0  lwc1        $f2, 0xC0($s2)
    ctx->pc = 0x3c7a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c7a78:
    // 0x3c7a78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c7a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c7a7c:
    // 0x3c7a7c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3c7a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c7a80:
    // 0x3c7a80: 0x0  nop
    ctx->pc = 0x3c7a80u;
    // NOP
label_3c7a84:
    // 0x3c7a84: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_3c7a88:
    if (ctx->pc == 0x3C7A88u) {
        ctx->pc = 0x3C7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A84u;
        // 0x3c7a88: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7A8Cu;
        goto label_3c7a8c;
    }
    ctx->pc = 0x3C7A84u;
    {
        const bool branch_taken_0x3c7a84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A84u;
        // 0x3c7a88: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a84) {
            ctx->pc = 0x3C7AF4u;
            goto label_3c7af4;
        }
    }
    ctx->pc = 0x3C7A8Cu;
label_3c7a8c:
    // 0x3c7a8c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3c7a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3c7a90:
    // 0x3c7a90: 0xc136b18  jal         func_4DAC60
label_3c7a94:
    if (ctx->pc == 0x3C7A94u) {
        ctx->pc = 0x3C7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A90u;
        // 0x3c7a94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7A98u;
        goto label_3c7a98;
    }
    ctx->pc = 0x3C7A90u;
    SET_GPR_U32(ctx, 31, 0x3C7A98u);
    ctx->pc = 0x3C7A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7A90u;
    // 0x3c7a94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C7A90u, 0x3C7A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7A98u;
label_3c7a98:
    // 0x3c7a98: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c7a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7a9c:
    // 0x3c7a9c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3c7a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c7aa0:
    // 0x3c7aa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c7aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c7aa4:
    // 0x3c7aa4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7aa8:
    // 0x3c7aa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7aac:
    // 0x3c7aac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3c7aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3c7ab0:
    // 0x3c7ab0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c7ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c7ab4:
    // 0x3c7ab4: 0xc0cd508  jal         func_335420
label_3c7ab8:
    if (ctx->pc == 0x3C7AB8u) {
        ctx->pc = 0x3C7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7AB4u;
        // 0x3c7ab8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7ABCu;
        goto label_3c7abc;
    }
    ctx->pc = 0x3C7AB4u;
    SET_GPR_U32(ctx, 31, 0x3C7ABCu);
    ctx->pc = 0x3C7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7AB4u;
    // 0x3c7ab8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C7AB4u, 0x3C7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7ABCu;
label_3c7abc:
    // 0x3c7abc: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x3c7abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c7ac0:
    // 0x3c7ac0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c7ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c7ac4:
    // 0x3c7ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7ac8:
    // 0x3c7ac8: 0x24a543e0  addiu       $a1, $a1, 0x43E0
    ctx->pc = 0x3c7ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
label_3c7acc:
    // 0x3c7acc: 0xc0f1bb8  jal         func_3C6EE0
label_3c7ad0:
    if (ctx->pc == 0x3C7AD0u) {
        ctx->pc = 0x3C7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7ACCu;
        // 0x3c7ad0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7AD4u;
        goto label_3c7ad4;
    }
    ctx->pc = 0x3C7ACCu;
    SET_GPR_U32(ctx, 31, 0x3C7AD4u);
    ctx->pc = 0x3C7AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7ACCu;
    // 0x3c7ad0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6EE0u, 0x3C7ACCu, 0x3C7AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7AD4u;
label_3c7ad4:
    // 0x3c7ad4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3c7ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7ad8:
    // 0x3c7ad8: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x3c7ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
label_3c7adc:
    // 0x3c7adc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3c7adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3c7ae0:
    // 0x3c7ae0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3c7ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c7ae4:
    // 0x3c7ae4: 0xc64000bc  lwc1        $f0, 0xBC($s2)
    ctx->pc = 0x3c7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7ae8:
    // 0x3c7ae8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c7ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3c7aec:
    // 0x3c7aec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c7aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c7af0:
    // 0x3c7af0: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3c7af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3c7af4:
    // 0x3c7af4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3c7af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7af8:
    // 0x3c7af8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3c7af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3c7afc:
    // 0x3c7afc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c7afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c7b00:
    // 0x3c7b00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c7b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c7b04:
    // 0x3c7b04: 0xc64200c0  lwc1        $f2, 0xC0($s2)
    ctx->pc = 0x3c7b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c7b08:
    // 0x3c7b08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c7b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3c7b0c:
    // 0x3c7b0c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3c7b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c7b10:
    // 0x3c7b10: 0x0  nop
    ctx->pc = 0x3c7b10u;
    // NOP
label_3c7b14:
    // 0x3c7b14: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_3c7b18:
    if (ctx->pc == 0x3C7B18u) {
        ctx->pc = 0x3C7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B14u;
        // 0x3c7b18: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7B1Cu;
        goto label_3c7b1c;
    }
    ctx->pc = 0x3C7B14u;
    {
        const bool branch_taken_0x3c7b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B14u;
        // 0x3c7b18: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b14) {
            ctx->pc = 0x3C7B84u;
            goto label_3c7b84;
        }
    }
    ctx->pc = 0x3C7B1Cu;
label_3c7b1c:
    // 0x3c7b1c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3c7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3c7b20:
    // 0x3c7b20: 0xc136b18  jal         func_4DAC60
label_3c7b24:
    if (ctx->pc == 0x3C7B24u) {
        ctx->pc = 0x3C7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B20u;
        // 0x3c7b24: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7B28u;
        goto label_3c7b28;
    }
    ctx->pc = 0x3C7B20u;
    SET_GPR_U32(ctx, 31, 0x3C7B28u);
    ctx->pc = 0x3C7B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7B20u;
    // 0x3c7b24: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C7B20u, 0x3C7B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7B28u;
label_3c7b28:
    // 0x3c7b28: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c7b28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7b2c:
    // 0x3c7b2c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3c7b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c7b30:
    // 0x3c7b30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c7b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c7b34:
    // 0x3c7b34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7b38:
    // 0x3c7b38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7b3c:
    // 0x3c7b3c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3c7b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3c7b40:
    // 0x3c7b40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c7b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c7b44:
    // 0x3c7b44: 0xc0cd508  jal         func_335420
label_3c7b48:
    if (ctx->pc == 0x3C7B48u) {
        ctx->pc = 0x3C7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B44u;
        // 0x3c7b48: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7B4Cu;
        goto label_3c7b4c;
    }
    ctx->pc = 0x3C7B44u;
    SET_GPR_U32(ctx, 31, 0x3C7B4Cu);
    ctx->pc = 0x3C7B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7B44u;
    // 0x3c7b48: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C7B44u, 0x3C7B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7B4Cu;
label_3c7b4c:
    // 0x3c7b4c: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x3c7b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c7b50:
    // 0x3c7b50: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c7b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c7b54:
    // 0x3c7b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7b58:
    // 0x3c7b58: 0x24a543e0  addiu       $a1, $a1, 0x43E0
    ctx->pc = 0x3c7b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
label_3c7b5c:
    // 0x3c7b5c: 0xc0f1bb8  jal         func_3C6EE0
label_3c7b60:
    if (ctx->pc == 0x3C7B60u) {
        ctx->pc = 0x3C7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B5Cu;
        // 0x3c7b60: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7B64u;
        goto label_3c7b64;
    }
    ctx->pc = 0x3C7B5Cu;
    SET_GPR_U32(ctx, 31, 0x3C7B64u);
    ctx->pc = 0x3C7B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7B5Cu;
    // 0x3c7b60: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6EE0u, 0x3C7B5Cu, 0x3C7B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7B64u;
label_3c7b64:
    // 0x3c7b64: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3c7b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7b68:
    // 0x3c7b68: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x3c7b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
label_3c7b6c:
    // 0x3c7b6c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3c7b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3c7b70:
    // 0x3c7b70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3c7b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c7b74:
    // 0x3c7b74: 0xc64000bc  lwc1        $f0, 0xBC($s2)
    ctx->pc = 0x3c7b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7b78:
    // 0x3c7b78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c7b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3c7b7c:
    // 0x3c7b7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c7b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c7b80:
    // 0x3c7b80: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3c7b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3c7b84:
    // 0x3c7b84: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3c7b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3c7b88:
    // 0x3c7b88: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x3c7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3c7b8c:
    // 0x3c7b8c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_3c7b90:
    if (ctx->pc == 0x3C7B90u) {
        ctx->pc = 0x3C7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B8Cu;
        // 0x3c7b90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7B94u;
        goto label_3c7b94;
    }
    ctx->pc = 0x3C7B8Cu;
    {
        const bool branch_taken_0x3c7b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B8Cu;
        // 0x3c7b90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7b8c) {
            ctx->pc = 0x3C7BE8u;
            goto label_3c7be8;
        }
    }
    ctx->pc = 0x3C7B94u;
label_3c7b94:
    // 0x3c7b94: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c7b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c7b98:
    // 0x3c7b98: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3c7b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3c7b9c:
    // 0x3c7b9c: 0xc136b18  jal         func_4DAC60
label_3c7ba0:
    if (ctx->pc == 0x3C7BA0u) {
        ctx->pc = 0x3C7BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7B9Cu;
        // 0x3c7ba0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7BA4u;
        goto label_3c7ba4;
    }
    ctx->pc = 0x3C7B9Cu;
    SET_GPR_U32(ctx, 31, 0x3C7BA4u);
    ctx->pc = 0x3C7BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7B9Cu;
    // 0x3c7ba0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C7B9Cu, 0x3C7BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7BA4u;
label_3c7ba4:
    // 0x3c7ba4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c7ba4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7ba8:
    // 0x3c7ba8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3c7ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c7bac:
    // 0x3c7bac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c7bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c7bb0:
    // 0x3c7bb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7bb4:
    // 0x3c7bb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7bb8:
    // 0x3c7bb8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3c7bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3c7bbc:
    // 0x3c7bbc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c7bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c7bc0:
    // 0x3c7bc0: 0xc0cd508  jal         func_335420
label_3c7bc4:
    if (ctx->pc == 0x3C7BC4u) {
        ctx->pc = 0x3C7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7BC0u;
        // 0x3c7bc4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7BC8u;
        goto label_3c7bc8;
    }
    ctx->pc = 0x3C7BC0u;
    SET_GPR_U32(ctx, 31, 0x3C7BC8u);
    ctx->pc = 0x3C7BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7BC0u;
    // 0x3c7bc4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C7BC0u, 0x3C7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7BC8u;
label_3c7bc8:
    // 0x3c7bc8: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x3c7bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c7bcc:
    // 0x3c7bcc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c7bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c7bd0:
    // 0x3c7bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7bd4:
    // 0x3c7bd4: 0x24a543e0  addiu       $a1, $a1, 0x43E0
    ctx->pc = 0x3c7bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
label_3c7bd8:
    // 0x3c7bd8: 0xc0f1bb8  jal         func_3C6EE0
label_3c7bdc:
    if (ctx->pc == 0x3C7BDCu) {
        ctx->pc = 0x3C7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7BD8u;
        // 0x3c7bdc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7BE0u;
        goto label_3c7be0;
    }
    ctx->pc = 0x3C7BD8u;
    SET_GPR_U32(ctx, 31, 0x3C7BE0u);
    ctx->pc = 0x3C7BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7BD8u;
    // 0x3c7bdc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6EE0u, 0x3C7BD8u, 0x3C7BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7BE0u;
label_3c7be0:
    // 0x3c7be0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3c7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3c7be4:
    // 0x3c7be4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7be8:
    // 0x3c7be8: 0xc0cd4ee  jal         func_3353B8
label_3c7bec:
    if (ctx->pc == 0x3C7BECu) {
        ctx->pc = 0x3C7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7BE8u;
        // 0x3c7bec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7BF0u;
        goto label_3c7bf0;
    }
    ctx->pc = 0x3C7BE8u;
    SET_GPR_U32(ctx, 31, 0x3C7BF0u);
    ctx->pc = 0x3C7BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7BE8u;
    // 0x3c7bec: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C7BE8u, 0x3C7BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7BF0u;
label_3c7bf0:
    // 0x3c7bf0: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_3c7bf4:
    if (ctx->pc == 0x3C7BF4u) {
        ctx->pc = 0x3C7BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7BF0u;
        // 0x3c7bf4: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7BF8u;
        goto label_3c7bf8;
    }
    ctx->pc = 0x3C7BF0u;
    {
        const bool branch_taken_0x3c7bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7bf0) {
            ctx->pc = 0x3C7BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7BF0u;
            // 0x3c7bf4: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7C98u;
            goto label_3c7c98;
        }
    }
    ctx->pc = 0x3C7BF8u;
label_3c7bf8:
    // 0x3c7bf8: 0xc0e9694  jal         func_3A5A50
label_3c7bfc:
    if (ctx->pc == 0x3C7BFCu) {
        ctx->pc = 0x3C7BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7BF8u;
        // 0x3c7bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7C00u;
        goto label_3c7c00;
    }
    ctx->pc = 0x3C7BF8u;
    SET_GPR_U32(ctx, 31, 0x3C7C00u);
    ctx->pc = 0x3C7BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7BF8u;
    // 0x3c7bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3C7BF8u, 0x3C7C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7C00u;
label_3c7c00:
    // 0x3c7c00: 0x54530025  bnel        $v0, $s3, . + 4 + (0x25 << 2)
label_3c7c04:
    if (ctx->pc == 0x3C7C04u) {
        ctx->pc = 0x3C7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C00u;
        // 0x3c7c04: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7C08u;
        goto label_3c7c08;
    }
    ctx->pc = 0x3C7C00u;
    {
        const bool branch_taken_0x3c7c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x3c7c00) {
            ctx->pc = 0x3C7C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7C00u;
            // 0x3c7c04: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7C98u;
            goto label_3c7c98;
        }
    }
    ctx->pc = 0x3C7C08u;
label_3c7c08:
    // 0x3c7c08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7c0c:
    // 0x3c7c0c: 0xc0cd4ee  jal         func_3353B8
label_3c7c10:
    if (ctx->pc == 0x3C7C10u) {
        ctx->pc = 0x3C7C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C0Cu;
        // 0x3c7c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7C14u;
        goto label_3c7c14;
    }
    ctx->pc = 0x3C7C0Cu;
    SET_GPR_U32(ctx, 31, 0x3C7C14u);
    ctx->pc = 0x3C7C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7C0Cu;
    // 0x3c7c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C7C0Cu, 0x3C7C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7C14u;
label_3c7c14:
    // 0x3c7c14: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x3c7c14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3c7c18:
    // 0x3c7c18: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_3c7c1c:
    if (ctx->pc == 0x3C7C1Cu) {
        ctx->pc = 0x3C7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C18u;
        // 0x3c7c1c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7C20u;
        goto label_3c7c20;
    }
    ctx->pc = 0x3C7C18u;
    {
        const bool branch_taken_0x3c7c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C18u;
        // 0x3c7c1c: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7c18) {
            ctx->pc = 0x3C7C68u;
            goto label_3c7c68;
        }
    }
    ctx->pc = 0x3C7C20u;
label_3c7c20:
    // 0x3c7c20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c7c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c7c24:
    // 0x3c7c24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c7c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c7c28:
    // 0x3c7c28: 0xc136afa  jal         func_4DABE8
label_3c7c2c:
    if (ctx->pc == 0x3C7C2Cu) {
        ctx->pc = 0x3C7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C28u;
        // 0x3c7c2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7C30u;
        goto label_3c7c30;
    }
    ctx->pc = 0x3C7C28u;
    SET_GPR_U32(ctx, 31, 0x3C7C30u);
    ctx->pc = 0x3C7C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7C28u;
    // 0x3c7c2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3C7C28u, 0x3C7C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7C30u;
label_3c7c30:
    // 0x3c7c30: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c7c30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7c34:
    // 0x3c7c34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c7c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c7c38:
    // 0x3c7c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c7c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c7c3c:
    // 0x3c7c3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7c40:
    // 0x3c7c40: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3c7c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3c7c44:
    // 0x3c7c44: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c7c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c7c48:
    // 0x3c7c48: 0xc0cd508  jal         func_335420
label_3c7c4c:
    if (ctx->pc == 0x3C7C4Cu) {
        ctx->pc = 0x3C7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C48u;
        // 0x3c7c4c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7C50u;
        goto label_3c7c50;
    }
    ctx->pc = 0x3C7C48u;
    SET_GPR_U32(ctx, 31, 0x3C7C50u);
    ctx->pc = 0x3C7C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7C48u;
    // 0x3c7c4c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3C7C48u, 0x3C7C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7C50u;
label_3c7c50:
    // 0x3c7c50: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x3c7c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3c7c54:
    // 0x3c7c54: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c7c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c7c58:
    // 0x3c7c58: 0x24a543e0  addiu       $a1, $a1, 0x43E0
    ctx->pc = 0x3c7c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17376));
label_3c7c5c:
    // 0x3c7c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7c60:
    // 0x3c7c60: 0xc0f1bb8  jal         func_3C6EE0
label_3c7c64:
    if (ctx->pc == 0x3C7C64u) {
        ctx->pc = 0x3C7C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C60u;
        // 0x3c7c64: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7C68u;
        goto label_3c7c68;
    }
    ctx->pc = 0x3C7C60u;
    SET_GPR_U32(ctx, 31, 0x3C7C68u);
    ctx->pc = 0x3C7C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7C60u;
    // 0x3c7c64: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6EE0u, 0x3C7C60u, 0x3C7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7C68u;
label_3c7c68:
    // 0x3c7c68: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c7c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c7c6c:
    // 0x3c7c6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c7c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c7c70:
    // 0x3c7c70: 0xc136b18  jal         func_4DAC60
label_3c7c74:
    if (ctx->pc == 0x3C7C74u) {
        ctx->pc = 0x3C7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C70u;
        // 0x3c7c74: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7C78u;
        goto label_3c7c78;
    }
    ctx->pc = 0x3C7C70u;
    SET_GPR_U32(ctx, 31, 0x3C7C78u);
    ctx->pc = 0x3C7C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7C70u;
    // 0x3c7c74: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C7C70u, 0x3C7C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7C78u;
label_3c7c78:
    // 0x3c7c78: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c7c78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c7c7c:
    // 0x3c7c7c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c7c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c7c80:
    // 0x3c7c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7c84:
    // 0x3c7c84: 0x24a543f0  addiu       $a1, $a1, 0x43F0
    ctx->pc = 0x3c7c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17392));
label_3c7c88:
    // 0x3c7c88: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c7c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c7c8c:
    // 0x3c7c8c: 0xc0f1bb8  jal         func_3C6EE0
label_3c7c90:
    if (ctx->pc == 0x3C7C90u) {
        ctx->pc = 0x3C7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C8Cu;
        // 0x3c7c90: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7C94u;
        goto label_3c7c94;
    }
    ctx->pc = 0x3C7C8Cu;
    SET_GPR_U32(ctx, 31, 0x3C7C94u);
    ctx->pc = 0x3C7C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7C8Cu;
    // 0x3c7c90: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6EE0u, 0x3C7C8Cu, 0x3C7C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7C94u;
label_3c7c94:
    // 0x3c7c94: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3c7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3c7c98:
    // 0x3c7c98: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x3c7c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3c7c9c:
    // 0x3c7c9c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_3c7ca0:
    if (ctx->pc == 0x3C7CA0u) {
        ctx->pc = 0x3C7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7C9Cu;
        // 0x3c7ca0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7CA4u;
        goto label_3c7ca4;
    }
    ctx->pc = 0x3C7C9Cu;
    {
        const bool branch_taken_0x3c7c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3c7c9c) {
            ctx->pc = 0x3C7CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7C9Cu;
            // 0x3c7ca0: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7CA4u;
            goto label_3c7ca4;
        }
    }
    ctx->pc = 0x3C7CA4u;
label_3c7ca4:
    // 0x3c7ca4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3c7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c7ca8:
    // 0x3c7ca8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c7ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c7cac:
    // 0x3c7cac: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x3c7cacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_3c7cb0:
    // 0x3c7cb0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3c7cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3c7cb4:
    // 0x3c7cb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3c7cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c7cb8:
    // 0x3c7cb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c7cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7cbc:
    // 0x3c7cbc: 0xae4400c4  sw          $a0, 0xC4($s2)
    ctx->pc = 0x3c7cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 4));
label_3c7cc0:
    // 0x3c7cc0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3c7cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3c7cc4:
    // 0x3c7cc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c7cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c7cc8:
    // 0x3c7cc8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3c7cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3c7ccc:
    // 0x3c7ccc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c7cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c7cd0:
    // 0x3c7cd0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3c7cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c7cd4:
    // 0x3c7cd4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3c7cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c7cd8:
    // 0x3c7cd8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c7cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c7cdc:
    // 0x3c7cdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c7cdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c7ce0:
    // 0x3c7ce0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c7ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7ce4:
    // 0x3c7ce4: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x3c7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c7ce8:
    // 0x3c7ce8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3c7ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c7cec:
    // 0x3c7cec: 0x3e00008  jr          $ra
label_3c7cf0:
    if (ctx->pc == 0x3C7CF0u) {
        ctx->pc = 0x3C7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7CECu;
        // 0x3c7cf0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7CF4u;
        goto label_3c7cf4;
    }
    ctx->pc = 0x3C7CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7CECu;
        // 0x3c7cf0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7CF4u;
label_3c7cf4:
    // 0x3c7cf4: 0x0  nop
    ctx->pc = 0x3c7cf4u;
    // NOP
    ctx->pc = 0x3c7cf8u;
}
