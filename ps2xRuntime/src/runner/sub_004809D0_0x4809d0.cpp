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

// Function: sub_004809D0
// Address: 0x4809d0 - 0x480d10
void sub_004809D0_0x4809d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004809D0_0x4809d0");
#endif

    switch (ctx->pc) {
        case 0x4809d0u: goto label_4809d0;
        case 0x4809d4u: goto label_4809d4;
        case 0x4809d8u: goto label_4809d8;
        case 0x4809dcu: goto label_4809dc;
        case 0x4809e0u: goto label_4809e0;
        case 0x4809e4u: goto label_4809e4;
        case 0x4809e8u: goto label_4809e8;
        case 0x4809ecu: goto label_4809ec;
        case 0x4809f0u: goto label_4809f0;
        case 0x4809f4u: goto label_4809f4;
        case 0x4809f8u: goto label_4809f8;
        case 0x4809fcu: goto label_4809fc;
        case 0x480a00u: goto label_480a00;
        case 0x480a04u: goto label_480a04;
        case 0x480a08u: goto label_480a08;
        case 0x480a0cu: goto label_480a0c;
        case 0x480a10u: goto label_480a10;
        case 0x480a14u: goto label_480a14;
        case 0x480a18u: goto label_480a18;
        case 0x480a1cu: goto label_480a1c;
        case 0x480a20u: goto label_480a20;
        case 0x480a24u: goto label_480a24;
        case 0x480a28u: goto label_480a28;
        case 0x480a2cu: goto label_480a2c;
        case 0x480a30u: goto label_480a30;
        case 0x480a34u: goto label_480a34;
        case 0x480a38u: goto label_480a38;
        case 0x480a3cu: goto label_480a3c;
        case 0x480a40u: goto label_480a40;
        case 0x480a44u: goto label_480a44;
        case 0x480a48u: goto label_480a48;
        case 0x480a4cu: goto label_480a4c;
        case 0x480a50u: goto label_480a50;
        case 0x480a54u: goto label_480a54;
        case 0x480a58u: goto label_480a58;
        case 0x480a5cu: goto label_480a5c;
        case 0x480a60u: goto label_480a60;
        case 0x480a64u: goto label_480a64;
        case 0x480a68u: goto label_480a68;
        case 0x480a6cu: goto label_480a6c;
        case 0x480a70u: goto label_480a70;
        case 0x480a74u: goto label_480a74;
        case 0x480a78u: goto label_480a78;
        case 0x480a7cu: goto label_480a7c;
        case 0x480a80u: goto label_480a80;
        case 0x480a84u: goto label_480a84;
        case 0x480a88u: goto label_480a88;
        case 0x480a8cu: goto label_480a8c;
        case 0x480a90u: goto label_480a90;
        case 0x480a94u: goto label_480a94;
        case 0x480a98u: goto label_480a98;
        case 0x480a9cu: goto label_480a9c;
        case 0x480aa0u: goto label_480aa0;
        case 0x480aa4u: goto label_480aa4;
        case 0x480aa8u: goto label_480aa8;
        case 0x480aacu: goto label_480aac;
        case 0x480ab0u: goto label_480ab0;
        case 0x480ab4u: goto label_480ab4;
        case 0x480ab8u: goto label_480ab8;
        case 0x480abcu: goto label_480abc;
        case 0x480ac0u: goto label_480ac0;
        case 0x480ac4u: goto label_480ac4;
        case 0x480ac8u: goto label_480ac8;
        case 0x480accu: goto label_480acc;
        case 0x480ad0u: goto label_480ad0;
        case 0x480ad4u: goto label_480ad4;
        case 0x480ad8u: goto label_480ad8;
        case 0x480adcu: goto label_480adc;
        case 0x480ae0u: goto label_480ae0;
        case 0x480ae4u: goto label_480ae4;
        case 0x480ae8u: goto label_480ae8;
        case 0x480aecu: goto label_480aec;
        case 0x480af0u: goto label_480af0;
        case 0x480af4u: goto label_480af4;
        case 0x480af8u: goto label_480af8;
        case 0x480afcu: goto label_480afc;
        case 0x480b00u: goto label_480b00;
        case 0x480b04u: goto label_480b04;
        case 0x480b08u: goto label_480b08;
        case 0x480b0cu: goto label_480b0c;
        case 0x480b10u: goto label_480b10;
        case 0x480b14u: goto label_480b14;
        case 0x480b18u: goto label_480b18;
        case 0x480b1cu: goto label_480b1c;
        case 0x480b20u: goto label_480b20;
        case 0x480b24u: goto label_480b24;
        case 0x480b28u: goto label_480b28;
        case 0x480b2cu: goto label_480b2c;
        case 0x480b30u: goto label_480b30;
        case 0x480b34u: goto label_480b34;
        case 0x480b38u: goto label_480b38;
        case 0x480b3cu: goto label_480b3c;
        case 0x480b40u: goto label_480b40;
        case 0x480b44u: goto label_480b44;
        case 0x480b48u: goto label_480b48;
        case 0x480b4cu: goto label_480b4c;
        case 0x480b50u: goto label_480b50;
        case 0x480b54u: goto label_480b54;
        case 0x480b58u: goto label_480b58;
        case 0x480b5cu: goto label_480b5c;
        case 0x480b60u: goto label_480b60;
        case 0x480b64u: goto label_480b64;
        case 0x480b68u: goto label_480b68;
        case 0x480b6cu: goto label_480b6c;
        case 0x480b70u: goto label_480b70;
        case 0x480b74u: goto label_480b74;
        case 0x480b78u: goto label_480b78;
        case 0x480b7cu: goto label_480b7c;
        case 0x480b80u: goto label_480b80;
        case 0x480b84u: goto label_480b84;
        case 0x480b88u: goto label_480b88;
        case 0x480b8cu: goto label_480b8c;
        case 0x480b90u: goto label_480b90;
        case 0x480b94u: goto label_480b94;
        case 0x480b98u: goto label_480b98;
        case 0x480b9cu: goto label_480b9c;
        case 0x480ba0u: goto label_480ba0;
        case 0x480ba4u: goto label_480ba4;
        case 0x480ba8u: goto label_480ba8;
        case 0x480bacu: goto label_480bac;
        case 0x480bb0u: goto label_480bb0;
        case 0x480bb4u: goto label_480bb4;
        case 0x480bb8u: goto label_480bb8;
        case 0x480bbcu: goto label_480bbc;
        case 0x480bc0u: goto label_480bc0;
        case 0x480bc4u: goto label_480bc4;
        case 0x480bc8u: goto label_480bc8;
        case 0x480bccu: goto label_480bcc;
        case 0x480bd0u: goto label_480bd0;
        case 0x480bd4u: goto label_480bd4;
        case 0x480bd8u: goto label_480bd8;
        case 0x480bdcu: goto label_480bdc;
        case 0x480be0u: goto label_480be0;
        case 0x480be4u: goto label_480be4;
        case 0x480be8u: goto label_480be8;
        case 0x480becu: goto label_480bec;
        case 0x480bf0u: goto label_480bf0;
        case 0x480bf4u: goto label_480bf4;
        case 0x480bf8u: goto label_480bf8;
        case 0x480bfcu: goto label_480bfc;
        case 0x480c00u: goto label_480c00;
        case 0x480c04u: goto label_480c04;
        case 0x480c08u: goto label_480c08;
        case 0x480c0cu: goto label_480c0c;
        case 0x480c10u: goto label_480c10;
        case 0x480c14u: goto label_480c14;
        case 0x480c18u: goto label_480c18;
        case 0x480c1cu: goto label_480c1c;
        case 0x480c20u: goto label_480c20;
        case 0x480c24u: goto label_480c24;
        case 0x480c28u: goto label_480c28;
        case 0x480c2cu: goto label_480c2c;
        case 0x480c30u: goto label_480c30;
        case 0x480c34u: goto label_480c34;
        case 0x480c38u: goto label_480c38;
        case 0x480c3cu: goto label_480c3c;
        case 0x480c40u: goto label_480c40;
        case 0x480c44u: goto label_480c44;
        case 0x480c48u: goto label_480c48;
        case 0x480c4cu: goto label_480c4c;
        case 0x480c50u: goto label_480c50;
        case 0x480c54u: goto label_480c54;
        case 0x480c58u: goto label_480c58;
        case 0x480c5cu: goto label_480c5c;
        case 0x480c60u: goto label_480c60;
        case 0x480c64u: goto label_480c64;
        case 0x480c68u: goto label_480c68;
        case 0x480c6cu: goto label_480c6c;
        case 0x480c70u: goto label_480c70;
        case 0x480c74u: goto label_480c74;
        case 0x480c78u: goto label_480c78;
        case 0x480c7cu: goto label_480c7c;
        case 0x480c80u: goto label_480c80;
        case 0x480c84u: goto label_480c84;
        case 0x480c88u: goto label_480c88;
        case 0x480c8cu: goto label_480c8c;
        case 0x480c90u: goto label_480c90;
        case 0x480c94u: goto label_480c94;
        case 0x480c98u: goto label_480c98;
        case 0x480c9cu: goto label_480c9c;
        case 0x480ca0u: goto label_480ca0;
        case 0x480ca4u: goto label_480ca4;
        case 0x480ca8u: goto label_480ca8;
        case 0x480cacu: goto label_480cac;
        case 0x480cb0u: goto label_480cb0;
        case 0x480cb4u: goto label_480cb4;
        case 0x480cb8u: goto label_480cb8;
        case 0x480cbcu: goto label_480cbc;
        case 0x480cc0u: goto label_480cc0;
        case 0x480cc4u: goto label_480cc4;
        case 0x480cc8u: goto label_480cc8;
        case 0x480cccu: goto label_480ccc;
        case 0x480cd0u: goto label_480cd0;
        case 0x480cd4u: goto label_480cd4;
        case 0x480cd8u: goto label_480cd8;
        case 0x480cdcu: goto label_480cdc;
        case 0x480ce0u: goto label_480ce0;
        case 0x480ce4u: goto label_480ce4;
        case 0x480ce8u: goto label_480ce8;
        case 0x480cecu: goto label_480cec;
        case 0x480cf0u: goto label_480cf0;
        case 0x480cf4u: goto label_480cf4;
        case 0x480cf8u: goto label_480cf8;
        case 0x480cfcu: goto label_480cfc;
        case 0x480d00u: goto label_480d00;
        case 0x480d04u: goto label_480d04;
        case 0x480d08u: goto label_480d08;
        case 0x480d0cu: goto label_480d0c;
        default: break;
    }

    ctx->pc = 0x4809d0u;

