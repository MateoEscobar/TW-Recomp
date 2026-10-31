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

// Function: sub_00291960
// Address: 0x291960 - 0x291d08
void sub_00291960_0x291960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291960_0x291960");
#endif

    switch (ctx->pc) {
        case 0x291960u: goto label_291960;
        case 0x291964u: goto label_291964;
        case 0x291968u: goto label_291968;
        case 0x29196cu: goto label_29196c;
        case 0x291970u: goto label_291970;
        case 0x291974u: goto label_291974;
        case 0x291978u: goto label_291978;
        case 0x29197cu: goto label_29197c;
        case 0x291980u: goto label_291980;
        case 0x291984u: goto label_291984;
        case 0x291988u: goto label_291988;
        case 0x29198cu: goto label_29198c;
        case 0x291990u: goto label_291990;
        case 0x291994u: goto label_291994;
        case 0x291998u: goto label_291998;
        case 0x29199cu: goto label_29199c;
        case 0x2919a0u: goto label_2919a0;
        case 0x2919a4u: goto label_2919a4;
        case 0x2919a8u: goto label_2919a8;
        case 0x2919acu: goto label_2919ac;
        case 0x2919b0u: goto label_2919b0;
        case 0x2919b4u: goto label_2919b4;
        case 0x2919b8u: goto label_2919b8;
        case 0x2919bcu: goto label_2919bc;
        case 0x2919c0u: goto label_2919c0;
        case 0x2919c4u: goto label_2919c4;
        case 0x2919c8u: goto label_2919c8;
        case 0x2919ccu: goto label_2919cc;
        case 0x2919d0u: goto label_2919d0;
        case 0x2919d4u: goto label_2919d4;
        case 0x2919d8u: goto label_2919d8;
        case 0x2919dcu: goto label_2919dc;
        case 0x2919e0u: goto label_2919e0;
        case 0x2919e4u: goto label_2919e4;
        case 0x2919e8u: goto label_2919e8;
        case 0x2919ecu: goto label_2919ec;
        case 0x2919f0u: goto label_2919f0;
        case 0x2919f4u: goto label_2919f4;
        case 0x2919f8u: goto label_2919f8;
        case 0x2919fcu: goto label_2919fc;
        case 0x291a00u: goto label_291a00;
        case 0x291a04u: goto label_291a04;
        case 0x291a08u: goto label_291a08;
        case 0x291a0cu: goto label_291a0c;
        case 0x291a10u: goto label_291a10;
        case 0x291a14u: goto label_291a14;
        case 0x291a18u: goto label_291a18;
        case 0x291a1cu: goto label_291a1c;
        case 0x291a20u: goto label_291a20;
        case 0x291a24u: goto label_291a24;
        case 0x291a28u: goto label_291a28;
        case 0x291a2cu: goto label_291a2c;
        case 0x291a30u: goto label_291a30;
        case 0x291a34u: goto label_291a34;
        case 0x291a38u: goto label_291a38;
        case 0x291a3cu: goto label_291a3c;
        case 0x291a40u: goto label_291a40;
        case 0x291a44u: goto label_291a44;
        case 0x291a48u: goto label_291a48;
        case 0x291a4cu: goto label_291a4c;
        case 0x291a50u: goto label_291a50;
        case 0x291a54u: goto label_291a54;
        case 0x291a58u: goto label_291a58;
        case 0x291a5cu: goto label_291a5c;
        case 0x291a60u: goto label_291a60;
        case 0x291a64u: goto label_291a64;
        case 0x291a68u: goto label_291a68;
        case 0x291a6cu: goto label_291a6c;
        case 0x291a70u: goto label_291a70;
        case 0x291a74u: goto label_291a74;
        case 0x291a78u: goto label_291a78;
        case 0x291a7cu: goto label_291a7c;
        case 0x291a80u: goto label_291a80;
        case 0x291a84u: goto label_291a84;
        case 0x291a88u: goto label_291a88;
        case 0x291a8cu: goto label_291a8c;
        case 0x291a90u: goto label_291a90;
        case 0x291a94u: goto label_291a94;
        case 0x291a98u: goto label_291a98;
        case 0x291a9cu: goto label_291a9c;
        case 0x291aa0u: goto label_291aa0;
        case 0x291aa4u: goto label_291aa4;
        case 0x291aa8u: goto label_291aa8;
        case 0x291aacu: goto label_291aac;
        case 0x291ab0u: goto label_291ab0;
        case 0x291ab4u: goto label_291ab4;
        case 0x291ab8u: goto label_291ab8;
        case 0x291abcu: goto label_291abc;
        case 0x291ac0u: goto label_291ac0;
        case 0x291ac4u: goto label_291ac4;
        case 0x291ac8u: goto label_291ac8;
        case 0x291accu: goto label_291acc;
        case 0x291ad0u: goto label_291ad0;
        case 0x291ad4u: goto label_291ad4;
        case 0x291ad8u: goto label_291ad8;
        case 0x291adcu: goto label_291adc;
        case 0x291ae0u: goto label_291ae0;
        case 0x291ae4u: goto label_291ae4;
        case 0x291ae8u: goto label_291ae8;
        case 0x291aecu: goto label_291aec;
        case 0x291af0u: goto label_291af0;
        case 0x291af4u: goto label_291af4;
        case 0x291af8u: goto label_291af8;
        case 0x291afcu: goto label_291afc;
        case 0x291b00u: goto label_291b00;
        case 0x291b04u: goto label_291b04;
        case 0x291b08u: goto label_291b08;
        case 0x291b0cu: goto label_291b0c;
        case 0x291b10u: goto label_291b10;
        case 0x291b14u: goto label_291b14;
        case 0x291b18u: goto label_291b18;
        case 0x291b1cu: goto label_291b1c;
        case 0x291b20u: goto label_291b20;
        case 0x291b24u: goto label_291b24;
        case 0x291b28u: goto label_291b28;
        case 0x291b2cu: goto label_291b2c;
        case 0x291b30u: goto label_291b30;
        case 0x291b34u: goto label_291b34;
        case 0x291b38u: goto label_291b38;
        case 0x291b3cu: goto label_291b3c;
        case 0x291b40u: goto label_291b40;
        case 0x291b44u: goto label_291b44;
        case 0x291b48u: goto label_291b48;
        case 0x291b4cu: goto label_291b4c;
        case 0x291b50u: goto label_291b50;
        case 0x291b54u: goto label_291b54;
        case 0x291b58u: goto label_291b58;
        case 0x291b5cu: goto label_291b5c;
        case 0x291b60u: goto label_291b60;
        case 0x291b64u: goto label_291b64;
        case 0x291b68u: goto label_291b68;
        case 0x291b6cu: goto label_291b6c;
        case 0x291b70u: goto label_291b70;
        case 0x291b74u: goto label_291b74;
        case 0x291b78u: goto label_291b78;
        case 0x291b7cu: goto label_291b7c;
        case 0x291b80u: goto label_291b80;
        case 0x291b84u: goto label_291b84;
        case 0x291b88u: goto label_291b88;
        case 0x291b8cu: goto label_291b8c;
        case 0x291b90u: goto label_291b90;
        case 0x291b94u: goto label_291b94;
        case 0x291b98u: goto label_291b98;
        case 0x291b9cu: goto label_291b9c;
        case 0x291ba0u: goto label_291ba0;
        case 0x291ba4u: goto label_291ba4;
        case 0x291ba8u: goto label_291ba8;
        case 0x291bacu: goto label_291bac;
        case 0x291bb0u: goto label_291bb0;
        case 0x291bb4u: goto label_291bb4;
        case 0x291bb8u: goto label_291bb8;
        case 0x291bbcu: goto label_291bbc;
        case 0x291bc0u: goto label_291bc0;
        case 0x291bc4u: goto label_291bc4;
        case 0x291bc8u: goto label_291bc8;
        case 0x291bccu: goto label_291bcc;
        case 0x291bd0u: goto label_291bd0;
        case 0x291bd4u: goto label_291bd4;
        case 0x291bd8u: goto label_291bd8;
        case 0x291bdcu: goto label_291bdc;
        case 0x291be0u: goto label_291be0;
        case 0x291be4u: goto label_291be4;
        case 0x291be8u: goto label_291be8;
        case 0x291becu: goto label_291bec;
        case 0x291bf0u: goto label_291bf0;
        case 0x291bf4u: goto label_291bf4;
        case 0x291bf8u: goto label_291bf8;
        case 0x291bfcu: goto label_291bfc;
        case 0x291c00u: goto label_291c00;
        case 0x291c04u: goto label_291c04;
        case 0x291c08u: goto label_291c08;
        case 0x291c0cu: goto label_291c0c;
        case 0x291c10u: goto label_291c10;
        case 0x291c14u: goto label_291c14;
        case 0x291c18u: goto label_291c18;
        case 0x291c1cu: goto label_291c1c;
        case 0x291c20u: goto label_291c20;
        case 0x291c24u: goto label_291c24;
        case 0x291c28u: goto label_291c28;
        case 0x291c2cu: goto label_291c2c;
        case 0x291c30u: goto label_291c30;
        case 0x291c34u: goto label_291c34;
        case 0x291c38u: goto label_291c38;
        case 0x291c3cu: goto label_291c3c;
        case 0x291c40u: goto label_291c40;
        case 0x291c44u: goto label_291c44;
        case 0x291c48u: goto label_291c48;
        case 0x291c4cu: goto label_291c4c;
        case 0x291c50u: goto label_291c50;
        case 0x291c54u: goto label_291c54;
        case 0x291c58u: goto label_291c58;
        case 0x291c5cu: goto label_291c5c;
        case 0x291c60u: goto label_291c60;
        case 0x291c64u: goto label_291c64;
        case 0x291c68u: goto label_291c68;
        case 0x291c6cu: goto label_291c6c;
        case 0x291c70u: goto label_291c70;
        case 0x291c74u: goto label_291c74;
        case 0x291c78u: goto label_291c78;
        case 0x291c7cu: goto label_291c7c;
        case 0x291c80u: goto label_291c80;
        case 0x291c84u: goto label_291c84;
        case 0x291c88u: goto label_291c88;
        case 0x291c8cu: goto label_291c8c;
        case 0x291c90u: goto label_291c90;
        case 0x291c94u: goto label_291c94;
        case 0x291c98u: goto label_291c98;
        case 0x291c9cu: goto label_291c9c;
        case 0x291ca0u: goto label_291ca0;
        case 0x291ca4u: goto label_291ca4;
        case 0x291ca8u: goto label_291ca8;
        case 0x291cacu: goto label_291cac;
        case 0x291cb0u: goto label_291cb0;
        case 0x291cb4u: goto label_291cb4;
        case 0x291cb8u: goto label_291cb8;
        case 0x291cbcu: goto label_291cbc;
        case 0x291cc0u: goto label_291cc0;
        case 0x291cc4u: goto label_291cc4;
        case 0x291cc8u: goto label_291cc8;
        case 0x291cccu: goto label_291ccc;
        case 0x291cd0u: goto label_291cd0;
        case 0x291cd4u: goto label_291cd4;
        case 0x291cd8u: goto label_291cd8;
        case 0x291cdcu: goto label_291cdc;
        case 0x291ce0u: goto label_291ce0;
        case 0x291ce4u: goto label_291ce4;
        case 0x291ce8u: goto label_291ce8;
        case 0x291cecu: goto label_291cec;
        case 0x291cf0u: goto label_291cf0;
        case 0x291cf4u: goto label_291cf4;
        case 0x291cf8u: goto label_291cf8;
        case 0x291cfcu: goto label_291cfc;
        case 0x291d00u: goto label_291d00;
        case 0x291d04u: goto label_291d04;
        default: break;
    }

    ctx->pc = 0x291960u;

