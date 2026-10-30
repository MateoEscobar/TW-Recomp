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

// Function: sub_004F1AC8
// Address: 0x4f1ac8 - 0x4f1d80
void sub_004F1AC8_0x4f1ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1AC8_0x4f1ac8");
#endif

    switch (ctx->pc) {
        case 0x4f1ac8u: goto label_4f1ac8;
        case 0x4f1accu: goto label_4f1acc;
        case 0x4f1ad0u: goto label_4f1ad0;
        case 0x4f1ad4u: goto label_4f1ad4;
        case 0x4f1ad8u: goto label_4f1ad8;
        case 0x4f1adcu: goto label_4f1adc;
        case 0x4f1ae0u: goto label_4f1ae0;
        case 0x4f1ae4u: goto label_4f1ae4;
        case 0x4f1ae8u: goto label_4f1ae8;
        case 0x4f1aecu: goto label_4f1aec;
        case 0x4f1af0u: goto label_4f1af0;
        case 0x4f1af4u: goto label_4f1af4;
        case 0x4f1af8u: goto label_4f1af8;
        case 0x4f1afcu: goto label_4f1afc;
        case 0x4f1b00u: goto label_4f1b00;
        case 0x4f1b04u: goto label_4f1b04;
        case 0x4f1b08u: goto label_4f1b08;
        case 0x4f1b0cu: goto label_4f1b0c;
        case 0x4f1b10u: goto label_4f1b10;
        case 0x4f1b14u: goto label_4f1b14;
        case 0x4f1b18u: goto label_4f1b18;
        case 0x4f1b1cu: goto label_4f1b1c;
        case 0x4f1b20u: goto label_4f1b20;
        case 0x4f1b24u: goto label_4f1b24;
        case 0x4f1b28u: goto label_4f1b28;
        case 0x4f1b2cu: goto label_4f1b2c;
        case 0x4f1b30u: goto label_4f1b30;
        case 0x4f1b34u: goto label_4f1b34;
        case 0x4f1b38u: goto label_4f1b38;
        case 0x4f1b3cu: goto label_4f1b3c;
        case 0x4f1b40u: goto label_4f1b40;
        case 0x4f1b44u: goto label_4f1b44;
        case 0x4f1b48u: goto label_4f1b48;
        case 0x4f1b4cu: goto label_4f1b4c;
        case 0x4f1b50u: goto label_4f1b50;
        case 0x4f1b54u: goto label_4f1b54;
        case 0x4f1b58u: goto label_4f1b58;
        case 0x4f1b5cu: goto label_4f1b5c;
        case 0x4f1b60u: goto label_4f1b60;
        case 0x4f1b64u: goto label_4f1b64;
        case 0x4f1b68u: goto label_4f1b68;
        case 0x4f1b6cu: goto label_4f1b6c;
        case 0x4f1b70u: goto label_4f1b70;
        case 0x4f1b74u: goto label_4f1b74;
        case 0x4f1b78u: goto label_4f1b78;
        case 0x4f1b7cu: goto label_4f1b7c;
        case 0x4f1b80u: goto label_4f1b80;
        case 0x4f1b84u: goto label_4f1b84;
        case 0x4f1b88u: goto label_4f1b88;
        case 0x4f1b8cu: goto label_4f1b8c;
        case 0x4f1b90u: goto label_4f1b90;
        case 0x4f1b94u: goto label_4f1b94;
        case 0x4f1b98u: goto label_4f1b98;
        case 0x4f1b9cu: goto label_4f1b9c;
        case 0x4f1ba0u: goto label_4f1ba0;
        case 0x4f1ba4u: goto label_4f1ba4;
        case 0x4f1ba8u: goto label_4f1ba8;
        case 0x4f1bacu: goto label_4f1bac;
        case 0x4f1bb0u: goto label_4f1bb0;
        case 0x4f1bb4u: goto label_4f1bb4;
        case 0x4f1bb8u: goto label_4f1bb8;
        case 0x4f1bbcu: goto label_4f1bbc;
        case 0x4f1bc0u: goto label_4f1bc0;
        case 0x4f1bc4u: goto label_4f1bc4;
        case 0x4f1bc8u: goto label_4f1bc8;
        case 0x4f1bccu: goto label_4f1bcc;
        case 0x4f1bd0u: goto label_4f1bd0;
        case 0x4f1bd4u: goto label_4f1bd4;
        case 0x4f1bd8u: goto label_4f1bd8;
        case 0x4f1bdcu: goto label_4f1bdc;
        case 0x4f1be0u: goto label_4f1be0;
        case 0x4f1be4u: goto label_4f1be4;
        case 0x4f1be8u: goto label_4f1be8;
        case 0x4f1becu: goto label_4f1bec;
        case 0x4f1bf0u: goto label_4f1bf0;
        case 0x4f1bf4u: goto label_4f1bf4;
        case 0x4f1bf8u: goto label_4f1bf8;
        case 0x4f1bfcu: goto label_4f1bfc;
        case 0x4f1c00u: goto label_4f1c00;
        case 0x4f1c04u: goto label_4f1c04;
        case 0x4f1c08u: goto label_4f1c08;
        case 0x4f1c0cu: goto label_4f1c0c;
        case 0x4f1c10u: goto label_4f1c10;
        case 0x4f1c14u: goto label_4f1c14;
        case 0x4f1c18u: goto label_4f1c18;
        case 0x4f1c1cu: goto label_4f1c1c;
        case 0x4f1c20u: goto label_4f1c20;
        case 0x4f1c24u: goto label_4f1c24;
        case 0x4f1c28u: goto label_4f1c28;
        case 0x4f1c2cu: goto label_4f1c2c;
        case 0x4f1c30u: goto label_4f1c30;
        case 0x4f1c34u: goto label_4f1c34;
        case 0x4f1c38u: goto label_4f1c38;
        case 0x4f1c3cu: goto label_4f1c3c;
        case 0x4f1c40u: goto label_4f1c40;
        case 0x4f1c44u: goto label_4f1c44;
        case 0x4f1c48u: goto label_4f1c48;
        case 0x4f1c4cu: goto label_4f1c4c;
        case 0x4f1c50u: goto label_4f1c50;
        case 0x4f1c54u: goto label_4f1c54;
        case 0x4f1c58u: goto label_4f1c58;
        case 0x4f1c5cu: goto label_4f1c5c;
        case 0x4f1c60u: goto label_4f1c60;
        case 0x4f1c64u: goto label_4f1c64;
        case 0x4f1c68u: goto label_4f1c68;
        case 0x4f1c6cu: goto label_4f1c6c;
        case 0x4f1c70u: goto label_4f1c70;
        case 0x4f1c74u: goto label_4f1c74;
        case 0x4f1c78u: goto label_4f1c78;
        case 0x4f1c7cu: goto label_4f1c7c;
        case 0x4f1c80u: goto label_4f1c80;
        case 0x4f1c84u: goto label_4f1c84;
        case 0x4f1c88u: goto label_4f1c88;
        case 0x4f1c8cu: goto label_4f1c8c;
        case 0x4f1c90u: goto label_4f1c90;
        case 0x4f1c94u: goto label_4f1c94;
        case 0x4f1c98u: goto label_4f1c98;
        case 0x4f1c9cu: goto label_4f1c9c;
        case 0x4f1ca0u: goto label_4f1ca0;
        case 0x4f1ca4u: goto label_4f1ca4;
        case 0x4f1ca8u: goto label_4f1ca8;
        case 0x4f1cacu: goto label_4f1cac;
        case 0x4f1cb0u: goto label_4f1cb0;
        case 0x4f1cb4u: goto label_4f1cb4;
        case 0x4f1cb8u: goto label_4f1cb8;
        case 0x4f1cbcu: goto label_4f1cbc;
        case 0x4f1cc0u: goto label_4f1cc0;
        case 0x4f1cc4u: goto label_4f1cc4;
        case 0x4f1cc8u: goto label_4f1cc8;
        case 0x4f1cccu: goto label_4f1ccc;
        case 0x4f1cd0u: goto label_4f1cd0;
        case 0x4f1cd4u: goto label_4f1cd4;
        case 0x4f1cd8u: goto label_4f1cd8;
        case 0x4f1cdcu: goto label_4f1cdc;
        case 0x4f1ce0u: goto label_4f1ce0;
        case 0x4f1ce4u: goto label_4f1ce4;
        case 0x4f1ce8u: goto label_4f1ce8;
        case 0x4f1cecu: goto label_4f1cec;
        case 0x4f1cf0u: goto label_4f1cf0;
        case 0x4f1cf4u: goto label_4f1cf4;
        case 0x4f1cf8u: goto label_4f1cf8;
        case 0x4f1cfcu: goto label_4f1cfc;
        case 0x4f1d00u: goto label_4f1d00;
        case 0x4f1d04u: goto label_4f1d04;
        case 0x4f1d08u: goto label_4f1d08;
        case 0x4f1d0cu: goto label_4f1d0c;
        case 0x4f1d10u: goto label_4f1d10;
        case 0x4f1d14u: goto label_4f1d14;
        case 0x4f1d18u: goto label_4f1d18;
        case 0x4f1d1cu: goto label_4f1d1c;
        case 0x4f1d20u: goto label_4f1d20;
        case 0x4f1d24u: goto label_4f1d24;
        case 0x4f1d28u: goto label_4f1d28;
        case 0x4f1d2cu: goto label_4f1d2c;
        case 0x4f1d30u: goto label_4f1d30;
        case 0x4f1d34u: goto label_4f1d34;
        case 0x4f1d38u: goto label_4f1d38;
        case 0x4f1d3cu: goto label_4f1d3c;
        case 0x4f1d40u: goto label_4f1d40;
        case 0x4f1d44u: goto label_4f1d44;
        case 0x4f1d48u: goto label_4f1d48;
        case 0x4f1d4cu: goto label_4f1d4c;
        case 0x4f1d50u: goto label_4f1d50;
        case 0x4f1d54u: goto label_4f1d54;
        case 0x4f1d58u: goto label_4f1d58;
        case 0x4f1d5cu: goto label_4f1d5c;
        case 0x4f1d60u: goto label_4f1d60;
        case 0x4f1d64u: goto label_4f1d64;
        case 0x4f1d68u: goto label_4f1d68;
        case 0x4f1d6cu: goto label_4f1d6c;
        case 0x4f1d70u: goto label_4f1d70;
        case 0x4f1d74u: goto label_4f1d74;
        case 0x4f1d78u: goto label_4f1d78;
        case 0x4f1d7cu: goto label_4f1d7c;
        default: break;
    }

    ctx->pc = 0x4f1ac8u;

