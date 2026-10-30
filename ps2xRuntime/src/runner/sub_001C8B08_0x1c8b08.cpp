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

// Function: sub_001C8B08
// Address: 0x1c8b08 - 0x1c8db0
void sub_001C8B08_0x1c8b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8B08_0x1c8b08");
#endif

    switch (ctx->pc) {
        case 0x1c8b08u: goto label_1c8b08;
        case 0x1c8b0cu: goto label_1c8b0c;
        case 0x1c8b10u: goto label_1c8b10;
        case 0x1c8b14u: goto label_1c8b14;
        case 0x1c8b18u: goto label_1c8b18;
        case 0x1c8b1cu: goto label_1c8b1c;
        case 0x1c8b20u: goto label_1c8b20;
        case 0x1c8b24u: goto label_1c8b24;
        case 0x1c8b28u: goto label_1c8b28;
        case 0x1c8b2cu: goto label_1c8b2c;
        case 0x1c8b30u: goto label_1c8b30;
        case 0x1c8b34u: goto label_1c8b34;
        case 0x1c8b38u: goto label_1c8b38;
        case 0x1c8b3cu: goto label_1c8b3c;
        case 0x1c8b40u: goto label_1c8b40;
        case 0x1c8b44u: goto label_1c8b44;
        case 0x1c8b48u: goto label_1c8b48;
        case 0x1c8b4cu: goto label_1c8b4c;
        case 0x1c8b50u: goto label_1c8b50;
        case 0x1c8b54u: goto label_1c8b54;
        case 0x1c8b58u: goto label_1c8b58;
        case 0x1c8b5cu: goto label_1c8b5c;
        case 0x1c8b60u: goto label_1c8b60;
        case 0x1c8b64u: goto label_1c8b64;
        case 0x1c8b68u: goto label_1c8b68;
        case 0x1c8b6cu: goto label_1c8b6c;
        case 0x1c8b70u: goto label_1c8b70;
        case 0x1c8b74u: goto label_1c8b74;
        case 0x1c8b78u: goto label_1c8b78;
        case 0x1c8b7cu: goto label_1c8b7c;
        case 0x1c8b80u: goto label_1c8b80;
        case 0x1c8b84u: goto label_1c8b84;
        case 0x1c8b88u: goto label_1c8b88;
        case 0x1c8b8cu: goto label_1c8b8c;
        case 0x1c8b90u: goto label_1c8b90;
        case 0x1c8b94u: goto label_1c8b94;
        case 0x1c8b98u: goto label_1c8b98;
        case 0x1c8b9cu: goto label_1c8b9c;
        case 0x1c8ba0u: goto label_1c8ba0;
        case 0x1c8ba4u: goto label_1c8ba4;
        case 0x1c8ba8u: goto label_1c8ba8;
        case 0x1c8bacu: goto label_1c8bac;
        case 0x1c8bb0u: goto label_1c8bb0;
        case 0x1c8bb4u: goto label_1c8bb4;
        case 0x1c8bb8u: goto label_1c8bb8;
        case 0x1c8bbcu: goto label_1c8bbc;
        case 0x1c8bc0u: goto label_1c8bc0;
        case 0x1c8bc4u: goto label_1c8bc4;
        case 0x1c8bc8u: goto label_1c8bc8;
        case 0x1c8bccu: goto label_1c8bcc;
        case 0x1c8bd0u: goto label_1c8bd0;
        case 0x1c8bd4u: goto label_1c8bd4;
        case 0x1c8bd8u: goto label_1c8bd8;
        case 0x1c8bdcu: goto label_1c8bdc;
        case 0x1c8be0u: goto label_1c8be0;
        case 0x1c8be4u: goto label_1c8be4;
        case 0x1c8be8u: goto label_1c8be8;
        case 0x1c8becu: goto label_1c8bec;
        case 0x1c8bf0u: goto label_1c8bf0;
        case 0x1c8bf4u: goto label_1c8bf4;
        case 0x1c8bf8u: goto label_1c8bf8;
        case 0x1c8bfcu: goto label_1c8bfc;
        case 0x1c8c00u: goto label_1c8c00;
        case 0x1c8c04u: goto label_1c8c04;
        case 0x1c8c08u: goto label_1c8c08;
        case 0x1c8c0cu: goto label_1c8c0c;
        case 0x1c8c10u: goto label_1c8c10;
        case 0x1c8c14u: goto label_1c8c14;
        case 0x1c8c18u: goto label_1c8c18;
        case 0x1c8c1cu: goto label_1c8c1c;
        case 0x1c8c20u: goto label_1c8c20;
        case 0x1c8c24u: goto label_1c8c24;
        case 0x1c8c28u: goto label_1c8c28;
        case 0x1c8c2cu: goto label_1c8c2c;
        case 0x1c8c30u: goto label_1c8c30;
        case 0x1c8c34u: goto label_1c8c34;
        case 0x1c8c38u: goto label_1c8c38;
        case 0x1c8c3cu: goto label_1c8c3c;
        case 0x1c8c40u: goto label_1c8c40;
        case 0x1c8c44u: goto label_1c8c44;
        case 0x1c8c48u: goto label_1c8c48;
        case 0x1c8c4cu: goto label_1c8c4c;
        case 0x1c8c50u: goto label_1c8c50;
        case 0x1c8c54u: goto label_1c8c54;
        case 0x1c8c58u: goto label_1c8c58;
        case 0x1c8c5cu: goto label_1c8c5c;
        case 0x1c8c60u: goto label_1c8c60;
        case 0x1c8c64u: goto label_1c8c64;
        case 0x1c8c68u: goto label_1c8c68;
        case 0x1c8c6cu: goto label_1c8c6c;
        case 0x1c8c70u: goto label_1c8c70;
        case 0x1c8c74u: goto label_1c8c74;
        case 0x1c8c78u: goto label_1c8c78;
        case 0x1c8c7cu: goto label_1c8c7c;
        case 0x1c8c80u: goto label_1c8c80;
        case 0x1c8c84u: goto label_1c8c84;
        case 0x1c8c88u: goto label_1c8c88;
        case 0x1c8c8cu: goto label_1c8c8c;
        case 0x1c8c90u: goto label_1c8c90;
        case 0x1c8c94u: goto label_1c8c94;
        case 0x1c8c98u: goto label_1c8c98;
        case 0x1c8c9cu: goto label_1c8c9c;
        case 0x1c8ca0u: goto label_1c8ca0;
        case 0x1c8ca4u: goto label_1c8ca4;
        case 0x1c8ca8u: goto label_1c8ca8;
        case 0x1c8cacu: goto label_1c8cac;
        case 0x1c8cb0u: goto label_1c8cb0;
        case 0x1c8cb4u: goto label_1c8cb4;
        case 0x1c8cb8u: goto label_1c8cb8;
        case 0x1c8cbcu: goto label_1c8cbc;
        case 0x1c8cc0u: goto label_1c8cc0;
        case 0x1c8cc4u: goto label_1c8cc4;
        case 0x1c8cc8u: goto label_1c8cc8;
        case 0x1c8cccu: goto label_1c8ccc;
        case 0x1c8cd0u: goto label_1c8cd0;
        case 0x1c8cd4u: goto label_1c8cd4;
        case 0x1c8cd8u: goto label_1c8cd8;
        case 0x1c8cdcu: goto label_1c8cdc;
        case 0x1c8ce0u: goto label_1c8ce0;
        case 0x1c8ce4u: goto label_1c8ce4;
        case 0x1c8ce8u: goto label_1c8ce8;
        case 0x1c8cecu: goto label_1c8cec;
        case 0x1c8cf0u: goto label_1c8cf0;
        case 0x1c8cf4u: goto label_1c8cf4;
        case 0x1c8cf8u: goto label_1c8cf8;
        case 0x1c8cfcu: goto label_1c8cfc;
        case 0x1c8d00u: goto label_1c8d00;
        case 0x1c8d04u: goto label_1c8d04;
        case 0x1c8d08u: goto label_1c8d08;
        case 0x1c8d0cu: goto label_1c8d0c;
        case 0x1c8d10u: goto label_1c8d10;
        case 0x1c8d14u: goto label_1c8d14;
        case 0x1c8d18u: goto label_1c8d18;
        case 0x1c8d1cu: goto label_1c8d1c;
        case 0x1c8d20u: goto label_1c8d20;
        case 0x1c8d24u: goto label_1c8d24;
        case 0x1c8d28u: goto label_1c8d28;
        case 0x1c8d2cu: goto label_1c8d2c;
        case 0x1c8d30u: goto label_1c8d30;
        case 0x1c8d34u: goto label_1c8d34;
        case 0x1c8d38u: goto label_1c8d38;
        case 0x1c8d3cu: goto label_1c8d3c;
        case 0x1c8d40u: goto label_1c8d40;
        case 0x1c8d44u: goto label_1c8d44;
        case 0x1c8d48u: goto label_1c8d48;
        case 0x1c8d4cu: goto label_1c8d4c;
        case 0x1c8d50u: goto label_1c8d50;
        case 0x1c8d54u: goto label_1c8d54;
        case 0x1c8d58u: goto label_1c8d58;
        case 0x1c8d5cu: goto label_1c8d5c;
        case 0x1c8d60u: goto label_1c8d60;
        case 0x1c8d64u: goto label_1c8d64;
        case 0x1c8d68u: goto label_1c8d68;
        case 0x1c8d6cu: goto label_1c8d6c;
        case 0x1c8d70u: goto label_1c8d70;
        case 0x1c8d74u: goto label_1c8d74;
        case 0x1c8d78u: goto label_1c8d78;
        case 0x1c8d7cu: goto label_1c8d7c;
        case 0x1c8d80u: goto label_1c8d80;
        case 0x1c8d84u: goto label_1c8d84;
        case 0x1c8d88u: goto label_1c8d88;
        case 0x1c8d8cu: goto label_1c8d8c;
        case 0x1c8d90u: goto label_1c8d90;
        case 0x1c8d94u: goto label_1c8d94;
        case 0x1c8d98u: goto label_1c8d98;
        case 0x1c8d9cu: goto label_1c8d9c;
        case 0x1c8da0u: goto label_1c8da0;
        case 0x1c8da4u: goto label_1c8da4;
        case 0x1c8da8u: goto label_1c8da8;
        case 0x1c8dacu: goto label_1c8dac;
        default: break;
    }

    ctx->pc = 0x1c8b08u;