label_4809d0:
    // 0x4809d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4809d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_4809d4:
    // 0x4809d4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x4809d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_4809d8:
    // 0x4809d8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4809d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4809dc:
    // 0x4809dc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x4809dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_4809e0:
    // 0x4809e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4809e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4809e4:
    // 0x4809e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4809e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4809e8:
    // 0x4809e8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x4809e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_4809ec:
    // 0x4809ec: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x4809ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_4809f0:
    // 0x4809f0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x4809f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_4809f4:
    // 0x4809f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4809f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4809f8:
    // 0x4809f8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x4809f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_4809fc:
    // 0x4809fc: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x4809fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_480a00:
    // 0x480a00: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x480a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_480a04:
    // 0x480a04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x480a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_480a08:
    // 0x480a08: 0xc11eeae  jal         func_47BAB8
label_480a0c:
    if (ctx->pc == 0x480A0Cu) {
        ctx->pc = 0x480A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A08u;
        // 0x480a0c: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x480A10u;
        goto label_480a10;
    }
    ctx->pc = 0x480A08u;
    SET_GPR_U32(ctx, 31, 0x480A10u);
    ctx->pc = 0x480A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480A08u;
    // 0x480a0c: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x480A08u, 0x480A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480A10u;
label_480a10:
    // 0x480a10: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_480a14:
    if (ctx->pc == 0x480A14u) {
        ctx->pc = 0x480A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A10u;
        // 0x480a14: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480A18u;
        goto label_480a18;
    }
    ctx->pc = 0x480A10u;
    {
        const bool branch_taken_0x480a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A10u;
        // 0x480a14: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480a10) {
            ctx->pc = 0x480C48u;
            goto label_480c48;
        }
    }
    ctx->pc = 0x480A18u;