label_291960:
    // 0x291960: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x291960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_291964:
    // 0x291964: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x291964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_291968:
    // 0x291968: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x291968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_29196c:
    // 0x29196c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29196cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_291970:
    // 0x291970: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x291970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_291974:
    // 0x291974: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x291974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_291978:
    // 0x291978: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x291978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_29197c:
    // 0x29197c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_291980:
    // 0x291980: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x291980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_291984:
    // 0x291984: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x291984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_291988:
    // 0x291988: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_29198c:
    if (ctx->pc == 0x29198Cu) {
        ctx->pc = 0x29198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291988u;
        // 0x29198c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291990u;
        goto label_291990;
    }
    ctx->pc = 0x291988u;
    {
        const bool branch_taken_0x291988 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291988u;
        // 0x29198c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291988) {
            ctx->pc = 0x2919A0u;
            goto label_2919a0;
        }
    }
    ctx->pc = 0x291990u;
label_291990:
    // 0x291990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_291994:
    // 0x291994: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x291994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_291998:
    // 0x291998: 0x10000002  b           . + 4 + (0x2 << 2)
label_29199c:
    if (ctx->pc == 0x29199Cu) {
        ctx->pc = 0x29199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291998u;
        // 0x29199c: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2919A0u;
        goto label_2919a0;
    }
    ctx->pc = 0x291998u;
    {
        const bool branch_taken_0x291998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291998u;
        // 0x29199c: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291998) {
            ctx->pc = 0x2919A4u;
            goto label_2919a4;
        }
    }
    ctx->pc = 0x2919A0u;