label_1c8b08:
    // 0x1c8b08: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1c8b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1c8b0c:
    // 0x1c8b0c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1c8b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1c8b10:
    // 0x1c8b10: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1c8b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1c8b14:
    // 0x1c8b14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c8b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b18:
    // 0x1c8b18: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1c8b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1c8b1c:
    // 0x1c8b1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c8b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b20:
    // 0x1c8b20: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1c8b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1c8b24:
    // 0x1c8b24: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c8b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b28:
    // 0x1c8b28: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1c8b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1c8b2c:
    // 0x1c8b2c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x1c8b2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b30:
    // 0x1c8b30: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x1c8b30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1c8b34:
    // 0x1c8b34: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1c8b34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b38:
    // 0x1c8b38: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x1c8b38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1c8b3c:
    // 0x1c8b3c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1c8b3cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_1c8b40:
    // 0x1c8b40: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1c8b40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1c8b44:
    // 0x1c8b44: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1c8b44u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_1c8b48:
    // 0x1c8b48: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1c8b48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1c8b4c:
    // 0x1c8b4c: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x1c8b4cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
label_1c8b50:
    // 0x1c8b50: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1c8b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1c8b54:
    // 0x1c8b54: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x1c8b54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_1c8b58:
    // 0x1c8b58: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1c8b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1c8b5c:
    // 0x1c8b5c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1c8b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1c8b60:
    // 0x1c8b60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c8b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1c8b64:
    // 0x1c8b64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c8b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c8b68:
    // 0x1c8b68: 0x8e420548  lw          $v0, 0x548($s2)
    ctx->pc = 0x1c8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1352)));