label_4f1ac8:
    // 0x4f1ac8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4f1ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4f1acc:
    // 0x4f1acc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4f1accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4f1ad0:
    // 0x4f1ad0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4f1ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4f1ad4:
    // 0x4f1ad4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f1ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f1ad8:
    // 0x4f1ad8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4f1ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4f1adc:
    // 0x4f1adc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f1adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f1ae0:
    // 0x4f1ae0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4f1ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4f1ae4:
    // 0x4f1ae4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4f1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4f1ae8:
    // 0x4f1ae8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4f1ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_4f1aec:
    // 0x4f1aec: 0x10b20099  beq         $a1, $s2, . + 4 + (0x99 << 2)
label_4f1af0:
    if (ctx->pc == 0x4F1AF0u) {
        ctx->pc = 0x4F1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1AECu;
        // 0x4f1af0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1AF4u;
        goto label_4f1af4;
    }
    ctx->pc = 0x4F1AECu;
    {
        const bool branch_taken_0x4f1aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x4F1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1AECu;
        // 0x4f1af0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1aec) {
            ctx->pc = 0x4F1D54u;
            goto label_4f1d54;
        }
    }
    ctx->pc = 0x4F1AF4u;
label_4f1af4:
    // 0x4f1af4: 0x8cb60008  lw          $s6, 0x8($a1)
    ctx->pc = 0x4f1af4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4f1af8:
    // 0x4f1af8: 0x3c04aaaa  lui         $a0, 0xAAAA
    ctx->pc = 0x4f1af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43690 << 16));