label_2919a0:
    // 0x2919a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2919a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2919a4:
    // 0x2919a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2919a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2919a8:
    // 0x2919a8: 0xc0a3658  jal         func_28D960
label_2919ac:
    if (ctx->pc == 0x2919ACu) {
        ctx->pc = 0x2919ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919A8u;
        // 0x2919ac: 0x2405009a  addiu       $a1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2919B0u;
        goto label_2919b0;
    }
    ctx->pc = 0x2919A8u;
    SET_GPR_U32(ctx, 31, 0x2919B0u);
    ctx->pc = 0x2919ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919A8u;
    // 0x2919ac: 0x2405009a  addiu       $a1, $zero, 0x9A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2919A8u, 0x2919B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919B0u;
label_2919b0:
    // 0x2919b0: 0x440002b  bltz        $v0, . + 4 + (0x2B << 2)
label_2919b4:
    if (ctx->pc == 0x2919B4u) {
        ctx->pc = 0x2919B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919B0u;
        // 0x2919b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2919B8u;
        goto label_2919b8;
    }
    ctx->pc = 0x2919B0u;
    {
        const bool branch_taken_0x2919b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2919B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919B0u;
        // 0x2919b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2919b0) {
            ctx->pc = 0x291A60u;
            goto label_291a60;
        }
    }
    ctx->pc = 0x2919B8u;
label_2919b8:
    // 0x2919b8: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x2919b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2919bc:
    // 0x2919bc: 0xc0a44ac  jal         func_2912B0
label_2919c0:
    if (ctx->pc == 0x2919C0u) {
        ctx->pc = 0x2919C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919BCu;
        // 0x2919c0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2919C4u;
        goto label_2919c4;
    }
    ctx->pc = 0x2919BCu;
    SET_GPR_U32(ctx, 31, 0x2919C4u);
    ctx->pc = 0x2919C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919BCu;
    // 0x2919c0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x2919BCu, 0x2919C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919C4u;
label_2919c4:
    // 0x2919c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2919c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2919c8:
    // 0x2919c8: 0x524000c7  beql        $s2, $zero, . + 4 + (0xC7 << 2)
label_2919cc:
    if (ctx->pc == 0x2919CCu) {
        ctx->pc = 0x2919CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919C8u;
        // 0x2919cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2919D0u;
        goto label_2919d0;
    }
    ctx->pc = 0x2919C8u;
    {
        const bool branch_taken_0x2919c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2919c8) {
            ctx->pc = 0x2919CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2919C8u;
            // 0x2919cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x2919D0u;
label_2919d0:
    // 0x2919d0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2919d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2919d4:
    // 0x2919d4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2919d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2919d8:
    // 0x2919d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2919d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2919dc:
    // 0x2919dc: 0x40f809  jalr        $v0
label_2919e0:
    if (ctx->pc == 0x2919E0u) {
        ctx->pc = 0x2919E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919DCu;
        // 0x2919e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2919E4u;
        goto label_2919e4;
    }
    ctx->pc = 0x2919DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2919E4u);
        ctx->pc = 0x2919E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919DCu;
        // 0x2919e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2919DCu, 0x2919E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2919E4u;
label_2919e4:
    // 0x2919e4: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x2919e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
label_2919e8:
    // 0x2919e8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2919ec:
    if (ctx->pc == 0x2919ECu) {
        ctx->pc = 0x2919F0u;
        goto label_2919f0;
    }
    ctx->pc = 0x2919E8u;
    {
        const bool branch_taken_0x2919e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2919e8) {
            ctx->pc = 0x2919F8u;
            goto label_2919f8;
        }
    }
    ctx->pc = 0x2919F0u;
label_2919f0:
    // 0x2919f0: 0xc0a35f6  jal         func_28D7D8
label_2919f4:
    if (ctx->pc == 0x2919F4u) {
        ctx->pc = 0x2919F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919F0u;
        // 0x2919f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2919F8u;
        goto label_2919f8;
    }
    ctx->pc = 0x2919F0u;
    SET_GPR_U32(ctx, 31, 0x2919F8u);
    ctx->pc = 0x2919F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919F0u;
    // 0x2919f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x2919F0u, 0x2919F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919F8u;
label_2919f8:
    // 0x2919f8: 0xc0a4e54  jal         func_293950
label_2919fc:
    if (ctx->pc == 0x2919FCu) {
        ctx->pc = 0x291A00u;
        goto label_291a00;
    }
    ctx->pc = 0x2919F8u;
    SET_GPR_U32(ctx, 31, 0x291A00u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2919F8u, 0x291A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A00u;
label_291a00:
    // 0x291a00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x291a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291a04:
    // 0x291a04: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_291a08:
    if (ctx->pc == 0x291A08u) {
        ctx->pc = 0x291A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A04u;
        // 0x291a08: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A0Cu;
        goto label_291a0c;
    }
    ctx->pc = 0x291A04u;
    {
        const bool branch_taken_0x291a04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x291A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A04u;
        // 0x291a08: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a04) {
            ctx->pc = 0x291A4Cu;
            goto label_291a4c;
        }
    }
    ctx->pc = 0x291A0Cu;