label_1c8b6c:
    // 0x1c8b6c: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x1c8b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_1c8b70:
    // 0x1c8b70: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c8b74:
    // 0x1c8b74: 0xafa90024  sw          $t1, 0x24($sp)
    ctx->pc = 0x1c8b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
label_1c8b78:
    // 0x1c8b78: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_1c8b7c:
    if (ctx->pc == 0x1C8B7Cu) {
        ctx->pc = 0x1C8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B78u;
        // 0x1c8b7c: 0xafaa0028  sw          $t2, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B80u;
        goto label_1c8b80;
    }
    ctx->pc = 0x1C8B78u;
    {
        const bool branch_taken_0x1c8b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B78u;
        // 0x1c8b7c: 0xafaa0028  sw          $t2, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8b78) {
            ctx->pc = 0x1C8D70u;
            goto label_1c8d70;
        }
    }
    ctx->pc = 0x1C8B80u;
label_1c8b80:
    // 0x1c8b80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c8b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b84:
    // 0x1c8b84: 0xc10c3ac  jal         func_430EB0
label_1c8b88:
    if (ctx->pc == 0x1C8B88u) {
        ctx->pc = 0x1C8B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B84u;
        // 0x1c8b88: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B8Cu;
        goto label_1c8b8c;
    }
    ctx->pc = 0x1C8B84u;
    SET_GPR_U32(ctx, 31, 0x1C8B8Cu);
    ctx->pc = 0x1C8B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B84u;
    // 0x1c8b88: 0x3c160051  lui         $s6, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1C8B84u, 0x1C8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B8Cu;