label_4f1afc:
    // 0x4f1afc: 0x8cb30004  lw          $s3, 0x4($a1)
    ctx->pc = 0x4f1afcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4f1b00:
    // 0x4f1b00: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x4f1b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_4f1b04:
    // 0x4f1b04: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x4f1b04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f1b08:
    // 0x4f1b08: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4f1b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4f1b0c:
    // 0x4f1b0c: 0x2d31823  subu        $v1, $s6, $s3
    ctx->pc = 0x4f1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_4f1b10:
    // 0x4f1b10: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4f1b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4f1b14:
    // 0x4f1b14: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x4f1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_4f1b18:
    // 0x4f1b18: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x4f1b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4f1b1c:
    // 0x4f1b1c: 0x3a8c3  sra         $s5, $v1, 3
    ctx->pc = 0x4f1b1cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 3));
label_4f1b20:
    // 0x4f1b20: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x4f1b20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_4f1b24:
    // 0x4f1b24: 0x55102b  sltu        $v0, $v0, $s5
    ctx->pc = 0x4f1b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_4f1b28:
    // 0x4f1b28: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_4f1b2c:
    if (ctx->pc == 0x4F1B2Cu) {
        ctx->pc = 0x4F1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1B28u;
        // 0x4f1b2c: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1B30u;
        goto label_4f1b30;
    }
    ctx->pc = 0x4F1B28u;
    {
        const bool branch_taken_0x4f1b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1B28u;
        // 0x4f1b2c: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1b28) {
            ctx->pc = 0x4F1C00u;
            goto label_4f1c00;
        }
    }
    ctx->pc = 0x4F1B30u;