label_291a0c:
    // 0x291a0c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x291a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_291a10:
    // 0x291a10: 0x86500092  lh          $s0, 0x92($s2)
    ctx->pc = 0x291a10u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_291a14:
    // 0x291a14: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x291a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_291a18:
    // 0x291a18: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x291a18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
label_291a1c:
    // 0x291a1c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x291a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_291a20:
    // 0x291a20: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x291a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_291a24:
    // 0x291a24: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x291a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_291a28:
    // 0x291a28: 0x40f809  jalr        $v0
label_291a2c:
    if (ctx->pc == 0x291A2Cu) {
        ctx->pc = 0x291A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A28u;
        // 0x291a2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A30u;
        goto label_291a30;
    }
    ctx->pc = 0x291A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291A30u);
        ctx->pc = 0x291A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A28u;
        // 0x291a2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291A28u, 0x291A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291A30u;
label_291a30:
    // 0x291a30: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x291a30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_291a34:
    // 0x291a34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x291a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291a38:
    // 0x291a38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x291a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291a3c:
    // 0x291a3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x291a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_291a40:
    // 0x291a40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291a44:
    // 0x291a44: 0xc0b6138  jal         func_2D84E0
label_291a48:
    if (ctx->pc == 0x291A48u) {
        ctx->pc = 0x291A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A44u;
        // 0x291a48: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A4Cu;
        goto label_291a4c;
    }
    ctx->pc = 0x291A44u;
    SET_GPR_U32(ctx, 31, 0x291A4Cu);
    ctx->pc = 0x291A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A44u;
    // 0x291a48: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D84E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D84E0u, 0x291A44u, 0x291A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A4Cu;
label_291a4c:
    // 0x291a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291a50:
    // 0x291a50: 0xc0a35d6  jal         func_28D758
label_291a54:
    if (ctx->pc == 0x291A54u) {
        ctx->pc = 0x291A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A50u;
        // 0x291a54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A58u;
        goto label_291a58;
    }
    ctx->pc = 0x291A50u;
    SET_GPR_U32(ctx, 31, 0x291A58u);
    ctx->pc = 0x291A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A50u;
    // 0x291a54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x291A50u, 0x291A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A58u;