label_1c8b8c:
    // 0x1c8b8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c8b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c8b90:
    // 0x1c8b90: 0xc10c3ac  jal         func_430EB0
label_1c8b94:
    if (ctx->pc == 0x1C8B94u) {
        ctx->pc = 0x1C8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8B90u;
        // 0x1c8b94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8B98u;
        goto label_1c8b98;
    }
    ctx->pc = 0x1C8B90u;
    SET_GPR_U32(ctx, 31, 0x1C8B98u);
    ctx->pc = 0x1C8B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8B90u;
    // 0x1c8b94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1C8B90u, 0x1C8B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B98u;
label_1c8b98:
    // 0x1c8b98: 0x8ec927e4  lw          $t1, 0x27E4($s6)
    ctx->pc = 0x1c8b98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_1c8b9c:
    // 0x1c8b9c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1c8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1c8ba0:
    // 0x1c8ba0: 0x24755548  addiu       $s5, $v1, 0x5548
    ctx->pc = 0x1c8ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 21832));
label_1c8ba4:
    // 0x1c8ba4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c8ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c8ba8:
    // 0x1c8ba8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1c8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1c8bac:
    // 0x1c8bac: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c8bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c8bb0:
    // 0x1c8bb0: 0x26060002  addiu       $a2, $s0, 0x2
    ctx->pc = 0x1c8bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1c8bb4:
    // 0x1c8bb4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c8bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c8bb8:
    // 0x1c8bb8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c8bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c8bbc:
    // 0x1c8bbc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1c8bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c8bc0:
    // 0x1c8bc0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c8bc4:
    // 0x1c8bc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8bc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8bc8:
    // 0x1c8bc8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1c8bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1c8bcc:
    // 0x1c8bcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c8bccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8bd0:
    // 0x1c8bd0: 0x240900cd  addiu       $t1, $zero, 0xCD
    ctx->pc = 0x1c8bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_1c8bd4:
    // 0x1c8bd4: 0x40f809  jalr        $v0
label_1c8bd8:
    if (ctx->pc == 0x1C8BD8u) {
        ctx->pc = 0x1C8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BD4u;
        // 0x1c8bd8: 0x24a555b8  addiu       $a1, $a1, 0x55B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8BDCu;
        goto label_1c8bdc;
    }
    ctx->pc = 0x1C8BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C8BDCu);
        ctx->pc = 0x1C8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BD4u;
        // 0x1c8bd8: 0x24a555b8  addiu       $a1, $a1, 0x55B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8BD4u, 0x1C8BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8BDCu;
label_1c8bdc:
    // 0x1c8bdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c8bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8be0:
    // 0x1c8be0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c8be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c8be4:
    // 0x1c8be4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1c8be4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c8be8:
    // 0x1c8be8: 0xc10c25f  jal         func_43097C
label_1c8bec:
    if (ctx->pc == 0x1C8BECu) {
        ctx->pc = 0x1C8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BE8u;
        // 0x1c8bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8BF0u;
        goto label_1c8bf0;
    }
    ctx->pc = 0x1C8BE8u;
    SET_GPR_U32(ctx, 31, 0x1C8BF0u);
    ctx->pc = 0x1C8BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BE8u;
    // 0x1c8bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1C8BE8u, 0x1C8BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8BF0u;
label_1c8bf0:
    // 0x1c8bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c8bf4:
    // 0x1c8bf4: 0xc10c25f  jal         func_43097C