label_4f1b30:
    // 0x4f1b30: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4f1b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4f1b34:
    // 0x4f1b34: 0x8e29b9c0  lw          $t1, -0x4640($s1)
    ctx->pc = 0x4f1b34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949312)));
label_4f1b38:
    // 0x4f1b38: 0x2a60018  mult        $zero, $s5, $a2
    ctx->pc = 0x4f1b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f1b3c:
    // 0x4f1b3c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x4f1b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_4f1b40:
    // 0x4f1b40: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x4f1b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_4f1b44:
    // 0x4f1b44: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f1b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4f1b48:
    // 0x4f1b48: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x4f1b48u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_4f1b4c:
    // 0x4f1b4c: 0x26088fd8  addiu       $t0, $s0, -0x7028
    ctx->pc = 0x4f1b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938584));
label_4f1b50:
    // 0x4f1b50: 0x24a5dbd8  addiu       $a1, $a1, -0x2428
    ctx->pc = 0x4f1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958040));
label_4f1b54:
    // 0x4f1b54: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4f1b54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4f1b58:
    // 0x4f1b58: 0x3012  mflo        $a2
    ctx->pc = 0x4f1b58u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_4f1b5c:
    // 0x4f1b5c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4f1b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4f1b60:
    // 0x4f1b60: 0x254adbe0  addiu       $t2, $t2, -0x2420
    ctx->pc = 0x4f1b60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958048));
label_4f1b64:
    // 0x4f1b64: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x4f1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4f1b68:
    // 0x4f1b68: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f1b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f1b6c:
    // 0x4f1b6c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f1b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f1b70:
    // 0x4f1b70: 0x40f809  jalr        $v0
label_4f1b74:
    if (ctx->pc == 0x4F1B74u) {
        ctx->pc = 0x4F1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1B70u;
        // 0x4f1b74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1B78u;
        goto label_4f1b78;
    }
    ctx->pc = 0x4F1B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1B78u);
        ctx->pc = 0x4F1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1B70u;
        // 0x4f1b74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1B70u, 0x4F1B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1B78u;
label_4f1b78:
    // 0x4f1b78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4f1b78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f1b7c:
    // 0x4f1b7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f1b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f1b80:
    // 0x4f1b80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4f1b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f1b84:
    // 0x4f1b84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4f1b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f1b88:
    // 0x4f1b88: 0xc13c69c  jal         func_4F1A70
label_4f1b8c:
    if (ctx->pc == 0x4F1B8Cu) {
        ctx->pc = 0x4F1B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1B88u;
        // 0x4f1b8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1B90u;
        goto label_4f1b90;
    }
    ctx->pc = 0x4F1B88u;
    SET_GPR_U32(ctx, 31, 0x4F1B90u);
    ctx->pc = 0x4F1B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1B88u;
    // 0x4f1b8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1A70u, 0x4F1B88u, 0x4F1B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1B90u;