label_291a58:
    // 0x291a58: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_291a5c:
    if (ctx->pc == 0x291A5Cu) {
        ctx->pc = 0x291A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A58u;
        // 0x291a5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A60u;
        goto label_291a60;
    }
    ctx->pc = 0x291A58u;
    {
        const bool branch_taken_0x291a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A58u;
        // 0x291a5c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291a58) {
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291A60u;
label_291a60:
    // 0x291a60: 0x8e22021c  lw          $v0, 0x21C($s1)
    ctx->pc = 0x291a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
label_291a64:
    // 0x291a64: 0x504000a0  beql        $v0, $zero, . + 4 + (0xA0 << 2)
label_291a68:
    if (ctx->pc == 0x291A68u) {
        ctx->pc = 0x291A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A64u;
        // 0x291a68: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A6Cu;
        goto label_291a6c;
    }
    ctx->pc = 0x291A64u;
    {
        const bool branch_taken_0x291a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291a64) {
            ctx->pc = 0x291A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A64u;
            // 0x291a68: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291A6Cu;
label_291a6c:
    // 0x291a6c: 0xc0a2acc  jal         func_28AB30
label_291a70:
    if (ctx->pc == 0x291A70u) {
        ctx->pc = 0x291A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A6Cu;
        // 0x291a70: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A74u;
        goto label_291a74;
    }
    ctx->pc = 0x291A6Cu;
    SET_GPR_U32(ctx, 31, 0x291A74u);
    ctx->pc = 0x291A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A6Cu;
    // 0x291a70: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x291A6Cu, 0x291A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A74u;
label_291a74:
    // 0x291a74: 0x5053009c  beql        $v0, $s3, . + 4 + (0x9C << 2)
label_291a78:
    if (ctx->pc == 0x291A78u) {
        ctx->pc = 0x291A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A74u;
        // 0x291a78: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A7Cu;
        goto label_291a7c;
    }
    ctx->pc = 0x291A74u;
    {
        const bool branch_taken_0x291a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x291a74) {
            ctx->pc = 0x291A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A74u;
            // 0x291a78: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291A7Cu;
label_291a7c:
    // 0x291a7c: 0xc0e409a  jal         func_390268
label_291a80:
    if (ctx->pc == 0x291A80u) {
        ctx->pc = 0x291A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A7Cu;
        // 0x291a80: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A84u;
        goto label_291a84;
    }
    ctx->pc = 0x291A7Cu;
    SET_GPR_U32(ctx, 31, 0x291A84u);
    ctx->pc = 0x291A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A7Cu;
    // 0x291a80: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x291A7Cu, 0x291A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A84u;
label_291a84:
    // 0x291a84: 0x54400098  bnel        $v0, $zero, . + 4 + (0x98 << 2)
label_291a88:
    if (ctx->pc == 0x291A88u) {
        ctx->pc = 0x291A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A84u;
        // 0x291a88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A8Cu;
        goto label_291a8c;
    }
    ctx->pc = 0x291A84u;
    {
        const bool branch_taken_0x291a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291a84) {
            ctx->pc = 0x291A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A84u;
            // 0x291a88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291A8Cu;
label_291a8c:
    // 0x291a8c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x291a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_291a90:
    // 0x291a90: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x291a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_291a94:
    // 0x291a94: 0xc089998  jal         func_226660
label_291a98:
    if (ctx->pc == 0x291A98u) {
        ctx->pc = 0x291A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A94u;
        // 0x291a98: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291A9Cu;
        goto label_291a9c;
    }
    ctx->pc = 0x291A94u;
    SET_GPR_U32(ctx, 31, 0x291A9Cu);
    ctx->pc = 0x291A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291A94u;
    // 0x291a98: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x291A94u, 0x291A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291A9Cu;
label_291a9c:
    // 0x291a9c: 0x54400092  bnel        $v0, $zero, . + 4 + (0x92 << 2)
label_291aa0:
    if (ctx->pc == 0x291AA0u) {
        ctx->pc = 0x291AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291A9Cu;
        // 0x291aa0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291AA4u;
        goto label_291aa4;
    }
    ctx->pc = 0x291A9Cu;
    {
        const bool branch_taken_0x291a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291a9c) {
            ctx->pc = 0x291AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291A9Cu;
            // 0x291aa0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291AA4u;
label_291aa4:
    // 0x291aa4: 0xc08a08a  jal         func_228228
label_291aa8:
    if (ctx->pc == 0x291AA8u) {
        ctx->pc = 0x291AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AA4u;
        // 0x291aa8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291AACu;
        goto label_291aac;
    }
    ctx->pc = 0x291AA4u;
    SET_GPR_U32(ctx, 31, 0x291AACu);
    ctx->pc = 0x291AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291AA4u;
    // 0x291aa8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x291AA4u, 0x291AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291AACu;
label_291aac:
    // 0x291aac: 0x5440008e  bnel        $v0, $zero, . + 4 + (0x8E << 2)
label_291ab0:
    if (ctx->pc == 0x291AB0u) {
        ctx->pc = 0x291AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AACu;
        // 0x291ab0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291AB4u;
        goto label_291ab4;
    }
    ctx->pc = 0x291AACu;
    {
        const bool branch_taken_0x291aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291aac) {
            ctx->pc = 0x291AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291AACu;
            // 0x291ab0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291AB4u;
label_291ab4:
    // 0x291ab4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_291ab8:
    if (ctx->pc == 0x291AB8u) {
        ctx->pc = 0x291AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AB4u;
        // 0x291ab8: 0x8e460024  lw          $a2, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291ABCu;
        goto label_291abc;
    }
    ctx->pc = 0x291AB4u;
    {
        const bool branch_taken_0x291ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ab4) {
            ctx->pc = 0x291AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291AB4u;
            // 0x291ab8: 0x8e460024  lw          $a2, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291AF4u;
            goto label_291af4;
        }
    }
    ctx->pc = 0x291ABCu;
label_291abc:
    // 0x291abc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x291abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_291ac0:
    // 0x291ac0: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x291ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_291ac4:
    // 0x291ac4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x291ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_291ac8:
    // 0x291ac8: 0x40f809  jalr        $v0
label_291acc:
    if (ctx->pc == 0x291ACCu) {
        ctx->pc = 0x291ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AC8u;
        // 0x291acc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291AD0u;
        goto label_291ad0;
    }
    ctx->pc = 0x291AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291AD0u);
        ctx->pc = 0x291ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AC8u;
        // 0x291acc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291AC8u, 0x291AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291AD0u;
label_291ad0:
    // 0x291ad0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x291ad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291ad4:
    // 0x291ad4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x291ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_291ad8:
    // 0x291ad8: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
label_291adc:
    if (ctx->pc == 0x291ADCu) {
        ctx->pc = 0x291ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AD8u;
        // 0x291adc: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291AE0u;
        goto label_291ae0;
    }
    ctx->pc = 0x291AD8u;
    {
        const bool branch_taken_0x291ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AD8u;
        // 0x291adc: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ad8) {
            ctx->pc = 0x291CE4u;
            goto label_291ce4;
        }
    }
    ctx->pc = 0x291AE0u;
label_291ae0:
    // 0x291ae0: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
label_291ae4:
    if (ctx->pc == 0x291AE4u) {
        ctx->pc = 0x291AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AE0u;
        // 0x291ae4: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291AE8u;
        goto label_291ae8;
    }
    ctx->pc = 0x291AE0u;
    {
        const bool branch_taken_0x291ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AE0u;
        // 0x291ae4: 0x2402003f  addiu       $v0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ae0) {
            ctx->pc = 0x291CE4u;
            goto label_291ce4;
        }
    }
    ctx->pc = 0x291AE8u;
label_291ae8:
    // 0x291ae8: 0x5062007f  beql        $v1, $v0, . + 4 + (0x7F << 2)
label_291aec:
    if (ctx->pc == 0x291AECu) {
        ctx->pc = 0x291AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AE8u;
        // 0x291aec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291AF0u;
        goto label_291af0;
    }
    ctx->pc = 0x291AE8u;
    {
        const bool branch_taken_0x291ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x291ae8) {
            ctx->pc = 0x291AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291AE8u;
            // 0x291aec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291AF0u;
label_291af0:
    // 0x291af0: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x291af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_291af4:
    // 0x291af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291af8:
    // 0x291af8: 0xc0a44ac  jal         func_2912B0
label_291afc:
    if (ctx->pc == 0x291AFCu) {
        ctx->pc = 0x291AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AF8u;
        // 0x291afc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B00u;
        goto label_291b00;
    }
    ctx->pc = 0x291AF8u;
    SET_GPR_U32(ctx, 31, 0x291B00u);
    ctx->pc = 0x291AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291AF8u;
    // 0x291afc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2912B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2912B0u, 0x291AF8u, 0x291B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B00u;
label_291b00:
    // 0x291b00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x291b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291b04:
    // 0x291b04: 0x12400077  beqz        $s2, . + 4 + (0x77 << 2)
label_291b08:
    if (ctx->pc == 0x291B08u) {
        ctx->pc = 0x291B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B04u;
        // 0x291b08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B0Cu;
        goto label_291b0c;
    }
    ctx->pc = 0x291B04u;
    {
        const bool branch_taken_0x291b04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x291B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B04u;
        // 0x291b08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b04) {
            ctx->pc = 0x291CE4u;
            goto label_291ce4;
        }
    }
    ctx->pc = 0x291B0Cu;
label_291b0c:
    // 0x291b0c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x291b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_291b10:
    // 0x291b10: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
label_291b14:
    if (ctx->pc == 0x291B14u) {
        ctx->pc = 0x291B18u;
        goto label_291b18;
    }
    ctx->pc = 0x291B10u;
    {
        const bool branch_taken_0x291b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291b10) {
            ctx->pc = 0x291C48u;
            goto label_291c48;
        }
    }
    ctx->pc = 0x291B18u;
label_291b18:
    // 0x291b18: 0xc08a096  jal         func_228258
label_291b1c:
    if (ctx->pc == 0x291B1Cu) {
        ctx->pc = 0x291B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B18u;
        // 0x291b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B20u;
        goto label_291b20;
    }
    ctx->pc = 0x291B18u;
    SET_GPR_U32(ctx, 31, 0x291B20u);
    ctx->pc = 0x291B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B18u;
    // 0x291b1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x291B18u, 0x291B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B20u;
label_291b20:
    // 0x291b20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291b24:
    // 0x291b24: 0x16130048  bne         $s0, $s3, . + 4 + (0x48 << 2)
label_291b28:
    if (ctx->pc == 0x291B28u) {
        ctx->pc = 0x291B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B24u;
        // 0x291b28: 0x26540090  addiu       $s4, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B2Cu;
        goto label_291b2c;
    }
    ctx->pc = 0x291B24u;
    {
        const bool branch_taken_0x291b24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x291B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B24u;
        // 0x291b28: 0x26540090  addiu       $s4, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b24) {
            ctx->pc = 0x291C48u;
            goto label_291c48;
        }
    }
    ctx->pc = 0x291B2Cu;