label_480a18:
    // 0x480a18: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x480a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_480a1c:
    // 0x480a1c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x480a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_480a20:
    // 0x480a20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x480a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_480a24:
    // 0x480a24: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x480a24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_480a28:
    // 0x480a28: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
label_480a2c:
    if (ctx->pc == 0x480A2Cu) {
        ctx->pc = 0x480A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A28u;
        // 0x480a2c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480A30u;
        goto label_480a30;
    }
    ctx->pc = 0x480A28u;
    {
        const bool branch_taken_0x480a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x480A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A28u;
        // 0x480a2c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480a28) {
            ctx->pc = 0x480C24u;
            goto label_480c24;
        }
    }
    ctx->pc = 0x480A30u;
label_480a30:
    // 0x480a30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x480a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_480a34:
    // 0x480a34: 0xc11fb56  jal         func_47ED58
label_480a38:
    if (ctx->pc == 0x480A38u) {
        ctx->pc = 0x480A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A34u;
        // 0x480a38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480A3Cu;
        goto label_480a3c;
    }
    ctx->pc = 0x480A34u;
    SET_GPR_U32(ctx, 31, 0x480A3Cu);
    ctx->pc = 0x480A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480A34u;
    // 0x480a38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x480A34u, 0x480A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480A3Cu;
label_480a3c:
    // 0x480a3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x480a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_480a40:
    // 0x480a40: 0x144300a7  bne         $v0, $v1, . + 4 + (0xA7 << 2)
label_480a44:
    if (ctx->pc == 0x480A44u) {
        ctx->pc = 0x480A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A40u;
        // 0x480a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480A48u;
        goto label_480a48;
    }
    ctx->pc = 0x480A40u;
    {
        const bool branch_taken_0x480a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x480A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A40u;
        // 0x480a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480a40) {
            ctx->pc = 0x480CE0u;
            goto label_480ce0;
        }
    }
    ctx->pc = 0x480A48u;
label_480a48:
    // 0x480a48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x480a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_480a4c:
    // 0x480a4c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x480a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_480a50:
    // 0x480a50: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x480a50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_480a54:
    // 0x480a54: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x480a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_480a58:
    // 0x480a58: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x480a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_480a5c:
    // 0x480a5c: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x480a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_480a60:
    // 0x480a60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x480a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_480a64:
    // 0x480a64: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x480a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_480a68:
    // 0x480a68: 0x40f809  jalr        $v0
label_480a6c:
    if (ctx->pc == 0x480A6Cu) {
        ctx->pc = 0x480A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A68u;
        // 0x480a6c: 0x34a5000e  ori         $a1, $a1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x480A70u;
        goto label_480a70;
    }
    ctx->pc = 0x480A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480A70u);
        ctx->pc = 0x480A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A68u;
        // 0x480a6c: 0x34a5000e  ori         $a1, $a1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480A68u, 0x480A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480A70u;
label_480a70:
    // 0x480a70: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_480a74:
    if (ctx->pc == 0x480A74u) {
        ctx->pc = 0x480A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A70u;
        // 0x480a74: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480A78u;
        goto label_480a78;
    }
    ctx->pc = 0x480A70u;
    {
        const bool branch_taken_0x480a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x480A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A70u;
        // 0x480a74: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480a70) {
            ctx->pc = 0x480AA0u;
            goto label_480aa0;
        }
    }
    ctx->pc = 0x480A78u;