label_1c8bf8:
    if (ctx->pc == 0x1C8BF8u) {
        ctx->pc = 0x1C8BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8BF4u;
        // 0x1c8bf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8BFCu;
        goto label_1c8bfc;
    }
    ctx->pc = 0x1C8BF4u;
    SET_GPR_U32(ctx, 31, 0x1C8BFCu);
    ctx->pc = 0x1C8BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8BF4u;
    // 0x1c8bf8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1C8BF4u, 0x1C8BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8BFCu;
label_1c8bfc:
    // 0x1c8bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c8c00:
    // 0x1c8c00: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x1c8c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_1c8c04:
    // 0x1c8c04: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1c8c08:
    if (ctx->pc == 0x1C8C08u) {
        ctx->pc = 0x1C8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C04u;
        // 0x1c8c08: 0xae420558  sw          $v0, 0x558($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C0Cu;
        goto label_1c8c0c;
    }
    ctx->pc = 0x1C8C04u;
    {
        const bool branch_taken_0x1c8c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C04u;
        // 0x1c8c08: 0xae420558  sw          $v0, 0x558($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c04) {
            ctx->pc = 0x1C8C48u;
            goto label_1c8c48;
        }
    }
    ctx->pc = 0x1C8C0Cu;
label_1c8c0c:
    // 0x1c8c0c: 0xc10c313  jal         func_430C4C
label_1c8c10:
    if (ctx->pc == 0x1C8C10u) {
        ctx->pc = 0x1C8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C0Cu;
        // 0x1c8c10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C14u;
        goto label_1c8c14;
    }
    ctx->pc = 0x1C8C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C8C14u);
    ctx->pc = 0x1C8C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8C0Cu;
    // 0x1c8c10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1C8C0Cu, 0x1C8C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C14u;
label_1c8c14:
    // 0x1c8c14: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1c8c18:
    if (ctx->pc == 0x1C8C18u) {
        ctx->pc = 0x1C8C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C14u;
        // 0x1c8c18: 0x8e460548  lw          $a2, 0x548($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C1Cu;
        goto label_1c8c1c;
    }
    ctx->pc = 0x1C8C14u;
    {
        const bool branch_taken_0x1c8c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c14) {
            ctx->pc = 0x1C8C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8C14u;
            // 0x1c8c18: 0x8e460548  lw          $a2, 0x548($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8C4Cu;
            goto label_1c8c4c;
        }
    }
    ctx->pc = 0x1C8C1Cu;
label_1c8c1c:
    // 0x1c8c1c: 0x8ec827e4  lw          $t0, 0x27E4($s6)
    ctx->pc = 0x1c8c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10212)));
label_1c8c20:
    // 0x1c8c20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c24:
    // 0x1c8c24: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1c8c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c8c28:
    // 0x1c8c28: 0x240700d6  addiu       $a3, $zero, 0xD6
    ctx->pc = 0x1c8c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_1c8c2c:
    // 0x1c8c2c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1c8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1c8c30:
    // 0x1c8c30: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1c8c30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1c8c34:
    // 0x1c8c34: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1c8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1c8c38:
    // 0x1c8c38: 0x60f809  jalr        $v1
label_1c8c3c:
    if (ctx->pc == 0x1C8C3Cu) {
        ctx->pc = 0x1C8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C38u;
        // 0x1c8c3c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C40u;
        goto label_1c8c40;
    }
    ctx->pc = 0x1C8C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C8C40u);
        ctx->pc = 0x1C8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C38u;
        // 0x1c8c3c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8C38u, 0x1C8C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8C40u;
label_1c8c40:
    // 0x1c8c40: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1c8c44:
    if (ctx->pc == 0x1C8C44u) {
        ctx->pc = 0x1C8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C40u;
        // 0x1c8c44: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C48u;
        goto label_1c8c48;
    }
    ctx->pc = 0x1C8C40u;
    {
        const bool branch_taken_0x1c8c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C40u;
        // 0x1c8c44: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c40) {
            ctx->pc = 0x1C8D74u;
            goto label_1c8d74;
        }
    }
    ctx->pc = 0x1C8C48u;
label_1c8c48:
    // 0x1c8c48: 0x8e460548  lw          $a2, 0x548($s2)
    ctx->pc = 0x1c8c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1352)));