label_291b2c:
    // 0x291b2c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x291b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_291b30:
    // 0x291b30: 0xc6340140  lwc1        $f20, 0x140($s1)
    ctx->pc = 0x291b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_291b34:
    // 0x291b34: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x291b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_291b38:
    // 0x291b38: 0x84640092  lh          $a0, 0x92($v1)
    ctx->pc = 0x291b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_291b3c:
    // 0x291b3c: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x291b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_291b40:
    // 0x291b40: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x291b40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_291b44:
    // 0x291b44: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x291b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
label_291b48:
    // 0x291b48: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x291b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_291b4c:
    // 0x291b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x291b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_291b50:
    // 0x291b50: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x291b50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_291b54:
    // 0x291b54: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x291b54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_291b58:
    // 0x291b58: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x291b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_291b5c:
    // 0x291b5c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x291b5cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_291b60:
    // 0x291b60: 0xc0cdb38  jal         func_336CE0
label_291b64:
    if (ctx->pc == 0x291B64u) {
        ctx->pc = 0x291B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B60u;
        // 0x291b64: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B68u;
        goto label_291b68;
    }
    ctx->pc = 0x291B60u;
    SET_GPR_U32(ctx, 31, 0x291B68u);
    ctx->pc = 0x291B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B60u;
    // 0x291b64: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x291B60u, 0x291B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B68u;
label_291b68:
    // 0x291b68: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x291b68u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_291b6c:
    // 0x291b6c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x291b6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_291b70:
    // 0x291b70: 0x0  nop
    ctx->pc = 0x291b70u;
    // NOP
label_291b74:
    // 0x291b74: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_291b78:
    if (ctx->pc == 0x291B78u) {
        ctx->pc = 0x291B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B74u;
        // 0x291b78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B7Cu;
        goto label_291b7c;
    }
    ctx->pc = 0x291B74u;
    {
        const bool branch_taken_0x291b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x291B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B74u;
        // 0x291b78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291b74) {
            ctx->pc = 0x291C48u;
            goto label_291c48;
        }
    }
    ctx->pc = 0x291B7Cu;
label_291b7c:
    // 0x291b7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x291b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_291b80:
    // 0x291b80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x291b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_291b84:
    // 0x291b84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x291b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_291b88:
    // 0x291b88: 0x24060bb8  addiu       $a2, $zero, 0xBB8
    ctx->pc = 0x291b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
label_291b8c:
    // 0x291b8c: 0x24840284  addiu       $a0, $a0, 0x284
    ctx->pc = 0x291b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 644));
label_291b90:
    // 0x291b90: 0xc0a6800  jal         func_29A000
label_291b94:
    if (ctx->pc == 0x291B94u) {
        ctx->pc = 0x291B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291B90u;
        // 0x291b94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291B98u;
        goto label_291b98;
    }
    ctx->pc = 0x291B90u;
    SET_GPR_U32(ctx, 31, 0x291B98u);
    ctx->pc = 0x291B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291B90u;
    // 0x291b94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x291B90u, 0x291B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B98u;
label_291b98:
    // 0x291b98: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x291b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_291b9c:
    // 0x291b9c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x291b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_291ba0:
    // 0x291ba0: 0xc0cd4ee  jal         func_3353B8
label_291ba4:
    if (ctx->pc == 0x291BA4u) {
        ctx->pc = 0x291BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BA0u;
        // 0x291ba4: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291BA8u;
        goto label_291ba8;
    }
    ctx->pc = 0x291BA0u;
    SET_GPR_U32(ctx, 31, 0x291BA8u);
    ctx->pc = 0x291BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BA0u;
    // 0x291ba4: 0x2484b8a0  addiu       $a0, $a0, -0x4760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x291BA0u, 0x291BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BA8u;
label_291ba8:
    // 0x291ba8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x291ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_291bac:
    // 0x291bac: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_291bb0:
    if (ctx->pc == 0x291BB0u) {
        ctx->pc = 0x291BB4u;
        goto label_291bb4;
    }
    ctx->pc = 0x291BACu;
    {
        const bool branch_taken_0x291bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291bac) {
            ctx->pc = 0x291C48u;
            goto label_291c48;
        }
    }
    ctx->pc = 0x291BB4u;
label_291bb4:
    // 0x291bb4: 0xc0a47b4  jal         func_291ED0
label_291bb8:
    if (ctx->pc == 0x291BB8u) {
        ctx->pc = 0x291BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BB4u;
        // 0x291bb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291BBCu;
        goto label_291bbc;
    }
    ctx->pc = 0x291BB4u;
    SET_GPR_U32(ctx, 31, 0x291BBCu);
    ctx->pc = 0x291BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BB4u;
    // 0x291bb8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x291BB4u, 0x291BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BBCu;
label_291bbc:
    // 0x291bbc: 0x14500022  bne         $v0, $s0, . + 4 + (0x22 << 2)
label_291bc0:
    if (ctx->pc == 0x291BC0u) {
        ctx->pc = 0x291BC4u;
        goto label_291bc4;
    }
    ctx->pc = 0x291BBCu;
    {
        const bool branch_taken_0x291bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x291bbc) {
            ctx->pc = 0x291C48u;
            goto label_291c48;
        }
    }
    ctx->pc = 0x291BC4u;