label_480a78:
    // 0x480a78: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x480a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_480a7c:
    // 0x480a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x480a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480a80:
    // 0x480a80: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x480a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_480a84:
    // 0x480a84: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x480a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_480a88:
    // 0x480a88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x480a88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_480a8c:
    // 0x480a8c: 0xc11eff2  jal         func_47BFC8
label_480a90:
    if (ctx->pc == 0x480A90u) {
        ctx->pc = 0x480A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A8Cu;
        // 0x480a90: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x480A94u;
        goto label_480a94;
    }
    ctx->pc = 0x480A8Cu;
    SET_GPR_U32(ctx, 31, 0x480A94u);
    ctx->pc = 0x480A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480A8Cu;
    // 0x480a90: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x480A8Cu, 0x480A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480A94u;
label_480a94:
    // 0x480a94: 0x1000006a  b           . + 4 + (0x6A << 2)
label_480a98:
    if (ctx->pc == 0x480A98u) {
        ctx->pc = 0x480A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A94u;
        // 0x480a98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480A9Cu;
        goto label_480a9c;
    }
    ctx->pc = 0x480A94u;
    {
        const bool branch_taken_0x480a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480A94u;
        // 0x480a98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480a94) {
            ctx->pc = 0x480C40u;
            goto label_480c40;
        }
    }
    ctx->pc = 0x480A9Cu;
label_480a9c:
    // 0x480a9c: 0x0  nop
    ctx->pc = 0x480a9cu;
    // NOP
label_480aa0:
    // 0x480aa0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x480aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_480aa4:
    // 0x480aa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x480aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_480aa8:
    // 0x480aa8: 0x18400071  blez        $v0, . + 4 + (0x71 << 2)
label_480aac:
    if (ctx->pc == 0x480AACu) {
        ctx->pc = 0x480AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480AA8u;
        // 0x480aac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480AB0u;
        goto label_480ab0;
    }
    ctx->pc = 0x480AA8u;
    {
        const bool branch_taken_0x480aa8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x480AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480AA8u;
        // 0x480aac: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480aa8) {
            ctx->pc = 0x480C70u;
            goto label_480c70;
        }
    }
    ctx->pc = 0x480AB0u;
label_480ab0:
    // 0x480ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x480ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_480ab4:
    // 0x480ab4: 0x0  nop
    ctx->pc = 0x480ab4u;
    // NOP
label_480ab8:
    // 0x480ab8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x480ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_480abc:
    // 0x480abc: 0xc11fb56  jal         func_47ED58
label_480ac0:
    if (ctx->pc == 0x480AC0u) {
        ctx->pc = 0x480AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480ABCu;
        // 0x480ac0: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480AC4u;
        goto label_480ac4;
    }
    ctx->pc = 0x480ABCu;
    SET_GPR_U32(ctx, 31, 0x480AC4u);
    ctx->pc = 0x480AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480ABCu;
    // 0x480ac0: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x480ABCu, 0x480AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480AC4u;
label_480ac4:
    // 0x480ac4: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x480ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_480ac8:
    // 0x480ac8: 0x14430064  bne         $v0, $v1, . + 4 + (0x64 << 2)
label_480acc:
    if (ctx->pc == 0x480ACCu) {
        ctx->pc = 0x480ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480AC8u;
        // 0x480acc: 0x26c3ad18  addiu       $v1, $s6, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480AD0u;
        goto label_480ad0;
    }
    ctx->pc = 0x480AC8u;
    {
        const bool branch_taken_0x480ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x480ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480AC8u;
        // 0x480acc: 0x26c3ad18  addiu       $v1, $s6, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480ac8) {
            ctx->pc = 0x480C5Cu;
            goto label_480c5c;
        }
    }
    ctx->pc = 0x480AD0u;
label_480ad0:
    // 0x480ad0: 0xc12107a  jal         func_4841E8
label_480ad4:
    if (ctx->pc == 0x480AD4u) {
        ctx->pc = 0x480AD8u;
        goto label_480ad8;
    }
    ctx->pc = 0x480AD0u;
    SET_GPR_U32(ctx, 31, 0x480AD8u);
    ctx->pc = 0x4841E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841E8u, 0x480AD0u, 0x480AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480AD8u;
label_480ad8:
    // 0x480ad8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x480ad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480adc:
    // 0x480adc: 0x1220005e  beqz        $s1, . + 4 + (0x5E << 2)
label_480ae0:
    if (ctx->pc == 0x480AE0u) {
        ctx->pc = 0x480AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480ADCu;
        // 0x480ae0: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480AE4u;
        goto label_480ae4;
    }
    ctx->pc = 0x480ADCu;
    {
        const bool branch_taken_0x480adc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x480AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480ADCu;
        // 0x480ae0: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480adc) {
            ctx->pc = 0x480C58u;
            goto label_480c58;
        }
    }
    ctx->pc = 0x480AE4u;