label_4f1b90:
    // 0x4f1b90: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4f1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f1b94:
    // 0x4f1b94: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4f1b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f1b98:
    // 0x4f1b98: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4f1b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f1b9c:
    // 0x4f1b9c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4f1ba0:
    if (ctx->pc == 0x4F1BA0u) {
        ctx->pc = 0x4F1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1B9Cu;
        // 0x4f1ba0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1BA4u;
        goto label_4f1ba4;
    }
    ctx->pc = 0x4F1B9Cu;
    {
        const bool branch_taken_0x4f1b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1b9c) {
            ctx->pc = 0x4F1BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F1B9Cu;
            // 0x4f1ba0: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F1BC4u;
            goto label_4f1bc4;
        }
    }
    ctx->pc = 0x4F1BA4u;
label_4f1ba4:
    // 0x4f1ba4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4f1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_4f1ba8:
    // 0x4f1ba8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4f1ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f1bac:
    // 0x4f1bac: 0x0  nop
    ctx->pc = 0x4f1bacu;
    // NOP
label_4f1bb0:
    // 0x4f1bb0: 0x0  nop
    ctx->pc = 0x4f1bb0u;
    // NOP
label_4f1bb4:
    // 0x4f1bb4: 0x0  nop
    ctx->pc = 0x4f1bb4u;
    // NOP
label_4f1bb8:
    // 0x4f1bb8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_4f1bbc:
    if (ctx->pc == 0x4F1BBCu) {
        ctx->pc = 0x4F1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1BB8u;
        // 0x4f1bbc: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1BC0u;
        goto label_4f1bc0;
    }
    ctx->pc = 0x4F1BB8u;
    {
        const bool branch_taken_0x4f1bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1BB8u;
        // 0x4f1bbc: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1bb8) {
            ctx->pc = 0x4F1BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1ba8;
        }
    }
    ctx->pc = 0x4F1BC0u;
label_4f1bc0:
    // 0x4f1bc0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4f1bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f1bc4:
    // 0x4f1bc4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4f1bc8:
    if (ctx->pc == 0x4F1BC8u) {
        ctx->pc = 0x4F1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1BC4u;
        // 0x4f1bc8: 0x8e28b9c0  lw          $t0, -0x4640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1BCCu;
        goto label_4f1bcc;
    }
    ctx->pc = 0x4F1BC4u;
    {
        const bool branch_taken_0x4f1bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1BC4u;
        // 0x4f1bc8: 0x8e28b9c0  lw          $t0, -0x4640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1bc4) {
            ctx->pc = 0x4F1BE8u;
            goto label_4f1be8;
        }
    }
    ctx->pc = 0x4F1BCCu;
label_4f1bcc:
    // 0x4f1bcc: 0x26068fd8  addiu       $a2, $s0, -0x7028
    ctx->pc = 0x4f1bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938584));
label_4f1bd0:
    // 0x4f1bd0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f1bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f1bd4:
    // 0x4f1bd4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f1bd8:
    // 0x4f1bd8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f1bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f1bdc:
    // 0x4f1bdc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f1be0:
    // 0x4f1be0: 0x60f809  jalr        $v1
label_4f1be4:
    if (ctx->pc == 0x4F1BE4u) {
        ctx->pc = 0x4F1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1BE0u;
        // 0x4f1be4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1BE8u;
        goto label_4f1be8;
    }
    ctx->pc = 0x4F1BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F1BE8u);
        ctx->pc = 0x4F1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1BE0u;
        // 0x4f1be4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1BE0u, 0x4F1BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1BE8u;
label_4f1be8:
    // 0x4f1be8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x4f1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4f1bec:
    // 0x4f1bec: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x4f1becu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
label_4f1bf0:
    // 0x4f1bf0: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x4f1bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4f1bf4:
    // 0x4f1bf4: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x4f1bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_4f1bf8:
    // 0x4f1bf8: 0x10000051  b           . + 4 + (0x51 << 2)