label_1c8c4c:
    // 0x1c8c4c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1c8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1c8c50:
    // 0x1c8c50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1c8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c8c54:
    // 0x1c8c54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c8c58:
    // 0x1c8c58: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1c8c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1c8c5c:
    // 0x1c8c5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c8c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c8c60:
    // 0x1c8c60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c8c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c8c64:
    // 0x1c8c64: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1c8c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c8c68:
    // 0x1c8c68: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1c8c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1c8c6c:
    // 0x1c8c6c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1c8c70:
    if (ctx->pc == 0x1C8C70u) {
        ctx->pc = 0x1C8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C6Cu;
        // 0x1c8c70: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C74u;
        goto label_1c8c74;
    }
    ctx->pc = 0x1C8C6Cu;
    {
        const bool branch_taken_0x1c8c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C6Cu;
        // 0x1c8c70: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8c6c) {
            ctx->pc = 0x1C8C88u;
            goto label_1c8c88;
        }
    }
    ctx->pc = 0x1C8C74u;
label_1c8c74:
    // 0x1c8c74: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x1c8c74u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c8c78:
    // 0x1c8c78: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_1c8c7c:
    if (ctx->pc == 0x1C8C7Cu) {
        ctx->pc = 0x1C8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8C78u;
        // 0x1c8c7c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8C80u;
        goto label_1c8c80;
    }
    ctx->pc = 0x1C8C78u;
    {
        const bool branch_taken_0x1c8c78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c78) {
            ctx->pc = 0x1C8C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8C78u;
            // 0x1c8c7c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8C80u;
            goto label_1c8c80;
        }
    }
    ctx->pc = 0x1C8C80u;
label_1c8c80:
    // 0x1c8c80: 0x1010  mfhi        $v0
    ctx->pc = 0x1c8c80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c8c84:
    // 0x1c8c84: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1c8c84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1c8c88:
    // 0x1c8c88: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1c8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1c8c8c:
    // 0x1c8c8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1c8c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1c8c90:
    // 0x1c8c90: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1c8c90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1c8c94:
    // 0x1c8c94: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1c8c94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1c8c98:
    // 0x1c8c98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c8c9c:
    // 0x1c8c9c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1c8c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1c8ca0:
    // 0x1c8ca0: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1c8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1c8ca4:
    // 0x1c8ca4: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1c8ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1c8ca8:
    // 0x1c8ca8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1c8ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_1c8cac:
    // 0x1c8cac: 0x24a554f0  addiu       $a1, $a1, 0x54F0
    ctx->pc = 0x1c8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21744));
label_1c8cb0:
    // 0x1c8cb0: 0xae1e000c  sw          $fp, 0xC($s0)
    ctx->pc = 0x1c8cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 30));
label_1c8cb4:
    // 0x1c8cb4: 0x250854f8  addiu       $t0, $t0, 0x54F8
    ctx->pc = 0x1c8cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 21752));
label_1c8cb8:
    // 0x1c8cb8: 0x254a5520  addiu       $t2, $t2, 0x5520
    ctx->pc = 0x1c8cb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 21792));
label_1c8cbc:
    // 0x1c8cbc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c8cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c8cc0:
    // 0x1c8cc0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1c8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1c8cc4:
    // 0x1c8cc4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c8cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c8cc8:
    // 0x1c8cc8: 0xae170014  sw          $s7, 0x14($s0)
    ctx->pc = 0x1c8cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 23));
label_1c8ccc:
    // 0x1c8ccc: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1c8cd0:
    // 0x1c8cd0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1c8cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1c8cd4:
    // 0x1c8cd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c8cd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8cd8:
    // 0x1c8cd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c8cdc:
    // 0x1c8cdc: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1c8cdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_1c8ce0:
    // 0x1c8ce0: 0xe6150020  swc1        $f21, 0x20($s0)
    ctx->pc = 0x1c8ce0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1c8ce4:
    // 0x1c8ce4: 0xe6160024  swc1        $f22, 0x24($s0)
    ctx->pc = 0x1c8ce4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1c8ce8:
    // 0x1c8ce8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1c8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1c8cec:
    // 0x1c8cec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1c8cf0:
    // 0x1c8cf0: 0xe617002c  swc1        $f23, 0x2C($s0)
    ctx->pc = 0x1c8cf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1c8cf4:
    // 0x1c8cf4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c8cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1c8cf8:
    // 0x1c8cf8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1c8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1c8cfc:
    // 0x1c8cfc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c8cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c8d00:
    // 0x1c8d00: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1c8d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_1c8d04:
    // 0x1c8d04: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c8d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1c8d08:
    // 0x1c8d08: 0x8e420544  lw          $v0, 0x544($s2)
    ctx->pc = 0x1c8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1348)));