label_291bc4:
    // 0x291bc4: 0xc0a36c8  jal         func_28DB20
label_291bc8:
    if (ctx->pc == 0x291BC8u) {
        ctx->pc = 0x291BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BC4u;
        // 0x291bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291BCCu;
        goto label_291bcc;
    }
    ctx->pc = 0x291BC4u;
    SET_GPR_U32(ctx, 31, 0x291BCCu);
    ctx->pc = 0x291BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BC4u;
    // 0x291bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x291BC4u, 0x291BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BCCu;
label_291bcc:
    // 0x291bcc: 0x8223002e  lb          $v1, 0x2E($s1)
    ctx->pc = 0x291bccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
label_291bd0:
    // 0x291bd0: 0x1c60001d  bgtz        $v1, . + 4 + (0x1D << 2)
label_291bd4:
    if (ctx->pc == 0x291BD4u) {
        ctx->pc = 0x291BD8u;
        goto label_291bd8;
    }
    ctx->pc = 0x291BD0u;
    {
        const bool branch_taken_0x291bd0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x291bd0) {
            ctx->pc = 0x291C48u;
            goto label_291c48;
        }
    }
    ctx->pc = 0x291BD8u;
label_291bd8:
    // 0x291bd8: 0xc0a367c  jal         func_28D9F0
label_291bdc:
    if (ctx->pc == 0x291BDCu) {
        ctx->pc = 0x291BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BD8u;
        // 0x291bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291BE0u;
        goto label_291be0;
    }
    ctx->pc = 0x291BD8u;
    SET_GPR_U32(ctx, 31, 0x291BE0u);
    ctx->pc = 0x291BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BD8u;
    // 0x291bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x291BD8u, 0x291BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291BE0u;
label_291be0:
    // 0x291be0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x291be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291be4:
    // 0x291be4: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_291be8:
    if (ctx->pc == 0x291BE8u) {
        ctx->pc = 0x291BECu;
        goto label_291bec;
    }
    ctx->pc = 0x291BE4u;
    {
        const bool branch_taken_0x291be4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x291be4) {
            ctx->pc = 0x291C18u;
            goto label_291c18;
        }
    }
    ctx->pc = 0x291BECu;
label_291bec:
    // 0x291bec: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x291becu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_291bf0:
    // 0x291bf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x291bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_291bf4:
    // 0x291bf4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x291bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_291bf8:
    // 0x291bf8: 0xc0884f6  jal         func_2213D8
label_291bfc:
    if (ctx->pc == 0x291BFCu) {
        ctx->pc = 0x291BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291BF8u;
        // 0x291bfc: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C00u;
        goto label_291c00;
    }
    ctx->pc = 0x291BF8u;
    SET_GPR_U32(ctx, 31, 0x291C00u);
    ctx->pc = 0x291BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291BF8u;
    // 0x291bfc: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x291BF8u, 0x291C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C00u;
label_291c00:
    // 0x291c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x291c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_291c04:
    // 0x291c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x291c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291c08:
    // 0x291c08: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x291c08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_291c0c:
    // 0x291c0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291c10:
    // 0x291c10: 0xc0bf800  jal         func_2FE000
label_291c14:
    if (ctx->pc == 0x291C14u) {
        ctx->pc = 0x291C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C10u;
        // 0x291c14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C18u;
        goto label_291c18;
    }
    ctx->pc = 0x291C10u;
    SET_GPR_U32(ctx, 31, 0x291C18u);
    ctx->pc = 0x291C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C10u;
    // 0x291c14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x291C10u, 0x291C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C18u;
label_291c18:
    // 0x291c18: 0xc0a367c  jal         func_28D9F0
label_291c1c:
    if (ctx->pc == 0x291C1Cu) {
        ctx->pc = 0x291C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C18u;
        // 0x291c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C20u;
        goto label_291c20;
    }
    ctx->pc = 0x291C18u;
    SET_GPR_U32(ctx, 31, 0x291C20u);
    ctx->pc = 0x291C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C18u;
    // 0x291c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x291C18u, 0x291C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C20u;
label_291c20:
    // 0x291c20: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_291c24:
    if (ctx->pc == 0x291C24u) {
        ctx->pc = 0x291C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C20u;
        // 0x291c24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C28u;
        goto label_291c28;
    }
    ctx->pc = 0x291C20u;
    {
        const bool branch_taken_0x291c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C20u;
        // 0x291c24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c20) {
            ctx->pc = 0x291CE4u;
            goto label_291ce4;
        }
    }
    ctx->pc = 0x291C28u;
label_291c28:
    // 0x291c28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x291c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291c2c:
    // 0x291c2c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x291c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_291c30:
    // 0x291c30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x291c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291c34:
    // 0x291c34: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x291c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_291c38:
    // 0x291c38: 0xc0bec3c  jal         func_2FB0F0
label_291c3c:
    if (ctx->pc == 0x291C3Cu) {
        ctx->pc = 0x291C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C38u;
        // 0x291c3c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C40u;
        goto label_291c40;
    }
    ctx->pc = 0x291C38u;
    SET_GPR_U32(ctx, 31, 0x291C40u);
    ctx->pc = 0x291C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C38u;
    // 0x291c3c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x291C38u, 0x291C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C40u;
label_291c40:
    // 0x291c40: 0x10000029  b           . + 4 + (0x29 << 2)
label_291c44:
    if (ctx->pc == 0x291C44u) {
        ctx->pc = 0x291C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C40u;
        // 0x291c44: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C48u;
        goto label_291c48;
    }
    ctx->pc = 0x291C40u;
    {
        const bool branch_taken_0x291c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C40u;
        // 0x291c44: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c40) {
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291C48u;
label_291c48:
    // 0x291c48: 0xc0a40d2  jal         func_290348
label_291c4c:
    if (ctx->pc == 0x291C4Cu) {
        ctx->pc = 0x291C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C48u;
        // 0x291c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C50u;
        goto label_291c50;
    }
    ctx->pc = 0x291C48u;
    SET_GPR_U32(ctx, 31, 0x291C50u);
    ctx->pc = 0x291C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C48u;
    // 0x291c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x291C48u, 0x291C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C50u;
label_291c50:
    // 0x291c50: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_291c54:
    if (ctx->pc == 0x291C54u) {
        ctx->pc = 0x291C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C50u;
        // 0x291c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C58u;
        goto label_291c58;
    }
    ctx->pc = 0x291C50u;
    {
        const bool branch_taken_0x291c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C50u;
        // 0x291c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c50) {
            ctx->pc = 0x291C74u;
            goto label_291c74;
        }
    }
    ctx->pc = 0x291C58u;