label_4f1bfc:
    if (ctx->pc == 0x4F1BFCu) {
        ctx->pc = 0x4F1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1BF8u;
        // 0x4f1bfc: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1C00u;
        goto label_4f1c00;
    }
    ctx->pc = 0x4F1BF8u;
    {
        const bool branch_taken_0x4f1bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1BF8u;
        // 0x4f1bfc: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1bf8) {
            ctx->pc = 0x4F1D40u;
            goto label_4f1d40;
        }
    }
    ctx->pc = 0x4F1C00u;
label_4f1c00:
    // 0x4f1c00: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4f1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f1c04:
    // 0x4f1c04: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x4f1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_4f1c08:
    // 0x4f1c08: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x4f1c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4f1c0c:
    // 0x4f1c0c: 0x238c3  sra         $a3, $v0, 3
    ctx->pc = 0x4f1c0cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 3));
label_4f1c10:
    // 0x4f1c10: 0xf5182b  sltu        $v1, $a3, $s5
    ctx->pc = 0x4f1c10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_4f1c14:
    // 0x4f1c14: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_4f1c18:
    if (ctx->pc == 0x4F1C18u) {
        ctx->pc = 0x4F1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C14u;
        // 0x4f1c18: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1C1Cu;
        goto label_4f1c1c;
    }
    ctx->pc = 0x4F1C14u;
    {
        const bool branch_taken_0x4f1c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C14u;
        // 0x4f1c18: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1c14) {
            ctx->pc = 0x4F1CA8u;
            goto label_4f1ca8;
        }
    }
    ctx->pc = 0x4F1C1Cu;
label_4f1c1c:
    // 0x4f1c1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f1c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f1c20:
    // 0x4f1c20: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x4f1c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4f1c24:
    // 0x4f1c24: 0x1aa00012  blez        $s5, . + 4 + (0x12 << 2)
label_4f1c28:
    if (ctx->pc == 0x4F1C28u) {
        ctx->pc = 0x4F1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C24u;
        // 0x4f1c28: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1C2Cu;
        goto label_4f1c2c;
    }
    ctx->pc = 0x4F1C24u;
    {
        const bool branch_taken_0x4f1c24 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x4F1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C24u;
        // 0x4f1c28: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1c24) {
            ctx->pc = 0x4F1C70u;
            goto label_4f1c70;
        }
    }
    ctx->pc = 0x4F1C2Cu;
label_4f1c2c:
    // 0x4f1c2c: 0x0  nop
    ctx->pc = 0x4f1c2cu;
    // NOP
label_4f1c30:
    // 0x4f1c30: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x4f1c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4f1c34:
    // 0x4f1c34: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x4f1c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4f1c38:
    // 0x4f1c38: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x4f1c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4f1c3c:
    // 0x4f1c3c: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x4f1c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4f1c40:
    // 0x4f1c40: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x4f1c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4f1c44:
    // 0x4f1c44: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x4f1c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4f1c48:
    // 0x4f1c48: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x4f1c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1c4c:
    // 0x4f1c4c: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x4f1c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1c50:
    // 0x4f1c50: 0xb046000f  sdl         $a2, 0xF($v0)
    ctx->pc = 0x4f1c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1c54:
    // 0x4f1c54: 0xb4460008  sdr         $a2, 0x8($v0)
    ctx->pc = 0x4f1c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1c58:
    // 0x4f1c58: 0xb0470017  sdl         $a3, 0x17($v0)
    ctx->pc = 0x4f1c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1c5c:
    // 0x4f1c5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4f1c60:
    // 0x4f1c60: 0xb4470010  sdr         $a3, 0x10($v0)
    ctx->pc = 0x4f1c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1c64:
    // 0x4f1c64: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x4f1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_4f1c68:
    // 0x4f1c68: 0x1c60fff1  bgtz        $v1, . + 4 + (-0xF << 2)
label_4f1c6c:
    if (ctx->pc == 0x4F1C6Cu) {
        ctx->pc = 0x4F1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C68u;
        // 0x4f1c6c: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1C70u;
        goto label_4f1c70;
    }
    ctx->pc = 0x4F1C68u;
    {
        const bool branch_taken_0x4f1c68 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x4F1C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C68u;
        // 0x4f1c6c: 0x24420018  addiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1c68) {
            ctx->pc = 0x4F1C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1c30;
        }
    }
    ctx->pc = 0x4F1C70u;