label_480ae4:
    // 0x480ae4: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x480ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_480ae8:
    // 0x480ae8: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x480ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_480aec:
    // 0x480aec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x480aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_480af0:
    // 0x480af0: 0xb2220017  sdl         $v0, 0x17($s1)
    ctx->pc = 0x480af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_480af4:
    // 0x480af4: 0xb6220010  sdr         $v0, 0x10($s1)
    ctx->pc = 0x480af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_480af8:
    // 0x480af8: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x480af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_480afc:
    // 0x480afc: 0x6ba60023  ldl         $a2, 0x23($sp)
    ctx->pc = 0x480afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_480b00:
    // 0x480b00: 0x6fa6001c  ldr         $a2, 0x1C($sp)
    ctx->pc = 0x480b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_480b04:
    // 0x480b04: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x480b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_480b08:
    // 0x480b08: 0xb2260027  sdl         $a2, 0x27($s1)
    ctx->pc = 0x480b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_480b0c:
    // 0x480b0c: 0xb6260020  sdr         $a2, 0x20($s1)
    ctx->pc = 0x480b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_480b10:
    // 0x480b10: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x480b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_480b14:
    // 0x480b14: 0x6ba5002f  ldl         $a1, 0x2F($sp)
    ctx->pc = 0x480b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_480b18:
    // 0x480b18: 0x6fa50028  ldr         $a1, 0x28($sp)
    ctx->pc = 0x480b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_480b1c:
    // 0x480b1c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x480b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_480b20:
    // 0x480b20: 0xb2250037  sdl         $a1, 0x37($s1)
    ctx->pc = 0x480b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_480b24:
    // 0x480b24: 0xb6250030  sdr         $a1, 0x30($s1)
    ctx->pc = 0x480b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_480b28:
    // 0x480b28: 0xae260038  sw          $a2, 0x38($s1)
    ctx->pc = 0x480b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 6));
label_480b2c:
    // 0x480b2c: 0xc7948270  lwc1        $f20, -0x7D90($gp)
    ctx->pc = 0x480b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_480b30:
    // 0x480b30: 0x6ba5003b  ldl         $a1, 0x3B($sp)
    ctx->pc = 0x480b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_480b34:
    // 0x480b34: 0x6fa50034  ldr         $a1, 0x34($sp)
    ctx->pc = 0x480b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_480b38:
    // 0x480b38: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x480b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_480b3c:
    // 0x480b3c: 0xb2250047  sdl         $a1, 0x47($s1)
    ctx->pc = 0x480b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_480b40:
    // 0x480b40: 0xb6250040  sdr         $a1, 0x40($s1)
    ctx->pc = 0x480b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_480b44:
    // 0x480b44: 0xae260048  sw          $a2, 0x48($s1)
    ctx->pc = 0x480b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 6));
label_480b48:
    // 0x480b48: 0xc11f55e  jal         func_47D578
label_480b4c:
    if (ctx->pc == 0x480B4Cu) {
        ctx->pc = 0x480B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480B48u;
        // 0x480b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480B50u;
        goto label_480b50;
    }
    ctx->pc = 0x480B48u;
    SET_GPR_U32(ctx, 31, 0x480B50u);
    ctx->pc = 0x480B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480B48u;
    // 0x480b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D578u, 0x480B48u, 0x480B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480B50u;
label_480b50:
    // 0x480b50: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x480b50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_480b54:
    // 0x480b54: 0x0  nop
    ctx->pc = 0x480b54u;
    // NOP
label_480b58:
    // 0x480b58: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_480b5c:
    if (ctx->pc == 0x480B5Cu) {
        ctx->pc = 0x480B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480B58u;
        // 0x480b5c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480B60u;
        goto label_480b60;
    }
    ctx->pc = 0x480B58u;
    {
        const bool branch_taken_0x480b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x480b58) {
            ctx->pc = 0x480B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480B58u;
            // 0x480b5c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x480BA0u;
            goto label_480ba0;
        }
    }
    ctx->pc = 0x480B60u;
label_480b60:
    // 0x480b60: 0xc11f588  jal         func_47D620
label_480b64:
    if (ctx->pc == 0x480B64u) {
        ctx->pc = 0x480B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480B60u;
        // 0x480b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480B68u;
        goto label_480b68;
    }
    ctx->pc = 0x480B60u;
    SET_GPR_U32(ctx, 31, 0x480B68u);
    ctx->pc = 0x480B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480B60u;
    // 0x480b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D620u, 0x480B60u, 0x480B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480B68u;
label_480b68:
    // 0x480b68: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x480b68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_480b6c:
    // 0x480b6c: 0x0  nop
    ctx->pc = 0x480b6cu;
    // NOP
label_480b70:
    // 0x480b70: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_480b74:
    if (ctx->pc == 0x480B74u) {
        ctx->pc = 0x480B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480B70u;
        // 0x480b74: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480B78u;
        goto label_480b78;
    }
    ctx->pc = 0x480B70u;
    {
        const bool branch_taken_0x480b70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x480b70) {
            ctx->pc = 0x480B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480B70u;
            // 0x480b74: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x480BA0u;
            goto label_480ba0;
        }
    }
    ctx->pc = 0x480B78u;
label_480b78:
    // 0x480b78: 0xc11f53e  jal         func_47D4F8
label_480b7c:
    if (ctx->pc == 0x480B7Cu) {
        ctx->pc = 0x480B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480B78u;
        // 0x480b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480B80u;
        goto label_480b80;
    }
    ctx->pc = 0x480B78u;
    SET_GPR_U32(ctx, 31, 0x480B80u);
    ctx->pc = 0x480B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480B78u;
    // 0x480b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D4F8u, 0x480B78u, 0x480B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480B80u;
label_480b80:
    // 0x480b80: 0xc7818274  lwc1        $f1, -0x7D8C($gp)
    ctx->pc = 0x480b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_480b84:
    // 0x480b84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x480b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_480b88:
    // 0x480b88: 0x0  nop
    ctx->pc = 0x480b88u;
    // NOP