label_291c58:
    // 0x291c58: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x291c58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_291c5c:
    // 0x291c5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_291c60:
    // 0x291c60: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x291c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_291c64:
    // 0x291c64: 0xc0a34ba  jal         func_28D2E8
label_291c68:
    if (ctx->pc == 0x291C68u) {
        ctx->pc = 0x291C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C64u;
        // 0x291c68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C6Cu;
        goto label_291c6c;
    }
    ctx->pc = 0x291C64u;
    SET_GPR_U32(ctx, 31, 0x291C6Cu);
    ctx->pc = 0x291C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C64u;
    // 0x291c68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x291C64u, 0x291C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C6Cu;
label_291c6c:
    // 0x291c6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_291c70:
    if (ctx->pc == 0x291C70u) {
        ctx->pc = 0x291C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C6Cu;
        // 0x291c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C74u;
        goto label_291c74;
    }
    ctx->pc = 0x291C6Cu;
    {
        const bool branch_taken_0x291c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C6Cu;
        // 0x291c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c6c) {
            ctx->pc = 0x291C84u;
            goto label_291c84;
        }
    }
    ctx->pc = 0x291C74u;
label_291c74:
    // 0x291c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x291c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_291c78:
    // 0x291c78: 0xc0a33f8  jal         func_28CFE0
label_291c7c:
    if (ctx->pc == 0x291C7Cu) {
        ctx->pc = 0x291C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C78u;
        // 0x291c7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C80u;
        goto label_291c80;
    }
    ctx->pc = 0x291C78u;
    SET_GPR_U32(ctx, 31, 0x291C80u);
    ctx->pc = 0x291C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C78u;
    // 0x291c7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x291C78u, 0x291C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C80u;
label_291c80:
    // 0x291c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x291c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_291c84:
    // 0x291c84: 0xc0a3658  jal         func_28D960
label_291c88:
    if (ctx->pc == 0x291C88u) {
        ctx->pc = 0x291C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C84u;
        // 0x291c88: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C8Cu;
        goto label_291c8c;
    }
    ctx->pc = 0x291C84u;
    SET_GPR_U32(ctx, 31, 0x291C8Cu);
    ctx->pc = 0x291C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291C84u;
    // 0x291c88: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x291C84u, 0x291C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C8Cu;
label_291c8c:
    // 0x291c8c: 0x8223002d  lb          $v1, 0x2D($s1)
    ctx->pc = 0x291c8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
label_291c90:
    // 0x291c90: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x291c90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_291c94:
    // 0x291c94: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_291c98:
    if (ctx->pc == 0x291C98u) {
        ctx->pc = 0x291C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C94u;
        // 0x291c98: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291C9Cu;
        goto label_291c9c;
    }
    ctx->pc = 0x291C94u;
    {
        const bool branch_taken_0x291c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291C94u;
        // 0x291c98: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291c94) {
            ctx->pc = 0x291CE8u;
            goto label_291ce8;
        }
    }
    ctx->pc = 0x291C9Cu;
label_291c9c:
    // 0x291c9c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x291c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_291ca0:
    // 0x291ca0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x291ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_291ca4:
    // 0x291ca4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x291ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_291ca8:
    // 0x291ca8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x291ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_291cac:
    // 0x291cac: 0x40f809  jalr        $v0
label_291cb0:
    if (ctx->pc == 0x291CB0u) {
        ctx->pc = 0x291CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CACu;
        // 0x291cb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CB4u;
        goto label_291cb4;
    }
    ctx->pc = 0x291CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291CB4u);
        ctx->pc = 0x291CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CACu;
        // 0x291cb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291CACu, 0x291CB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291CB4u;
label_291cb4:
    // 0x291cb4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x291cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_291cb8:
    // 0x291cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x291cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291cbc:
    // 0x291cbc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x291cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_291cc0:
    // 0x291cc0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x291cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_291cc4:
    // 0x291cc4: 0x40f809  jalr        $v0
label_291cc8:
    if (ctx->pc == 0x291CC8u) {
        ctx->pc = 0x291CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CC4u;
        // 0x291cc8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CCCu;
        goto label_291ccc;
    }
    ctx->pc = 0x291CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291CCCu);
        ctx->pc = 0x291CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CC4u;
        // 0x291cc8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291CC4u, 0x291CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291CCCu;
label_291ccc:
    // 0x291ccc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x291cccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_291cd0:
    // 0x291cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_291cd4:
    // 0x291cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x291cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_291cd8:
    // 0x291cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x291cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291cdc:
    // 0x291cdc: 0xc0add6e  jal         func_2B75B8
label_291ce0:
    if (ctx->pc == 0x291CE0u) {
        ctx->pc = 0x291CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CDCu;
        // 0x291ce0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CE4u;
        goto label_291ce4;
    }
    ctx->pc = 0x291CDCu;
    SET_GPR_U32(ctx, 31, 0x291CE4u);
    ctx->pc = 0x291CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291CDCu;
    // 0x291ce0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B75B8u, 0x291CDCu, 0x291CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291CE4u;
label_291ce4:
    // 0x291ce4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x291ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_291ce8:
    // 0x291ce8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x291ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_291cec:
    // 0x291cec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x291cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_291cf0:
    // 0x291cf0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x291cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_291cf4:
    // 0x291cf4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x291cf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_291cf8:
    // 0x291cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291cfc:
    // 0x291cfc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x291cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_291d00:
    // 0x291d00: 0x3e00008  jr          $ra
label_291d04:
    if (ctx->pc == 0x291D04u) {
        ctx->pc = 0x291D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D00u;
        // 0x291d04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291D08u;
        goto label_fallthrough_0x291d00;
    }
    ctx->pc = 0x291D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D00u;
        // 0x291d04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291d00:
    ctx->pc = 0x291D08u;
}