label_4f1c70:
    // 0x4f1c70: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4f1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f1c74:
    // 0x4f1c74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4f1c74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f1c78:
    // 0x4f1c78: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4f1c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f1c7c:
    // 0x4f1c7c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_4f1c80:
    if (ctx->pc == 0x4F1C80u) {
        ctx->pc = 0x4F1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C7Cu;
        // 0x4f1c80: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1C84u;
        goto label_4f1c84;
    }
    ctx->pc = 0x4F1C7Cu;
    {
        const bool branch_taken_0x4f1c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C7Cu;
        // 0x4f1c80: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1c7c) {
            ctx->pc = 0x4F1D44u;
            goto label_4f1d44;
        }
    }
    ctx->pc = 0x4F1C84u;
label_4f1c84:
    // 0x4f1c84: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4f1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_4f1c88:
    // 0x4f1c88: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x4f1c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4f1c8c:
    // 0x4f1c8c: 0x0  nop
    ctx->pc = 0x4f1c8cu;
    // NOP
label_4f1c90:
    // 0x4f1c90: 0x0  nop
    ctx->pc = 0x4f1c90u;
    // NOP
label_4f1c94:
    // 0x4f1c94: 0x0  nop
    ctx->pc = 0x4f1c94u;
    // NOP
label_4f1c98:
    // 0x4f1c98: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_4f1c9c:
    if (ctx->pc == 0x4F1C9Cu) {
        ctx->pc = 0x4F1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C98u;
        // 0x4f1c9c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1CA0u;
        goto label_4f1ca0;
    }
    ctx->pc = 0x4F1C98u;
    {
        const bool branch_taken_0x4f1c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F1C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1C98u;
        // 0x4f1c9c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1c98) {
            ctx->pc = 0x4F1C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1c88;
        }
    }
    ctx->pc = 0x4F1CA0u;
label_4f1ca0:
    // 0x4f1ca0: 0x10000028  b           . + 4 + (0x28 << 2)
label_4f1ca4:
    if (ctx->pc == 0x4F1CA4u) {
        ctx->pc = 0x4F1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1CA0u;
        // 0x4f1ca4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1CA8u;
        goto label_4f1ca8;
    }
    ctx->pc = 0x4F1CA0u;
    {
        const bool branch_taken_0x4f1ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1CA0u;
        // 0x4f1ca4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1ca0) {
            ctx->pc = 0x4F1D44u;
            goto label_4f1d44;
        }
    }
    ctx->pc = 0x4F1CA8u;
label_4f1ca8:
    // 0x4f1ca8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4f1ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f1cac:
    // 0x4f1cac: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x4f1cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4f1cb0:
    // 0x4f1cb0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x4f1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_4f1cb4:
    // 0x4f1cb4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4f1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4f1cb8:
    // 0x4f1cb8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x4f1cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4f1cbc:
    // 0x4f1cbc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x4f1cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_4f1cc0:
    // 0x4f1cc0: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_4f1cc4:
    if (ctx->pc == 0x4F1CC4u) {
        ctx->pc = 0x4F1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1CC0u;
        // 0x4f1cc4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1CC8u;
        goto label_4f1cc8;
    }
    ctx->pc = 0x4F1CC0u;
    {
        const bool branch_taken_0x4f1cc0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1CC0u;
        // 0x4f1cc4: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1cc0) {
            ctx->pc = 0x4F1D08u;
            goto label_4f1d08;
        }
    }
    ctx->pc = 0x4F1CC8u;