label_1c8d0c:
    // 0x1c8d0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8d10:
    // 0x1c8d10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c8d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c8d14:
    // 0x1c8d14: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c8d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1c8d18:
    // 0x1c8d18: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1c8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1c8d1c:
    // 0x1c8d1c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1c8d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1c8d20:
    // 0x1c8d20: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1c8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1c8d24:
    // 0x1c8d24: 0x40f809  jalr        $v0
label_1c8d28:
    if (ctx->pc == 0x1C8D28u) {
        ctx->pc = 0x1C8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D24u;
        // 0x1c8d28: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8D2Cu;
        goto label_1c8d2c;
    }
    ctx->pc = 0x1C8D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C8D2Cu);
        ctx->pc = 0x1C8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D24u;
        // 0x1c8d28: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8D24u, 0x1C8D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C8D2Cu;
label_1c8d2c:
    // 0x1c8d2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c8d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c8d30:
    // 0x1c8d30: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x1c8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1c8d34:
    // 0x1c8d34: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1c8d38:
    if (ctx->pc == 0x1C8D38u) {
        ctx->pc = 0x1C8D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D34u;
        // 0x1c8d38: 0xacb00008  sw          $s0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8D3Cu;
        goto label_1c8d3c;
    }
    ctx->pc = 0x1C8D34u;
    {
        const bool branch_taken_0x1c8d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d34) {
            ctx->pc = 0x1C8D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8D34u;
            // 0x1c8d38: 0xacb00008  sw          $s0, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8D3Cu;
            goto label_1c8d3c;
        }
    }
    ctx->pc = 0x1C8D3Cu;
label_1c8d3c:
    // 0x1c8d3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8d40:
    // 0x1c8d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c8d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c8d44:
    // 0x1c8d44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c8d44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1c8d48:
    // 0x1c8d48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8d4c:
    // 0x1c8d4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8d50:
    // 0x1c8d50: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1c8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1c8d54:
    // 0x1c8d54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8d58:
    // 0x1c8d58: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c8d5c:
    // 0x1c8d5c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1c8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1c8d60:
    // 0x1c8d60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1c8d64:
    // 0x1c8d64: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1c8d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_1c8d68:
    // 0x1c8d68: 0xc06e4a4  jal         func_1B9290
label_1c8d6c:
    if (ctx->pc == 0x1C8D6Cu) {
        ctx->pc = 0x1C8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8D68u;
        // 0x1c8d6c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8D70u;
        goto label_1c8d70;
    }
    ctx->pc = 0x1C8D68u;
    SET_GPR_U32(ctx, 31, 0x1C8D70u);
    ctx->pc = 0x1C8D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8D68u;
    // 0x1c8d6c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1C8D68u, 0x1C8D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D70u;
label_1c8d70:
    // 0x1c8d70: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1c8d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c8d74:
    // 0x1c8d74: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1c8d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c8d78:
    // 0x1c8d78: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1c8d78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c8d7c:
    // 0x1c8d7c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1c8d7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c8d80:
    // 0x1c8d80: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1c8d80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c8d84:
    // 0x1c8d84: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1c8d84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c8d88:
    // 0x1c8d88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c8d88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c8d8c:
    // 0x1c8d8c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1c8d8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c8d90:
    // 0x1c8d90: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1c8d90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c8d94:
    // 0x1c8d94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c8d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c8d98:
    // 0x1c8d98: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x1c8d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1c8d9c:
    // 0x1c8d9c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1c8d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c8da0:
    // 0x1c8da0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1c8da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c8da4:
    // 0x1c8da4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1c8da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c8da8:
    // 0x1c8da8: 0x3e00008  jr          $ra
label_1c8dac:
    if (ctx->pc == 0x1C8DACu) {
        ctx->pc = 0x1C8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DA8u;
        // 0x1c8dac: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8DB0u;
        goto label_fallthrough_0x1c8da8;
    }
    ctx->pc = 0x1C8DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DA8u;
        // 0x1c8dac: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c8da8:
    ctx->pc = 0x1C8DB0u;
}