label_480b8c:
    // 0x480b8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_480b90:
    if (ctx->pc == 0x480B90u) {
        ctx->pc = 0x480B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480B8Cu;
        // 0x480b90: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480B94u;
        goto label_480b94;
    }
    ctx->pc = 0x480B8Cu;
    {
        const bool branch_taken_0x480b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x480B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480B8Cu;
        // 0x480b90: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480b8c) {
            ctx->pc = 0x480BA0u;
            goto label_480ba0;
        }
    }
    ctx->pc = 0x480B94u;
label_480b94:
    // 0x480b94: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x480b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_480b98:
    // 0x480b98: 0x10000003  b           . + 4 + (0x3 << 2)
label_480b9c:
    if (ctx->pc == 0x480B9Cu) {
        ctx->pc = 0x480B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480B98u;
        // 0x480b9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x480BA0u;
        goto label_480ba0;
    }
    ctx->pc = 0x480B98u;
    {
        const bool branch_taken_0x480b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480B98u;
        // 0x480b9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x480b98) {
            ctx->pc = 0x480BA8u;
            goto label_480ba8;
        }
    }
    ctx->pc = 0x480BA0u;
label_480ba0:
    // 0x480ba0: 0x3c02fffd  lui         $v0, 0xFFFD
    ctx->pc = 0x480ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65533 << 16));
label_480ba4:
    // 0x480ba4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x480ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_480ba8:
    // 0x480ba8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x480ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_480bac:
    // 0x480bac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x480bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_480bb0:
    // 0x480bb0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x480bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_480bb4:
    // 0x480bb4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x480bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_480bb8:
    // 0x480bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x480bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_480bbc:
    // 0x480bbc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x480bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_480bc0:
    // 0x480bc0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x480bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_480bc4:
    // 0x480bc4: 0x480000f  bltz        $a0, . + 4 + (0xF << 2)
label_480bc8:
    if (ctx->pc == 0x480BC8u) {
        ctx->pc = 0x480BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480BC4u;
        // 0x480bc8: 0x8f82860c  lw          $v0, -0x79F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480BCCu;
        goto label_480bcc;
    }
    ctx->pc = 0x480BC4u;
    {
        const bool branch_taken_0x480bc4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x480BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480BC4u;
        // 0x480bc8: 0x8f82860c  lw          $v0, -0x79F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480bc4) {
            ctx->pc = 0x480C04u;
            goto label_480c04;
        }
    }
    ctx->pc = 0x480BCCu;
label_480bcc:
    // 0x480bcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_480bd0:
    if (ctx->pc == 0x480BD0u) {
        ctx->pc = 0x480BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480BCCu;
        // 0x480bd0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480BD4u;
        goto label_480bd4;
    }
    ctx->pc = 0x480BCCu;
    {
        const bool branch_taken_0x480bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480BCCu;
        // 0x480bd0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480bcc) {
            ctx->pc = 0x480BF0u;
            goto label_480bf0;
        }
    }
    ctx->pc = 0x480BD4u;
label_480bd4:
    // 0x480bd4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x480bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_480bd8:
    // 0x480bd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x480bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480bdc:
    // 0x480bdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x480bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_480be0:
    // 0x480be0: 0xc120fde  jal         func_483F78
label_480be4:
    if (ctx->pc == 0x480BE4u) {
        ctx->pc = 0x480BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480BE0u;
        // 0x480be4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480BE8u;
        goto label_480be8;
    }
    ctx->pc = 0x480BE0u;
    SET_GPR_U32(ctx, 31, 0x480BE8u);
    ctx->pc = 0x480BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480BE0u;
    // 0x480be4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483F78u, 0x480BE0u, 0x480BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480BE8u;
label_480be8:
    // 0x480be8: 0x10000007  b           . + 4 + (0x7 << 2)
label_480bec:
    if (ctx->pc == 0x480BECu) {
        ctx->pc = 0x480BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480BE8u;
        // 0x480bec: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480BF0u;
        goto label_480bf0;
    }
    ctx->pc = 0x480BE8u;
    {
        const bool branch_taken_0x480be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480BE8u;
        // 0x480bec: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480be8) {
            ctx->pc = 0x480C08u;
            goto label_480c08;
        }
    }
    ctx->pc = 0x480BF0u;
label_480bf0:
    // 0x480bf0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x480bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_480bf4:
    // 0x480bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x480bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480bf8:
    // 0x480bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x480bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_480bfc:
    // 0x480bfc: 0xc121026  jal         func_484098
label_480c00:
    if (ctx->pc == 0x480C00u) {
        ctx->pc = 0x480C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480BFCu;
        // 0x480c00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C04u;
        goto label_480c04;
    }
    ctx->pc = 0x480BFCu;
    SET_GPR_U32(ctx, 31, 0x480C04u);
    ctx->pc = 0x480C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480BFCu;
    // 0x480c00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484098u, 0x480BFCu, 0x480C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C04u;
label_480c04:
    // 0x480c04: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x480c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_480c08:
    // 0x480c08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x480c08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_480c0c:
    // 0x480c0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x480c0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480c10:
    // 0x480c10: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x480c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_480c14:
    // 0x480c14: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