label_4f1cc8:
    // 0x4f1cc8: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x4f1cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4f1ccc:
    // 0x4f1ccc: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x4f1cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4f1cd0:
    // 0x4f1cd0: 0x68c8000f  ldl         $t0, 0xF($a2)
    ctx->pc = 0x4f1cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_4f1cd4:
    // 0x4f1cd4: 0x6cc80008  ldr         $t0, 0x8($a2)
    ctx->pc = 0x4f1cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4f1cd8:
    // 0x4f1cd8: 0x68c90017  ldl         $t1, 0x17($a2)
    ctx->pc = 0x4f1cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_4f1cdc:
    // 0x4f1cdc: 0x6cc90010  ldr         $t1, 0x10($a2)
    ctx->pc = 0x4f1cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_4f1ce0:
    // 0x4f1ce0: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x4f1ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1ce4:
    // 0x4f1ce4: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x4f1ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1ce8:
    // 0x4f1ce8: 0xb0e8000f  sdl         $t0, 0xF($a3)
    ctx->pc = 0x4f1ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1cec:
    // 0x4f1cec: 0xb4e80008  sdr         $t0, 0x8($a3)
    ctx->pc = 0x4f1cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1cf0:
    // 0x4f1cf0: 0xb0e90017  sdl         $t1, 0x17($a3)
    ctx->pc = 0x4f1cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1cf4:
    // 0x4f1cf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f1cf8:
    // 0x4f1cf8: 0xb4e90010  sdr         $t1, 0x10($a3)
    ctx->pc = 0x4f1cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4f1cfc:
    // 0x4f1cfc: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x4f1cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_4f1d00:
    // 0x4f1d00: 0x1c40fff1  bgtz        $v0, . + 4 + (-0xF << 2)
label_4f1d04:
    if (ctx->pc == 0x4F1D04u) {
        ctx->pc = 0x4F1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1D00u;
        // 0x4f1d04: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1D08u;
        goto label_4f1d08;
    }
    ctx->pc = 0x4F1D00u;
    {
        const bool branch_taken_0x4f1d00 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4F1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1D00u;
        // 0x4f1d04: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1d00) {
            ctx->pc = 0x4F1CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f1cc8;
        }
    }
    ctx->pc = 0x4F1D08u;
label_4f1d08:
    // 0x4f1d08: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x4f1d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f1d0c:
    // 0x4f1d0c: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x4f1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
label_4f1d10:
    // 0x4f1d10: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4f1d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f1d14:
    // 0x4f1d14: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4f1d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4f1d18:
    // 0x4f1d18: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x4f1d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4f1d1c:
    // 0x4f1d1c: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x4f1d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4f1d20:
    // 0x4f1d20: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x4f1d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4f1d24:
    // 0x4f1d24: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x4f1d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4f1d28:
    // 0x4f1d28: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x4f1d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f1d2c:
    // 0x4f1d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4f1d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f1d30:
    // 0x4f1d30: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x4f1d30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_4f1d34:
    // 0x4f1d34: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x4f1d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4f1d38:
    // 0x4f1d38: 0xc13c69c  jal         func_4F1A70
label_4f1d3c:
    if (ctx->pc == 0x4F1D3Cu) {
        ctx->pc = 0x4F1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1D38u;
        // 0x4f1d3c: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1D40u;
        goto label_4f1d40;
    }
    ctx->pc = 0x4F1D38u;
    SET_GPR_U32(ctx, 31, 0x4F1D40u);
    ctx->pc = 0x4F1D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F1D38u;
    // 0x4f1d3c: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1A70u, 0x4F1D38u, 0x4F1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1D40u;
label_4f1d40:
    // 0x4f1d40: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x4f1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4f1d44:
    // 0x4f1d44: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4f1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f1d48:
    // 0x4f1d48: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x4f1d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4f1d4c:
    // 0x4f1d4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f1d50:
    // 0x4f1d50: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4f1d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4f1d54:
    // 0x4f1d54: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4f1d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f1d58:
    // 0x4f1d58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4f1d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f1d5c:
    // 0x4f1d5c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4f1d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f1d60:
    // 0x4f1d60: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4f1d60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f1d64:
    // 0x4f1d64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f1d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f1d68:
    // 0x4f1d68: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4f1d68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f1d6c:
    // 0x4f1d6c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4f1d6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1d70:
    // 0x4f1d70: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4f1d70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f1d74:
    // 0x4f1d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f1d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1d78:
    // 0x4f1d78: 0x3e00008  jr          $ra
label_4f1d7c:
    if (ctx->pc == 0x4F1D7Cu) {
        ctx->pc = 0x4F1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1D78u;
        // 0x4f1d7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1D80u;
        goto label_fallthrough_0x4f1d78;
    }
    ctx->pc = 0x4F1D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1D78u;
        // 0x4f1d7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f1d78:
    ctx->pc = 0x4F1D80u;
}