label_480c18:
    if (ctx->pc == 0x480C18u) {
        ctx->pc = 0x480C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C14u;
        // 0x480c18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C1Cu;
        goto label_480c1c;
    }
    ctx->pc = 0x480C14u;
    {
        const bool branch_taken_0x480c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x480C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C14u;
        // 0x480c18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480c14) {
            ctx->pc = 0x480AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_480ab8;
        }
    }
    ctx->pc = 0x480C1Cu;
label_480c1c:
    // 0x480c1c: 0x10000014  b           . + 4 + (0x14 << 2)
label_480c20:
    if (ctx->pc == 0x480C20u) {
        ctx->pc = 0x480C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C1Cu;
        // 0x480c20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C24u;
        goto label_480c24;
    }
    ctx->pc = 0x480C1Cu;
    {
        const bool branch_taken_0x480c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C1Cu;
        // 0x480c20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480c1c) {
            ctx->pc = 0x480C70u;
            goto label_480c70;
        }
    }
    ctx->pc = 0x480C24u;
label_480c24:
    // 0x480c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x480c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480c28:
    // 0x480c28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x480c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_480c2c:
    // 0x480c2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x480c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_480c30:
    // 0x480c30: 0xc11eff2  jal         func_47BFC8
label_480c34:
    if (ctx->pc == 0x480C34u) {
        ctx->pc = 0x480C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C30u;
        // 0x480c34: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C38u;
        goto label_480c38;
    }
    ctx->pc = 0x480C30u;
    SET_GPR_U32(ctx, 31, 0x480C38u);
    ctx->pc = 0x480C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480C30u;
    // 0x480c34: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x480C30u, 0x480C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C38u;
label_480c38:
    // 0x480c38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x480c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_480c3c:
    // 0x480c3c: 0x0  nop
    ctx->pc = 0x480c3cu;
    // NOP
label_480c40:
    // 0x480c40: 0xc11f024  jal         func_47C090
label_480c44:
    if (ctx->pc == 0x480C44u) {
        ctx->pc = 0x480C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C40u;
        // 0x480c44: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C48u;
        goto label_480c48;
    }
    ctx->pc = 0x480C40u;
    SET_GPR_U32(ctx, 31, 0x480C48u);
    ctx->pc = 0x480C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480C40u;
    // 0x480c44: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x480C40u, 0x480C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C48u;
label_480c48:
    // 0x480c48: 0x10000025  b           . + 4 + (0x25 << 2)
label_480c4c:
    if (ctx->pc == 0x480C4Cu) {
        ctx->pc = 0x480C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C48u;
        // 0x480c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C50u;
        goto label_480c50;
    }
    ctx->pc = 0x480C48u;
    {
        const bool branch_taken_0x480c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C48u;
        // 0x480c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480c48) {
            ctx->pc = 0x480CE0u;
            goto label_480ce0;
        }
    }
    ctx->pc = 0x480C50u;
label_480c50:
    // 0x480c50: 0xc120f56  jal         func_483D58
label_480c54:
    if (ctx->pc == 0x480C54u) {
        ctx->pc = 0x480C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C50u;
        // 0x480c54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C58u;
        goto label_480c58;
    }
    ctx->pc = 0x480C50u;
    SET_GPR_U32(ctx, 31, 0x480C58u);
    ctx->pc = 0x480C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480C50u;
    // 0x480c54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483D58u, 0x480C50u, 0x480C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C58u;
label_480c58:
    // 0x480c58: 0x26c3ad18  addiu       $v1, $s6, -0x52E8
    ctx->pc = 0x480c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946072));
label_480c5c:
    // 0x480c5c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x480c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_480c60:
    // 0x480c60: 0x40f809  jalr        $v0
label_480c64:
    if (ctx->pc == 0x480C64u) {
        ctx->pc = 0x480C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C60u;
        // 0x480c64: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C68u;
        goto label_480c68;
    }
    ctx->pc = 0x480C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480C68u);
        ctx->pc = 0x480C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C60u;
        // 0x480c64: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480C60u, 0x480C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480C68u;
label_480c68:
    // 0x480c68: 0x1000001d  b           . + 4 + (0x1D << 2)
label_480c6c:
    if (ctx->pc == 0x480C6Cu) {
        ctx->pc = 0x480C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C68u;
        // 0x480c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C70u;
        goto label_480c70;
    }
    ctx->pc = 0x480C68u;
    {
        const bool branch_taken_0x480c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x480C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C68u;
        // 0x480c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480c68) {
            ctx->pc = 0x480CE0u;
            goto label_480ce0;
        }
    }
    ctx->pc = 0x480C70u;
label_480c70:
    // 0x480c70: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_480c74:
    if (ctx->pc == 0x480C74u) {
        ctx->pc = 0x480C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C70u;
        // 0x480c74: 0x3c150053  lui         $s5, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C78u;
        goto label_480c78;
    }
    ctx->pc = 0x480C70u;
    {
        const bool branch_taken_0x480c70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x480C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C70u;
        // 0x480c74: 0x3c150053  lui         $s5, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480c70) {
            ctx->pc = 0x480CDCu;
            goto label_480cdc;
        }
    }
    ctx->pc = 0x480C78u;
label_480c78:
    // 0x480c78: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x480c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_480c7c:
    // 0x480c7c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x480c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_480c80:
    // 0x480c80: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x480c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_480c84:
    // 0x480c84: 0x26a4ebc0  addiu       $a0, $s5, -0x1440
    ctx->pc = 0x480c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962112));
label_480c88:
    // 0x480c88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x480c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_480c8c:
    // 0x480c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x480c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_480c90:
    // 0x480c90: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x480c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_480c94:
    // 0x480c94: 0xc11fd22  jal         func_47F488
label_480c98:
    if (ctx->pc == 0x480C98u) {
        ctx->pc = 0x480C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C94u;
        // 0x480c98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480C9Cu;
        goto label_480c9c;
    }
    ctx->pc = 0x480C94u;
    SET_GPR_U32(ctx, 31, 0x480C9Cu);
    ctx->pc = 0x480C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480C94u;
    // 0x480c98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F488u, 0x480C94u, 0x480C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C9Cu;
label_480c9c:
    // 0x480c9c: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
label_480ca0:
    if (ctx->pc == 0x480CA0u) {
        ctx->pc = 0x480CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480C9Cu;
        // 0x480ca0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480CA4u;
        goto label_480ca4;
    }
    ctx->pc = 0x480C9Cu;
    {
        const bool branch_taken_0x480c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480c9c) {
            ctx->pc = 0x480CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480C9Cu;
            // 0x480ca0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x480C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_480c50;
        }
    }
    ctx->pc = 0x480CA4u;
label_480ca4:
    // 0x480ca4: 0xc121048  jal         func_484120
label_480ca8:
    if (ctx->pc == 0x480CA8u) {
        ctx->pc = 0x480CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480CA4u;
        // 0x480ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480CACu;
        goto label_480cac;
    }
    ctx->pc = 0x480CA4u;
    SET_GPR_U32(ctx, 31, 0x480CACu);
    ctx->pc = 0x480CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480CA4u;
    // 0x480ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484120u, 0x480CA4u, 0x480CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480CACu;
label_480cac:
    // 0x480cac: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_480cb0:
    if (ctx->pc == 0x480CB0u) {
        ctx->pc = 0x480CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480CACu;
        // 0x480cb0: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480CB4u;
        goto label_480cb4;
    }
    ctx->pc = 0x480CACu;
    {
        const bool branch_taken_0x480cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x480CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480CACu;
        // 0x480cb0: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480cac) {
            ctx->pc = 0x480CCCu;
            goto label_480ccc;
        }
    }
    ctx->pc = 0x480CB4u;
label_480cb4:
    // 0x480cb4: 0x8f82860c  lw          $v0, -0x79F4($gp)
    ctx->pc = 0x480cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936076)));
label_480cb8:
    // 0x480cb8: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
label_480cbc:
    if (ctx->pc == 0x480CBCu) {
        ctx->pc = 0x480CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480CB8u;
        // 0x480cbc: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480CC0u;
        goto label_480cc0;
    }
    ctx->pc = 0x480CB8u;
    {
        const bool branch_taken_0x480cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x480CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480CB8u;
        // 0x480cbc: 0x8fa20058  lw          $v0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480cb8) {
            ctx->pc = 0x480CCCu;
            goto label_480ccc;
        }
    }
    ctx->pc = 0x480CC0u;
label_480cc0:
    // 0x480cc0: 0xc12105a  jal         func_484168
label_480cc4:
    if (ctx->pc == 0x480CC4u) {
        ctx->pc = 0x480CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480CC0u;
        // 0x480cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480CC8u;
        goto label_480cc8;
    }
    ctx->pc = 0x480CC0u;
    SET_GPR_U32(ctx, 31, 0x480CC8u);
    ctx->pc = 0x480CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x480CC0u;
    // 0x480cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484168u, 0x480CC0u, 0x480CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480CC8u;
label_480cc8:
    // 0x480cc8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x480cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_480ccc:
    // 0x480ccc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x480cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_480cd0:
    // 0x480cd0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x480cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_480cd4:
    // 0x480cd4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_480cd8:
    if (ctx->pc == 0x480CD8u) {
        ctx->pc = 0x480CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480CD4u;
        // 0x480cd8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480CDCu;
        goto label_480cdc;
    }
    ctx->pc = 0x480CD4u;
    {
        const bool branch_taken_0x480cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480cd4) {
            ctx->pc = 0x480CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480CD4u;
            // 0x480cd8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x480C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_480c80;
        }
    }
    ctx->pc = 0x480CDCu;
label_480cdc:
    // 0x480cdc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x480cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_480ce0:
    // 0x480ce0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x480ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_480ce4:
    // 0x480ce4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x480ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_480ce8:
    // 0x480ce8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x480ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_480cec:
    // 0x480cec: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x480cecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_480cf0:
    // 0x480cf0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x480cf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_480cf4:
    // 0x480cf4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x480cf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_480cf8:
    // 0x480cf8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x480cf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_480cfc:
    // 0x480cfc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x480cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_480d00:
    // 0x480d00: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x480d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_480d04:
    // 0x480d04: 0x3e00008  jr          $ra
label_480d08:
    if (ctx->pc == 0x480D08u) {
        ctx->pc = 0x480D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480D04u;
        // 0x480d08: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x480D0Cu;
        goto label_480d0c;
    }
    ctx->pc = 0x480D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x480D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480D04u;
        // 0x480d08: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480D0Cu;
label_480d0c:
    // 0x480d0c: 0x0  nop
    ctx->pc = 0x480d0cu;
    // NOP
    ctx->pc = 0x480d10u;
}
